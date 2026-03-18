/*
 * XREFs of ?DrvFunctionalizeBaseVidMode@@YAJAEBU_RETRY_MODE@@PEAUD3DKMT_GETPATHSMODALITY@@@Z @ 0x1C01458C0
 * Callers:
 *     DrvSetDisplayConfig @ 0x1C006C8A0 (DrvSetDisplayConfig.c)
 * Callees:
 *     ?GetCcdRawmodeFlag@@YAIXZ @ 0x1C00BB948 (-GetCcdRawmodeFlag@@YAIXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C00D36F0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall DrvFunctionalizeBaseVidMode(const struct _RETRY_MODE *a1, struct D3DKMT_GETPATHSMODALITY *a2)
{
  unsigned int v2; // edi
  __int64 v5; // rax
  int v6; // eax
  __int64 v7; // rcx
  __int64 v8; // rax
  unsigned __int64 v9; // rax
  unsigned int CcdRawmodeFlag; // eax
  __int64 v11; // rcx

  v2 = 0;
  if ( !a2 )
  {
    v5 = WdLogNewEntry5_WdAssertion(a1, 0LL);
    WdLogEvent5_WdAssertion(v5);
  }
  v6 = *((_DWORD *)a1 + 1);
  if ( v6 == -1 )
  {
    if ( *((_DWORD *)a1 + 2) == -1 )
    {
      if ( *((_WORD *)a2 + 10) )
      {
        v7 = *((_QWORD *)a2 + 6);
        do
        {
          ++v2;
          v7 &= 0xFFFFFBFFFF7CFE78uLL;
          *((_QWORD *)a2 + 6) = v7;
        }
        while ( v2 < *((unsigned __int16 *)a2 + 10) );
      }
      goto LABEL_14;
    }
  }
  else if ( !v6 )
  {
    goto LABEL_14;
  }
  if ( *((_DWORD *)a1 + 2) )
  {
    if ( *((_WORD *)a2 + 10) != 1 )
    {
      v8 = WdLogNewEntry5_WdAssertion(0xFFFFFFFFLL, a2);
      WdLogEvent5_WdAssertion(v8);
    }
    v9 = *((_QWORD *)a2 + 6) & 0xFFFFFBFFFF7EFF7CuLL;
    *((_BYTE *)a2 + 176) = 0;
    *((_DWORD *)a2 + 45) = 1;
    *((_QWORD *)a2 + 6) = v9 | 0x20304;
    *((_DWORD *)a2 + 32) = 9;
    *((_DWORD *)a2 + 50) = *((_DWORD *)a1 + 1);
    *((_DWORD *)a2 + 51) = *((_DWORD *)a1 + 2);
    *((_DWORD *)a2 + 36) = *((_DWORD *)a1 + 1);
    *((_DWORD *)a2 + 37) = *((_DWORD *)a1 + 2);
    *((_DWORD *)a2 + 38) = *((_DWORD *)a1 + 1);
    *((_DWORD *)a2 + 39) = *((_DWORD *)a1 + 2);
    *((_DWORD *)a2 + 41) = 21;
    *((_DWORD *)a2 + 40) = 0;
    *((_QWORD *)a2 + 21) = 0LL;
  }
LABEL_14:
  CcdRawmodeFlag = GetCcdRawmodeFlag();
  v11 = CcdRawmodeFlag;
  LODWORD(v11) = CcdRawmodeFlag | 0x8000;
  return ((__int64 (__fastcall *)(__int64, struct D3DKMT_GETPATHSMODALITY *))qword_1C024A8B8)(v11, a2);
}
