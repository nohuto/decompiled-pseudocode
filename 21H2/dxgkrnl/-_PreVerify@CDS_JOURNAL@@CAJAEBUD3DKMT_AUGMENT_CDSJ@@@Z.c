/*
 * XREFs of ?_PreVerify@CDS_JOURNAL@@CAJAEBUD3DKMT_AUGMENT_CDSJ@@@Z @ 0x1C01D400C
 * Callers:
 *     ?Augment@CDS_JOURNAL@@QEAAJPEAUD3DKMT_AUGMENT_CDSJ@@@Z @ 0x1C01D3EC0 (-Augment@CDS_JOURNAL@@QEAAJPEAUD3DKMT_AUGMENT_CDSJ@@@Z.c)
 * Callees:
 *     ConvertGdiScalingToDMMScaling @ 0x1C01D3BFC (ConvertGdiScalingToDMMScaling.c)
 */

__int64 __fastcall CDS_JOURNAL::_PreVerify(const struct D3DKMT_AUGMENT_CDSJ *a1)
{
  unsigned int *v2; // rax
  __int64 v3; // rdx
  unsigned int v4; // ecx
  unsigned int v5; // ecx
  unsigned int v7; // ecx
  __int64 v8; // r9
  int v9; // [rsp+30h] [rbp+8h] BYREF

  if ( (*(_DWORD *)a1 & 2) != 0 )
    return 0LL;
  v2 = (unsigned int *)*((_QWORD *)a1 + 4);
  v3 = v2[18];
  if ( (v3 & 0x80u) != 0LL )
  {
    v4 = v2[21];
    if ( v4 )
    {
      v7 = v4 - 1;
      if ( v7 )
      {
        if ( v7 - 1 >= 2 )
        {
          v8 = v2[21];
LABEL_18:
          WdLogSingleEntry3(3LL, v2, v3, v8);
          return 3221225485LL;
        }
      }
    }
  }
  if ( (v3 & 0x20000000) == 0 )
  {
LABEL_7:
    v3 = v2[18];
    if ( (v3 & 0x40000) != 0 )
    {
      v5 = v2[42];
      if ( v5 != 32 && v5 != 8 && v5 != 16 && v5 != 24 )
      {
        v8 = v2[42];
        goto LABEL_18;
      }
    }
    return 0LL;
  }
  if ( (unsigned int)ConvertGdiScalingToDMMScaling(v2[22], &v9) )
  {
    v2 = (unsigned int *)*((_QWORD *)a1 + 4);
    goto LABEL_7;
  }
  return 3221225485LL;
}
