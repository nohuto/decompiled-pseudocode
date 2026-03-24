/*
 * XREFs of ?_PreVerify@CDS_JOURNAL@@CAJAEBUD3DKMT_AUGMENT_CDSJ@@@Z @ 0x1C014A230
 * Callers:
 *     ?Augment@CDS_JOURNAL@@QEAAJPEAUD3DKMT_AUGMENT_CDSJ@@@Z @ 0x1C014A0E0 (-Augment@CDS_JOURNAL@@QEAAJPEAUD3DKMT_AUGMENT_CDSJ@@@Z.c)
 * Callees:
 *     ConvertGdiScalingToDMMScaling @ 0x1C014A2A8 (ConvertGdiScalingToDMMScaling.c)
 */

__int64 __fastcall CDS_JOURNAL::_PreVerify(unsigned __int64 a1, __int64 a2, __int64 a3)
{
  unsigned __int64 v3; // rdi
  unsigned int *v4; // rbx
  __int64 v5; // rdx
  unsigned int v6; // eax
  _QWORD *v8; // rax
  __int64 v9; // rcx
  char v10; // [rsp+30h] [rbp+8h] BYREF

  v3 = a1;
  if ( (*(_DWORD *)a1 & 2) != 0 )
    return 0LL;
  v4 = *(unsigned int **)(a1 + 32);
  v5 = v4[18];
  if ( (v5 & 0x80u) != 0LL )
  {
    a1 = v4[21];
    if ( (_DWORD)a1 )
    {
      a1 = (unsigned int)(a1 - 1);
      if ( (_DWORD)a1 )
      {
        a1 = (unsigned int)(a1 - 1);
        if ( (unsigned int)a1 >= 2 )
        {
          v8 = (_QWORD *)WdLogNewEntry5_WdWarning(a1, v5, a3);
          v8[3] = v4;
          v8[4] = v4[18];
          v9 = v4[21];
LABEL_18:
          v8[5] = v9;
          WdLogEvent5_WdWarning(v8);
          return 3221225485LL;
        }
      }
    }
  }
  if ( (v5 & 0x20000000) == 0 )
  {
LABEL_7:
    if ( (v4[18] & 0x40000) != 0 )
    {
      v6 = v4[42];
      if ( v6 != 32 && v6 != 8 && v6 != 16 && v6 != 24 )
      {
        v8 = (_QWORD *)WdLogNewEntry5_WdWarning(a1, v5, a3);
        v8[3] = v4;
        v8[4] = v4[18];
        v9 = v4[42];
        goto LABEL_18;
      }
    }
    return 0LL;
  }
  if ( (unsigned int)ConvertGdiScalingToDMMScaling(v4[22], &v10) )
  {
    v4 = *(unsigned int **)(v3 + 32);
    goto LABEL_7;
  }
  return 3221225485LL;
}
