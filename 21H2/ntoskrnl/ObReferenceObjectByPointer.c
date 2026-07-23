/*
 * XREFs of ObReferenceObjectByPointer @ 0x1402A5010
 * Callers:
 *     WmipQueryAllData @ 0x14062DEE4 (WmipQueryAllData.c)
 *     EtwpStopTrace @ 0x1406B529C (EtwpStopTrace.c)
 *     NtImpersonateAnonymousToken @ 0x1406C5380 (NtImpersonateAnonymousToken.c)
 *     ObpParseSymbolicLinkEx @ 0x1406C6000 (ObpParseSymbolicLinkEx.c)
 *     EtwpAddUmRegEntry @ 0x1406DA4F0 (EtwpAddUmRegEntry.c)
 *     IopAllocateFoExtensionsOnCreate @ 0x1406F68FC (IopAllocateFoExtensionsOnCreate.c)
 *     ObpLookupObjectName @ 0x14070B300 (ObpLookupObjectName.c)
 *     WmipRegisterDevice @ 0x1407551C8 (WmipRegisterDevice.c)
 *     WmipQuerySetExecuteSI @ 0x140757430 (WmipQuerySetExecuteSI.c)
 *     HalGetAdapterV2 @ 0x1407649D0 (HalGetAdapterV2.c)
 *     HalpDmaAllocateChildAdapterV2 @ 0x140764C4C (HalpDmaAllocateChildAdapterV2.c)
 *     HalGetAdapterV3 @ 0x1407C38D0 (HalGetAdapterV3.c)
 *     HalpDmaAllocateChildAdapterV3 @ 0x1407C3BC8 (HalpDmaAllocateChildAdapterV3.c)
 *     EtwpRegisterPrivateSession @ 0x14093F578 (EtwpRegisterPrivateSession.c)
 * Callees:
 *     KeBugCheckEx @ 0x1403FE0D0 (KeBugCheckEx.c)
 *     ObpPushStackInfo @ 0x140564F68 (ObpPushStackInfo.c)
 */

NTSTATUS __stdcall ObReferenceObjectByPointer(
        PVOID Object,
        ACCESS_MASK DesiredAccess,
        POBJECT_TYPE ObjectType,
        KPROCESSOR_MODE AccessMode)
{
  bool v5; // zf
  signed __int64 BugCheckParameter4; // rbx

  if ( ObjectType )
    v5 = ObTypeIndexTable[(unsigned __int8)ObHeaderCookie ^ (unsigned __int8)*((char *)Object - 24) ^ (unsigned __int64)(unsigned __int8)((unsigned __int16)((_WORD)Object - 48) >> 8)] == (_QWORD)ObjectType;
  else
    v5 = AccessMode == 0;
  if ( !v5 )
    return -1073741788;
  if ( ObpTraceFlags )
    ObpPushStackInfo((_DWORD)Object - 48);
  BugCheckParameter4 = _InterlockedIncrement64((volatile signed __int64 *)Object - 6);
  if ( BugCheckParameter4 <= 1 )
    KeBugCheckEx(0x18u, 0LL, (ULONG_PTR)Object, 0x10uLL, BugCheckParameter4);
  return 0;
}
