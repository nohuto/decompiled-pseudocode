/*
 * XREFs of ?RmpGpuMonitorTimerCallback@@YAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_TIMER@@@Z @ 0x1800746B0
 * Callers:
 *     <none>
 * Callees:
 *     ?RmpActivityHostEnumerateResourceSetGetNext@@YAPEAVResourceSet@ExecutionModel@@PEAU_RM_ACTIVITY_HOST_RESOURCE_SET_ENUMERATION_CONTEXT@@@Z @ 0x180007C08 (-RmpActivityHostEnumerateResourceSetGetNext@@YAPEAVResourceSet@ExecutionModel@@PEAU_RM_ACTIVITY_.c)
 *     ?RmpActivityHostEnumerateResourceSetGetFirst@@YAPEAVResourceSet@ExecutionModel@@PEAU_RM_ACTIVITY_HOST@@KW4_RM_RESOURCE_SET_CATEGORY@@@Z @ 0x180007C7C (-RmpActivityHostEnumerateResourceSetGetFirst@@YAPEAVResourceSet@ExecutionModel@@PEAU_RM_ACTIVITY.c)
 *     ?HampUtilStartLockTracking@@YAXPEAU_CEM_LOCK_TRACKER@@@Z @ 0x18000B478 (-HampUtilStartLockTracking@@YAXPEAU_CEM_LOCK_TRACKER@@@Z.c)
 *     ?RmpReleaseGlobalLock@@YAXXZ @ 0x18000F120 (-RmpReleaseGlobalLock@@YAXXZ.c)
 *     _tlgKeywordOn @ 0x180010200 (_tlgKeywordOn.c)
 *     ?RmpAcquireGlobalLock@@YAXXZ @ 0x18001E110 (-RmpAcquireGlobalLock@@YAXXZ.c)
 *     ?RmpObjectRelease@@YAXPEAU_RM_OBJECT_HEADER@@@Z @ 0x180026310 (-RmpObjectRelease@@YAXPEAU_RM_OBJECT_HEADER@@@Z.c)
 *     _tlgWriteTransfer_EventWriteTransfer @ 0x18002DFD8 (_tlgWriteTransfer_EventWriteTransfer.c)
 *     ?RmpObjectTableEnumerationGetNext@@YAPEAU_RM_OBJECT_HEADER@@PEAU_RM_OBJECT_TABLE_ENUMERATION_CONTEXT@@@Z @ 0x180041028 (-RmpObjectTableEnumerationGetNext@@YAPEAU_RM_OBJECT_HEADER@@PEAU_RM_OBJECT_TABLE_ENUMERATION_CON.c)
 *     ?RmpObjectTableEnumerationBegin@@YAXPEAU_RM_OBJECT_TABLE@@PEAU_RM_OBJECT_TABLE_ENUMERATION_CONTEXT@@@Z @ 0x180041094 (-RmpObjectTableEnumerationBegin@@YAXPEAU_RM_OBJECT_TABLE@@PEAU_RM_OBJECT_TABLE_ENUMERATION_CONTE.c)
 *     __security_check_cookie @ 0x180044E00 (__security_check_cookie.c)
 *     ?RmpActivityHostCheckAndUpdateGpuInterference@@YAJPEAU_RM_ACTIVITY_HOST@@K@Z @ 0x180074024 (-RmpActivityHostCheckAndUpdateGpuInterference@@YAJPEAU_RM_ACTIVITY_HOST@@K@Z.c)
 *     ?RmpGpuMonitorIsGpuBusy@@YAKPEAU_RM_GPU_MONITOR@@@Z @ 0x18007455C (-RmpGpuMonitorIsGpuBusy@@YAKPEAU_RM_GPU_MONITOR@@@Z.c)
 */

void __fastcall RmpGpuMonitorTimerCallback(struct _TP_CALLBACK_INSTANCE *a1, char *a2, struct _TP_TIMER *a3)
{
  __int64 v4; // rcx
  char *v5; // rbx
  int v6; // eax
  BOOL IsGpuBusy; // esi
  struct ExecutionModel::ResourceSet *v8; // rax
  struct _RM_OBJECT_HEADER *Next; // rax
  struct _RM_ACTIVITY_HOST *v10; // rdi
  __int64 v11; // rcx
  __int64 v12; // rcx
  DWORD v13; // ebx
  __int64 First; // [rsp+30h] [rbp-99h] BYREF
  int v15; // [rsp+38h] [rbp-91h]
  int v16; // [rsp+3Ch] [rbp-8Dh]
  _BYTE v17[144]; // [rsp+40h] [rbp-89h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v18; // [rsp+D0h] [rbp+7h] BYREF

  HampUtilStartLockTracking((struct _CEM_LOCK_TRACKER *)v17);
  if ( (unsigned int)dword_1800B31E0 > 5 && tlgKeywordOn((__int64)&dword_1800B31E0, 1LL) )
    tlgWriteTransfer_EventWriteTransfer(v4, (unsigned __int8 *)dword_18009DC8E, 0LL, 0LL, 2u, &v18);
  v5 = a2 + 48;
  RmpAcquireGlobalLock();
  v6 = *((_DWORD *)a2 + 23);
  if ( (v6 & 1) == 0 )
    goto LABEL_15;
  IsGpuBusy = RmpGpuMonitorIsGpuBusy((struct _RM_GPU_MONITOR *)(a2 + 48));
  RmpObjectTableEnumerationBegin(
    (struct _RM_OBJECT_TABLE *)(a2 + 16),
    (struct _RM_OBJECT_TABLE_ENUMERATION_CONTEXT *)&v18);
  while ( 1 )
  {
    Next = RmpObjectTableEnumerationGetNext((struct _RM_OBJECT_TABLE_ENUMERATION_CONTEXT *)&v18);
    v10 = Next;
    if ( !Next )
      break;
    v16 = 0;
    v15 = 2;
    First = RmpActivityHostEnumerateResourceSetGetFirst((__int64)Next, 2, 0);
    while ( 1 )
    {
      v8 = RmpActivityHostEnumerateResourceSetGetNext((struct _RM_ACTIVITY_HOST_RESOURCE_SET_ENUMERATION_CONTEXT *)&First);
      if ( !v8 )
        break;
      if ( (*((_BYTE *)v8 + 1380) & 8) != 0 )
      {
        RmpActivityHostCheckAndUpdateGpuInterference(v10, IsGpuBusy);
        break;
      }
    }
    RmpObjectRelease((char *)v10);
  }
  RtlReleaseSRWLockShared(v18.Ptr + 16);
  v6 = *((_DWORD *)v5 + 11);
  if ( (v6 & 1) != 0 )
  {
    TpSetTimer(*(_QWORD *)v5, v5 + 8, 0LL, *((unsigned int *)v5 + 10));
  }
  else
  {
LABEL_15:
    *((_DWORD *)v5 + 11) = v6 & 0xFFFFFFFD;
    if ( (unsigned int)dword_1800B31E0 > 4 && tlgKeywordOn((__int64)&dword_1800B31E0, 1LL) )
      tlgWriteTransfer_EventWriteTransfer(v11, (unsigned __int8 *)dword_18009DBE9, 0LL, 0LL, 2u, &v18);
  }
  RmpReleaseGlobalLock();
  if ( (unsigned int)dword_1800B31E0 > 5 && tlgKeywordOn((__int64)&dword_1800B31E0, 1LL) )
    tlgWriteTransfer_EventWriteTransfer(v12, (unsigned __int8 *)dword_18009DADB, 0LL, 0LL, 2u, &v18);
  v13 = HampLockTrackerId;
  if ( HampLockTrackerId != -1 )
  {
    if ( *(_QWORD *)TlsGetValue(HampLockTrackerId) )
      NT_ASSERT("CurrentTracker->Bitmap == 0");
    TlsSetValue(v13, 0LL);
  }
}
