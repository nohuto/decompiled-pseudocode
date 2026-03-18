/*
 * XREFs of ?HrFindInterface@CMILCOMBase@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x180077300
 * Callers:
 *     ?HrFindInterface@CRenderTargetBitmap@@MEAAJAEBU_GUID@@PEAPEAX@Z @ 0x180023BE0 (-HrFindInterface@CRenderTargetBitmap@@MEAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?HrFindInterface@CD2DResource@@MEAAJAEBU_GUID@@PEAPEAX@Z @ 0x180073720 (-HrFindInterface@CD2DResource@@MEAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?HrFindInterface@CBitmapRealization@@MEAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800C7F80 (-HrFindInterface@CBitmapRealization@@MEAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?HrFindInterface@CImageSource@@MEAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800C7FF0 (-HrFindInterface@CImageSource@@MEAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?HrFindInterface@CGdiSpriteBitmap@@MEAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800C8060 (-HrFindInterface@CGdiSpriteBitmap@@MEAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?HrFindInterface@CMessageConversationHost@@MEAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800D2B90 (-HrFindInterface@CMessageConversationHost@@MEAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?HrFindInterface@CLegacyRemotingSwapChain@@MEAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800E1410 (-HrFindInterface@CLegacyRemotingSwapChain@@MEAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?HrFindInterface@CSecondarySysmemBitmap@@MEAAJAEBU_GUID@@PEAPEAX@Z @ 0x18019BB70 (-HrFindInterface@CSecondarySysmemBitmap@@MEAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?HrFindInterface@CManipulation@@MEAAJAEBU_GUID@@PEAPEAX@Z @ 0x1801D3870 (-HrFindInterface@CManipulation@@MEAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?HrFindInterface@CAtlasBitmapResource@@MEAAJAEBU_GUID@@PEAPEAX@Z @ 0x180207CE0 (-HrFindInterface@CAtlasBitmapResource@@MEAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?HrFindInterface@CD3DDevice@@EEAAJAEBU_GUID@@PEAPEAX@Z @ 0x18023D300 (-HrFindInterface@CD3DDevice@@EEAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?HrFindInterface@CDDisplaySwapChain@@MEAAJAEBU_GUID@@PEAPEAX@Z @ 0x1802430B0 (-HrFindInterface@CDDisplaySwapChain@@MEAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?HrFindInterface@CDDASwapChain@@MEAAJAEBU_GUID@@PEAPEAX@Z @ 0x18024D930 (-HrFindInterface@CDDASwapChain@@MEAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?HrFindInterface@CCompSwapChain@@MEAAJAEBU_GUID@@PEAPEAX@Z @ 0x18024E690 (-HrFindInterface@CCompSwapChain@@MEAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?HrFindInterface@CHolographicExclusiveView@@MEAAJAEBU_GUID@@PEAPEAX@Z @ 0x180254460 (-HrFindInterface@CHolographicExclusiveView@@MEAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?HrFindInterface@CColorKeyBitmapRealization@@MEAAJAEBU_GUID@@PEAPEAX@Z @ 0x18025FC70 (-HrFindInterface@CColorKeyBitmapRealization@@MEAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?HrFindInterface@CWICBitmapRealization@@MEAAJAEBU_GUID@@PEAPEAX@Z @ 0x180260870 (-HrFindInterface@CWICBitmapRealization@@MEAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?HrFindInterface@CColorKeyBitmap@@MEAAJAEBU_GUID@@PEAPEAX@Z @ 0x180265100 (-HrFindInterface@CColorKeyBitmap@@MEAAJAEBU_GUID@@PEAPEAX@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CMILCOMBase::HrFindInterface(CMILCOMBase *this, const struct _GUID *a2, void **a3)
{
  __int64 result; // rax
  __int64 v4; // rax

  result = 2147942487LL;
  if ( a3 )
  {
    v4 = *(_QWORD *)&a2->Data1 - *(_QWORD *)&GUID_00000000_0000_0000_c000_000000000046.Data1;
    if ( *(_QWORD *)&a2->Data1 == *(_QWORD *)&GUID_00000000_0000_0000_c000_000000000046.Data1 )
      v4 = *(_QWORD *)a2->Data4 - *(_QWORD *)GUID_00000000_0000_0000_c000_000000000046.Data4;
    if ( v4 )
    {
      *a3 = 0LL;
      return 2147500034LL;
    }
    else
    {
      *a3 = this;
      return 0LL;
    }
  }
  return result;
}
