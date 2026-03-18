/*
 * XREFs of ObReferenceObjectByPointer @ 0x14026E130
 * Callers:
 *     ObpLookupObjectName @ 0x1405F1FF0 (ObpLookupObjectName.c)
 *     ObpParseSymbolicLinkEx @ 0x14062F170 (ObpParseSymbolicLinkEx.c)
 *     NtImpersonateAnonymousToken @ 0x140630BF0 (NtImpersonateAnonymousToken.c)
 *     WmipQueryAllData @ 0x140646140 (WmipQueryAllData.c)
 *     IopAllocateFoExtensionsOnCreate @ 0x14065867C (IopAllocateFoExtensionsOnCreate.c)
 *     EtwpAddUmRegEntry @ 0x14066E008 (EtwpAddUmRegEntry.c)
 *     EtwpStopTrace @ 0x1406C75AC (EtwpStopTrace.c)
 *     WmipRegisterDevice @ 0x14073F5C8 (WmipRegisterDevice.c)
 *     WmipQuerySetExecuteSI @ 0x1407418C0 (WmipQuerySetExecuteSI.c)
 *     HalGetAdapterV2 @ 0x140752960 (HalGetAdapterV2.c)
 *     HalpDmaAllocateChildAdapterV2 @ 0x140752BDC (HalpDmaAllocateChildAdapterV2.c)
 *     HalGetAdapterV3 @ 0x1407B1070 (HalGetAdapterV3.c)
 *     HalpDmaAllocateChildAdapterV3 @ 0x1407B1368 (HalpDmaAllocateChildAdapterV3.c)
 *     EtwpRegisterPrivateSession @ 0x14093BDA8 (EtwpRegisterPrivateSession.c)
 * Callees:
 *     KeBugCheckEx @ 0x1403F70D0 (KeBugCheckEx.c)
 *     ObpPushStackInfo @ 0x14055F888 (ObpPushStackInfo.c)
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
