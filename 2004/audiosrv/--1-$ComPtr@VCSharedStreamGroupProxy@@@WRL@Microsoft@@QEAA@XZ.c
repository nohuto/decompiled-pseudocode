/*
 * XREFs of ??1?$ComPtr@VCSharedStreamGroupProxy@@@WRL@Microsoft@@QEAA@XZ @ 0x1800E3F94
 * Callers:
 *     ?GetStreamGroup@CDeviceGraphManager@@UEAAJPEAUIDeviceGraphObjectsStore@@PEAUStreamGroupParams@@KPEAUAUDIO_DEVICE_MODE_DESCRIPTOR@@PEAPEAUIStreamGroupProxy@@@Z @ 0x180030350 (-GetStreamGroup@CDeviceGraphManager@@UEAAJPEAUIDeviceGraphObjectsStore@@PEAUStreamGroupParams@@K.c)
 *     _Microsoft::WRL::Details::MakeAndInitialize_CExclusiveStreamGroupProxy_IStreamGroupProxy_StreamGroupParams___&_ATL::CComHeapPtr_STREAM_GROUP_DESCRIPTOR__&_unsigned_long_&__::_1_::dtor$1 @ 0x1800E337A (_Microsoft--WRL--Details--MakeAndInitialize_CExclusiveStreamGroupProxy_IStreamGroup_ea_1800E337A.c)
 * Callees:
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@VCBaseStreamGroupProxy@@UIInspectable@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x180034100 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@VCBaseStreamGroupP.c)
 */

__int64 __fastcall Microsoft::WRL::ComPtr<CSharedStreamGroupProxy>::~ComPtr<CSharedStreamGroupProxy>(__int64 *a1)
{
  __int64 result; // rax

  result = *a1;
  if ( *a1 )
  {
    *a1 = 0LL;
    return Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,CBaseStreamGroupProxy,IInspectable>::Release(result);
  }
  return result;
}
