/*
 * XREFs of ?DXGGLOBAL_GetGlobal@@YAPEAVDXGGLOBAL@@XZ @ 0x1C0016490
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

struct DXGGLOBAL *__fastcall DXGGLOBAL_GetGlobal(__int64 a1, __int64 a2)
{
  __int64 v3; // rax

  if ( !DXGGLOBAL::m_pGlobal )
  {
    v3 = WdLogNewEntry5_WdAssertion(a1, a2);
    *(_QWORD *)(v3 + 24) = 2219LL;
    WdLogEvent5_WdAssertion(v3);
  }
  return (struct DXGGLOBAL *)DXGGLOBAL::m_pGlobal;
}
