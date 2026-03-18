/*
 * XREFs of ?vArctan@@YGXVEFLOAT@@0AAV1@AAJ@Z @ 0x215329
 * Callers:
 *     ?lfOrientation@IFIOBJ@@QAEJXZ @ 0x8991C (-lfOrientation@IFIOBJ@@QAEJXZ.c)
 *     _cjIFIMetricsToOTMW@24 @ 0x89FBE (_cjIFIMetricsToOTMW@24.c)
 *     _GreAngleArc@24 @ 0x1FF67A (_GreAngleArc@24.c)
 *     _NtGdiArcInternal@40 @ 0x2158FA (_NtGdiArcInternal@40.c)
 * Callees:
 *     ?vNegate@EFLOAT@@QAEXXZ @ 0x22DAE (-vNegate@EFLOAT@@QAEXXZ.c)
 *     ??OEFLOAT@@QAEHAAV0@@Z @ 0x22E48 (--OEFLOAT@@QAEHAAV0@@Z.c)
 *     _eftol_c@12 @ 0xEEF16 (_eftol_c@12.c)
 *     _fraction_c@8 @ 0xEEFAF (_fraction_c@8.c)
 *     _subff3_c@12 @ 0xEF05B (_subff3_c@12.c)
 *     _addff3_c@12 @ 0xEF0B5 (_addff3_c@12.c)
 *     _mulff3_c@12 @ 0xEF172 (_mulff3_c@12.c)
 *     _divff3_c@12 @ 0xEF19C (_divff3_c@12.c)
 */

int __fastcall vArctan(int *a1, _DWORD *a2, int a3, int a4, int a5, int a6)
{
  int v6; // edi
  int v7; // ebx
  int v9; // edx
  int v10; // edx
  int v11; // eax
  int v12; // ecx
  int result; // eax
  int v14; // edx
  _DWORD v15[2]; // [esp+Ch] [ebp-14h] BYREF
  int v16[2]; // [esp+14h] [ebp-Ch] BYREF
  _DWORD *v17; // [esp+1Ch] [ebp-4h]

  v6 = a3;
  v7 = 0;
  v17 = a2;
  if ( a3 < 0 )
  {
    v7 = 1;
    EFLOAT::vNegate((EFLOAT *)&a3);
    v6 = a3;
  }
  if ( a5 < 0 )
  {
    EFLOAT::vNegate((EFLOAT *)&a5);
    v7 = v9;
  }
  if ( EFLOAT::operator>(&a5, &a3) )
  {
    v10 = a4;
    v11 = v6;
    v6 = a5;
    v7 |= 4u;
    v12 = a6;
    a3 = a5;
    a4 = a6;
  }
  else
  {
    v10 = a6;
    v12 = a4;
    v11 = a5;
  }
  if ( v6 || v12 )
  {
    v16[0] = v11;
    v16[1] = v10;
    mulff3_c(v16, v16, _FP_ARCTAN_TABLE_SIZE);
    divff3_c(v16, v16, &a3);
    a6 = 0;
    eftol_c(v16, &a6, 0);
    v15[0] = 0;
    v15[1] = 0;
    fraction_c(v15, v16);
    v14 = a6;
    *a1 = _gaefArctan[2 * a6 + 2];
    a1[1] = _gaefArctan[2 * v14 + 3];
    subff3_c(a1, a1, &_gaefArctan[2 * v14]);
    mulff3_c(a1, a1, v15);
    addff3_c(a1, a1, &_gaefArctan[2 * a6]);
    if ( v7 == 1 )
    {
      EFLOAT::vNegate((EFLOAT *)a1);
    }
    else
    {
      if ( v7 == 2 )
      {
        EFLOAT::vNegate((EFLOAT *)a1);
        addff3_c(a1, a1, _FP_360_0);
        goto LABEL_25;
      }
      if ( v7 != 3 )
      {
        if ( v7 == 4 )
        {
          EFLOAT::vNegate((EFLOAT *)a1);
        }
        else if ( v7 != 5 )
        {
          if ( v7 != 6 )
          {
            if ( v7 != 7 )
            {
LABEL_25:
              result = (unsigned __int8)byte_25D618[v7];
              goto LABEL_26;
            }
            EFLOAT::vNegate((EFLOAT *)a1);
          }
          addff3_c(a1, a1, _FP_270_0);
          goto LABEL_25;
        }
        addff3_c(a1, a1, _FP_90_0);
        goto LABEL_25;
      }
    }
    addff3_c(a1, a1, _FP_180_0);
    goto LABEL_25;
  }
  *a1 = _FP_0_0[0];
  a1[1] = _FP_0_0[1];
  result = 0;
LABEL_26:
  *v17 = result;
  return result;
}
