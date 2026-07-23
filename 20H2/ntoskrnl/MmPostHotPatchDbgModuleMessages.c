/*
 * XREFs of MmPostHotPatchDbgModuleMessages @ 0x1408D1240
 * Callers:
 *     DbgkpPostModuleMessages @ 0x140887D00 (DbgkpPostModuleMessages.c)
 * Callees:
 *     ExReleaseRundownProtection_0 @ 0x140210D20 (ExReleaseRundownProtection_0.c)
 *     ExAcquireRundownProtection_0 @ 0x1402111E0 (ExAcquireRundownProtection_0.c)
 *     KeAbPostRelease @ 0x14021ED30 (KeAbPostRelease.c)
 *     ExAcquirePushLockSharedEx @ 0x140220C00 (ExAcquirePushLockSharedEx.c)
 *     KiLeaveGuardedRegionUnsafe @ 0x140220E40 (KiLeaveGuardedRegionUnsafe.c)
 *     MiAllocatePool @ 0x14022D320 (MiAllocatePool.c)
 *     ExfReleasePushLockShared @ 0x140242A40 (ExfReleasePushLockShared.c)
 *     RtlImageNtHeader @ 0x140297240 (RtlImageNtHeader.c)
 *     DbgkPostModuleMessage @ 0x1404EC68C (DbgkPostModuleMessage.c)
 *     MiGetProcessHotPatchContext @ 0x1408CCA38 (MiGetProcessHotPatchContext.c)
 *     ExFreePoolWithTag @ 0x1409B70B0 (ExFreePoolWithTag.c)
 */

__int64 __fastcall MmPostHotPatchDbgModuleMessages(struct _EX_RUNDOWN_REF *a1, void *a2, struct _KEVENT *a3)
{
  int v4; // esi
  char *v5; // r13
  struct _KTHREAD *CurrentThread; // r14
  unsigned __int64 v7; // r15
  BOOLEAN v8; // al
  int v9; // r12d
  unsigned int v10; // edi
  _QWORD *ProcessHotPatchContext; // rax
  __int64 v12; // rdi
  __int64 v13; // rax
  _QWORD *v14; // rcx
  _QWORD *i; // rax
  _QWORD *v16; // rdx
  _QWORD **v17; // rax
  _QWORD *j; // rdx
  SIZE_T v19; // rdi
  char *Pool; // rax
  char *v21; // r14
  char *v22; // r12
  __int64 v23; // rax
  _QWORD *v24; // rdi
  __int64 **k; // rsi
  PIMAGE_NT_HEADERS v26; // rax
  _QWORD *v27; // rcx
  _QWORD **v28; // rax
  _QWORD *m; // rcx
  char *n; // rdi
  __int64 v32; // [rsp+50h] [rbp-68h]
  struct _EX_RUNDOWN_REF *RunRef; // [rsp+68h] [rbp-50h]
  int v37; // [rsp+D8h] [rbp+20h]

  v4 = 0;
  v5 = 0LL;
  CurrentThread = KeGetCurrentThread();
  v32 = (__int64)CurrentThread;
  v7 = 0LL;
  RunRef = a1 + 139;
  v8 = ExAcquireRundownProtection_0(a1 + 139);
  v9 = v8;
  v37 = v8;
  if ( !v8 )
  {
    v10 = -1073741558;
    goto LABEL_50;
  }
  ProcessHotPatchContext = MiGetProcessHotPatchContext((__int64)a1, 0);
  v7 = (unsigned __int64)ProcessHotPatchContext;
  if ( ProcessHotPatchContext )
  {
    v12 = 0LL;
    v4 = 1;
    --CurrentThread->SpecialApcDisable;
    ExAcquirePushLockSharedEx((ULONG_PTR)(ProcessHotPatchContext + 2), 0LL);
    v13 = *(_QWORD *)(v7 + 8);
    if ( (v13 & 1) != 0 )
      v14 = v13 == 1 ? 0LL : (_QWORD *)(v13 ^ (v7 | 1));
    else
      v14 = *(_QWORD **)(v7 + 8);
    while ( v14 )
    {
      for ( i = (_QWORD *)v14[7]; i; i = (_QWORD *)*i )
        ++v12;
      v16 = v14;
      v17 = (_QWORD **)v14[1];
      if ( v17 )
      {
        v14 = (_QWORD *)v14[1];
        for ( j = *v17; j; j = (_QWORD *)*j )
          v14 = j;
      }
      else
      {
        while ( 1 )
        {
          v14 = (_QWORD *)(v14[2] & 0xFFFFFFFFFFFFFFFCuLL);
          if ( !v14 || (_QWORD *)*v14 == v16 )
            break;
          v16 = v14;
        }
      }
    }
    if ( v12 )
    {
      v19 = 16 * v12;
      Pool = (char *)MiAllocatePool(256, v19, 0x64486D4Du);
      v5 = Pool;
      if ( !Pool )
      {
        v10 = -1073741670;
        goto LABEL_50;
      }
      v21 = Pool;
      v22 = &Pool[v19];
      v23 = *(_QWORD *)(v7 + 8);
      if ( (v23 & 1) != 0 )
      {
        if ( v23 == 1 )
          v24 = 0LL;
        else
          v24 = (_QWORD *)(v23 ^ (v7 | 1));
      }
      else
      {
        v24 = *(_QWORD **)(v7 + 8);
      }
      while ( v24 )
      {
        for ( k = (__int64 **)v24[7]; k; k = (__int64 **)*k )
        {
          *(_OWORD *)v21 = 0LL;
          *(_QWORD *)v21 = k[1];
          v26 = RtlImageNtHeader(k[1]);
          if ( v26 )
          {
            *((_DWORD *)v21 + 2) = v26->FileHeader.PointerToSymbolTable;
            *((_DWORD *)v21 + 3) = v26->FileHeader.NumberOfSymbols;
          }
          v21 += 16;
        }
        v27 = v24;
        v28 = (_QWORD **)v24[1];
        if ( v28 )
        {
          v24 = (_QWORD *)v24[1];
          for ( m = *v28; m; m = (_QWORD *)*m )
            v24 = m;
        }
        else
        {
          while ( 1 )
          {
            v24 = (_QWORD *)(v24[2] & 0xFFFFFFFFFFFFFFFCuLL);
            if ( !v24 || (_QWORD *)*v24 == v27 )
              break;
            v27 = v24;
          }
        }
      }
      if ( _InterlockedCompareExchange64((volatile signed __int64 *)(v7 + 16), 0LL, 17LL) != 17 )
        ExfReleasePushLockShared((signed __int64 *)(v7 + 16));
      KeAbPostRelease(v7 + 16);
      KiLeaveGuardedRegionUnsafe(v32);
      for ( n = v5; n < v22; n += 16 )
        DbgkPostModuleMessage(a1, a2, *(void **)n, *((_DWORD *)n + 2), *((_DWORD *)n + 3), a3);
      v4 = 0;
      CurrentThread = (struct _KTHREAD *)v32;
      v9 = v37;
    }
  }
  v10 = 0;
LABEL_50:
  if ( v4 )
  {
    if ( _InterlockedCompareExchange64((volatile signed __int64 *)(v7 + 16), 0LL, 17LL) != 17 )
      ExfReleasePushLockShared((signed __int64 *)(v7 + 16));
    KeAbPostRelease(v7 + 16);
    KiLeaveGuardedRegionUnsafe((__int64)CurrentThread);
  }
  if ( v9 )
    ExReleaseRundownProtection_0(RunRef);
  if ( v5 )
    ExFreePoolWithTag(v5, 0);
  return v10;
}
