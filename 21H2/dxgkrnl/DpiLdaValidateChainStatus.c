/*
 * XREFs of DpiLdaValidateChainStatus @ 0x1C02D8690
 * Callers:
 *     DpiLdaValidateSystemChainStatus @ 0x1C019DCCC (DpiLdaValidateSystemChainStatus.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall DpiLdaValidateChainStatus(__int64 a1, __int64 a2)
{
  __int64 v2; // rax
  unsigned int v3; // ebx
  __int64 v4; // rax
  __int64 v5; // rax
  unsigned int v6; // r8d
  __int64 v7; // rdx
  __int64 v8; // rcx
  _QWORD *v9; // rax

  v2 = *(_QWORD *)(a1 + 64);
  v3 = 0;
  if ( *(_BYTE *)(v2 + 508) != 1 )
  {
    v4 = *(_QWORD *)(v2 + 2728);
    if ( !v4 )
    {
      v3 = -1071774671;
      v5 = WdLogNewEntry5_WdError(a1, a2);
      *(_QWORD *)(v5 + 24) = -1071774671LL;
LABEL_4:
      WdLogEvent5_WdError(v5);
      return v3;
    }
    v2 = *(_QWORD *)(v4 + 64);
  }
  v6 = *(_DWORD *)(v2 + 2736);
  if ( v6 != *(_DWORD *)(v2 + 504) )
  {
    v3 = -1071774670;
    v5 = WdLogNewEntry5_WdError(a1, a2);
    *(_QWORD *)(v5 + 24) = -1071774670LL;
    goto LABEL_4;
  }
  if ( *(_DWORD *)(v2 + 236) != 2 )
  {
    v3 = -1071774669;
    v5 = WdLogNewEntry5_WdError(a1, a2);
    *(_QWORD *)(v5 + 24) = -1071774669LL;
    goto LABEL_4;
  }
  v7 = 1LL;
  if ( v6 > 1 )
  {
    while ( 1 )
    {
      v8 = *(_QWORD *)(*(_QWORD *)(v2 + 2728) + 8LL * (unsigned int)v7);
      if ( *(_DWORD *)(*(_QWORD *)(v8 + 64) + 236LL) != 2 )
        break;
      v7 = (unsigned int)(v7 + 1);
      if ( (unsigned int)v7 >= v6 )
        return v3;
    }
    v3 = -1071774666;
    v9 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v8, v7);
    v9[3] = 275LL;
    v9[4] = 21LL;
    v9[5] = -1071774666LL;
    WdLogEvent5_WdCriticalError(v9);
  }
  return v3;
}
