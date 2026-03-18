/*
 * XREFs of PipKsrNotifyDrivers @ 0x1408AEB58
 * Callers:
 *     PipKsrCallback @ 0x1408AEAE0 (PipKsrCallback.c)
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x1402486B0 (KeLeaveCriticalRegionThread.c)
 *     ExAcquireFastMutex @ 0x1402600D0 (ExAcquireFastMutex.c)
 *     ExReleaseResourceLite @ 0x140261460 (ExReleaseResourceLite.c)
 *     ExAcquireResourceExclusiveLite @ 0x140261C10 (ExAcquireResourceExclusiveLite.c)
 *     KeReleaseGuardedMutex @ 0x140263BB0 (KeReleaseGuardedMutex.c)
 *     __security_check_cookie @ 0x1403CC020 (__security_check_cookie.c)
 *     PnpDereferenceNotify @ 0x140685008 (PnpDereferenceNotify.c)
 *     PnpNotifyDriverCallback @ 0x14070D040 (PnpNotifyDriverCallback.c)
 */

__int64 __fastcall PipKsrNotifyDrivers(_QWORD *a1)
{
  unsigned int v2; // esi
  PVOID *v3; // rbx
  PVOID **v4; // rsi
  struct _KTHREAD *CurrentThread; // rax
  __int64 v6; // rax
  __int64 v7; // rax
  __int128 v8; // xmm0
  int v9; // eax
  __int64 v10; // rax
  __int64 v11; // rax
  __int64 v12; // rdx
  __int64 v13; // r8
  __int64 v14; // r9
  __int64 v15; // rax
  int v17; // [rsp+20h] [rbp-48h] BYREF
  _BYTE v18[20]; // [rsp+28h] [rbp-40h] BYREF

  v2 = 0;
  memset(v18, 0, sizeof(v18));
  v17 = 0;
  ExAcquireFastMutex(&PnpKsrNotifyLock);
  v3 = (PVOID *)PnpKsrNotifyList;
  if ( PnpKsrNotifyList != &PnpKsrNotifyList )
  {
    do
    {
      ++*((_WORD *)v3 + 28);
      v4 = (PVOID **)v3;
      KeReleaseGuardedMutex(&PnpKsrNotifyLock);
      CurrentThread = KeGetCurrentThread();
      --CurrentThread->KernelApcDisable;
      ExAcquireResourceExclusiveLite((PERESOURCE)v3[9], 1u);
      if ( *((_BYTE *)v3 + 58) )
        goto LABEL_21;
      v6 = *a1 - *(_QWORD *)&GUID_KERNEL_SOFT_RESTART_CANCEL.Data1;
      if ( *a1 == *(_QWORD *)&GUID_KERNEL_SOFT_RESTART_CANCEL.Data1 )
        v6 = a1[1] - *(_QWORD *)GUID_KERNEL_SOFT_RESTART_CANCEL.Data4;
      if ( !v6 && !*((_BYTE *)v3 + 80) )
        goto LABEL_21;
      v7 = *a1 - *(_QWORD *)&GUID_KERNEL_SOFT_RESTART_PREPARE.Data1;
      if ( *a1 == *(_QWORD *)&GUID_KERNEL_SOFT_RESTART_PREPARE.Data1 )
        v7 = a1[1] - *(_QWORD *)GUID_KERNEL_SOFT_RESTART_PREPARE.Data4;
      if ( v7 || !*((_BYTE *)v3 + 80) )
      {
        v8 = *(_OWORD *)a1;
        *(_DWORD *)v18 = 1310721;
        *(_OWORD *)&v18[4] = v8;
        v9 = PnpNotifyDriverCallback((__int64)v3, (__int64)v18, &v17);
        if ( v9 < 0 )
        {
          v17 = v9;
        }
        else
        {
          v10 = *a1 - *(_QWORD *)&GUID_KERNEL_SOFT_RESTART_PREPARE.Data1;
          if ( *a1 == *(_QWORD *)&GUID_KERNEL_SOFT_RESTART_PREPARE.Data1 )
            v10 = a1[1] - *(_QWORD *)GUID_KERNEL_SOFT_RESTART_PREPARE.Data4;
          if ( v10 )
          {
            v11 = *a1 - *(_QWORD *)&GUID_KERNEL_SOFT_RESTART_CANCEL.Data1;
            if ( *a1 == *(_QWORD *)&GUID_KERNEL_SOFT_RESTART_CANCEL.Data1 )
              v11 = a1[1] - *(_QWORD *)GUID_KERNEL_SOFT_RESTART_CANCEL.Data4;
            if ( !v11 )
              *((_BYTE *)v3 + 80) = 0;
          }
          else
          {
            *((_BYTE *)v3 + 80) = 1;
          }
        }
      }
      else
      {
LABEL_21:
        v17 = 0;
      }
      ExReleaseResourceLite((PERESOURCE)v3[9]);
      KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread(), v12, v13, v14);
      ExAcquireFastMutex(&PnpKsrNotifyLock);
      v3 = (PVOID *)*v3;
      PnpDereferenceNotify(v4);
      v2 = v17;
      if ( v17 < 0 )
      {
        v15 = *a1 - *(_QWORD *)&GUID_KERNEL_SOFT_RESTART_PREPARE.Data1;
        if ( *a1 == *(_QWORD *)&GUID_KERNEL_SOFT_RESTART_PREPARE.Data1 )
          v15 = a1[1] - *(_QWORD *)GUID_KERNEL_SOFT_RESTART_PREPARE.Data4;
        if ( !v15 )
          break;
      }
    }
    while ( v3 != &PnpKsrNotifyList );
  }
  KeReleaseGuardedMutex(&PnpKsrNotifyLock);
  return v2;
}
