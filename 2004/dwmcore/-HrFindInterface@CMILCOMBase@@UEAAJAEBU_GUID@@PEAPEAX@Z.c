/*
 * XREFs of ?HrFindInterface@CMILCOMBase@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800C5380
 * Callers:
 *     ?HrFindInterface@CRenderTargetBitmap@@MEAAJAEBU_GUID@@PEAPEAX@Z @ 0x180023FE0 (-HrFindInterface@CRenderTargetBitmap@@MEAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?HrFindInterface@CMessageConversationHost@@MEAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800C5270 (-HrFindInterface@CMessageConversationHost@@MEAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?HrFindInterface@CBitmapRealization@@MEAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800C52C0 (-HrFindInterface@CBitmapRealization@@MEAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?HrFindInterface@CD2DResource@@MEAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800C5330 (-HrFindInterface@CD2DResource@@MEAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?HrFindInterface@CImageSource@@MEAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800C53C0 (-HrFindInterface@CImageSource@@MEAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?HrFindInterface@CGdiSpriteBitmap@@MEAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800C84D0 (-HrFindInterface@CGdiSpriteBitmap@@MEAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?HrFindInterface@CLegacyRemotingSwapChain@@MEAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800E11A0 (-HrFindInterface@CLegacyRemotingSwapChain@@MEAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?HrFindInterface@CSecondarySysmemBitmap@@MEAAJAEBU_GUID@@PEAPEAX@Z @ 0x18019D7F0 (-HrFindInterface@CSecondarySysmemBitmap@@MEAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?HrFindInterface@CManipulation@@MEAAJAEBU_GUID@@PEAPEAX@Z @ 0x1801D5710 (-HrFindInterface@CManipulation@@MEAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?HrFindInterface@CAtlasBitmapResource@@MEAAJAEBU_GUID@@PEAPEAX@Z @ 0x180209B20 (-HrFindInterface@CAtlasBitmapResource@@MEAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?HrFindInterface@CD3DDevice@@EEAAJAEBU_GUID@@PEAPEAX@Z @ 0x18023E290 (-HrFindInterface@CD3DDevice@@EEAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?HrFindInterface@CDDisplaySwapChain@@MEAAJAEBU_GUID@@PEAPEAX@Z @ 0x180244040 (-HrFindInterface@CDDisplaySwapChain@@MEAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?HrFindInterface@CDDASwapChain@@MEAAJAEBU_GUID@@PEAPEAX@Z @ 0x18024E8C0 (-HrFindInterface@CDDASwapChain@@MEAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?HrFindInterface@CCompSwapChain@@MEAAJAEBU_GUID@@PEAPEAX@Z @ 0x18024F620 (-HrFindInterface@CCompSwapChain@@MEAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?HrFindInterface@CHolographicExclusiveView@@MEAAJAEBU_GUID@@PEAPEAX@Z @ 0x180255290 (-HrFindInterface@CHolographicExclusiveView@@MEAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?HrFindInterface@CColorKeyBitmapRealization@@MEAAJAEBU_GUID@@PEAPEAX@Z @ 0x180260A50 (-HrFindInterface@CColorKeyBitmapRealization@@MEAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?HrFindInterface@CWICBitmapRealization@@MEAAJAEBU_GUID@@PEAPEAX@Z @ 0x180261650 (-HrFindInterface@CWICBitmapRealization@@MEAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?HrFindInterface@CColorKeyBitmap@@MEAAJAEBU_GUID@@PEAPEAX@Z @ 0x180265EE0 (-HrFindInterface@CColorKeyBitmap@@MEAAJAEBU_GUID@@PEAPEAX@Z.c)
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
