/*
 * XREFs of REMOTEVSYNCMAPPING::RemoveMappingInternal__lambda_ed8f9bca20cd5704cf0fee5400ab1066___ @ 0x1C004E284
 * Callers:
 *     ?RemoveMapping@REMOTEVSYNCMAPPING@@QEAAJPEAX_N@Z @ 0x1C004E7A8 (-RemoveMapping@REMOTEVSYNCMAPPING@@QEAAJPEAX_N@Z.c)
 * Callees:
 *     ?DecrementVSyncWaiter@DXGADAPTER@@QEAAXI@Z @ 0x1C000D390 (-DecrementVSyncWaiter@DXGADAPTER@@QEAAXI@Z.c)
 *     McTemplateK0xqpp_EtwWriteTransfer @ 0x1C004E870 (McTemplateK0xqpp_EtwWriteTransfer.c)
 *     ??_GREMOTE_VYSNC_MAPPING_ENTRY@@QEAAPEAXI@Z @ 0x1C02C291C (--_GREMOTE_VYSNC_MAPPING_ENTRY@@QEAAPEAXI@Z.c)
 */

__int64 __fastcall REMOTEVSYNCMAPPING::RemoveMappingInternal__lambda_ed8f9bca20cd5704cf0fee5400ab1066___(
        REMOTE_VYSNC_MAPPING_ENTRY *a1,
        _QWORD *a2)
{
  _QWORD *v2; // rdi
  unsigned int v5; // r14d
  int v6; // r8d
  REMOTE_VYSNC_MAPPING_ENTRY *v7; // rsi
  REMOTE_VYSNC_MAPPING_ENTRY *v8; // rdi
  REMOTE_VYSNC_MAPPING_ENTRY *v9; // rcx
  REMOTE_VYSNC_MAPPING_ENTRY **v10; // rax
  REMOTE_VYSNC_MAPPING_ENTRY *v11; // rax
  REMOTE_VYSNC_MAPPING_ENTRY *v12; // rdi
  REMOTE_VYSNC_MAPPING_ENTRY *v13; // rbx
  unsigned int v14; // edx
  REMOTE_VYSNC_MAPPING_ENTRY *v15; // rcx
  REMOTE_VYSNC_MAPPING_ENTRY **v16; // rax
  REMOTE_VYSNC_MAPPING_ENTRY *v18[3]; // [rsp+40h] [rbp-40h] BYREF
  _QWORD *v19; // [rsp+58h] [rbp-28h]
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+60h] [rbp-20h] BYREF
  char v21; // [rsp+78h] [rbp-8h]

  v2 = (_QWORD *)((char *)a1 + 16);
  v21 = 0;
  v19 = (_QWORD *)((char *)a1 + 16);
  v18[1] = (REMOTE_VYSNC_MAPPING_ENTRY *)v18;
  v18[0] = (REMOTE_VYSNC_MAPPING_ENTRY *)v18;
  v5 = -1073741275;
  KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)a1 + 2, &LockHandle);
  v2[1] = KeGetCurrentThread();
  v7 = *(REMOTE_VYSNC_MAPPING_ENTRY **)a1;
  v21 = 1;
  if ( v7 == a1 )
    goto LABEL_11;
  do
  {
    v8 = v7;
    v7 = *(REMOTE_VYSNC_MAPPING_ENTRY **)v7;
    if ( *((_QWORD *)v8 + 4) == *a2 )
    {
      v9 = v7;
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x400000) != 0 )
      {
        McTemplateK0xqpp_EtwWriteTransfer(
          (_DWORD)v7,
          (unsigned int)&RemoteVSyncRemoveMapping,
          v6,
          *((_QWORD *)v8 + 2),
          *((_DWORD *)v8 + 6),
          *((_QWORD *)v8 + 5),
          *((_QWORD *)v8 + 4));
        v9 = *(REMOTE_VYSNC_MAPPING_ENTRY **)v8;
      }
      if ( *((REMOTE_VYSNC_MAPPING_ENTRY **)v9 + 1) != v8
        || (v10 = (REMOTE_VYSNC_MAPPING_ENTRY **)*((_QWORD *)v8 + 1), *v10 != v8)
        || (*v10 = v9, *((_QWORD *)v9 + 1) = v10, v11 = v18[0], *((REMOTE_VYSNC_MAPPING_ENTRY ***)v18[0] + 1) != v18) )
      {
LABEL_18:
        __fastfail(3u);
      }
      *(REMOTE_VYSNC_MAPPING_ENTRY **)v8 = v18[0];
      *((_QWORD *)v8 + 1) = v18;
      v5 = 0;
      *((_QWORD *)v11 + 1) = v8;
      v18[0] = v8;
    }
  }
  while ( v7 != a1 );
  if ( v21 )
  {
LABEL_11:
    v21 = 0;
    v19[1] = 0LL;
    KeReleaseInStackQueuedSpinLock(&LockHandle);
  }
  v12 = v18[0];
  while ( v12 != (REMOTE_VYSNC_MAPPING_ENTRY *)v18 )
  {
    v13 = v12;
    v12 = *(REMOTE_VYSNC_MAPPING_ENTRY **)v12;
    DXGADAPTER::DecrementVSyncWaiter(*((DXGADAPTER **)v13 + 7), *((unsigned int *)v13 + 12));
    v15 = *(REMOTE_VYSNC_MAPPING_ENTRY **)v13;
    if ( *(REMOTE_VYSNC_MAPPING_ENTRY **)(*(_QWORD *)v13 + 8LL) != v13 )
      goto LABEL_18;
    v16 = (REMOTE_VYSNC_MAPPING_ENTRY **)*((_QWORD *)v13 + 1);
    if ( *v16 != v13 )
      goto LABEL_18;
    *v16 = v15;
    *((_QWORD *)v15 + 1) = v16;
    REMOTE_VYSNC_MAPPING_ENTRY::`scalar deleting destructor'(v13, v14);
  }
  return v5;
}
