/*
 * XREFs of ?bCalcLayoutUnits@RFONTOBJ@@QAEHPAVXDCOBJ@@@Z @ 0x8A7A8
 * Callers:
 *     ?bRealizeFont@RFONTOBJ@@QAEHPAVXDCOBJ@@PAVPDEVOBJ@@PAUtagENUMLOGFONTEXDVW@@PAVPFE@@PAU_FD_XFORM@@QAU_POINTL@@KKHHK@Z @ 0x84984 (-bRealizeFont@RFONTOBJ@@QAEHPAVXDCOBJ@@PAVPDEVOBJ@@PAUtagENUMLOGFONTEXDVW@@PAVPFE@@PAU_FD_XFORM@.c)
 * Callees:
 *     ?vNegate@EFLOAT@@QAEXXZ @ 0x22DAE (-vNegate@EFLOAT@@QAEXXZ.c)
 *     ??8EFLOAT@@QAEHAAV0@@Z @ 0x8A5D6 (--8EFLOAT@@QAEHAAV0@@Z.c)
 *     ?vQuickInit@EXFORMOBJ@@QAEXAAVXDCOBJ@@K@Z @ 0x943B6 (-vQuickInit@EXFORMOBJ@@QAEXAAVXDCOBJ@@K@Z.c)
 *     @__security_check_cookie@4 @ 0xED840 (@__security_check_cookie@4.c)
 *     _divff3_c@12 @ 0xEF19C (_divff3_c@12.c)
 *     ?bUseMetaPtoD@DC@@QBEHXZ @ 0x1F4EE2 (-bUseMetaPtoD@DC@@QBEHXZ.c)
 */

int __thiscall RFONTOBJ::bCalcLayoutUnits(RFONTOBJ *this, struct XDCOBJ *a2)
{
  int *v3; // edx
  int v4; // edi
  int v5; // eax
  int v6; // ebx
  int v7; // ecx
  _DWORD *v8; // ecx
  _DWORD *v9; // ecx
  _DWORD *v10; // ecx
  _DWORD *v11; // ecx
  _DWORD *v12; // ecx
  _DWORD *v13; // ecx
  int v15; // ecx
  int v16; // ecx
  int v17; // edx
  int v18; // ecx
  int v19; // ecx
  int v20; // edx
  int v21; // ecx
  EFLOAT *v22; // ecx
  _DWORD *v23; // ecx
  _DWORD *v24; // edx
  int *v25; // [esp+Ch] [ebp-50h] BYREF
  _DWORD v26[3]; // [esp+18h] [ebp-44h] BYREF
  _DWORD v27[2]; // [esp+24h] [ebp-38h] BYREF
  _DWORD v28[2]; // [esp+2Ch] [ebp-30h] BYREF
  int v29; // [esp+34h] [ebp-28h] BYREF
  int v30; // [esp+38h] [ebp-24h]
  int v31; // [esp+3Ch] [ebp-20h] BYREF
  struct XDCOBJ *v32; // [esp+40h] [ebp-1Ch]
  _BYTE v33[16]; // [esp+44h] [ebp-18h] BYREF

  v32 = a2;
  v27[0] = 0x40000000;
  v27[1] = 2;
  EXFORMOBJ::vQuickInit((EXFORMOBJ *)&v25, a2, 0x204u);
  v3 = v25;
  v29 = *v25;
  v30 = v25[1];
  v4 = v25[6];
  v5 = v25[7];
  v28[0] = v4;
  v28[1] = v5;
  if ( v29 < 0 )
    EFLOAT::vNegate((EFLOAT *)&v29);
  if ( v4 < 0 )
    EFLOAT::vNegate((EFLOAT *)v28);
  v6 = 1;
  if ( (v3[14] & 1) != 0 && EFLOAT::operator==(&v29, v28) )
  {
    v31 = 0;
    v32 = 0;
    divff3_c(&v31, v27, v7);
    v8 = *(_DWORD **)this;
    v8[104] = v29;
    v8[105] = v30;
    v9 = *(_DWORD **)this;
    v9[113] = v29;
    v9[114] = v30;
    v10 = *(_DWORD **)this;
    v10[106] = v31;
    v10[107] = v32;
    v11 = *(_DWORD **)this;
    v11[115] = v31;
    v11[116] = v32;
    v12 = *(_DWORD **)this;
    v12[168] = *(_DWORD *)(*(_DWORD *)this + 424);
    v12[169] = v12[107];
    v13 = *(_DWORD **)this;
    v13[170] = *(_DWORD *)(*(_DWORD *)this + 460);
    v13[171] = v13[116];
  }
  else
  {
    memset(v33, 0, sizeof(v33));
    EXFORMOBJ::vQuickInit((EXFORMOBJ *)v26, v32, 0x402u);
    if ( v26[0] )
    {
      EXFORMOBJ::bXform((EXFORMOBJ *)v26, (struct VECTORFL *)(*(_DWORD *)this + 400), (struct VECTORFL *)v33, 1u);
      EFLOAT::eqLength(*(_DWORD *)this + 424, v28, v33);
      v15 = *(_DWORD *)this;
      if ( *(_DWORD *)(*(_DWORD *)this + 424) )
      {
        *(_DWORD *)(v15 + 428) -= 4;
        v15 = *(_DWORD *)this;
      }
      divff3_c(v15 + 416, v27, v15 + 424);
      EXFORMOBJ::bXform((EXFORMOBJ *)v26, (struct VECTORFL *)(*(_DWORD *)this + 436), (struct VECTORFL *)v33, 1u);
      EFLOAT::eqLength(*(_DWORD *)this + 460, v28, v33);
      v16 = *(_DWORD *)this;
      if ( *(_DWORD *)(*(_DWORD *)this + 460) )
      {
        *(_DWORD *)(v16 + 464) -= 4;
        v16 = *(_DWORD *)this;
      }
      divff3_c(v16 + 452, v27, v16 + 460);
      if ( *(_DWORD *)(*(_DWORD *)(*(_DWORD *)v32 + 1020) + 228) != 1
        || DC::bUseMetaPtoD(*(DC **)v32)
        || (v17 = *(_DWORD *)this, (*(_BYTE *)(*(_DWORD *)this + 712) & 4) != 0) )
      {
        v23 = *(_DWORD **)this;
        v23[168] = *(_DWORD *)(*(_DWORD *)this + 424);
        v23[169] = v23[107];
        v24 = *(_DWORD **)this;
        v24[170] = *(_DWORD *)(*(_DWORD *)this + 460);
        v24[171] = v24[116];
      }
      else
      {
        v18 = v26[0];
        *(_DWORD *)(v17 + 672) = *(_DWORD *)v26[0];
        *(_DWORD *)(v17 + 676) = *(_DWORD *)(v18 + 4);
        v19 = v26[0];
        v20 = *(_DWORD *)this;
        *(_DWORD *)(v20 + 680) = *(_DWORD *)(v26[0] + 24);
        *(_DWORD *)(v20 + 684) = *(_DWORD *)(v19 + 28);
        v21 = *(_DWORD *)this;
        if ( *(int *)(*(_DWORD *)this + 672) < 0 )
        {
          EFLOAT::vNegate((EFLOAT *)(*(_DWORD *)this + 672));
          v21 = *(_DWORD *)this;
        }
        v22 = (EFLOAT *)(v21 + 680);
        if ( *(int *)v22 < 0 )
          EFLOAT::vNegate(v22);
      }
    }
    else
    {
      return 0;
    }
  }
  return v6;
}
