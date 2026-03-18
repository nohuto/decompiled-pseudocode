/*
 * XREFs of ?bCalcLayoutUnits@RFONTOBJ@@QEAAHPEAVXDCOBJ@@@Z @ 0x1C0063D48
 * Callers:
 *     ?bRealizeFont@RFONTOBJ@@QEAAHPEAVXDCOBJ@@PEAVPDEVOBJ@@PEAUtagENUMLOGFONTEXDVW@@PEAVPFE@@PEAU_FD_XFORM@@QEAU_POINTL@@KKHHK@Z @ 0x1C0062FD8 (-bRealizeFont@RFONTOBJ@@QEAAHPEAVXDCOBJ@@PEAVPDEVOBJ@@PEAUtagENUMLOGFONTEXDVW@@PEAVPFE@@PEAU_FD_.c)
 * Callees:
 *     ?vAbs@EFLOAT@@QEAAXXZ @ 0x1C0063F68 (-vAbs@EFLOAT@@QEAAXXZ.c)
 *     ?vQuickInit@EXFORMOBJ@@QEAAXAEAVXDCOBJ@@K@Z @ 0x1C00F3124 (-vQuickInit@EXFORMOBJ@@QEAAXAEAVXDCOBJ@@K@Z.c)
 *     ?bUseMetaPtoD@DC@@QEBAHXZ @ 0x1C012E210 (-bUseMetaPtoD@DC@@QEBAHXZ.c)
 */

__int64 __fastcall RFONTOBJ::bCalcLayoutUnits(RFONTOBJ *this, struct XDCOBJ *a2)
{
  int v4; // xmm1_4
  __int64 v5; // rax
  float v6; // xmm2_4
  unsigned int v7; // edi
  __int64 v9; // rax
  __int64 v10; // rax
  _QWORD v11[2]; // [rsp+20h] [rbp-30h] BYREF
  __int64 v12; // [rsp+30h] [rbp-20h] BYREF
  float v13; // [rsp+80h] [rbp+30h] BYREF
  __int64 v14; // [rsp+88h] [rbp+38h] BYREF

  EXFORMOBJ::vQuickInit((EXFORMOBJ *)&v12, a2, 0x204u);
  v4 = *(_DWORD *)(v12 + 12);
  v13 = *(float *)v12;
  LODWORD(v14) = v4;
  EFLOAT::vAbs((EFLOAT *)&v13);
  EFLOAT::vAbs((EFLOAT *)&v14);
  if ( (*(_DWORD *)(v5 + 32) & 1) != 0 && (v6 = v13, v13 == *(float *)&v14) )
  {
    *(float *)(*(_QWORD *)this + 404LL) = v13;
    *(float *)(*(_QWORD *)this + 424LL) = v6;
    *(float *)(*(_QWORD *)this + 408LL) = 1.0 / v6;
    *(float *)(*(_QWORD *)this + 428LL) = 1.0 / v6;
  }
  else
  {
    v7 = 0;
    v14 = 0LL;
    EXFORMOBJ::vQuickInit((EXFORMOBJ *)v11, a2, 0x402u);
    if ( !v11[0] )
      return v7;
    EXFORMOBJ::bXform((EXFORMOBJ *)v11, (struct VECTORFL *)(*(_QWORD *)this + 396LL), (struct VECTORFL *)&v14, 1uLL);
    EFLOAT::eqLength(*(_QWORD *)this + 408LL, &v13, &v14);
    v9 = *(_QWORD *)this;
    *(float *)(v9 + 408) = *(float *)(*(_QWORD *)this + 408LL) * 0.0625;
    *(float *)(v9 + 404) = 1.0 / *(float *)(v9 + 408);
    EXFORMOBJ::bXform((EXFORMOBJ *)v11, (struct VECTORFL *)(*(_QWORD *)this + 416LL), (struct VECTORFL *)&v14, 1uLL);
    EFLOAT::eqLength(*(_QWORD *)this + 428LL, &v13, &v14);
    v10 = *(_QWORD *)this;
    *(float *)(v10 + 428) = *(float *)(*(_QWORD *)this + 428LL) * 0.0625;
    *(float *)(v10 + 424) = 1.0 / *(float *)(v10 + 428);
    if ( *(_DWORD *)(*(_QWORD *)(*(_QWORD *)a2 + 976LL) + 208LL) == 1
      && !(unsigned int)DC::bUseMetaPtoD(*(DC **)a2)
      && (*(_DWORD *)(*(_QWORD *)this + 716LL) & 4) == 0 )
    {
      *(_DWORD *)(*(_QWORD *)this + 680LL) = *(_DWORD *)v11[0];
      *(_DWORD *)(*(_QWORD *)this + 684LL) = *(_DWORD *)(v11[0] + 12LL);
      EFLOAT::vAbs((EFLOAT *)(*(_QWORD *)this + 680LL));
      EFLOAT::vAbs((EFLOAT *)(*(_QWORD *)this + 684LL));
      return 1;
    }
  }
  *(_DWORD *)(*(_QWORD *)this + 680LL) = *(_DWORD *)(*(_QWORD *)this + 408LL);
  *(_DWORD *)(*(_QWORD *)this + 684LL) = *(_DWORD *)(*(_QWORD *)this + 428LL);
  return 1;
}
