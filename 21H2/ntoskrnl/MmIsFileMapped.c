/*
 * XREFs of MmIsFileMapped @ 0x1408D1020
 * Callers:
 *     IopQueryProcessIdsUsingFile @ 0x140895A08 (IopQueryProcessIdsUsingFile.c)
 * Callees:
 *     KiUnstackDetachProcess @ 0x140207000 (KiUnstackDetachProcess.c)
 *     MiUnlockVadShared @ 0x14025B10C (MiUnlockVadShared.c)
 *     LOCK_ADDRESS_SPACE_SHARED @ 0x14025B210 (LOCK_ADDRESS_SPACE_SHARED.c)
 *     MiVadDeleted @ 0x14025B330 (MiVadDeleted.c)
 *     MiLockVadShared @ 0x14025B344 (MiLockVadShared.c)
 *     KiStackAttachProcess @ 0x14025C2E0 (KiStackAttachProcess.c)
 *     MiReferenceControlAreaFile @ 0x14031CEB0 (MiReferenceControlAreaFile.c)
 *     UNLOCK_ADDRESS_SPACE_SHARED @ 0x140348790 (UNLOCK_ADDRESS_SPACE_SHARED.c)
 *     MiDereferenceControlAreaFile @ 0x1403571E4 (MiDereferenceControlAreaFile.c)
 *     __security_check_cookie @ 0x1403D0460 (__security_check_cookie.c)
 */

__int64 __fastcall MmIsFileMapped(_KPROCESS *a1, __int64 a2, __int64 a3, _DWORD *a4)
{
  __int64 v4; // r13
  unsigned int v5; // r15d
  __int64 v6; // rsi
  struct _KTHREAD *CurrentThread; // rbp
  int v8; // r12d
  _QWORD *v9; // rax
  _QWORD *i; // rbx
  _QWORD **v11; // rax
  __int64 v12; // rdi
  _QWORD *v13; // rcx
  _QWORD *v14; // rcx
  __int64 *v15; // rax
  __int64 v16; // r14
  ULONG_PTR v17; // rdx
  _OWORD v20[3]; // [rsp+28h] [rbp-70h] BYREF

  v4 = *(_QWORD *)(a2 + 40);
  memset(v20, 0, sizeof(v20));
  v5 = 0;
  v6 = (__int64)a1;
  CurrentThread = KeGetCurrentThread();
  if ( CurrentThread->ApcState.Process == a1 )
  {
    v8 = 0;
  }
  else
  {
    KiStackAttachProcess(a1, 0LL, (__int64)v20, a4);
    v8 = 1;
  }
  LOCK_ADDRESS_SPACE_SHARED((__int64)CurrentThread, v6);
  v9 = *(_QWORD **)(v6 + 2008);
  i = 0LL;
  while ( v9 )
  {
    i = v9;
    v9 = (_QWORD *)*v9;
  }
  if ( i )
  {
    do
    {
      v11 = (_QWORD **)i[1];
      v12 = (__int64)i;
      v13 = i;
      if ( v11 )
      {
        v14 = *v11;
        for ( i = (_QWORD *)i[1]; v14; v14 = (_QWORD *)*v14 )
          i = v14;
      }
      else
      {
        while ( 1 )
        {
          i = (_QWORD *)(i[2] & 0xFFFFFFFFFFFFFFFCuLL);
          if ( !i || (_QWORD *)*i == v13 )
            break;
          v13 = i;
        }
      }
      if ( (*(_DWORD *)(v12 + 48) & 0x100000) == 0 )
      {
        MiLockVadShared((__int64)CurrentThread, v12);
        if ( !(unsigned int)MiVadDeleted(v12) )
        {
          v15 = *(__int64 **)(v12 + 72);
          v16 = *v15;
          if ( *(_QWORD *)(*v15 + 64) )
          {
            v17 = MiReferenceControlAreaFile(*v15);
            if ( *(_QWORD *)(v17 + 40) == v4 )
              v5 = 1;
            MiDereferenceControlAreaFile(v16, v17);
          }
        }
        MiUnlockVadShared((__int64)CurrentThread, v12);
        if ( v5 == 1 )
          break;
      }
    }
    while ( i );
    v6 = (__int64)a1;
  }
  UNLOCK_ADDRESS_SPACE_SHARED((__int64)CurrentThread, v6);
  if ( v8 == 1 )
    KiUnstackDetachProcess((__int64)v20, 0);
  return v5;
}
