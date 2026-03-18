/*
 * XREFs of ExpSvmDereferenceDevice @ 0x140641354
 * Callers:
 *     ExFreeSvmAsid @ 0x140251BDC (ExFreeSvmAsid.c)
 *     ExShareAddressSpaceWithDevice @ 0x14063F7C0 (ExShareAddressSpaceWithDevice.c)
 * Callees:
 *     KiAbThreadRemoveBoostsSlow @ 0x14022B568 (KiAbThreadRemoveBoostsSlow.c)
 *     MmGetSessionIdEx @ 0x140287F30 (MmGetSessionIdEx.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14029F120 (ExfAcquirePushLockExclusiveEx.c)
 *     KiAbTryReclaimOrphanedEntries @ 0x14029F6A8 (KiAbTryReclaimOrphanedEntries.c)
 *     KiCheckForKernelApcDelivery @ 0x1402F1D50 (KiCheckForKernelApcDelivery.c)
 *     KiAbEntryRemoveFromTree @ 0x14034EE30 (KiAbEntryRemoveFromTree.c)
 *     ExfTryToWakePushLock @ 0x140359F40 (ExfTryToWakePushLock.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     KeBugCheckEx @ 0x14041F3D0 (KeBugCheckEx.c)
 *     _guard_dispatch_icall @ 0x14042A5E0 (_guard_dispatch_icall.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 */

__int64 __fastcall ExpSvmDereferenceDevice(_DWORD *P, __int64 a2)
{
  unsigned int v2; // r13d
  struct _KTHREAD *CurrentThread; // r14
  struct _KTHREAD *v6; // rbp
  __int64 v7; // rsi
  unsigned int AbEntrySummary; // eax
  unsigned int v9; // r15d
  __int64 v10; // rcx
  int SessionId; // eax
  int v12; // ecx
  int v13; // edx
  int v14; // eax
  _QWORD *v15; // rax
  PVOID *v16; // rdx
  struct _KTHREAD *v17; // rdi
  __int64 p_Process; // rbx
  unsigned int v19; // ecx
  int v20; // r9d
  bool v21; // zf
  __int64 v23; // [rsp+38h] [rbp-50h] BYREF
  int v24; // [rsp+40h] [rbp-48h]

  v2 = 0;
  v23 = 0LL;
  v24 = 0;
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->SpecialApcDisable;
  v6 = KeGetCurrentThread();
  v7 = 0LL;
  _disable();
  AbEntrySummary = v6->AbEntrySummary;
  v9 = -1;
  if ( v6->AbEntrySummary
    || (AbEntrySummary = KiAbTryReclaimOrphanedEntries((__int64)&ExpAtsSvmDeviceListLock, (__int64)v6)) != 0 )
  {
    _BitScanForward((unsigned int *)&v10, AbEntrySummary);
    v6->AbEntrySummary = AbEntrySummary & ~(1 << v10);
    _enable();
    v7 = (__int64)(&v6[1].Process + 12 * v10);
    if ( (unsigned __int64)&ExpAtsSvmDeviceListLock - qword_140C50630 >= 0x8000000000LL )
      SessionId = -1;
    else
      SessionId = MmGetSessionIdEx((__int64)v6->ApcState.Process);
    *(_DWORD *)(v7 + 8) = SessionId;
    *(_QWORD *)v7 = (unsigned __int64)&ExpAtsSvmDeviceListLock & 0x7FFFFFFFFFFFFFFCLL;
  }
  if ( _interlockedbittestandset64((volatile signed __int32 *)&ExpAtsSvmDeviceListLock, 0LL) )
    ExfAcquirePushLockExclusiveEx(&ExpAtsSvmDeviceListLock, v7, (__int64)&ExpAtsSvmDeviceListLock);
  if ( v7 )
    *(_BYTE *)(v7 + 18) = 1;
  v12 = P[8] - 1;
  v13 = P[9] - 1;
  P[8] = v12;
  P[9] = v13;
  if ( !v13 || !v12 )
  {
    v14 = v23;
    if ( !v12 )
      v14 = 1;
    LODWORD(v23) = v14;
    if ( !v13 )
      LODWORD(v23) = v14 | 6;
    v2 = (*((__int64 (__fastcall **)(_QWORD, __int64 *, __int64))P + 11))(*((_QWORD *)P + 6), &v23, 1LL);
    if ( !P[9] )
    {
      v2 = (*(__int64 (__fastcall **)(__int64, _QWORD))(HalIommuDispatch + 56))(a2, *((_QWORD *)P + 23));
      _InterlockedAdd(&ExTbFlushActive, 0xFFFFFFFF);
      *((_BYTE *)P + 16) = 1;
    }
    if ( !P[8] )
    {
      v15 = *(_QWORD **)P;
      if ( *(_DWORD **)(*(_QWORD *)P + 8LL) != P || (v16 = (PVOID *)*((_QWORD *)P + 1), *v16 != P) )
        __fastfail(3u);
      *v16 = v15;
      v15[1] = v16;
      (*((void (__fastcall **)(_QWORD))P + 8))(*((_QWORD *)P + 6));
      ExFreePoolWithTag(P, 0);
    }
  }
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&ExpAtsSvmDeviceListLock, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock(&ExpAtsSvmDeviceListLock);
  v17 = KeGetCurrentThread();
  if ( (unsigned __int64)&ExpAtsSvmDeviceListLock - qword_140C50630 < 0x8000000000LL )
    v9 = MmGetSessionIdEx((__int64)v17->ApcState.Process);
  _disable();
  p_Process = (__int64)&v17[1].Process;
  v19 = 0;
  while ( (*(_QWORD *)p_Process & 0x7FFFFFFFFFFFFFFCLL) != ((unsigned __int64)&ExpAtsSvmDeviceListLock & 0x7FFFFFFFFFFFFFFCLL)
       || !*(_BYTE *)(p_Process + 18)
       || (*(_DWORD *)p_Process & 1) != 0
       || *(_DWORD *)(p_Process + 8) != v9 )
  {
    ++v19;
    p_Process += 96LL;
    if ( v19 >= 6 )
      goto LABEL_34;
  }
  *(_BYTE *)(p_Process + 18) = 0;
  if ( !p_Process )
  {
LABEL_34:
    if ( (*((_DWORD *)&v17->0 + 1) & 0x10000) == 0 )
      KeBugCheckEx(0x162u, (ULONG_PTR)v17, (ULONG_PTR)&ExpAtsSvmDeviceListLock, v9, 0LL);
    _enable();
    goto LABEL_42;
  }
  if ( *(__int64 *)p_Process < 0 )
  {
    *(_BYTE *)p_Process |= 2u;
    _enable();
    KiAbEntryRemoveFromTree(p_Process);
    _disable();
  }
  v20 = *(_DWORD *)(p_Process + 88);
  *(_DWORD *)(p_Process + 88) = 0;
  *(_BYTE *)(p_Process + 17) = 0;
  *(_QWORD *)p_Process = 0LL;
  v17->AbEntrySummary |= 1 << *(_BYTE *)(p_Process + 16);
  _enable();
  if ( v20 )
    KiAbThreadRemoveBoostsSlow((ULONG_PTR)v17, (__int64)&ExpAtsSvmDeviceListLock, v20);
LABEL_42:
  v21 = CurrentThread->SpecialApcDisable++ == -1;
  if ( v21 && ($CEA84C04E3712D858E5667A507841A2A *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152 )
    KiCheckForKernelApcDelivery();
  return v2;
}
