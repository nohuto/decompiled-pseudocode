/*
 * XREFs of ?ReconfigureNumSources@OUTPUTDUPL_MGR@@QEAAJI@Z @ 0x1C03237D0
 * Callers:
 *     OutputDuplRemoteSessionReconnected @ 0x1C03258F8 (OutputDuplRemoteSessionReconnected.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x1C0008E10 (DxgkLogInternalTriageEvent.c)
 *     ?CreateSourceContextLists@OUTPUTDUPL_MGR@@AEAAJXZ @ 0x1C0210A20 (-CreateSourceContextLists@OUTPUTDUPL_MGR@@AEAAJXZ.c)
 *     ?DestroySourceContextLists@OUTPUTDUPL_MGR@@AEAAXXZ @ 0x1C0320394 (-DestroySourceContextLists@OUTPUTDUPL_MGR@@AEAAXXZ.c)
 *     ?QueryActiveContextCount@OUTPUTDUPL_MGR@@QEAAII@Z @ 0x1C032377C (-QueryActiveContextCount@OUTPUTDUPL_MGR@@QEAAII@Z.c)
 */

__int64 __fastcall OUTPUTDUPL_MGR::ReconfigureNumSources(OUTPUTDUPL_MGR *this, unsigned int a2)
{
  __int64 result; // rax
  unsigned int v5; // edi
  __int64 v6; // rdx
  __int64 v7; // r8
  __int64 v8; // r9

  if ( *((_DWORD *)this + 18) )
  {
    WdLogSingleEntry1(1LL, 2444LL);
    DxgkLogInternalTriageEvent(
      0LL,
      262146,
      -1,
      (__int64)L"IsNewConnectionAllowed() == FALSE",
      2444LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  if ( a2 <= 0x10 )
  {
    v5 = 0;
    if ( *((_DWORD *)this + 19) )
    {
      while ( !(unsigned int)OUTPUTDUPL_MGR::QueryActiveContextCount(this, v5) )
      {
        if ( ++v5 >= *((_DWORD *)this + 19) )
          goto LABEL_8;
      }
      WdLogSingleEntry1(1LL, 2458LL);
      DxgkLogInternalTriageEvent(
        0LL,
        262146,
        -1,
        (__int64)L"Cannot reconfigure the number of sources if any are active",
        2458LL,
        0LL,
        0LL,
        0LL,
        0LL);
      return 3223192386LL;
    }
    else
    {
LABEL_8:
      OUTPUTDUPL_MGR::DestroySourceContextLists(this);
      *((_DWORD *)this + 19) = a2;
      result = OUTPUTDUPL_MGR::CreateSourceContextLists(this, v6, v7, v8);
      if ( (int)result < 0 )
        *((_DWORD *)this + 19) = 0;
    }
  }
  else
  {
    WdLogSingleEntry1(2LL, 16LL);
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"Output duplication manager only support 0x%I64x sources\n",
      16LL,
      0LL,
      0LL,
      0LL,
      0LL);
    return 3221225485LL;
  }
  return result;
}
