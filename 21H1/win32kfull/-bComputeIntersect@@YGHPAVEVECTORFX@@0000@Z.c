/*
 * XREFs of ?bComputeIntersect@@YGHPAVEVECTORFX@@0000@Z @ 0x234D9E
 * Callers:
 *     ?vAddJoin@WIDENER@@IAEXH@Z @ 0x23631A (-vAddJoin@WIDENER@@IAEXH@Z.c)
 * Callees:
 *     _ltoef_c@8 @ 0xEEE68 (_ltoef_c@8.c)
 *     _eftol_c@12 @ 0xEEF16 (_eftol_c@12.c)
 *     _addff3_c@12 @ 0xEF0B5 (_addff3_c@12.c)
 *     _mulff3_c@12 @ 0xEF172 (_mulff3_c@12.c)
 *     _divff3_c@12 @ 0xEF19C (_divff3_c@12.c)
 *     ?bIs31Bits@@YGHJ@Z @ 0x2353F5 (-bIs31Bits@@YGHJ@Z.c)
 */

int __userpurge bComputeIntersect@<eax>(
        __int64 a1@<edx:eax>,
        _DWORD *a2@<ecx>,
        struct EVECTORFX *a3,
        struct EVECTORFX *a4,
        struct EVECTORFX *a5,
        struct EVECTORFX *a6,
        struct EVECTORFX *a7)
{
  __int64 v8; // rax
  __int64 v9; // rax
  __int64 v10; // rax
  int *v11; // esi
  __int64 v12; // rax
  __int64 v13; // rax
  __int64 v14; // rax
  __int64 v15; // rax
  __int64 v16; // rax
  __int64 v17; // rax
  int v18; // esi
  int v19; // edx
  int v20; // esi
  int v22; // [esp+0h] [ebp-38h]
  int v23; // [esp+0h] [ebp-38h]
  int v24; // [esp+0h] [ebp-38h]
  int v25; // [esp+0h] [ebp-38h]
  int v26; // [esp+Ch] [ebp-2Ch] BYREF
  int v27; // [esp+10h] [ebp-28h] BYREF
  __int64 v28; // [esp+14h] [ebp-24h] BYREF
  int v29[2]; // [esp+1Ch] [ebp-1Ch] BYREF
  int v30[2]; // [esp+24h] [ebp-14h] BYREF
  int v31[2]; // [esp+2Ch] [ebp-Ch] BYREF
  int *v32; // [esp+34h] [ebp-4h]

  v32 = (int *)HIDWORD(a1);
  v31[0] = 0;
  v31[1] = 0;
  v30[0] = 0;
  v30[1] = 0;
  v29[0] = 0;
  v29[1] = 0;
  v28 = 0LL;
  LODWORD(a1) = *(_DWORD *)a3 - *a2;
  ltoef_c(a1, a1, v29);
  LODWORD(v8) = -*((_DWORD *)a4 + 1);
  ltoef_c(v8, v8, v30);
  mulff3_c(v29, v29, v30);
  LODWORD(v9) = *((_DWORD *)a3 + 1) - a2[1];
  ltoef_c(v9, v9, v31);
  LODWORD(v10) = v30;
  ltoef_c(v10, *(_DWORD *)a4, v30);
  mulff3_c(v31, v31, v30);
  addff3_c(v29, v29, v31);
  v11 = v32;
  LODWORD(v12) = &v28;
  ltoef_c(v12, *v32, (int *)&v28);
  LODWORD(v13) = -*((_DWORD *)a4 + 1);
  ltoef_c(v13, v13, v30);
  mulff3_c((int *)&v28, &v28, v30);
  LODWORD(v14) = v31;
  ltoef_c(v14, v11[1], v31);
  LODWORD(v15) = v30;
  ltoef_c(v15, *(_DWORD *)a4, v30);
  mulff3_c(v31, v31, v30);
  addff3_c((int *)&v28, (int *)&v28, v31);
  if ( !v28 )
    return 0;
  divff3_c(v29, v29, (int *)&v28);
  LODWORD(v16) = v31;
  ltoef_c(v16, *v11, v31);
  LODWORD(v17) = v30;
  ltoef_c(v17, v11[1], v30);
  mulff3_c(v31, v31, v29);
  mulff3_c(v30, v30, v29);
  if ( !eftol_c(v31, &v26, 1) )
    return 0;
  if ( eftol_c(v30, &v27, 1)
    && bIs31Bits(v22)
    && (v18 = v27, bIs31Bits(v23))
    && (v20 = a2[1] + v18, *(_DWORD *)a5 = v19 + *a2, *((_DWORD *)a5 + 1) = v20, bIs31Bits(v24))
    && bIs31Bits(v25) )
  {
    return 1;
  }
  else
  {
    return 0;
  }
}
