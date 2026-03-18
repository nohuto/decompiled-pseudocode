/*
 * XREFs of ObReferenceObjectByPointer @ 0x1402DE590
 * Callers:
 *     EtwpAddUmRegEntry @ 0x1405F4F98 (EtwpAddUmRegEntry.c)
 *     ObpLookupObjectName @ 0x140627610 (ObpLookupObjectName.c)
 *     IopAllocateFoExtensionsOnCreate @ 0x140674ADC (IopAllocateFoExtensionsOnCreate.c)
 *     NtImpersonateAnonymousToken @ 0x1406778C0 (NtImpersonateAnonymousToken.c)
 *     ObpParseSymbolicLinkEx @ 0x140677D90 (ObpParseSymbolicLinkEx.c)
 *     EtwpStopTrace @ 0x1406796F8 (EtwpStopTrace.c)
 *     WmipQueryAllData @ 0x1406812A0 (WmipQueryAllData.c)
 *     WmipRegisterDevice @ 0x14073DA48 (WmipRegisterDevice.c)
 *     WmipQuerySetExecuteSI @ 0x14073FD40 (WmipQuerySetExecuteSI.c)
 *     HalGetAdapterV2 @ 0x14074E2D0 (HalGetAdapterV2.c)
 *     HalpDmaAllocateChildAdapterV2 @ 0x14074E54C (HalpDmaAllocateChildAdapterV2.c)
 *     HalGetAdapterV3 @ 0x1407ADF10 (HalGetAdapterV3.c)
 *     HalpDmaAllocateChildAdapterV3 @ 0x1407AE208 (HalpDmaAllocateChildAdapterV3.c)
 *     EtwpRegisterPrivateSession @ 0x14093AB08 (EtwpRegisterPrivateSession.c)
 * Callees:
 *     KeBugCheckEx @ 0x1403F5E40 (KeBugCheckEx.c)
 *     ObpPushStackInfo @ 0x14055F238 (ObpPushStackInfo.c)
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
