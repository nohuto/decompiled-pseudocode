/*
 * XREFs of DpiFdoValidateDxgkColorimetry @ 0x1C02CB464
 * Callers:
 *     DpiGetMonitorColorimetryOverride @ 0x1C0187764 (DpiGetMonitorColorimetryOverride.c)
 *     DpiFdoValidateIntegratedDisplayDescriptor @ 0x1C02CB738 (DpiFdoValidateIntegratedDisplayDescriptor.c)
 * Callees:
 *     _lambda_257d7c3e5d4eac318129c4c4e210f286_::operator() @ 0x1C0051AD0 (_lambda_257d7c3e5d4eac318129c4c4e210f286_--operator().c)
 */

__int64 __fastcall DpiFdoValidateDxgkColorimetry(unsigned int *a1, unsigned int a2)
{
  _BYTE *v2; // rax
  __int64 v3; // rdi
  unsigned __int64 v5; // rcx
  __int64 v7; // rdx
  __int64 v8; // rcx
  int v9; // r9d
  _QWORD *v10; // rax
  unsigned int v11; // eax
  __int64 v12; // rcx
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // rdx
  __int64 v16; // rcx

  v2 = a1;
  v3 = a2;
  v5 = (unsigned __int64)(a1 + 13);
  if ( (unsigned __int64)v2 < v5 )
  {
    while ( !*v2 )
    {
      if ( (unsigned __int64)++v2 >= v5 )
        goto LABEL_6;
    }
    v2 = 0LL;
  }
LABEL_6:
  if ( v2 )
    return 279LL;
  if ( !lambda_257d7c3e5d4eac318129c4c4e210f286_::operator()(v5, *((_QWORD *)a1 + 3)) )
  {
    v10 = (_QWORD *)WdLogNewEntry5_WdError(v8, v7);
    v10[3] = a1[6];
    v10[4] = a1[7];
    v10[5] = v3;
    v10[6] = 1LL;
    goto LABEL_41;
  }
  v11 = a1[9];
  if ( !v11
    || (v8 = a1[10], !(_DWORD)v8)
    || (unsigned int)v8 > v11
    || (v7 = a1[8], (unsigned int)v7 >= v11)
    || (unsigned int)v7 >= (unsigned int)v8 )
  {
    v10 = (_QWORD *)WdLogNewEntry5_WdError(v8, v7);
    v10[4] = 2LL;
    goto LABEL_40;
  }
  v12 = a1[11];
  if ( (v12 & 3) != 0 )
  {
    v10 = (_QWORD *)WdLogNewEntry5_WdError(v12, v7);
    v10[3] = (int)(a1[11] << 30) >> 30;
    v10[4] = v3;
    v10[5] = 3LL;
    goto LABEL_41;
  }
  if ( !(_DWORD)v12 )
  {
    v10 = (_QWORD *)WdLogNewEntry5_WdError(v12, v7);
    v10[4] = 4LL;
LABEL_40:
    v10[3] = v3;
    goto LABEL_41;
  }
  if ( (((unsigned __int8)v12 | (unsigned __int8)(((unsigned int)v12 | ((unsigned int)v12 >> 6)) >> 6)) & 0xFCu) >= 4
    || (v12 & 0x3F00000) != 0 )
  {
    if ( !lambda_257d7c3e5d4eac318129c4c4e210f286_::operator()(v12, *(_QWORD *)a1) )
    {
      v10 = (_QWORD *)WdLogNewEntry5_WdError(v14, v13);
      v10[3] = *a1;
      v10[4] = a1[1];
      v10[5] = v3;
      v10[6] = 6LL;
      goto LABEL_41;
    }
    if ( !lambda_257d7c3e5d4eac318129c4c4e210f286_::operator()(v14, *((_QWORD *)a1 + 1)) )
    {
      v10 = (_QWORD *)WdLogNewEntry5_WdError(v16, v15);
      v10[3] = a1[2];
      v10[4] = a1[3];
      v10[5] = v3;
      v10[6] = 7LL;
      goto LABEL_41;
    }
    if ( !lambda_257d7c3e5d4eac318129c4c4e210f286_::operator()(v16, *((_QWORD *)a1 + 2)) )
    {
      v10 = (_QWORD *)WdLogNewEntry5_WdError(v12, v7);
      v10[3] = a1[4];
      v10[4] = a1[5];
      v10[5] = v3;
      v10[6] = 8LL;
      goto LABEL_41;
    }
  }
  else
  {
    if ( *a1 != v9 || a1[1] != v9 )
    {
      v10 = (_QWORD *)WdLogNewEntry5_WdError(v12, v7);
      v10[3] = *a1;
      v10[4] = a1[1];
      v10[5] = v3;
      v10[6] = 9LL;
      goto LABEL_41;
    }
    if ( a1[2] != v9 || a1[3] != v9 )
    {
      v10 = (_QWORD *)WdLogNewEntry5_WdError(v12, v7);
      v10[3] = a1[2];
      v10[4] = a1[3];
      v10[5] = v3;
      v10[6] = 10LL;
      goto LABEL_41;
    }
    if ( a1[4] != v9 || a1[5] != v9 )
    {
      v10 = (_QWORD *)WdLogNewEntry5_WdError(v12, v7);
      v10[3] = a1[4];
      v10[4] = a1[5];
      v10[5] = v3;
      v10[6] = 11LL;
      goto LABEL_41;
    }
  }
  if ( a1[12] < 8 )
    return 0LL;
  v10 = (_QWORD *)WdLogNewEntry5_WdError(v12, v7);
  v10[3] = (unsigned __int64)a1[12] >> 3;
  v10[4] = v3;
  v10[5] = 5LL;
LABEL_41:
  WdLogEvent5_WdError(v10);
  return 3221225485LL;
}
