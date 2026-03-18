/*
 * XREFs of ExInitializeDeviceAts @ 0x14063E8C0
 * Callers:
 *     <none>
 * Callees:
 *     KiAbThreadRemoveBoostsSlow @ 0x14022B568 (KiAbThreadRemoveBoostsSlow.c)
 *     MmGetSessionIdEx @ 0x140287F30 (MmGetSessionIdEx.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14029F120 (ExfAcquirePushLockExclusiveEx.c)
 *     KiAbTryReclaimOrphanedEntries @ 0x14029F6A8 (KiAbTryReclaimOrphanedEntries.c)
 *     KiAbEntryRemoveFromTree @ 0x14034EE30 (KiAbEntryRemoveFromTree.c)
 *     ExfTryToWakePushLock @ 0x140359F40 (ExfTryToWakePushLock.c)
 *     KeBugCheckEx @ 0x14041F3D0 (KeBugCheckEx.c)
 *     _guard_dispatch_icall @ 0x14042A5E0 (_guard_dispatch_icall.c)
 *     memset @ 0x140435E00 (memset.c)
 *     ExpPrepareNewAtsDevice @ 0x14063EF78 (ExpPrepareNewAtsDevice.c)
 *     IoQueryInterface @ 0x140846710 (IoQueryInterface.c)
 */

__int64 __fastcall ExInitializeDeviceAts(ULONG_PTR BugCheckParameter1, char a2)
{
  char v4; // r13
  int Interface; // r14d
  unsigned __int64 v7; // rdx
  __int64 v8; // r8
  struct _KTHREAD *CurrentThread; // rsi
  __int64 v10; // rdi
  unsigned int AbEntrySummary; // eax
  unsigned int v12; // r15d
  __int64 v13; // rdx
  __int64 v14; // rdx
  int SessionId; // eax
  __int64 *v16; // rax
  __int64 *v17; // rcx
  struct _KTHREAD *v18; // rdi
  __int64 p_Process; // rbx
  unsigned int v20; // ecx
  unsigned int v21; // r9d
  __int128 v22; // [rsp+40h] [rbp-69h] BYREF
  __int128 v23; // [rsp+50h] [rbp-59h]
  __int128 v24; // [rsp+60h] [rbp-49h]
  _QWORD v25[18]; // [rsp+70h] [rbp-39h] BYREF
  __int64 *v26; // [rsp+120h] [rbp+77h] BYREF

  v22 = 0LL;
  v23 = 0LL;
  v24 = 0LL;
  memset(v25, 0, 0x58uLL);
  v26 = 0LL;
  v4 = 0;
  if ( !BugCheckParameter1 )
    return 3221225485LL;
  Interface = IoQueryInterface(BugCheckParameter1, 0, (int)&GUID_IOMMU_BUS_INTERFACE, 88, 1, BugCheckParameter1, v25);
  if ( Interface >= 0 )
  {
    Interface = IoQueryInterface(BugCheckParameter1, 0, (int)&GUID_PCI_ATS_INTERFACE, 48, 1, BugCheckParameter1, &v22);
    if ( Interface < 0 )
    {
LABEL_43:
      ((void (__fastcall *)(_QWORD, unsigned __int64, __int64))v25[3])(v25[1], v7, v8);
      if ( v4 )
        (*((void (__fastcall **)(_QWORD))&v23 + 1))(*((_QWORD *)&v22 + 1));
      return (unsigned int)Interface;
    }
    v4 = 1;
    CurrentThread = KeGetCurrentThread();
    v10 = 0LL;
    _disable();
    AbEntrySummary = CurrentThread->AbEntrySummary;
    v12 = -1;
    if ( CurrentThread->AbEntrySummary
      || (AbEntrySummary = KiAbTryReclaimOrphanedEntries((__int64)&ExpAtsSvmDeviceListLock, (__int64)CurrentThread)) != 0 )
    {
      _BitScanForward((unsigned int *)&v14, AbEntrySummary);
      CurrentThread->AbEntrySummary = AbEntrySummary & ~(1 << v14);
      _enable();
      v13 = 96 * v14;
      v10 = (__int64)&CurrentThread[1].Process + v13;
      if ( (unsigned __int64)&ExpAtsSvmDeviceListLock - qword_140C50630 >= 0x8000000000LL )
        SessionId = -1;
      else
        SessionId = MmGetSessionIdEx((__int64)CurrentThread->ApcState.Process);
      *(_DWORD *)(v10 + 8) = SessionId;
      *(_QWORD *)v10 = (unsigned __int64)&ExpAtsSvmDeviceListLock & 0x7FFFFFFFFFFFFFFCLL;
    }
    if ( _interlockedbittestandset64((volatile signed __int32 *)&ExpAtsSvmDeviceListLock, 0LL) )
      ExfAcquirePushLockExclusiveEx(&ExpAtsSvmDeviceListLock, v10, (__int64)&ExpAtsSvmDeviceListLock);
    if ( v10 )
      *(_BYTE *)(v10 + 18) = 1;
    v16 = (__int64 *)ExpAtsSvmDevices;
    if ( (__int64 *)ExpAtsSvmDevices != &ExpAtsSvmDevices )
    {
      do
      {
        v13 = (__int64)v16;
        v17 = v16;
        v26 = v16;
        if ( v16[3] == BugCheckParameter1 )
          break;
        v16 = (__int64 *)*v16;
      }
      while ( v16 != &ExpAtsSvmDevices );
      if ( v17[3] == BugCheckParameter1 )
      {
        if ( v13 )
        {
          if ( *((_DWORD *)v17 + 9) )
            KeBugCheckEx(0x1E9u, BugCheckParameter1, 0LL, 0LL, 0LL);
          ++*((_DWORD *)v17 + 8);
LABEL_21:
          if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&ExpAtsSvmDeviceListLock, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
            ExfTryToWakePushLock(&ExpAtsSvmDeviceListLock);
          v18 = KeGetCurrentThread();
          if ( (unsigned __int64)&ExpAtsSvmDeviceListLock - qword_140C50630 < 0x8000000000LL )
            v12 = MmGetSessionIdEx((__int64)v18->ApcState.Process);
          _disable();
          p_Process = (__int64)&v18[1].Process;
          v8 = 0x7FFFFFFFFFFFFFFCLL;
          v20 = 0;
          v7 = (unsigned __int64)&ExpAtsSvmDeviceListLock & 0x7FFFFFFFFFFFFFFCLL;
          while ( (*(_QWORD *)p_Process & 0x7FFFFFFFFFFFFFFCLL) != v7
               || !*(_BYTE *)(p_Process + 18)
               || (*(_DWORD *)p_Process & 1) != 0
               || *(_DWORD *)(p_Process + 8) != v12 )
          {
            ++v20;
            p_Process += 96LL;
            if ( v20 >= 6 )
              goto LABEL_31;
          }
          *(_BYTE *)(p_Process + 18) = 0;
          if ( !p_Process )
          {
LABEL_31:
            if ( (*((_DWORD *)&v18->0 + 1) & 0x10000) == 0 )
              KeBugCheckEx(0x162u, (ULONG_PTR)v18, (ULONG_PTR)&ExpAtsSvmDeviceListLock, v12, 0LL);
            _enable();
            goto LABEL_43;
          }
          if ( *(__int64 *)p_Process < 0 )
          {
            *(_BYTE *)p_Process |= 2u;
            _enable();
            KiAbEntryRemoveFromTree(p_Process);
            _disable();
          }
          v21 = *(_DWORD *)(p_Process + 88);
          *(_DWORD *)(p_Process + 88) = 0;
          *(_BYTE *)(p_Process + 17) = 0;
          *(_QWORD *)p_Process = 0LL;
          v18->AbEntrySummary |= 1 << *(_BYTE *)(p_Process + 16);
          _enable();
          v8 = v21;
          if ( v21 )
            KiAbThreadRemoveBoostsSlow((ULONG_PTR)v18, (__int64)&ExpAtsSvmDeviceListLock, v21);
          goto LABEL_43;
        }
      }
      else
      {
        v26 = 0LL;
      }
    }
    LOBYTE(v13) = a2;
    Interface = ExpPrepareNewAtsDevice(BugCheckParameter1, v13, (unsigned int)v25, (unsigned int)&v22, (__int64)&v26);
    goto LABEL_21;
  }
  return (unsigned int)Interface;
}
