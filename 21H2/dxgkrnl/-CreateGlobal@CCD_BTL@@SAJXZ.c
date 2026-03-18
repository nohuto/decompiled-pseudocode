/*
 * XREFs of ?CreateGlobal@CCD_BTL@@SAJXZ @ 0x1C01F4944
 * Callers:
 *     DriverEntry @ 0x1C03C7238 (DriverEntry.c)
 * Callees:
 *     ??_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x1C000CD40 (--_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 *     memset @ 0x1C002CFC0 (memset.c)
 *     ??0CCD_BTL@@IEAA@XZ @ 0x1C01F49B8 (--0CCD_BTL@@IEAA@XZ.c)
 */

__int64 __fastcall CCD_BTL::CreateGlobal(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  CCD_BTL *v4; // rax
  CCD_BTL *v5; // rbx

  if ( CCD_BTL::m_pGlobalBtl )
  {
    WdLogSingleEntry0(1LL);
    return 3221225473LL;
  }
  else
  {
    v4 = (CCD_BTL *)operator new[](0xA0uLL, 0x63644356u, 256LL, a4);
    v5 = v4;
    if ( v4 )
    {
      memset(v4, 0, 0xA0uLL);
      CCD_BTL::CCD_BTL(v5);
      CCD_BTL::m_pGlobalBtl = v5;
      *(_QWORD *)v5 = &CCD_BTL_FULL::`vftable';
      return 0LL;
    }
    else
    {
      CCD_BTL::m_pGlobalBtl = 0LL;
      WdLogSingleEntry1(6LL, 160LL);
      return 3221225495LL;
    }
  }
}
