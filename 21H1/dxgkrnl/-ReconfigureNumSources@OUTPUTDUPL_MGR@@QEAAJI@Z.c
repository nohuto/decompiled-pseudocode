/*
 * XREFs of ?ReconfigureNumSources@OUTPUTDUPL_MGR@@QEAAJI@Z @ 0x1C0297A04
 * Callers:
 *     OutputDuplRemoteSessionReconnected @ 0x1C0299AD4 (OutputDuplRemoteSessionReconnected.c)
 * Callees:
 *     ?CreateSourceContextLists@OUTPUTDUPL_MGR@@AEAAJXZ @ 0x1C0184DBC (-CreateSourceContextLists@OUTPUTDUPL_MGR@@AEAAJXZ.c)
 *     ?DestroySourceContextLists@OUTPUTDUPL_MGR@@AEAAXXZ @ 0x1C0294A68 (-DestroySourceContextLists@OUTPUTDUPL_MGR@@AEAAXXZ.c)
 *     ?QueryActiveContextCount@OUTPUTDUPL_MGR@@QEAAII@Z @ 0x1C02979B4 (-QueryActiveContextCount@OUTPUTDUPL_MGR@@QEAAII@Z.c)
 */

__int64 __fastcall OUTPUTDUPL_MGR::ReconfigureNumSources(OUTPUTDUPL_MGR *this, __int64 a2)
{
  unsigned int v2; // esi
  __int64 v4; // rax
  __int64 v5; // rax
  __int64 result; // rax
  unsigned int v7; // edi
  __int64 v8; // rcx
  __int64 v9; // rdx
  __int64 v10; // rax

  v2 = a2;
  if ( *((_DWORD *)this + 12) )
  {
    v4 = WdLogNewEntry5_WdAssertion(this, a2);
    *(_QWORD *)(v4 + 24) = 2500LL;
    WdLogEvent5_WdAssertion(v4);
  }
  if ( v2 <= 0x10 )
  {
    v7 = 0;
    if ( *((_DWORD *)this + 13) )
    {
      while ( !(unsigned int)OUTPUTDUPL_MGR::QueryActiveContextCount(this, v7) )
      {
        if ( ++v7 >= *((_DWORD *)this + 13) )
          goto LABEL_8;
      }
      v10 = WdLogNewEntry5_WdAssertion(v8, a2);
      *(_QWORD *)(v10 + 24) = 2514LL;
      WdLogEvent5_WdAssertion(v10);
      return 3223192386LL;
    }
    else
    {
LABEL_8:
      OUTPUTDUPL_MGR::DestroySourceContextLists(this, a2);
      *((_DWORD *)this + 13) = v2;
      result = OUTPUTDUPL_MGR::CreateSourceContextLists(this, v9);
      if ( (int)result < 0 )
        *((_DWORD *)this + 13) = 0;
    }
  }
  else
  {
    v5 = WdLogNewEntry5_WdError(this, a2);
    *(_QWORD *)(v5 + 24) = 16LL;
    WdLogEvent5_WdError(v5);
    return 3221225485LL;
  }
  return result;
}
