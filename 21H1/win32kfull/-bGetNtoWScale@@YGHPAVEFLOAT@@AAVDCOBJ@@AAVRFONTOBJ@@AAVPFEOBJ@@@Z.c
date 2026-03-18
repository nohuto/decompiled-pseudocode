/*
 * XREFs of ?bGetNtoWScale@@YGHPAVEFLOAT@@AAVDCOBJ@@AAVRFONTOBJ@@AAVPFEOBJ@@@Z @ 0x1EB7D0
 * Callers:
 *     _GreGetKerningPairs@12 @ 0x1EBB0B (_GreGetKerningPairs@12.c)
 * Callees:
 *     ?vSetElementsLToFx@EXFORMOBJ@@QAEXKKKK@Z @ 0x84912 (-vSetElementsLToFx@EXFORMOBJ@@QAEXKKKK@Z.c)
 *     ?pptlBaseline@IFIOBJ@@QAEPAU_POINTL@@XZ @ 0x8A758 (-pptlBaseline@IFIOBJ@@QAEPAU_POINTL@@XZ.c)
 *     ??0EXFORMOBJ@@QAE@PAVMATRIX@@K@Z @ 0x8A776 (--0EXFORMOBJ@@QAE@PAVMATRIX@@K@Z.c)
 *     ?vQuickInit@EXFORMOBJ@@QAEXAAVXDCOBJ@@K@Z @ 0x943B6 (-vQuickInit@EXFORMOBJ@@QAEXAAVXDCOBJ@@K@Z.c)
 *     @__security_check_cookie@4 @ 0xED840 (@__security_check_cookie@4.c)
 *     _ltoef_c@8 @ 0xEEE68 (_ltoef_c@8.c)
 *     _divff3_c@12 @ 0xEF19C (_divff3_c@12.c)
 *     _memset @ 0xF92A7 (_memset.c)
 */

int __userpurge bGetNtoWScale@<eax>(
        struct XDCOBJ *a1@<edx>,
        _DWORD *a2@<ecx>,
        struct EFLOAT *a3,
        struct DCOBJ *a4,
        struct RFONTOBJ *a5,
        struct PFEOBJ *a6)
{
  int v6; // edi
  LONG y; // esi
  IFIOBJ *v10; // ecx
  __int64 v11; // rax
  __int64 v12; // rax
  _DWORD v14[3]; // [esp+Ch] [ebp-C4h] BYREF
  _DWORD v15[3]; // [esp+18h] [ebp-B8h] BYREF
  struct MATRIX *v16[3]; // [esp+24h] [ebp-ACh] BYREF
  int v17; // [esp+30h] [ebp-A0h] BYREF
  int v18; // [esp+34h] [ebp-9Ch]
  struct MATRIX *v19; // [esp+38h] [ebp-98h] BYREF
  int v20[2]; // [esp+3Ch] [ebp-94h] BYREF
  _BYTE v21[60]; // [esp+44h] [ebp-8Ch] BYREF
  _BYTE v22[60]; // [esp+80h] [ebp-50h] BYREF
  int v23[2]; // [esp+BCh] [ebp-14h] BYREF
  int v24[2]; // [esp+C4h] [ebp-Ch] BYREF

  v6 = 0;
  memset(v22, 0, sizeof(v22));
  memset(v21, 0, sizeof(v21));
  EXFORMOBJ::EXFORMOBJ((EXFORMOBJ *)v15, (struct MATRIX *)v22, 0);
  EXFORMOBJ::EXFORMOBJ((EXFORMOBJ *)v16, (struct MATRIX *)v21, 0);
  EXFORMOBJ::vSetElementsLToFx(
    (EXFORMOBJ *)v16,
    *(_DWORD *)(*(_DWORD *)a3 + 88),
    *(_DWORD *)(*(_DWORD *)a3 + 92),
    *(_DWORD *)(*(_DWORD *)a3 + 96),
    *(_DWORD *)(*(_DWORD *)a3 + 88));
  EXFORMOBJ::vRemoveTranslation((EXFORMOBJ *)v16);
  EXFORMOBJ::vComputeAccelFlags((EXFORMOBJ *)v16, 8u);
  EXFORMOBJ::vQuickInit((EXFORMOBJ *)&v19, a1, 1026);
  if ( v19 )
  {
    if ( EXFORMOBJ::bMultiply((EXFORMOBJ *)v15, v16[0], v19, 0) )
    {
      EXFORMOBJ::vComputeAccelFlags((EXFORMOBJ *)v15, 8u);
      v14[0] = *(_DWORD *)(*(_DWORD *)a4 + 20);
      y = IFIOBJ::pptlBaseline((IFIOBJ *)v14)->y;
      LODWORD(v11) = IFIOBJ::pptlBaseline(v10)->x;
      ltoef_c(v11, v11, v23);
      LODWORD(v12) = v24;
      ltoef_c(v12, y, v24);
      v17 = 0;
      v18 = 0;
      EFLOAT::eqLength(&v17, v20, v23);
      v20[0] = v17;
      v20[1] = v18;
      divff3_c(v23, v23, v20);
      divff3_c(v24, v24, v20);
      if ( (*(_BYTE *)(v15[0] + 56) & 2) != 0
        || EXFORMOBJ::bXform((EXFORMOBJ *)v15, (struct VECTORFL *)v23, (struct VECTORFL *)v23, 1u) )
      {
        EFLOAT::eqLength(a2, v20, v23);
        if ( *a2 )
          a2[1] += 4;
        return 1;
      }
    }
  }
  return v6;
}
