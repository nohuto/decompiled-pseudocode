/*
 * XREFs of ?bIFIMetricsToLogFontW2@@YGHAAVDCOBJ@@PAUtagENUMLOGFONTEXW@@PAU_IFIMETRICS@@VEFLOATEXT@@@Z @ 0x897A0
 * Callers:
 *     _cjCopyFontDataW@32 @ 0x8910A (_cjCopyFontDataW@32.c)
 * Callees:
 *     ?vIFIMetricsToEnumLogFontW@@YGXPAUtagENUMLOGFONTW@@PAU_IFIMETRICS@@@Z @ 0x89836 (-vIFIMetricsToEnumLogFontW@@YGXPAUtagENUMLOGFONTW@@PAU_IFIMETRICS@@@Z.c)
 *     ?pptlBaseline@IFIOBJ@@QAEPAU_POINTL@@XZ @ 0x8A758 (-pptlBaseline@IFIOBJ@@QAEPAU_POINTL@@XZ.c)
 *     ?vQuickInit@EXFORMOBJ@@QAEXAAVXDCOBJ@@K@Z @ 0x943B6 (-vQuickInit@EXFORMOBJ@@QAEXAAVXDCOBJ@@K@Z.c)
 *     @__security_check_cookie@4 @ 0xED840 (@__security_check_cookie@4.c)
 *     _lCvt@12 @ 0xEE304 (_lCvt@12.c)
 *     _ltoef_c@8 @ 0xEEE68 (_ltoef_c@8.c)
 *     ?eqDiv@EPOINTFL@@QAEAAV1@AAV1@AAVEFLOAT@@@Z @ 0x206A20 (-eqDiv@EPOINTFL@@QAEAAV1@AAV1@AAVEFLOAT@@@Z.c)
 */

int __fastcall bIFIMetricsToLogFontW2(struct XDCOBJ *a1, _DWORD *a2, int a3, int a4, int a5)
{
  int v7; // edi
  LONG y; // esi
  IFIOBJ *v10; // ecx
  struct _POINTL *v11; // eax
  LONG x; // esi
  IFIOBJ *v13; // ecx
  struct _POINTL *v14; // eax
  struct tagENUMLOGFONTW *v15; // [esp+0h] [ebp-84h]
  struct _IFIMETRICS *v16; // [esp+4h] [ebp-80h]
  _DWORD v17[3]; // [esp+Ch] [ebp-78h] BYREF
  _BYTE v18[8]; // [esp+18h] [ebp-6Ch] BYREF
  _DWORD v19[3]; // [esp+20h] [ebp-64h] BYREF
  _DWORD v20[2]; // [esp+2Ch] [ebp-58h] BYREF
  _DWORD v21[2]; // [esp+34h] [ebp-50h] BYREF
  _BYTE v22[16]; // [esp+3Ch] [ebp-48h] BYREF
  _BYTE v23[8]; // [esp+4Ch] [ebp-38h] BYREF
  _BYTE v24[8]; // [esp+54h] [ebp-30h] BYREF
  _BYTE v25[16]; // [esp+5Ch] [ebp-28h] BYREF
  _BYTE v26[8]; // [esp+6Ch] [ebp-18h] BYREF
  _BYTE v27[8]; // [esp+74h] [ebp-10h] BYREF

  v19[0] = a3;
  vIFIMetricsToEnumLogFontW(v15, v16);
  if ( (*(_DWORD *)(a3 + 48) & 0x3000010) != 0 )
  {
    a2[1] = lCvt(a4, a5, *(__int16 *)(v19[0] + 76));
    *a2 = lCvt(a4, a5, *(__int16 *)(v19[0] + 60) + *(__int16 *)(v19[0] + 62));
  }
  EXFORMOBJ::vQuickInit((EXFORMOBJ *)v17, a1, 0x402u);
  v7 = 0;
  if ( v17[0] )
  {
    v7 = 1;
    if ( (*(_BYTE *)(v17[0] + 56) & 2) == 0 )
    {
      y = IFIOBJ::pptlBaseline((IFIOBJ *)v19)->y;
      v11 = IFIOBJ::pptlBaseline(v10);
      ltoef_c(v11->x, v26);
      ltoef_c(y, v27);
      EFLOAT::eqLength(v21, v18, v26);
      EPOINTFL::eqDiv((EPOINTFL *)v25, (struct EPOINTFL *)v26, (struct EFLOAT *)v21);
      if ( (*(_BYTE *)(v17[0] + 56) & 2) == 0
        && !EXFORMOBJ::bXform((EXFORMOBJ *)v17, (struct VECTORFL *)v25, (struct VECTORFL *)v25, 1u) )
      {
        return 0;
      }
      EFLOAT::eqLength(v21, v18, v25);
      a2[1] = lCvt(v21[0], v21[1], a2[1]);
      x = IFIOBJ::pptlBaseline((IFIOBJ *)v19)->x;
      v14 = IFIOBJ::pptlBaseline(v13);
      ltoef_c(-v14->y, v23);
      ltoef_c(x, v24);
      EFLOAT::eqLength(v20, v18, v23);
      EPOINTFL::eqDiv((EPOINTFL *)v22, (struct EPOINTFL *)v23, (struct EFLOAT *)v20);
      if ( (*(_BYTE *)(v17[0] + 56) & 2) != 0
        || EXFORMOBJ::bXform((EXFORMOBJ *)v17, (struct VECTORFL *)v22, (struct VECTORFL *)v22, 1u) )
      {
        EFLOAT::eqLength(v20, v18, v22);
        *a2 = lCvt(v20[0], v20[1], *a2);
      }
      else
      {
        return 0;
      }
    }
  }
  return v7;
}
