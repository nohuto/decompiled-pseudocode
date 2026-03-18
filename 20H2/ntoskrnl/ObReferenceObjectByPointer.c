/*
 * XREFs of ObReferenceObjectByPointer @ 0x1402E15A0
 * Callers:
 *     EtwpAddUmRegEntry @ 0x1405F3230 (EtwpAddUmRegEntry.c)
 *     ObpLookupObjectName @ 0x140614C20 (ObpLookupObjectName.c)
 *     IopAllocateFoExtensionsOnCreate @ 0x14062CB7C (IopAllocateFoExtensionsOnCreate.c)
 *     WmipQueryAllData @ 0x140647730 (WmipQueryAllData.c)
 *     NtImpersonateAnonymousToken @ 0x14068D4F0 (NtImpersonateAnonymousToken.c)
 *     ObpParseSymbolicLinkEx @ 0x14068D9C0 (ObpParseSymbolicLinkEx.c)
 *     EtwpStopTrace @ 0x140713944 (EtwpStopTrace.c)
 *     WmipRegisterDevice @ 0x14074E1A8 (WmipRegisterDevice.c)
 *     WmipQuerySetExecuteSI @ 0x1407504A0 (WmipQuerySetExecuteSI.c)
 *     HalGetAdapterV2 @ 0x140761540 (HalGetAdapterV2.c)
 *     HalpDmaAllocateChildAdapterV2 @ 0x1407617BC (HalpDmaAllocateChildAdapterV2.c)
 *     HalGetAdapterV3 @ 0x1407BEFB0 (HalGetAdapterV3.c)
 *     HalpDmaAllocateChildAdapterV3 @ 0x1407BF2A8 (HalpDmaAllocateChildAdapterV3.c)
 *     EtwpRegisterPrivateSession @ 0x140941BD8 (EtwpRegisterPrivateSession.c)
 * Callees:
 *     KeBugCheckEx @ 0x1403FBCA0 (KeBugCheckEx.c)
 *     ObpPushStackInfo @ 0x140563258 (ObpPushStackInfo.c)
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
