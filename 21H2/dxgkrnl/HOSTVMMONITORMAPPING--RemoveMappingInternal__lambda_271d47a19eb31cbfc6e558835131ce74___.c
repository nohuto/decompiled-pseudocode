/*
 * XREFs of HOSTVMMONITORMAPPING::RemoveMappingInternal__lambda_271d47a19eb31cbfc6e558835131ce74___ @ 0x1C0058860
 * Callers:
 *     ?RemoveMapping@HOSTVMMONITORMAPPING@@QEAAJU_LUID@@_N@Z @ 0x1C00594D4 (-RemoveMapping@HOSTVMMONITORMAPPING@@QEAAJU_LUID@@_N@Z.c)
 * Callees:
 *     ?DecrementVSyncWaiter@DXGADAPTER@@QEAAXI@Z @ 0x1C0002580 (-DecrementVSyncWaiter@DXGADAPTER@@QEAAXI@Z.c)
 *     ?ReleaseReference@DXGKVMB_SINGLEPACKETCONTEXT@@QEAAXXZ @ 0x1C0059434 (-ReleaseReference@DXGKVMB_SINGLEPACKETCONTEXT@@QEAAXXZ.c)
 *     McTemplateK0xqpp_EtwWriteTransfer @ 0x1C00594F4 (McTemplateK0xqpp_EtwWriteTransfer.c)
 *     ??_GHOST_VMMONITOR_MAPPING_ENTRY@@QEAAPEAXI@Z @ 0x1C033D3D8 (--_GHOST_VMMONITOR_MAPPING_ENTRY@@QEAAPEAXI@Z.c)
 */

__int64 __fastcall HOSTVMMONITORMAPPING::RemoveMappingInternal__lambda_271d47a19eb31cbfc6e558835131ce74___(
        HOST_VMMONITOR_MAPPING_ENTRY *a1,
        _DWORD *a2)
{
  _QWORD *v2; // rdi
  unsigned int v5; // r15d
  unsigned int v6; // edx
  int v7; // r8d
  HOST_VMMONITOR_MAPPING_ENTRY *v8; // rsi
  HOST_VMMONITOR_MAPPING_ENTRY *v9; // rdi
  HOST_VMMONITOR_MAPPING_ENTRY *v10; // rcx
  HOST_VMMONITOR_MAPPING_ENTRY **v11; // rax
  HOST_VMMONITOR_MAPPING_ENTRY *v12; // rax
  HOST_VMMONITOR_MAPPING_ENTRY *v13; // rdi
  HOST_VMMONITOR_MAPPING_ENTRY *v14; // rbx
  volatile __int32 *v15; // rcx
  HOST_VMMONITOR_MAPPING_ENTRY *v16; // rax
  HOST_VMMONITOR_MAPPING_ENTRY **v17; // rcx
  DXGKVMB_SINGLEPACKETCONTEXT *v18; // rcx
  HOST_VMMONITOR_MAPPING_ENTRY *v20[3]; // [rsp+40h] [rbp-40h] BYREF
  _QWORD *v21; // [rsp+58h] [rbp-28h]
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+60h] [rbp-20h] BYREF
  char v23; // [rsp+78h] [rbp-8h]

  v2 = (_QWORD *)((char *)a1 + 16);
  v23 = 0;
  v21 = (_QWORD *)((char *)a1 + 16);
  v20[1] = (HOST_VMMONITOR_MAPPING_ENTRY *)v20;
  v20[0] = (HOST_VMMONITOR_MAPPING_ENTRY *)v20;
  v5 = -1073741275;
  KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)a1 + 2, &LockHandle);
  v2[1] = KeGetCurrentThread();
  v8 = *(HOST_VMMONITOR_MAPPING_ENTRY **)a1;
  v23 = 1;
  if ( v8 == a1 )
    goto LABEL_12;
  do
  {
    v9 = v8;
    v8 = *(HOST_VMMONITOR_MAPPING_ENTRY **)v8;
    if ( *((_DWORD *)v9 + 4) == *a2 && *((_DWORD *)v9 + 5) == a2[1] )
    {
      v10 = v8;
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x1000000) != 0 )
      {
        McTemplateK0xqpp_EtwWriteTransfer(
          (_DWORD)v8,
          (unsigned int)&RemoteMonitorRemoveMapping,
          v7,
          *((_QWORD *)v9 + 2),
          *((_DWORD *)v9 + 6),
          *((_QWORD *)v9 + 6),
          *((_QWORD *)v9 + 4));
        v10 = *(HOST_VMMONITOR_MAPPING_ENTRY **)v9;
      }
      if ( *((HOST_VMMONITOR_MAPPING_ENTRY **)v10 + 1) != v9
        || (v11 = (HOST_VMMONITOR_MAPPING_ENTRY **)*((_QWORD *)v9 + 1), *v11 != v9)
        || (*v11 = v10, *((_QWORD *)v10 + 1) = v11, v12 = v20[0], *((HOST_VMMONITOR_MAPPING_ENTRY ***)v20[0] + 1) != v20) )
      {
LABEL_25:
        __fastfail(3u);
      }
      *(HOST_VMMONITOR_MAPPING_ENTRY **)v9 = v20[0];
      *((_QWORD *)v9 + 1) = v20;
      v5 = 0;
      *((_QWORD *)v12 + 1) = v9;
      v20[0] = v9;
    }
  }
  while ( v8 != a1 );
  if ( v23 )
  {
LABEL_12:
    v23 = 0;
    v21[1] = 0LL;
    KeReleaseInStackQueuedSpinLock(&LockHandle);
  }
  v13 = v20[0];
  while ( v13 != (HOST_VMMONITOR_MAPPING_ENTRY *)v20 )
  {
    v14 = v13;
    v13 = *(HOST_VMMONITOR_MAPPING_ENTRY **)v13;
    if ( *((_QWORD *)v14 + 6) )
    {
      DXGADAPTER::DecrementVSyncWaiter(*((DXGADAPTER **)v14 + 9), *((_DWORD *)v14 + 16));
    }
    else
    {
      v15 = (volatile __int32 *)*((_QWORD *)v14 + 7);
      if ( v15 )
      {
        _InterlockedExchange(v15, 0);
        _InterlockedExchange64((volatile __int64 *)(*((_QWORD *)v14 + 7) + 8LL), 0LL);
      }
    }
    v16 = *(HOST_VMMONITOR_MAPPING_ENTRY **)v14;
    if ( *(HOST_VMMONITOR_MAPPING_ENTRY **)(*(_QWORD *)v14 + 8LL) != v14 )
      goto LABEL_25;
    v17 = (HOST_VMMONITOR_MAPPING_ENTRY **)*((_QWORD *)v14 + 1);
    if ( *v17 != v14 )
      goto LABEL_25;
    *v17 = v16;
    *((_QWORD *)v16 + 1) = v17;
    v18 = (DXGKVMB_SINGLEPACKETCONTEXT *)*((_QWORD *)v14 + 11);
    if ( v18 )
      DXGKVMB_SINGLEPACKETCONTEXT::ReleaseReference(v18);
    HOST_VMMONITOR_MAPPING_ENTRY::`scalar deleting destructor'(v14, v6);
  }
  return v5;
}
