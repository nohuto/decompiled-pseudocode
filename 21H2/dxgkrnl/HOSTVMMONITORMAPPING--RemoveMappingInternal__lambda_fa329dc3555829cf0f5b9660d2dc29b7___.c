/*
 * XREFs of HOSTVMMONITORMAPPING::RemoveMappingInternal__lambda_fa329dc3555829cf0f5b9660d2dc29b7___ @ 0x1C0058C2C
 * Callers:
 *     ?RemoveMapping@HOSTVMMONITORMAPPING@@QEAAJPEAX_N@Z @ 0x1C00594B4 (-RemoveMapping@HOSTVMMONITORMAPPING@@QEAAJPEAX_N@Z.c)
 * Callees:
 *     ?DecrementVSyncWaiter@DXGADAPTER@@QEAAXI@Z @ 0x1C0002580 (-DecrementVSyncWaiter@DXGADAPTER@@QEAAXI@Z.c)
 *     ?ReleaseReference@DXGKVMB_SINGLEPACKETCONTEXT@@QEAAXXZ @ 0x1C0059434 (-ReleaseReference@DXGKVMB_SINGLEPACKETCONTEXT@@QEAAXXZ.c)
 *     McTemplateK0xqpp_EtwWriteTransfer @ 0x1C00594F4 (McTemplateK0xqpp_EtwWriteTransfer.c)
 *     ??_GHOST_VMMONITOR_MAPPING_ENTRY@@QEAAPEAXI@Z @ 0x1C033D3D8 (--_GHOST_VMMONITOR_MAPPING_ENTRY@@QEAAPEAXI@Z.c)
 */

__int64 __fastcall HOSTVMMONITORMAPPING::RemoveMappingInternal__lambda_fa329dc3555829cf0f5b9660d2dc29b7___(
        HOST_VMMONITOR_MAPPING_ENTRY *a1,
        _QWORD *a2)
{
  _QWORD *v2; // rdi
  unsigned int v5; // r15d
  int v6; // r8d
  HOST_VMMONITOR_MAPPING_ENTRY *v7; // rsi
  HOST_VMMONITOR_MAPPING_ENTRY *v8; // rdi
  __int64 v9; // rdx
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
  v7 = *(HOST_VMMONITOR_MAPPING_ENTRY **)a1;
  v23 = 1;
  if ( v7 == a1 )
    goto LABEL_11;
  do
  {
    v8 = v7;
    v7 = *(HOST_VMMONITOR_MAPPING_ENTRY **)v7;
    v9 = *((_QWORD *)v8 + 4);
    if ( v9 == *a2 )
    {
      v10 = v7;
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x1000000) != 0 )
      {
        McTemplateK0xqpp_EtwWriteTransfer(
          (_DWORD)v7,
          (unsigned int)&RemoteMonitorRemoveMapping,
          v6,
          *((_QWORD *)v8 + 2),
          *((_DWORD *)v8 + 6),
          *((_QWORD *)v8 + 6),
          *((_QWORD *)v8 + 4));
        v10 = *(HOST_VMMONITOR_MAPPING_ENTRY **)v8;
      }
      if ( *((HOST_VMMONITOR_MAPPING_ENTRY **)v10 + 1) != v8
        || (v11 = (HOST_VMMONITOR_MAPPING_ENTRY **)*((_QWORD *)v8 + 1), *v11 != v8)
        || (*v11 = v10, *((_QWORD *)v10 + 1) = v11, v12 = v20[0], *((HOST_VMMONITOR_MAPPING_ENTRY ***)v20[0] + 1) != v20) )
      {
LABEL_24:
        __fastfail(3u);
      }
      *(HOST_VMMONITOR_MAPPING_ENTRY **)v8 = v20[0];
      *((_QWORD *)v8 + 1) = v20;
      v5 = 0;
      *((_QWORD *)v12 + 1) = v8;
      v20[0] = v8;
    }
  }
  while ( v7 != a1 );
  if ( v23 )
  {
LABEL_11:
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
      goto LABEL_24;
    v17 = (HOST_VMMONITOR_MAPPING_ENTRY **)*((_QWORD *)v14 + 1);
    if ( *v17 != v14 )
      goto LABEL_24;
    *v17 = v16;
    *((_QWORD *)v16 + 1) = v17;
    v18 = (DXGKVMB_SINGLEPACKETCONTEXT *)*((_QWORD *)v14 + 11);
    if ( v18 )
      DXGKVMB_SINGLEPACKETCONTEXT::ReleaseReference(v18);
    HOST_VMMONITOR_MAPPING_ENTRY::`scalar deleting destructor'(v14, v9);
  }
  return v5;
}
