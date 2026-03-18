/*
 * XREFs of MiManageSubsectionView @ 0x140285FE0
 * Callers:
 *     MiRemoveFromSystemSpace @ 0x14026D048 (MiRemoveFromSystemSpace.c)
 *     MiInsertInSystemSpace @ 0x14026D460 (MiInsertInSystemSpace.c)
 *     MmMapViewInSystemCache @ 0x140285D90 (MmMapViewInSystemCache.c)
 *     MiSessionInsertImage @ 0x1402D9A54 (MiSessionInsertImage.c)
 *     MiPostInsertVad @ 0x1402ED750 (MiPostInsertVad.c)
 *     MmUnmapViewInSystemCache @ 0x140335870 (MmUnmapViewInSystemCache.c)
 *     MiReleaseSessionDriverCharges @ 0x1406EB5A4 (MiReleaseSessionDriverCharges.c)
 *     MiUnloadSystemImage @ 0x1406F4FB8 (MiUnloadSystemImage.c)
 *     MiConstructLoaderEntry @ 0x14075F4A4 (MiConstructLoaderEntry.c)
 *     MiDeleteVad @ 0x1407BC0B0 (MiDeleteVad.c)
 * Callees:
 *     KiAbThreadRemoveBoostsSlow @ 0x14022B568 (KiAbThreadRemoveBoostsSlow.c)
 *     MmGetSessionIdEx @ 0x140287F30 (MmGetSessionIdEx.c)
 *     ExAcquirePushLockExclusiveEx @ 0x1402AC910 (ExAcquirePushLockExclusiveEx.c)
 *     KiCheckForKernelApcDelivery @ 0x1402F1D50 (KiCheckForKernelApcDelivery.c)
 *     KiAbEntryRemoveFromTree @ 0x14034EE30 (KiAbEntryRemoveFromTree.c)
 *     ExfTryToWakePushLock @ 0x140359F40 (ExfTryToWakePushLock.c)
 *     KeBugCheckEx @ 0x14041F3D0 (KeBugCheckEx.c)
 */

__int64 __fastcall MiManageSubsectionView(__int64 *a1, _QWORD *a2, int a3)
{
  struct _KTHREAD *CurrentThread; // rax
  __int64 v5; // rsi
  ULONG_PTR v8; // rbp
  int v9; // edi
  int v10; // edi
  int v11; // edi
  __int64 v12; // rax
  _QWORD *v13; // rcx
  __int64 v14; // rcx
  _QWORD *v15; // rax
  struct _KTHREAD *v16; // rsi
  struct _KTHREAD *v17; // rdi
  __int64 SessionId; // rdx
  char *p_Process; // rbx
  __int64 v20; // r8
  unsigned int v21; // ecx
  __int64 result; // rax
  int v23; // r9d

  CurrentThread = KeGetCurrentThread();
  v5 = *a1;
  --CurrentThread->SpecialApcDisable;
  v8 = v5 + 104;
  ExAcquirePushLockExclusiveEx(v5 + 104, 0LL);
  v9 = a3 - 1;
  if ( !v9 )
  {
    v14 = a1[10];
    v15 = a1 + 10;
    if ( *(__int64 **)(v14 + 8) != a1 + 10 )
      goto LABEL_17;
    goto LABEL_11;
  }
  v10 = v9 - 1;
  if ( !v10 )
    goto LABEL_6;
  v11 = v10 - 1;
  if ( !v11 )
  {
    if ( (*(_DWORD *)(v5 + 56) & 0x400) != 0 )
      goto LABEL_12;
    v14 = *(_QWORD *)(v5 + 8);
    v15 = (_QWORD *)(v5 + 8);
    if ( *(_QWORD *)(v14 + 8) != v5 + 8 )
LABEL_17:
      __fastfail(3u);
LABEL_11:
    *a2 = v14;
    a2[1] = v15;
    *(_QWORD *)(v14 + 8) = a2;
    *v15 = a2;
    goto LABEL_12;
  }
  if ( v11 != 1 || (*(_DWORD *)(v5 + 56) & 0x400) != 0 )
    goto LABEL_12;
LABEL_6:
  v12 = *a2;
  if ( *(_QWORD **)(*a2 + 8LL) != a2 )
    goto LABEL_17;
  v13 = (_QWORD *)a2[1];
  if ( (_QWORD *)*v13 != a2 )
    goto LABEL_17;
  *v13 = v12;
  *(_QWORD *)(v12 + 8) = v13;
LABEL_12:
  v16 = KeGetCurrentThread();
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v8, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock(v8);
  v17 = KeGetCurrentThread();
  if ( v8 - qword_140C50630 >= 0x8000000000LL )
    SessionId = 0xFFFFFFFFLL;
  else
    SessionId = (unsigned int)MmGetSessionIdEx(v17->ApcState.Process);
  _disable();
  p_Process = (char *)&v17[1].Process;
  v20 = v8 & 0x7FFFFFFFFFFFFFFCLL;
  v21 = 0;
  while ( (*(_QWORD *)p_Process & 0x7FFFFFFFFFFFFFFCLL) != v20
       || !p_Process[18]
       || (*(_DWORD *)p_Process & 1) != 0
       || *((_DWORD *)p_Process + 2) != (_DWORD)SessionId )
  {
    ++v21;
    p_Process += 96;
    if ( v21 >= 6 )
    {
      result = *((unsigned int *)&v17->MiscFlags + 1);
      if ( (result & 0x10000) == 0 )
        KeBugCheckEx(0x162u, (ULONG_PTR)v17, v8, (unsigned int)SessionId, 0LL);
      _enable();
      goto LABEL_31;
    }
  }
  p_Process[18] = 0;
  if ( *(__int64 *)p_Process < 0 )
  {
    *p_Process |= 2u;
    _enable();
    KiAbEntryRemoveFromTree(p_Process, SessionId, v20);
    _disable();
  }
  v23 = *((_DWORD *)p_Process + 22);
  *((_DWORD *)p_Process + 22) = 0;
  p_Process[17] = 0;
  *(_QWORD *)p_Process = 0LL;
  result = (unsigned __int8)p_Process[16];
  v17->AbEntrySummary |= 1 << result;
  _enable();
  if ( v23 )
    result = KiAbThreadRemoveBoostsSlow((ULONG_PTR)v17, v8, v23);
LABEL_31:
  if ( v16->SpecialApcDisable++ == -1 )
  {
    result = (__int64)&v16->152;
    if ( *(_QWORD *)result != result )
      return KiCheckForKernelApcDelivery();
  }
  return result;
}
