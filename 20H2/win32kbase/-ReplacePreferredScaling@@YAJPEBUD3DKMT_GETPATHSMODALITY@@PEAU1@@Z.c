/*
 * XREFs of ?ReplacePreferredScaling@@YAJPEBUD3DKMT_GETPATHSMODALITY@@PEAU1@@Z @ 0x1C0146DA0
 * Callers:
 *     ?SetDisplayConfigHandlePreferredScaling@@YAJPEAUD3DKMT_GETPATHSMODALITY@@PEAW4_DXGK_DIAG_SDC_STAGE@@@Z @ 0x1C0147898 (-SetDisplayConfigHandlePreferredScaling@@YAJPEAUD3DKMT_GETPATHSMODALITY@@PEAW4_DXGK_DIAG_SDC_STA.c)
 * Callees:
 *     ?ConvertPathPreferredScalingToAdapterDefault@@YAXPEAUD3DKMT_PATHMODALITY_DESCRIPTOR@@@Z @ 0x1C0144C44 (-ConvertPathPreferredScalingToAdapterDefault@@YAXPEAUD3DKMT_PATHMODALITY_DESCRIPTOR@@@Z.c)
 */

__int64 __fastcall ReplacePreferredScaling(__int64 a1, __int64 a2)
{
  __int64 v2; // rbp
  const struct D3DKMT_GETPATHSMODALITY *v3; // r14
  unsigned int i; // esi
  __int64 v5; // rbx
  __int64 v6; // rax
  __int64 v7; // rcx
  _DWORD *v8; // r8
  char *v9; // rdi
  __int64 v10; // rax
  __int64 v11; // rdx
  __int64 v13; // rax
  __int64 v14; // rax
  __int64 v15; // rax

  v2 = a2;
  v3 = (const struct D3DKMT_GETPATHSMODALITY *)a1;
  for ( i = 0; i < *(unsigned __int16 *)(v2 + 20); ++i )
  {
    v5 = v2 + 272LL * i;
    if ( (*(_DWORD *)(v5 + 48) & 0x10000) == 0 )
    {
      v6 = WdLogNewEntry5_WdAssertion(a1, a2);
      WdLogEvent5_WdAssertion(v6);
    }
    if ( *(_DWORD *)(v5 + 184) == 253 )
    {
      v7 = 0x1000000000LL;
      if ( (*(_QWORD *)(v5 + 48) & 0x1000000000LL) != 0 )
      {
        ConvertPathPreferredScalingToAdapterDefault((struct D3DKMT_PATHMODALITY_DESCRIPTOR *)(v5 + 48), a2);
      }
      else
      {
        v8 = (_DWORD *)(v5 + 64);
        if ( v5 == -64 || !v3 )
        {
          v9 = 0LL;
        }
        else
        {
          a2 = 0LL;
          if ( !*((_WORD *)v3 + 10) )
            goto LABEL_14;
          while ( 1 )
          {
            v7 = 272LL * (unsigned int)a2;
            v9 = (char *)v3 + v7 + 48;
            if ( *((_DWORD *)v9 + 7) == *(_DWORD *)(v5 + 76)
              && *((_DWORD *)v9 + 4) == *v8
              && *((_DWORD *)v9 + 5) == *(_DWORD *)(v5 + 68) )
            {
              break;
            }
            a2 = (unsigned int)(a2 + 1);
            if ( (unsigned int)a2 >= *((unsigned __int16 *)v3 + 10) )
              goto LABEL_14;
          }
        }
        if ( !v9 )
        {
LABEL_14:
          v10 = WdLogNewEntry5_WdError(v7, a2, v8);
          *(_QWORD *)(v10 + 24) = *(unsigned int *)(v5 + 72);
          *(_QWORD *)(v10 + 32) = *(unsigned int *)(v5 + 76);
          WdLogEvent5_WdError(v10, v11);
          return 3221225473LL;
        }
        v13 = *(_QWORD *)v9;
        a1 = 0x40000000000LL;
        if ( (*(_QWORD *)v9 & 0x40000000000LL) == 0 )
        {
          v14 = WdLogNewEntry5_WdAssertion(0x40000000000LL, a2);
          WdLogEvent5_WdAssertion(v14);
          v13 = *(_QWORD *)v9;
        }
        if ( (v13 & 0x10000) == 0 )
        {
          v15 = WdLogNewEntry5_WdAssertion(a1, a2);
          WdLogEvent5_WdAssertion(v15);
        }
        *(_DWORD *)(v5 + 184) = *((_DWORD *)v9 + 34);
        *(_DWORD *)(v5 + 188) = *((_DWORD *)v9 + 35);
        *(_QWORD *)(v5 + 48) |= 0x40000010000uLL;
      }
    }
  }
  return 0LL;
}
