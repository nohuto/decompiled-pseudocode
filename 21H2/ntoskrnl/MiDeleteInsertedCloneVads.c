/*
 * XREFs of MiDeleteInsertedCloneVads @ 0x1408D9514
 * Callers:
 *     MiCloneProcessAddressSpace @ 0x1408D91C0 (MiCloneProcessAddressSpace.c)
 * Callees:
 *     MiDeleteCloneZombies @ 0x140247A3C (MiDeleteCloneZombies.c)
 *     MiReferenceVad @ 0x14027C900 (MiReferenceVad.c)
 *     KiStackAttachProcess @ 0x14027D850 (KiStackAttachProcess.c)
 *     KiUnstackDetachProcess @ 0x1402AB900 (KiUnstackDetachProcess.c)
 *     MiDeleteVad @ 0x1402C08F0 (MiDeleteVad.c)
 *     MiLockVad @ 0x1403214A8 (MiLockVad.c)
 *     __security_check_cookie @ 0x1403D05D0 (__security_check_cookie.c)
 *     MiDeleteCloneDescriptor @ 0x14055A234 (MiDeleteCloneDescriptor.c)
 */

__int64 __fastcall MiDeleteInsertedCloneVads(__int64 a1)
{
  struct _KTHREAD *CurrentThread; // rbp
  _QWORD *v3; // rax
  _QWORD *i; // rbx
  _QWORD **v5; // rax
  _DWORD *v6; // rsi
  _QWORD *v7; // rcx
  _QWORD *v8; // rcx
  _QWORD *j; // rax
  _QWORD **v10; // rax
  _QWORD *v11; // rcx
  _QWORD *v12; // rcx
  _OWORD v14[3]; // [rsp+20h] [rbp-48h] BYREF

  memset(v14, 0, sizeof(v14));
  CurrentThread = KeGetCurrentThread();
  KiStackAttachProcess((_KPROCESS *)a1, 0, (__int64)v14);
  *(_BYTE *)(*(_QWORD *)(a1 + 1680) + 353LL) |= 1u;
  v3 = *(_QWORD **)(a1 + 2008);
  i = 0LL;
  while ( v3 )
  {
    i = v3;
    v3 = (_QWORD *)*v3;
  }
  while ( i )
  {
    v5 = (_QWORD **)i[1];
    v6 = i;
    v7 = i;
    if ( v5 )
    {
      v8 = *v5;
      for ( i = (_QWORD *)i[1]; v8; v8 = (_QWORD *)*v8 )
        i = v8;
    }
    else
    {
      while ( 1 )
      {
        i = (_QWORD *)(i[2] & 0xFFFFFFFFFFFFFFFCuLL);
        if ( !i || (_QWORD *)*i == v7 )
          break;
        v7 = i;
      }
    }
    MiLockVad((__int64)CurrentThread, (__int64)v6);
    MiReferenceVad((__int64)v6);
    MiDeleteVad(v6, 0LL, 0);
  }
  for ( j = *(_QWORD **)(a1 + 1264); j; j = (_QWORD *)*j )
    i = j;
  while ( i )
  {
    i[6] = 0LL;
    MiDeleteCloneDescriptor((struct _KPROCESS *)a1, (__int64)i);
    v10 = (_QWORD **)i[1];
    v11 = i;
    if ( v10 )
    {
      v12 = *v10;
      for ( i = (_QWORD *)i[1]; v12; v12 = (_QWORD *)*v12 )
        i = v12;
    }
    else
    {
      while ( 1 )
      {
        i = (_QWORD *)(i[2] & 0xFFFFFFFFFFFFFFFCuLL);
        if ( !i || (_QWORD *)*i == v11 )
          break;
        v11 = i;
      }
    }
  }
  MiDeleteCloneZombies(a1, 0LL);
  return KiUnstackDetachProcess((__int64)v14, 0LL);
}
