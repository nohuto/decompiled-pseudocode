/*
 * XREFs of REMOTEVSYNCMAPPING::RemoveMappingInternal__lambda_1780769ec5f9365cce61534bff2f229f___ @ 0x1C004E0B8
 * Callers:
 *     ?RemoveMapping@REMOTEVSYNCMAPPING@@QEAAJPEAXU_LUID@@I0_N@Z @ 0x1C004E758 (-RemoveMapping@REMOTEVSYNCMAPPING@@QEAAJPEAXU_LUID@@I0_N@Z.c)
 * Callees:
 *     ?DecrementVSyncWaiter@DXGADAPTER@@QEAAXI@Z @ 0x1C000D390 (-DecrementVSyncWaiter@DXGADAPTER@@QEAAXI@Z.c)
 *     McTemplateK0xqpp_EtwWriteTransfer @ 0x1C004E870 (McTemplateK0xqpp_EtwWriteTransfer.c)
 *     ??_GREMOTE_VYSNC_MAPPING_ENTRY@@QEAAPEAXI@Z @ 0x1C02C291C (--_GREMOTE_VYSNC_MAPPING_ENTRY@@QEAAPEAXI@Z.c)
 */

__int64 __fastcall REMOTEVSYNCMAPPING::RemoveMappingInternal__lambda_1780769ec5f9365cce61534bff2f229f___(
        REMOTE_VYSNC_MAPPING_ENTRY *a1,
        __int64 a2)
{
  _QWORD *v2; // rbx
  unsigned int v5; // esi
  REMOTE_VYSNC_MAPPING_ENTRY *v6; // rdi
  _DWORD *v7; // rcx
  REMOTE_VYSNC_MAPPING_ENTRY *v8; // rbx
  int v9; // edx
  __int64 v10; // r8
  __int64 v11; // r9
  REMOTE_VYSNC_MAPPING_ENTRY *v12; // rcx
  REMOTE_VYSNC_MAPPING_ENTRY **v13; // rax
  REMOTE_VYSNC_MAPPING_ENTRY *v14; // rax
  REMOTE_VYSNC_MAPPING_ENTRY *v15; // rdi
  REMOTE_VYSNC_MAPPING_ENTRY *v16; // rbx
  unsigned int v17; // edx
  REMOTE_VYSNC_MAPPING_ENTRY *v18; // rcx
  REMOTE_VYSNC_MAPPING_ENTRY **v19; // rax
  REMOTE_VYSNC_MAPPING_ENTRY *v21[3]; // [rsp+40h] [rbp-40h] BYREF
  _QWORD *v22; // [rsp+58h] [rbp-28h]
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+60h] [rbp-20h] BYREF
  char v24; // [rsp+78h] [rbp-8h]

  v2 = (_QWORD *)((char *)a1 + 16);
  v24 = 0;
  v22 = (_QWORD *)((char *)a1 + 16);
  v21[1] = (REMOTE_VYSNC_MAPPING_ENTRY *)v21;
  v21[0] = (REMOTE_VYSNC_MAPPING_ENTRY *)v21;
  v5 = -1073741275;
  KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)a1 + 2, &LockHandle);
  v2[1] = KeGetCurrentThread();
  v6 = *(REMOTE_VYSNC_MAPPING_ENTRY **)a1;
  v24 = 1;
  if ( v6 == a1 )
    goto LABEL_15;
  do
  {
    v7 = *(_DWORD **)(a2 + 8);
    v8 = v6;
    v6 = *(REMOTE_VYSNC_MAPPING_ENTRY **)v6;
    if ( *((_DWORD *)v8 + 4) == *v7 && *((_DWORD *)v8 + 5) == v7[1] )
    {
      v9 = *((_DWORD *)v8 + 6);
      if ( v9 == **(_DWORD **)(a2 + 16) )
      {
        v10 = *((_QWORD *)v8 + 4);
        if ( v10 == **(_QWORD **)a2 )
        {
          v11 = *((_QWORD *)v8 + 5);
          if ( v11 == **(_QWORD **)(a2 + 24) )
          {
            v12 = v6;
            if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x400000) != 0 )
            {
              McTemplateK0xqpp_EtwWriteTransfer(
                (_DWORD)v6,
                (unsigned int)&RemoteVSyncRemoveMapping,
                v10,
                *((_QWORD *)v8 + 2),
                v9,
                v11,
                *((_QWORD *)v8 + 4));
              v12 = *(REMOTE_VYSNC_MAPPING_ENTRY **)v8;
            }
            if ( *((REMOTE_VYSNC_MAPPING_ENTRY **)v12 + 1) != v8
              || (v13 = (REMOTE_VYSNC_MAPPING_ENTRY **)*((_QWORD *)v8 + 1), *v13 != v8)
              || (*v13 = v12,
                  *((_QWORD *)v12 + 1) = v13,
                  v14 = v21[0],
                  *((REMOTE_VYSNC_MAPPING_ENTRY ***)v21[0] + 1) != v21) )
            {
LABEL_22:
              __fastfail(3u);
            }
            *(REMOTE_VYSNC_MAPPING_ENTRY **)v8 = v21[0];
            *((_QWORD *)v8 + 1) = v21;
            v5 = 0;
            *((_QWORD *)v14 + 1) = v8;
            v21[0] = v8;
          }
        }
      }
    }
  }
  while ( v6 != a1 );
  if ( v24 )
  {
LABEL_15:
    v24 = 0;
    v22[1] = 0LL;
    KeReleaseInStackQueuedSpinLock(&LockHandle);
  }
  v15 = v21[0];
  while ( v15 != (REMOTE_VYSNC_MAPPING_ENTRY *)v21 )
  {
    v16 = v15;
    v15 = *(REMOTE_VYSNC_MAPPING_ENTRY **)v15;
    DXGADAPTER::DecrementVSyncWaiter(*((DXGADAPTER **)v16 + 7), *((unsigned int *)v16 + 12));
    v18 = *(REMOTE_VYSNC_MAPPING_ENTRY **)v16;
    if ( *(REMOTE_VYSNC_MAPPING_ENTRY **)(*(_QWORD *)v16 + 8LL) != v16 )
      goto LABEL_22;
    v19 = (REMOTE_VYSNC_MAPPING_ENTRY **)*((_QWORD *)v16 + 1);
    if ( *v19 != v16 )
      goto LABEL_22;
    *v19 = v18;
    *((_QWORD *)v18 + 1) = v19;
    REMOTE_VYSNC_MAPPING_ENTRY::`scalar deleting destructor'(v16, v17);
  }
  return v5;
}
