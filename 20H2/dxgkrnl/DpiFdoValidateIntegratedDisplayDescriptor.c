/*
 * XREFs of DpiFdoValidateIntegratedDisplayDescriptor @ 0x1C02CB738
 * Callers:
 *     DpiFdoCreateRelatedObjects @ 0x1C0182350 (DpiFdoCreateRelatedObjects.c)
 * Callees:
 *     DpiIsValidEdid @ 0x1C0020A7C (DpiIsValidEdid.c)
 *     DpiFdoValidateDxgkColorimetry @ 0x1C02CB464 (DpiFdoValidateDxgkColorimetry.c)
 */

__int64 __fastcall DpiFdoValidateIntegratedDisplayDescriptor(__int64 a1, __int64 a2)
{
  unsigned int *v2; // rbx
  __int64 v5; // rdi
  __int64 v6; // rcx
  _QWORD *v7; // rax
  unsigned __int64 v8; // rcx
  char v9; // al

  v2 = *(unsigned int **)(a2 + 104);
  v5 = *(unsigned int *)(a2 + 24);
  v6 = *(unsigned int *)(*(_QWORD *)(a1 + 3896) + 2596LL);
  if ( *v2 >= 0x10 )
  {
    v7 = (_QWORD *)WdLogNewEntry5_WdError(v6, a2);
    v8 = (unsigned __int64)*v2 >> 4;
    v7[5] = 1LL;
LABEL_25:
    v7[3] = v8;
    v7[4] = v5;
    goto LABEL_26;
  }
  if ( v2[16] >= 0x1000 )
  {
    v7 = (_QWORD *)WdLogNewEntry5_WdError(v6, a2);
    v8 = (unsigned __int64)v2[16] >> 12;
    v7[5] = 2LL;
    goto LABEL_25;
  }
  if ( ((_DWORD)v6 != 2300 || *(_DWORD *)(a1 + 1124) != 1297040209)
    && (int)DpiFdoValidateDxgkColorimetry(v2 + 17, v5) < 0 )
  {
    return 3221225485LL;
  }
  if ( (unsigned __int8)(*((_BYTE *)v2 + 120) - 1) > 3u )
  {
    v7 = (_QWORD *)WdLogNewEntry5_WdError(v6, a2);
    v8 = *((unsigned __int8 *)v2 + 120);
    v7[5] = 3LL;
    goto LABEL_25;
  }
  if ( (unsigned __int8)(*((_BYTE *)v2 + 121) - 1) > 4u )
  {
    v7 = (_QWORD *)WdLogNewEntry5_WdError(v6, a2);
    v8 = *((unsigned __int8 *)v2 + 121);
    v7[5] = 4LL;
    goto LABEL_25;
  }
  if ( *((_BYTE *)v2 + 122) <= 0x10u )
  {
    v9 = *((_BYTE *)v2 + 123);
    if ( v9 == 1 )
    {
      if ( *(_WORD *)(a2 + 94) < 0x80u || !DpiIsValidEdid(*(_QWORD *)(a2 + 112)) )
      {
        v7 = (_QWORD *)WdLogNewEntry5_WdError(v6, a2);
        v7[3] = v5;
        v7[4] = 8LL;
        goto LABEL_26;
      }
    }
    else if ( v9 != 2 )
    {
      v7 = (_QWORD *)WdLogNewEntry5_WdError(v6, a2);
      v8 = *((unsigned __int8 *)v2 + 123);
      v7[5] = 6LL;
      goto LABEL_25;
    }
    if ( (v2[16] & 0x200) == 0 || *(_BYTE *)(a1 + 2695) || *(_BYTE *)(a1 + 2692) )
      return 0LL;
    v7 = (_QWORD *)WdLogNewEntry5_WdError(v6, a2);
    v7[3] = v5;
    v7[4] = 10LL;
    goto LABEL_26;
  }
  v7 = (_QWORD *)WdLogNewEntry5_WdError(v6, a2);
  v7[3] = *((unsigned __int8 *)v2 + 122);
  v7[4] = 16LL;
  v7[5] = v5;
  v7[6] = 5LL;
LABEL_26:
  WdLogEvent5_WdError(v7);
  return 3221225485LL;
}
