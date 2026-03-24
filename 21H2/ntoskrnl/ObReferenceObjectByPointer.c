/*
 * XREFs of ObReferenceObjectByPointer @ 0x1403600E0
 * Callers:
 *     EtwpAddUmRegEntry @ 0x1405EAD90 (EtwpAddUmRegEntry.c)
 *     WmipQueryAllData @ 0x1406390D4 (WmipQueryAllData.c)
 *     EtwpStopTrace @ 0x1406DDFBC (EtwpStopTrace.c)
 *     ObpLookupObjectName @ 0x1406F3F20 (ObpLookupObjectName.c)
 *     NtImpersonateAnonymousToken @ 0x140716D30 (NtImpersonateAnonymousToken.c)
 *     ObpParseSymbolicLinkEx @ 0x1407179B0 (ObpParseSymbolicLinkEx.c)
 *     IopAllocateFoExtensionsOnCreate @ 0x14072044C (IopAllocateFoExtensionsOnCreate.c)
 *     WmipRegisterDevice @ 0x140755008 (WmipRegisterDevice.c)
 *     WmipQuerySetExecuteSI @ 0x140757270 (WmipQuerySetExecuteSI.c)
 *     HalGetAdapterV2 @ 0x140764810 (HalGetAdapterV2.c)
 *     HalpDmaAllocateChildAdapterV2 @ 0x140764A8C (HalpDmaAllocateChildAdapterV2.c)
 *     HalGetAdapterV3 @ 0x1407C33B0 (HalGetAdapterV3.c)
 *     HalpDmaAllocateChildAdapterV3 @ 0x1407C36A8 (HalpDmaAllocateChildAdapterV3.c)
 *     EtwpRegisterPrivateSession @ 0x14093F3A8 (EtwpRegisterPrivateSession.c)
 * Callees:
 *     KeBugCheckEx @ 0x1403FDEF0 (KeBugCheckEx.c)
 *     ObpPushStackInfo @ 0x140564D28 (ObpPushStackInfo.c)
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
