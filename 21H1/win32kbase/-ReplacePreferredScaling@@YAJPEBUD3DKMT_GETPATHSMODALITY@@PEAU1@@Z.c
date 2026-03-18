/*
 * XREFs of ?ReplacePreferredScaling@@YAJPEBUD3DKMT_GETPATHSMODALITY@@PEAU1@@Z @ 0x1C014F5C0
 * Callers:
 *     ?SetDisplayConfigHandlePreferredScaling@@YAJPEAUD3DKMT_GETPATHSMODALITY@@PEAW4_DXGK_DIAG_SDC_STAGE@@@Z @ 0x1C01500B8 (-SetDisplayConfigHandlePreferredScaling@@YAJPEAUD3DKMT_GETPATHSMODALITY@@PEAW4_DXGK_DIAG_SDC_STA.c)
 * Callees:
 *     ?ConvertPathPreferredScalingToAdapterDefault@@YAXPEAUD3DKMT_PATHMODALITY_DESCRIPTOR@@@Z @ 0x1C014D464 (-ConvertPathPreferredScalingToAdapterDefault@@YAXPEAUD3DKMT_PATHMODALITY_DESCRIPTOR@@@Z.c)
 */

__int64 __fastcall ReplacePreferredScaling(__int64 a1, __int64 a2, _DWORD *a3, __int64 a4)
{
  __int64 v4; // rbp
  const struct D3DKMT_GETPATHSMODALITY *v5; // r14
  unsigned int i; // esi
  __int64 v7; // rbx
  __int64 v8; // rax
  __int64 v9; // rcx
  char *v10; // rdi
  __int64 v11; // rax
  __int64 v13; // rax
  __int64 v14; // rax
  __int64 v15; // rax

  v4 = a2;
  v5 = (const struct D3DKMT_GETPATHSMODALITY *)a1;
  for ( i = 0; i < *(unsigned __int16 *)(v4 + 20); ++i )
  {
    v7 = v4 + 272LL * i;
    if ( (*(_DWORD *)(v7 + 48) & 0x10000) == 0 )
    {
      v8 = WdLogNewEntry5_WdAssertion(a1, a2, a3, a4);
      WdLogEvent5_WdAssertion(v8);
    }
    if ( *(_DWORD *)(v7 + 184) == 253 )
    {
      v9 = 0x1000000000LL;
      if ( (*(_QWORD *)(v7 + 48) & 0x1000000000LL) != 0 )
      {
        ConvertPathPreferredScalingToAdapterDefault(
          (struct D3DKMT_PATHMODALITY_DESCRIPTOR *)(v7 + 48),
          a2,
          (__int64)a3,
          a4);
      }
      else
      {
        a3 = (_DWORD *)(v7 + 64);
        if ( v7 == -64 || !v5 )
        {
          v10 = 0LL;
        }
        else
        {
          a4 = *((unsigned __int16 *)v5 + 10);
          a2 = 0LL;
          if ( !*((_WORD *)v5 + 10) )
            goto LABEL_14;
          while ( 1 )
          {
            v9 = 272LL * (unsigned int)a2;
            v10 = (char *)v5 + v9 + 48;
            if ( *((_DWORD *)v10 + 7) == *(_DWORD *)(v7 + 76)
              && *((_DWORD *)v10 + 4) == *a3
              && *((_DWORD *)v10 + 5) == *(_DWORD *)(v7 + 68) )
            {
              break;
            }
            a2 = (unsigned int)(a2 + 1);
            if ( (unsigned int)a2 >= (unsigned int)a4 )
              goto LABEL_14;
          }
        }
        if ( !v10 )
        {
LABEL_14:
          v11 = WdLogNewEntry5_WdError(v9, a2, a3);
          *(_QWORD *)(v11 + 24) = *(unsigned int *)(v7 + 72);
          *(_QWORD *)(v11 + 32) = *(unsigned int *)(v7 + 76);
          WdLogEvent5_WdError(v11);
          return 3221225473LL;
        }
        v13 = *(_QWORD *)v10;
        a1 = 0x40000000000LL;
        if ( (*(_QWORD *)v10 & 0x40000000000LL) == 0 )
        {
          v14 = WdLogNewEntry5_WdAssertion(0x40000000000LL, a2, a3, a4);
          WdLogEvent5_WdAssertion(v14);
          v13 = *(_QWORD *)v10;
        }
        if ( (v13 & 0x10000) == 0 )
        {
          v15 = WdLogNewEntry5_WdAssertion(a1, a2, a3, a4);
          WdLogEvent5_WdAssertion(v15);
        }
        *(_DWORD *)(v7 + 184) = *((_DWORD *)v10 + 34);
        *(_DWORD *)(v7 + 188) = *((_DWORD *)v10 + 35);
        *(_QWORD *)(v7 + 48) |= 0x40000010000uLL;
      }
    }
  }
  return 0LL;
}
