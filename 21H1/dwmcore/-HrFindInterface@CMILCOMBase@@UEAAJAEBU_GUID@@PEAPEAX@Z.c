/*
 * XREFs of ?HrFindInterface@CMILCOMBase@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800BEF40
 * Callers:
 *     ?HrFindInterface@CRenderTargetBitmap@@MEAAJAEBU_GUID@@PEAPEAX@Z @ 0x180025670 (-HrFindInterface@CRenderTargetBitmap@@MEAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?HrFindInterface@CMessageConversationHost@@MEAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800BEE30 (-HrFindInterface@CMessageConversationHost@@MEAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?HrFindInterface@CBitmapRealization@@MEAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800BEE80 (-HrFindInterface@CBitmapRealization@@MEAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?HrFindInterface@CD2DResource@@MEAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800BEEF0 (-HrFindInterface@CD2DResource@@MEAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?HrFindInterface@CImageSource@@MEAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800BEF80 (-HrFindInterface@CImageSource@@MEAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?HrFindInterface@CGdiSpriteBitmap@@MEAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800C1A10 (-HrFindInterface@CGdiSpriteBitmap@@MEAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?HrFindInterface@CLegacyRemotingSwapChain@@MEAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800DFB40 (-HrFindInterface@CLegacyRemotingSwapChain@@MEAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?HrFindInterface@CSecondarySysmemBitmap@@MEAAJAEBU_GUID@@PEAPEAX@Z @ 0x1801A0380 (-HrFindInterface@CSecondarySysmemBitmap@@MEAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?HrFindInterface@CManipulation@@MEAAJAEBU_GUID@@PEAPEAX@Z @ 0x1801D8090 (-HrFindInterface@CManipulation@@MEAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?HrFindInterface@CAtlasBitmapResource@@MEAAJAEBU_GUID@@PEAPEAX@Z @ 0x18020C4E0 (-HrFindInterface@CAtlasBitmapResource@@MEAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?HrFindInterface@CD3DDevice@@EEAAJAEBU_GUID@@PEAPEAX@Z @ 0x180240CC0 (-HrFindInterface@CD3DDevice@@EEAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?HrFindInterface@CDDisplaySwapChain@@MEAAJAEBU_GUID@@PEAPEAX@Z @ 0x180246A70 (-HrFindInterface@CDDisplaySwapChain@@MEAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?HrFindInterface@CDDASwapChain@@MEAAJAEBU_GUID@@PEAPEAX@Z @ 0x180251350 (-HrFindInterface@CDDASwapChain@@MEAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?HrFindInterface@CCompSwapChain@@MEAAJAEBU_GUID@@PEAPEAX@Z @ 0x1802520B0 (-HrFindInterface@CCompSwapChain@@MEAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?HrFindInterface@CHolographicExclusiveView@@MEAAJAEBU_GUID@@PEAPEAX@Z @ 0x180257D20 (-HrFindInterface@CHolographicExclusiveView@@MEAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?HrFindInterface@CColorKeyBitmapRealization@@MEAAJAEBU_GUID@@PEAPEAX@Z @ 0x1802634C0 (-HrFindInterface@CColorKeyBitmapRealization@@MEAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?HrFindInterface@CWICBitmapRealization@@MEAAJAEBU_GUID@@PEAPEAX@Z @ 0x1802640C0 (-HrFindInterface@CWICBitmapRealization@@MEAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?HrFindInterface@CColorKeyBitmap@@MEAAJAEBU_GUID@@PEAPEAX@Z @ 0x180268950 (-HrFindInterface@CColorKeyBitmap@@MEAAJAEBU_GUID@@PEAPEAX@Z.c)
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
