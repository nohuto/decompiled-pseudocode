/*
 * XREFs of ?Handle_RM_DisconnectFromServer@ResourceManagerServerProxy@@QEAAJPEAPEAX@Z @ 0x180063124
 * Callers:
 *     RM_PROXY_CONTEXT_HANDLE_TYPE_rundown @ 0x180062830 (RM_PROXY_CONTEXT_HANDLE_TYPE_rundown.c)
 *     RmtSrv_RM_DisconnectFromServer @ 0x180062DB0 (RmtSrv_RM_DisconnectFromServer.c)
 * Callees:
 *     ?HampUtilStartLockTracking@@YAXPEAU_CEM_LOCK_TRACKER@@@Z @ 0x18000B478 (-HampUtilStartLockTracking@@YAXPEAU_CEM_LOCK_TRACKER@@@Z.c)
 *     ?RmpReleaseGlobalLock@@YAXXZ @ 0x18000F120 (-RmpReleaseGlobalLock@@YAXXZ.c)
 *     ?RmpAcquireGlobalLock@@YAXXZ @ 0x18001E110 (-RmpAcquireGlobalLock@@YAXXZ.c)
 *     ?RmpObjectTableEnumerationBegin@@YAXPEAU_RM_OBJECT_TABLE@@PEAU_RM_OBJECT_TABLE_ENUMERATION_CONTEXT@@@Z @ 0x180041094 (-RmpObjectTableEnumerationBegin@@YAXPEAU_RM_OBJECT_TABLE@@PEAU_RM_OBJECT_TABLE_ENUMERATION_CONTE.c)
 *     __security_check_cookie @ 0x180044E00 (__security_check_cookie.c)
 *     ?RmpResourceSetTableEnumerationGetNext@@YAPEAU_RM_RESOURCE_SET@@PEAU_RM_RS_ENUMERATION_CONTEXT@@@Z @ 0x18006A1FC (-RmpResourceSetTableEnumerationGetNext@@YAPEAU_RM_RESOURCE_SET@@PEAU_RM_RS_ENUMERATION_CONTEXT@@.c)
 *     ?RmpActivatorCleanup@@YAXPEAU_RM_ACTIVATOR@@@Z @ 0x18006A214 (-RmpActivatorCleanup@@YAXPEAU_RM_ACTIVATOR@@@Z.c)
 */

__int64 __fastcall ResourceManagerServerProxy::Handle_RM_DisconnectFromServer(
        ResourceManagerServerProxy *this,
        struct _RM_ACTIVATOR **a2)
{
  struct _RM_ACTIVATOR *v4; // rdi
  struct _RM_RESOURCE_SET *Next; // rax
  DWORD v6; // ebx
  _QWORD v8[4]; // [rsp+20h] [rbp-C8h] BYREF
  _BYTE v9[144]; // [rsp+40h] [rbp-A8h] BYREF

  HampUtilStartLockTracking((struct _CEM_LOCK_TRACKER *)v9);
  v4 = *a2;
  RmpAcquireGlobalLock();
  RmpObjectTableEnumerationBegin(
    (struct _RM_OBJECT_TABLE *)(*((_QWORD *)this + 2) + 536LL),
    (struct _RM_OBJECT_TABLE_ENUMERATION_CONTEXT *)v8);
  while ( 1 )
  {
    Next = RmpResourceSetTableEnumerationGetNext((struct _RM_RS_ENUMERATION_CONTEXT *)v8);
    if ( !Next )
      break;
    if ( *((struct _RM_ACTIVATOR **)Next + 7) == v4 )
      *((_QWORD *)Next + 7) = 0LL;
  }
  RtlReleaseSRWLockShared(v8[0] + 16LL);
  RmpActivatorCleanup(v4);
  RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, v4);
  RmpReleaseGlobalLock();
  *a2 = 0LL;
  v6 = HampLockTrackerId;
  if ( HampLockTrackerId != -1 )
  {
    if ( *(_QWORD *)TlsGetValue(HampLockTrackerId) )
      NT_ASSERT("CurrentTracker->Bitmap == 0");
    TlsSetValue(v6, 0LL);
  }
  return 0LL;
}
