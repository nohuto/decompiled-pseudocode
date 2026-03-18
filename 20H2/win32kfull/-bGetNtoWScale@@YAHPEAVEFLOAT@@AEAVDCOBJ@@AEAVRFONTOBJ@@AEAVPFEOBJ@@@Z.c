/*
 * XREFs of ?bGetNtoWScale@@YAHPEAVEFLOAT@@AEAVDCOBJ@@AEAVRFONTOBJ@@AEAVPFEOBJ@@@Z @ 0x1C01349A0
 * Callers:
 *     GreGetKerningPairs @ 0x1C0134784 (GreGetKerningPairs.c)
 * Callees:
 *     ?pptlBaseline@IFIOBJ@@QEAAPEAU_POINTL@@XZ @ 0x1C0063D28 (-pptlBaseline@IFIOBJ@@QEAAPEAU_POINTL@@XZ.c)
 *     ?vQuickInit@EXFORMOBJ@@QEAAXAEAVXDCOBJ@@K@Z @ 0x1C00F3124 (-vQuickInit@EXFORMOBJ@@QEAAXAEAVXDCOBJ@@K@Z.c)
 *     ??0EXFORMOBJ@@QEAA@PEAVMATRIX@@K@Z @ 0x1C0134C14 (--0EXFORMOBJ@@QEAA@PEAVMATRIX@@K@Z.c)
 *     __security_check_cookie @ 0x1C015A0C0 (__security_check_cookie.c)
 */

__int64 __fastcall bGetNtoWScale(struct EFLOAT *a1, struct DCOBJ *a2, struct RFONTOBJ *a3, struct PFEOBJ *a4)
{
  int v8; // xmm0_4
  int v9; // xmm2_4
  int v10; // xmm1_4
  unsigned int v11; // ebx
  float x; // xmm0_4
  int v13; // r9d
  float v15; // [rsp+28h] [rbp-79h] BYREF
  float v16; // [rsp+2Ch] [rbp-75h]
  float v17; // [rsp+30h] [rbp-71h] BYREF
  struct MATRIX *v18[2]; // [rsp+38h] [rbp-69h] BYREF
  _BYTE v19[8]; // [rsp+48h] [rbp-59h] BYREF
  _QWORD v20[2]; // [rsp+50h] [rbp-51h] BYREF
  _QWORD v21[2]; // [rsp+60h] [rbp-41h] BYREF
  struct MATRIX *v22; // [rsp+70h] [rbp-31h] BYREF
  _OWORD v23[2]; // [rsp+80h] [rbp-21h] BYREF
  int v24; // [rsp+A0h] [rbp-1h]
  _OWORD v25[2]; // [rsp+A8h] [rbp+7h] BYREF
  int v26; // [rsp+C8h] [rbp+27h]

  v24 = 0;
  v26 = 0;
  memset(v23, 0, sizeof(v23));
  memset(v25, 0, sizeof(v25));
  EXFORMOBJ::EXFORMOBJ((EXFORMOBJ *)v20, (struct MATRIX *)v23, 0);
  EXFORMOBJ::EXFORMOBJ((EXFORMOBJ *)v18, (struct MATRIX *)v25, 0);
  v8 = *(_DWORD *)(*(_QWORD *)a3 + 140LL);
  v9 = *(_DWORD *)(*(_QWORD *)a3 + 136LL);
  v10 = *(_DWORD *)(*(_QWORD *)a3 + 144LL);
  *(_DWORD *)v18[0] = v9;
  *((_DWORD *)v18[0] + 1) = v8;
  *((_DWORD *)v18[0] + 2) = v10;
  *((_DWORD *)v18[0] + 3) = v9;
  *(float *)v18[0] = *(float *)v18[0] * 16.0;
  *((float *)v18[0] + 1) = *((float *)v18[0] + 1) * 16.0;
  *((float *)v18[0] + 2) = *((float *)v18[0] + 2) * 16.0;
  *((float *)v18[0] + 3) = *((float *)v18[0] + 3) * 16.0;
  EXFORMOBJ::vRemoveTranslation((EXFORMOBJ *)v18);
  EXFORMOBJ::vComputeAccelFlags((EXFORMOBJ *)v18, 8u);
  EXFORMOBJ::vQuickInit((EXFORMOBJ *)&v22, a2, 1026);
  v11 = 0;
  if ( v22 )
  {
    if ( EXFORMOBJ::bMultiply((EXFORMOBJ *)v20, v18[0], v22, 0) )
    {
      EXFORMOBJ::vComputeAccelFlags((EXFORMOBJ *)v20, 8u);
      v21[0] = *(_QWORD *)(*(_QWORD *)a4 + 32LL);
      IFIOBJ::pptlBaseline((IFIOBJ *)v21);
      x = (float)IFIOBJ::pptlBaseline((IFIOBJ *)v21)->x;
      v17 = 0.0;
      v16 = (float)v13;
      v15 = x;
      EFLOAT::eqLength(&v17, v19, &v15);
      v15 = v15 / v17;
      v16 = v16 / v17;
      if ( (*(_DWORD *)(v20[0] + 32LL) & 2) != 0
        || EXFORMOBJ::bXform((EXFORMOBJ *)v20, (struct VECTORFL *)&v15, (struct VECTORFL *)&v15, 1uLL) )
      {
        EFLOAT::eqLength(a1, v19, &v15);
        v11 = 1;
        *(float *)a1 = *(float *)a1 * 16.0;
      }
    }
  }
  return v11;
}
