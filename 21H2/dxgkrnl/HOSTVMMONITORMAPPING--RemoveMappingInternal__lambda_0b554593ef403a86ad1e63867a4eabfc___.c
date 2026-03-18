/*
 * XREFs of HOSTVMMONITORMAPPING::RemoveMappingInternal__lambda_0b554593ef403a86ad1e63867a4eabfc___ @ 0x1C0058650
 * Callers:
 *     ?RemoveMapping@HOSTVMMONITORMAPPING@@QEAAJPEAXU_LUID@@I0_N@Z @ 0x1C0059464 (-RemoveMapping@HOSTVMMONITORMAPPING@@QEAAJPEAXU_LUID@@I0_N@Z.c)
 * Callees:
 *     ?DecrementVSyncWaiter@DXGADAPTER@@QEAAXI@Z @ 0x1C0002580 (-DecrementVSyncWaiter@DXGADAPTER@@QEAAXI@Z.c)
 *     ?ReleaseReference@DXGKVMB_SINGLEPACKETCONTEXT@@QEAAXXZ @ 0x1C0059434 (-ReleaseReference@DXGKVMB_SINGLEPACKETCONTEXT@@QEAAXXZ.c)
 *     McTemplateK0xqpp_EtwWriteTransfer @ 0x1C00594F4 (McTemplateK0xqpp_EtwWriteTransfer.c)
 *     ??_GHOST_VMMONITOR_MAPPING_ENTRY@@QEAAPEAXI@Z @ 0x1C033D3D8 (--_GHOST_VMMONITOR_MAPPING_ENTRY@@QEAAPEAXI@Z.c)
 */

__int64 __fastcall HOSTVMMONITORMAPPING::RemoveMappingInternal__lambda_0b554593ef403a86ad1e63867a4eabfc___(
        HOST_VMMONITOR_MAPPING_ENTRY *a1,
        __int64 a2)
{
  _QWORD *v2; // rbx
  unsigned int v5; // r15d
  __int64 v6; // rdx
  HOST_VMMONITOR_MAPPING_ENTRY *v7; // rdi
  _DWORD *v8; // r12
  HOST_VMMONITOR_MAPPING_ENTRY *v9; // rbx
  int v10; // r8d
  HOST_VMMONITOR_MAPPING_ENTRY *v11; // rcx
  HOST_VMMONITOR_MAPPING_ENTRY **v12; // rax
  HOST_VMMONITOR_MAPPING_ENTRY *v13; // rax
  HOST_VMMONITOR_MAPPING_ENTRY *v14; // rdi
  HOST_VMMONITOR_MAPPING_ENTRY *v15; // rbx
  volatile __int32 *v16; // rcx
  HOST_VMMONITOR_MAPPING_ENTRY *v17; // rax
  HOST_VMMONITOR_MAPPING_ENTRY **v18; // rcx
  DXGKVMB_SINGLEPACKETCONTEXT *v19; // rcx
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
    goto LABEL_16;
  v8 = *(_DWORD **)(a2 + 8);
  do
  {
    v9 = v7;
    v7 = *(HOST_VMMONITOR_MAPPING_ENTRY **)v7;
    if ( *((_DWORD *)v9 + 4) == *v8 && *((_DWORD *)v9 + 5) == v8[1] )
    {
      v10 = *((_DWORD *)v9 + 6);
      if ( v10 == **(_DWORD **)(a2 + 16) && *((_QWORD *)v9 + 4) == **(_QWORD **)a2 )
      {
        v6 = *((_QWORD *)v9 + 6);
        if ( v6 == **(_QWORD **)(a2 + 24) )
        {
          v11 = v7;
          if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x1000000) != 0 )
          {
            McTemplateK0xqpp_EtwWriteTransfer(
              (_DWORD)v7,
              (unsigned int)&RemoteMonitorRemoveMapping,
              v10,
              *((_QWORD *)v9 + 2),
              v10,
              v6,
              *((_QWORD *)v9 + 4));
            v11 = *(HOST_VMMONITOR_MAPPING_ENTRY **)v9;
          }
          if ( *((HOST_VMMONITOR_MAPPING_ENTRY **)v11 + 1) != v9
            || (v12 = (HOST_VMMONITOR_MAPPING_ENTRY **)*((_QWORD *)v9 + 1), *v12 != v9)
            || (*v12 = v11,
                *((_QWORD *)v11 + 1) = v12,
                v13 = v21[0],
                *((HOST_VMMONITOR_MAPPING_ENTRY ***)v21[0] + 1) != v21) )
          {
LABEL_29:
            __fastfail(3u);
          }
          *(HOST_VMMONITOR_MAPPING_ENTRY **)v9 = v21[0];
          *((_QWORD *)v9 + 1) = v21;
          v5 = 0;
          *((_QWORD *)v13 + 1) = v9;
          v21[0] = v9;
        }
      }
    }
  }
  while ( v7 != a1 );
  if ( v24 )
  {
LABEL_16:
    v24 = 0;
    v22[1] = 0LL;
    KeReleaseInStackQueuedSpinLock(&LockHandle);
  }
  v14 = v21[0];
  while ( v14 != (HOST_VMMONITOR_MAPPING_ENTRY *)v21 )
  {
    v15 = v14;
    v14 = *(HOST_VMMONITOR_MAPPING_ENTRY **)v14;
    if ( *((_QWORD *)v15 + 6) )
    {
      DXGADAPTER::DecrementVSyncWaiter(*((DXGADAPTER **)v15 + 9), *((_DWORD *)v15 + 16));
    }
    else
    {
      v16 = (volatile __int32 *)*((_QWORD *)v15 + 7);
      if ( v16 )
      {
        _InterlockedExchange(v16, 0);
        _InterlockedExchange64((volatile __int64 *)(*((_QWORD *)v15 + 7) + 8LL), 0LL);
      }
    }
    v17 = *(HOST_VMMONITOR_MAPPING_ENTRY **)v15;
    if ( *(HOST_VMMONITOR_MAPPING_ENTRY **)(*(_QWORD *)v15 + 8LL) != v15 )
      goto LABEL_29;
    v18 = (HOST_VMMONITOR_MAPPING_ENTRY **)*((_QWORD *)v15 + 1);
    if ( *v18 != v15 )
      goto LABEL_29;
    *v18 = v17;
    *((_QWORD *)v17 + 1) = v18;
    v19 = (DXGKVMB_SINGLEPACKETCONTEXT *)*((_QWORD *)v15 + 11);
    if ( v19 )
      DXGKVMB_SINGLEPACKETCONTEXT::ReleaseReference(v19);
    HOST_VMMONITOR_MAPPING_ENTRY::`scalar deleting destructor'(v15, v6);
  }
  return v5;
}
