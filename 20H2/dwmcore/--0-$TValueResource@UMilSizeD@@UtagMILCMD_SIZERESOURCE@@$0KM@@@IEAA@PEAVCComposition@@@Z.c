/*
 * XREFs of ??0?$TValueResource@UMilSizeD@@UtagMILCMD_SIZERESOURCE@@$0KM@@@IEAA@PEAVCComposition@@@Z @ 0x18001F250
 * Callers:
 *     ?Create@CResourceFactory@@SAJPEAVCComposition@@PEAVCChannelContext@@W4MIL_RESOURCE_TYPE@@PEAPEAVCResource@@@Z @ 0x1800ACC98 (-Create@CResourceFactory@@SAJPEAVCComposition@@PEAVCChannelContext@@W4MIL_RESOURCE_TYPE@@PEAPEAV.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall TValueResource<MilSizeD,tagMILCMD_SIZERESOURCE,172>::TValueResource<MilSizeD,tagMILCMD_SIZERESOURCE,172>(
        __int64 a1,
        __int64 a2)
{
  __int64 result; // rax

  *(_QWORD *)(a1 + 16) = a2;
  *(_DWORD *)(a1 + 8) = 0;
  *(_QWORD *)(a1 + 24) = 0LL;
  *(_QWORD *)(a1 + 40) = 0LL;
  *(_DWORD *)(a1 + 32) = 0;
  *(_QWORD *)a1 = &TValueResource<MilSizeD,tagMILCMD_SIZERESOURCE,172>::`vftable';
  result = a1;
  *(_OWORD *)(a1 + 56) = 0LL;
  return result;
}
