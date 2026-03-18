/*
 * XREFs of HOSTVMMONITORMAPPING::RemoveMappingInternal__lambda_96e157b43079a313af61cac4d916eb85___ @ 0x1C0024788
 * Callers:
 *     ?SetVidPnPrimaryTarget@ADAPTER_DISPLAY@@QEAAXII@Z @ 0x1C001F5D4 (-SetVidPnPrimaryTarget@ADAPTER_DISPLAY@@QEAAXII@Z.c)
 * Callees:
 *     ?DecrementVSyncWaiter@DXGADAPTER@@QEAAXI@Z @ 0x1C0002580 (-DecrementVSyncWaiter@DXGADAPTER@@QEAAXI@Z.c)
 *     ?ReleaseReference@DXGKVMB_SINGLEPACKETCONTEXT@@QEAAXXZ @ 0x1C0059434 (-ReleaseReference@DXGKVMB_SINGLEPACKETCONTEXT@@QEAAXXZ.c)
 *     McTemplateK0xqpp_EtwWriteTransfer @ 0x1C00594F4 (McTemplateK0xqpp_EtwWriteTransfer.c)
 *     ??_GHOST_VMMONITOR_MAPPING_ENTRY@@QEAAPEAXI@Z @ 0x1C033D3D8 (--_GHOST_VMMONITOR_MAPPING_ENTRY@@QEAAPEAXI@Z.c)
 */

__int64 __fastcall HOSTVMMONITORMAPPING::RemoveMappingInternal__lambda_96e157b43079a313af61cac4d916eb85___(
        HOST_VMMONITOR_MAPPING_ENTRY *a1,
        _DWORD **a2)
{
  _QWORD *v2; // rbx
  unsigned int v5; // r14d
  __int64 v6; // rdx
  HOST_VMMONITOR_MAPPING_ENTRY *v7; // rdi
  HOST_VMMONITOR_MAPPING_ENTRY *v8; // rdi
  _DWORD *v10; // r15
  HOST_VMMONITOR_MAPPING_ENTRY *v11; // rbx
  int v12; // r8d
  HOST_VMMONITOR_MAPPING_ENTRY *v13; // rcx
  HOST_VMMONITOR_MAPPING_ENTRY **v14; // rax
  HOST_VMMONITOR_MAPPING_ENTRY *v15; // rax
  HOST_VMMONITOR_MAPPING_ENTRY *v16; // rbx
  volatile __int32 *v17; // rcx
  HOST_VMMONITOR_MAPPING_ENTRY *v18; // rax
  HOST_VMMONITOR_MAPPING_ENTRY **v19; // rcx
  DXGKVMB_SINGLEPACKETCONTEXT *v20; // rcx
  HOST_VMMONITOR_MAPPING_ENTRY *v21[3]; // [rsp+40h] [rbp-40h] BYREF
  _QWORD *v22; // [rsp+58h] [rbp-28h]
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+60h] [rbp-20h] BYREF
  char v24; // [rsp+78h] [rbp-8h]

  v2 = (_QWORD *)((char *)a1 + 16);
  v24 = 0;
  v22 = (_QWORD *)((char *)a1 + 16);
  v21[1] = (HOST_VMMONITOR_MAPPING_ENTRY *)v21;
  v21[0] = (HOST_VMMONITOR_MAPPING_ENTRY *)v21;
  v5 = -1073741275;
  KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)a1 + 2, &LockHandle);
  v2[1] = KeGetCurrentThread();
  v7 = *(HOST_VMMONITOR_MAPPING_ENTRY **)a1;
  v24 = 1;
  if ( v7 == a1 )
    goto LABEL_2;
  v10 = *a2;
  do
  {
    v11 = v7;
    v7 = *(HOST_VMMONITOR_MAPPING_ENTRY **)v7;
    if ( *((_DWORD *)v11 + 4) == *v10 && *((_DWORD *)v11 + 5) == v10[1] )
    {
      v12 = *((_DWORD *)v11 + 6);
      if ( v12 == *a2[1] )
      {
        v6 = *((_QWORD *)v11 + 6);
        if ( v6 )
        {
          v13 = v7;
          if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x1000000) != 0 )
          {
            McTemplateK0xqpp_EtwWriteTransfer(
              (_DWORD)v7,
              (unsigned int)&RemoteMonitorRemoveMapping,
              v12,
              *((_QWORD *)v11 + 2),
              v12,
              v6,
              *((_QWORD *)v11 + 4));
            v13 = *(HOST_VMMONITOR_MAPPING_ENTRY **)v11;
          }
          if ( *((HOST_VMMONITOR_MAPPING_ENTRY **)v13 + 1) != v11
            || (v14 = (HOST_VMMONITOR_MAPPING_ENTRY **)*((_QWORD *)v11 + 1), *v14 != v11)
            || (*v14 = v13,
                *((_QWORD *)v13 + 1) = v14,
                v15 = v21[0],
                *((HOST_VMMONITOR_MAPPING_ENTRY ***)v21[0] + 1) != v21) )
          {
LABEL_30:
            __fastfail(3u);
          }
          *(HOST_VMMONITOR_MAPPING_ENTRY **)v11 = v21[0];
          *((_QWORD *)v11 + 1) = v21;
          v5 = 0;
          *((_QWORD *)v15 + 1) = v11;
          v21[0] = v11;
        }
      }
    }
  }
  while ( v7 != a1 );
  if ( v24 )
  {
LABEL_2:
    v24 = 0;
    v22[1] = 0LL;
    KeReleaseInStackQueuedSpinLock(&LockHandle);
  }
  v8 = v21[0];
  while ( v8 != (HOST_VMMONITOR_MAPPING_ENTRY *)v21 )
  {
    v16 = v8;
    v8 = *(HOST_VMMONITOR_MAPPING_ENTRY **)v8;
    if ( *((_QWORD *)v16 + 6) )
    {
      DXGADAPTER::DecrementVSyncWaiter(*((DXGADAPTER **)v16 + 9), *((_DWORD *)v16 + 16));
    }
    else
    {
      v17 = (volatile __int32 *)*((_QWORD *)v16 + 7);
      if ( v17 )
      {
        _InterlockedExchange(v17, 0);
        _InterlockedExchange64((volatile __int64 *)(*((_QWORD *)v16 + 7) + 8LL), 0LL);
      }
    }
    v18 = *(HOST_VMMONITOR_MAPPING_ENTRY **)v16;
    if ( *(HOST_VMMONITOR_MAPPING_ENTRY **)(*(_QWORD *)v16 + 8LL) != v16 )
      goto LABEL_30;
    v19 = (HOST_VMMONITOR_MAPPING_ENTRY **)*((_QWORD *)v16 + 1);
    if ( *v19 != v16 )
      goto LABEL_30;
    *v19 = v18;
    *((_QWORD *)v18 + 1) = v19;
    v20 = (DXGKVMB_SINGLEPACKETCONTEXT *)*((_QWORD *)v16 + 11);
    if ( v20 )
      DXGKVMB_SINGLEPACKETCONTEXT::ReleaseReference(v20);
    HOST_VMMONITOR_MAPPING_ENTRY::`scalar deleting destructor'(v16, v6);
  }
  return v5;
}
