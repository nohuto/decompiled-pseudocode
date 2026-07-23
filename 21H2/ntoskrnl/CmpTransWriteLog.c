/*
 * XREFs of CmpTransWriteLog @ 0x140763D58
 * Callers:
 *     CmAddLogForAction @ 0x14060E74C (CmAddLogForAction.c)
 *     CmLogTmRmAction @ 0x140763C88 (CmLogTmRmAction.c)
 * Callees:
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x14027E1A4 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     _tlgKeywordOn @ 0x1402864F4 (_tlgKeywordOn.c)
 *     KeLeaveCriticalRegionThread @ 0x1402AB8C0 (KeLeaveCriticalRegionThread.c)
 *     ExReleaseResourceLite @ 0x140356140 (ExReleaseResourceLite.c)
 *     ExAcquireResourceExclusiveLite @ 0x1403568F0 (ExAcquireResourceExclusiveLite.c)
 *     __security_check_cookie @ 0x1403D05D0 (__security_check_cookie.c)
 *     CmpComputeLogFillLevel @ 0x140763E58 (CmpComputeLogFillLevel.c)
 *     CmpDoTransWriteLogRecord @ 0x140763FA4 (CmpDoTransWriteLogRecord.c)
 *     CmpLogCheckpoint @ 0x1407707A4 (CmpLogCheckpoint.c)
 *     CmpAddRemoveRMLogContainer @ 0x140875334 (CmpAddRemoveRMLogContainer.c)
 */

__int64 __fastcall CmpTransWriteLog(__int64 a1, __int64 a2, unsigned int a3, unsigned int a4, PCLFS_LSN plsnFinish)
{
  struct _KTHREAD *CurrentThread; // rax
  unsigned int v6; // r14d
  int v10; // edi
  int v11; // eax
  __int64 v12; // rdx
  __int64 v13; // r8
  unsigned int v14; // esi
  __int64 v15; // rdx
  __int64 v16; // r8
  __int64 v17; // r9
  __int64 v19; // rdx
  __int64 v20; // r8
  int v21; // r14d
  int v22; // edx
  int v23; // r9d
  unsigned int v24; // [rsp+30h] [rbp-A1h] BYREF
  int v25; // [rsp+34h] [rbp-9Dh] BYREF
  int v26; // [rsp+38h] [rbp-99h] BYREF
  unsigned int v27; // [rsp+3Ch] [rbp-95h]
  int v28; // [rsp+40h] [rbp-91h] BYREF
  int v29; // [rsp+44h] [rbp-8Dh] BYREF
  struct _EVENT_DATA_DESCRIPTOR v30; // [rsp+50h] [rbp-81h] BYREF
  int *v31; // [rsp+70h] [rbp-61h]
  int v32; // [rsp+78h] [rbp-59h]
  int v33; // [rsp+7Ch] [rbp-55h]
  int *v34; // [rsp+80h] [rbp-51h]
  int v35; // [rsp+88h] [rbp-49h]
  int v36; // [rsp+8Ch] [rbp-45h]
  struct _EVENT_DATA_DESCRIPTOR v37; // [rsp+90h] [rbp-41h] BYREF
  int *v38; // [rsp+B0h] [rbp-21h]
  int v39; // [rsp+B8h] [rbp-19h]
  int v40; // [rsp+BCh] [rbp-15h]
  int *v41; // [rsp+C0h] [rbp-11h]
  int v42; // [rsp+C8h] [rbp-9h]
  int v43; // [rsp+CCh] [rbp-5h]

  CurrentThread = KeGetCurrentThread();
  v6 = a4;
  v24 = 0;
  v27 = a4;
  --CurrentThread->KernelApcDisable;
  ExAcquireResourceExclusiveLite(*(PERESOURCE *)(a1 + 128), 1u);
  v10 = 0;
  while ( 1 )
  {
    v11 = CmpDoTransWriteLogRecord(a1, a2, a3, v6, plsnFinish);
    v14 = v11;
    if ( v11 != -1072037859 )
      break;
    if ( v10 )
    {
      if ( v10 != 1 )
        goto LABEL_6;
LABEL_11:
      v24 = ++v10;
      v21 = CmpAddRemoveRMLogContainer(a1);
      if ( (unsigned int)dword_140C02130 > 5 && tlgKeywordOn((__int64)&dword_140C02130, 1LL) )
      {
        v33 = 0;
        v36 = 0;
        v31 = &v25;
        v25 = v19;
        v34 = &v26;
        v32 = v19 + 3;
        v35 = v19 + 3;
        v26 = v21;
        tlgWriteTransfer_EtwWriteTransfer(
          (__int64)&dword_140C02130,
          (unsigned __int8 *)&byte_140023A97,
          0LL,
          0LL,
          v19 + 3,
          &v30);
      }
      if ( v21 < 0 )
        goto LABEL_6;
      LOBYTE(v20) = 1;
      CmpLogCheckpoint(a1, v19, v20);
      v6 = v27;
    }
    else
    {
      v10 = 1;
      v24 = 1;
      LOBYTE(v13) = 1;
      if ( (int)CmpLogCheckpoint(a1, v12, v13) < 0 )
        goto LABEL_11;
    }
  }
  if ( v11 >= 0
    && (int)CmpComputeLogFillLevel(
              *(PLOG_FILE_OBJECT *)(a1 + 88),
              (PCLFS_LSN)(a1 + 120),
              plsnFinish,
              *(_DWORD *)(a1 + 72),
              *(_DWORD *)(a1 + 68),
              (__int64)&v24) >= 0
    && v24 >= 0x50 )
  {
    CmpAddRemoveRMLogContainer(a1);
    if ( (unsigned int)dword_140C02130 > 5 )
    {
      if ( tlgKeywordOn((__int64)&dword_140C02130, 1LL) )
      {
        v40 = 0;
        v43 = 0;
        v38 = &v28;
        v39 = v22 + 3;
        v41 = &v29;
        v29 = v23;
        v42 = v22 + 3;
        v28 = 2;
        tlgWriteTransfer_EtwWriteTransfer(
          (__int64)&dword_140C02130,
          (unsigned __int8 *)&dword_140023A64,
          0LL,
          0LL,
          v22 + 3,
          &v37);
      }
    }
  }
LABEL_6:
  ExReleaseResourceLite(*(PERESOURCE *)(a1 + 128));
  KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread(), v15, v16, v17);
  return v14;
}
