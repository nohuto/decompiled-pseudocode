/*
 * XREFs of ObReferenceObjectByPointer @ 0x1402E0270
 * Callers:
 *     NtImpersonateAnonymousToken @ 0x140695570 (NtImpersonateAnonymousToken.c)
 *     WmipRegisterDevice @ 0x1406C82F8 (WmipRegisterDevice.c)
 *     EtwpStopTrace @ 0x1406EDFEC (EtwpStopTrace.c)
 *     IopAllocateFoExtensionsOnCreate @ 0x14071CAFC (IopAllocateFoExtensionsOnCreate.c)
 *     WmipQuerySetExecuteSI @ 0x14078362C (WmipQuerySetExecuteSI.c)
 *     ObpParseSymbolicLinkEx @ 0x140784700 (ObpParseSymbolicLinkEx.c)
 *     WmipQueryAllData @ 0x14078CD70 (WmipQueryAllData.c)
 *     EtwpAddUmRegEntry @ 0x140796F10 (EtwpAddUmRegEntry.c)
 *     ObpLookupObjectName @ 0x1407CB6C0 (ObpLookupObjectName.c)
 *     HalGetAdapterV2 @ 0x140845A60 (HalGetAdapterV2.c)
 *     HalGetAdapterV3 @ 0x140845F30 (HalGetAdapterV3.c)
 *     HalpDmaAllocateChildAdapterV3 @ 0x14084685C (HalpDmaAllocateChildAdapterV3.c)
 *     HalpDmaAllocateChildAdapterV2 @ 0x140846BEC (HalpDmaAllocateChildAdapterV2.c)
 *     EtwpRegisterPrivateSession @ 0x1409EBDD0 (EtwpRegisterPrivateSession.c)
 * Callees:
 *     KeBugCheckEx @ 0x14041F3D0 (KeBugCheckEx.c)
 *     ObpPushStackInfo @ 0x1405C5EC8 (ObpPushStackInfo.c)
 */

NTSTATUS __stdcall ObReferenceObjectByPointer(
        PVOID Object,
        ACCESS_MASK DesiredAccess,
        POBJECT_TYPE ObjectType,
        KPROCESSOR_MODE AccessMode)
{
  volatile signed __int64 *v4; // rdi
  signed __int64 BugCheckParameter4; // rbx

  if ( !ObjectType )
  {
    if ( !AccessMode )
    {
      v4 = (volatile signed __int64 *)((char *)Object - 48);
      goto LABEL_3;
    }
    return -1073741788;
  }
  v4 = (volatile signed __int64 *)((char *)Object - 48);
  if ( ((unsigned __int8)ObHeaderCookie ^ (unsigned __int8)(*((char *)Object - 24) ^ ((unsigned __int16)((_WORD)Object - 48) >> 8))) != ObjectType->Index )
    return -1073741788;
LABEL_3:
  if ( ObpTraceFlags )
    ObpPushStackInfo((_DWORD)v4);
  BugCheckParameter4 = _InterlockedIncrement64(v4);
  if ( BugCheckParameter4 <= 1 )
    KeBugCheckEx(0x18u, 0LL, (ULONG_PTR)(v4 + 6), 0x10uLL, BugCheckParameter4);
  return 0;
}
