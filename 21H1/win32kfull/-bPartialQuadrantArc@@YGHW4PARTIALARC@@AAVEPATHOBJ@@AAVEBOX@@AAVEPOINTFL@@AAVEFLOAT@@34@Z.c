/*
 * XREFs of ?bPartialQuadrantArc@@YGHW4PARTIALARC@@AAVEPATHOBJ@@AAVEBOX@@AAVEPOINTFL@@AAVEFLOAT@@34@Z @ 0x214E87
 * Callers:
 *     ?bPartialArc@@YGHW4PARTIALARC@@AAVEPATHOBJ@@AAVEBOX@@AAVEPOINTFL@@JAAVEFLOAT@@3J4J@Z @ 0x214C67 (-bPartialArc@@YGHW4PARTIALARC@@AAVEPATHOBJ@@AAVEBOX@@AAVEPOINTFL@@JAAVEFLOAT@@3J4J@Z.c)
 * Callees:
 *     ?vNegate@EFLOAT@@QAEXXZ @ 0x22DAE (-vNegate@EFLOAT@@QAEXXZ.c)
 *     ??XEPOINTFL@@QAEXVEFLOAT@@@Z @ 0x22DFC (--XEPOINTFL@@QAEXVEFLOAT@@@Z.c)
 *     ??OEFLOAT@@QAEHAAV0@@Z @ 0x22E48 (--OEFLOAT@@QAEHAAV0@@Z.c)
 *     @__security_check_cookie@4 @ 0xED840 (@__security_check_cookie@4.c)
 *     _subff3_c@12 @ 0xEF05B (_subff3_c@12.c)
 *     _addff3_c@12 @ 0xEF0B5 (_addff3_c@12.c)
 *     _mulff3_c@12 @ 0xEF172 (_mulff3_c@12.c)
 *     _divff3_c@12 @ 0xEF19C (_divff3_c@12.c)
 *     ??YEPOINTFL@@QAEXAAV0@@Z @ 0x214A85 (--YEPOINTFL@@QAEXAAV0@@Z.c)
 *     ?ptlXform@EBOX@@QAE?AU_POINTL@@AAVEPOINTFL@@@Z @ 0x215265 (-ptlXform@EBOX@@QAE-AU_POINTL@@AAVEPOINTFL@@@Z.c)
 */

int __fastcall bPartialQuadrantArc(int a1, EPATHOBJ *a2, EBOX *a3, int *a4, _DWORD *a5, int *a6, int *a7)
{
  int *v8; // esi
  __int64 v9; // rax
  int *v10; // esi
  int v11; // esi
  EPATHOBJ *v12; // edi
  int v13; // ebx
  int v14; // eax
  EBOX *v15; // ebx
  int *x; // eax
  int *v17; // eax
  int v19[2]; // [esp+10h] [ebp-BCh] BYREF
  __int64 v20; // [esp+18h] [ebp-B4h] BYREF
  EBOX *v21; // [esp+20h] [ebp-ACh]
  int *v22; // [esp+24h] [ebp-A8h]
  EPATHOBJ *v23; // [esp+28h] [ebp-A4h]
  __int64 v24; // [esp+2Ch] [ebp-A0h] BYREF
  int v25[2]; // [esp+34h] [ebp-98h] BYREF
  int v26; // [esp+3Ch] [ebp-90h] BYREF
  _DWORD *v27; // [esp+40h] [ebp-8Ch]
  int v28; // [esp+44h] [ebp-88h] BYREF
  int *v29; // [esp+48h] [ebp-84h]
  int v30; // [esp+4Ch] [ebp-80h]
  int v31; // [esp+50h] [ebp-7Ch]
  int v32; // [esp+54h] [ebp-78h]
  int v33; // [esp+58h] [ebp-74h]
  int v34; // [esp+5Ch] [ebp-70h]
  int v35; // [esp+60h] [ebp-6Ch]
  int v36; // [esp+64h] [ebp-68h]
  int v37; // [esp+68h] [ebp-64h]
  int v38[4]; // [esp+6Ch] [ebp-60h] BYREF
  int v39; // [esp+7Ch] [ebp-50h] BYREF
  int v40; // [esp+80h] [ebp-4Ch]
  int v41; // [esp+84h] [ebp-48h]
  int v42; // [esp+88h] [ebp-44h]
  int v43; // [esp+8Ch] [ebp-40h] BYREF
  int v44; // [esp+90h] [ebp-3Ch]
  int v45; // [esp+94h] [ebp-38h]
  int v46; // [esp+98h] [ebp-34h]
  int v47; // [esp+9Ch] [ebp-30h] BYREF
  int v48; // [esp+A0h] [ebp-2Ch]
  int v49; // [esp+A4h] [ebp-28h] BYREF
  int v50; // [esp+A8h] [ebp-24h]
  struct _POINTL v51; // [esp+ACh] [ebp-20h] BYREF
  int v52; // [esp+B4h] [ebp-18h]
  int v53; // [esp+B8h] [ebp-14h]
  int v54; // [esp+BCh] [ebp-10h]
  int v55; // [esp+C0h] [ebp-Ch]

  v21 = a3;
  v27 = a5;
  v29 = a7;
  v19[0] = a4[2];
  v19[1] = a4[3];
  v23 = a2;
  v22 = a6;
  mulff3_c(v19, v19, a6);
  v25[0] = *a4;
  v25[1] = a4[1];
  mulff3_c(v25, v25, a6 + 2);
  subff3_c(v25, v25, v19);
  if ( v25[0] < 0 )
    EFLOAT::vNegate((EFLOAT *)v25);
  if ( EFLOAT::operator>(v25, _FP_EPSILON) )
  {
    v47 = a6[2];
    v48 = a6[3];
    subff3_c(&v47, &v47, a4 + 2);
    divff3_c(&v47, &v47, v25);
    v49 = *a4;
    v50 = a4[1];
    subff3_c(&v49, &v49, a6);
    divff3_c(&v49, &v49, v25);
    v28 = *v29;
    v29 = (int *)v29[1];
    subff3_c(&v28, &v28, v27);
    v29 = (int *)((char *)v29 - 1);
    v9 = efCos(v28, v29);
    v20 = v9;
    if ( (int)v9 < 0 )
    {
      EFLOAT::vNegate((EFLOAT *)&v20);
      v9 = v20;
    }
    v24 = v9;
    addff3_c((int *)&v24, (int *)&v24, (int *)_FP_1_0[0]);
    v26 = _FP_4DIV3[0];
    v27 = (_DWORD *)_FP_4DIV3[1];
    mulff3_c(&v26, &v26, &v20);
    divff3_c(&v26, &v26, (int *)&v24);
    v28 = _FP_1_0[0];
    v29 = (int *)_FP_1_0[1];
    subff3_c(&v28, &v28, &v26);
    v38[0] = v47;
    v38[1] = v48;
    v38[2] = v49;
    v38[3] = v50;
    EPOINTFL::operator*=((char *)v38, v26, (int)v27);
    v34 = *a4;
    v35 = a4[1];
    v36 = a4[2];
    v37 = a4[3];
    v39 = *a4;
    v40 = a4[1];
    v41 = a4[2];
    v42 = a4[3];
    EPOINTFL::operator*=((char *)&v39, v28, (int)v29);
    EPOINTFL::operator+=(&v39, v38);
    v43 = *v22;
    v44 = v22[1];
    v45 = v22[2];
    v46 = v22[3];
    EPOINTFL::operator*=((char *)&v43, v28, (int)v29);
    EPOINTFL::operator+=(&v43, v38);
    v8 = v22;
  }
  else
  {
    v34 = *a4;
    v35 = a4[1];
    v36 = a4[2];
    v37 = a4[3];
    v39 = v34;
    v40 = v35;
    v41 = v36;
    v42 = v37;
    v43 = *v22;
    v44 = v22[1];
    v45 = v22[2];
    v46 = v22[3];
    v8 = &v43;
  }
  v30 = *v8;
  v10 = v8 + 1;
  v31 = *v10++;
  v32 = *v10;
  v33 = v10[1];
  v11 = 0;
  if ( a1 )
  {
    EBOX::ptlXform(v21, (struct EPOINTFL *)&v24);
    v12 = v23;
    v13 = a1 - 1;
    if ( !v13 )
    {
      v14 = EPATHOBJ::bMoveTo(v23, 0, (struct _POINTL *)&v24);
LABEL_13:
      if ( !v14 )
        return v11;
      goto LABEL_16;
    }
    if ( v13 == 1 )
    {
      v14 = EPATHOBJ::bPolyLineTo(v23, 0, (struct _POINTL *)&v24, 1u);
      goto LABEL_13;
    }
  }
  else
  {
    v12 = v23;
  }
LABEL_16:
  v15 = v21;
  v51 = *(struct _POINTL *)*(_QWORD *)&EBOX::ptlXform(v21, (struct EPOINTFL *)&v24);
  x = (int *)EBOX::ptlXform(v15, (struct EPOINTFL *)&v24).x;
  v52 = *x;
  v53 = x[1];
  v17 = (int *)EBOX::ptlXform(v15, (struct EPOINTFL *)&v24).x;
  v54 = *v17;
  v55 = v17[1];
  return EPATHOBJ::bPolyBezierTo(v12, 0, &v51, 3u);
}
