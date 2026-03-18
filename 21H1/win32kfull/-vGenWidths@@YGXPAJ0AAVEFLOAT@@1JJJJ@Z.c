/*
 * XREFs of ?vGenWidths@@YGXPAJ0AAVEFLOAT@@1JJJJ@Z @ 0x2252AD
 * Callers:
 *     ?vCharPos_G3@ESTROBJ@@QAEXAAVXDCOBJ@@AAVRFONTOBJ@@JJJJJPBJPAJ@Z @ 0x2249F0 (-vCharPos_G3@ESTROBJ@@QAEXAAVXDCOBJ@@AAVRFONTOBJ@@JJJJJPBJPAJ@Z.c)
 *     ?vCharPos_G4@ESTROBJ@@QAEXAAVXDCOBJ@@AAVRFONTOBJ@@JJPAJ@Z @ 0x224D70 (-vCharPos_G4@ESTROBJ@@QAEXAAVXDCOBJ@@AAVRFONTOBJ@@JJPAJ@Z.c)
 * Callees:
 *     _ltoef_c@8 @ 0xEEE68 (_ltoef_c@8.c)
 *     _eftol_c@12 @ 0xEEF16 (_eftol_c@12.c)
 *     _addff3_c@12 @ 0xEF0B5 (_addff3_c@12.c)
 *     _mulff3_c@12 @ 0xEF172 (_mulff3_c@12.c)
 *     _divff3_c@12 @ 0xEF19C (_divff3_c@12.c)
 *     _sqrtf2_c@8 @ 0xEF21B (_sqrtf2_c@8.c)
 */

void __userpurge vGenWidths(
        int *a1@<edx>,
        int *a2@<ecx>,
        int *a3,
        int *a4,
        struct EFLOAT *a5,
        struct EFLOAT *a6,
        struct EFLOAT *a7,
        int a8,
        int a9,
        int a10)
{
  int v11; // edx
  int v12; // esi
  int v13; // edi
  int v14; // ecx
  int v15; // esi
  int v16; // edi
  int v17; // edi
  int v18; // esi
  __int64 v19; // rax
  __int64 v20; // rax
  __int64 v21; // rax
  int v22[2]; // [esp+Ch] [ebp-20h] BYREF
  int v23; // [esp+14h] [ebp-18h] BYREF
  int v24; // [esp+18h] [ebp-14h]
  int v25[2]; // [esp+1Ch] [ebp-10h] BYREF
  int *v26; // [esp+24h] [ebp-8h]
  int *v27; // [esp+28h] [ebp-4h]

  v27 = a2;
  v25[0] = 0;
  v26 = a1;
  v25[1] = 0;
  v23 = 0;
  v24 = 0;
  if ( a5 )
  {
    v11 = *a3;
    if ( *a3 || a3[1] )
    {
      v12 = (int)a7;
      v13 = (int)a6;
      if ( a7 == a6 )
      {
        v12 = a8 / -4;
        v11 = *a3;
        v13 = a8 / -4 + a8 / 2;
      }
      if ( v12 >= 0 )
        v12 = 0;
      if ( v13 <= 0 )
        v13 = 0;
      if ( v11 < 0 )
      {
        v14 = v12;
        v15 = v13;
        v16 = v14;
        v12 = -v15;
        a2 = v27;
        v13 = -v16;
      }
      v17 = a8 / 16 + v13;
      if ( !v17 )
        v17 = 1;
      v18 = v12 - a8 / 16;
      if ( !v18 )
        v18 = -1;
      if ( *a4 || a4[1] )
      {
        LODWORD(v19) = &v23;
        HIDWORD(v19) = a8 % 16;
        ltoef_c(v19, (int)a5, &v23);
        --v24;
        divff3_c(&v23, a4, &v23);
        mulff3_c(&v23, &v23, &v23);
        LODWORD(v20) = v25;
        ltoef_c(v20, v18, v25);
        divff3_c(v25, a3, v25);
        mulff3_c(v25, v25, v25);
        addff3_c(v25, v25, &v23);
        sqrtf2_c(v25, (unsigned int *)v25);
        v22[0] = 0x40000000;
        v22[1] = 2;
        divff3_c(v25, v22, v25);
        eftol_c(v25, v27, 1);
        LODWORD(v21) = v25;
        ltoef_c(v21, v17, v25);
        divff3_c(v25, a3, v25);
        mulff3_c(v25, v25, v25);
        addff3_c(v25, v25, &v23);
        sqrtf2_c(v25, (unsigned int *)v25);
        divff3_c(v25, v22, v25);
        eftol_c(v25, v26, 1);
      }
      else
      {
        *v26 = v17;
        *a2 = -v18;
      }
    }
    else
    {
      *a2 = (int)a5 / 2;
      *a1 = (int)a5 - (int)a5 / 2;
    }
  }
  else
  {
    *a1 = 0;
    *a2 = 0;
  }
}
