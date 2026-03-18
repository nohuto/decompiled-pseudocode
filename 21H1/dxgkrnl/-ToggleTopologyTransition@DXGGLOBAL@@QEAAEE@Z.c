/*
 * XREFs of ?ToggleTopologyTransition@DXGGLOBAL@@QEAAEE@Z @ 0x1C0018924
 * Callers:
 *     DxgkCompleteTopologyTransition @ 0x1C014B9F0 (DxgkCompleteTopologyTransition.c)
 * Callees:
 *     <none>
 */

bool __fastcall DXGGLOBAL::ToggleTopologyTransition(DXGGLOBAL *this, __int64 a2)
{
  int v2; // ebx
  __int64 v4; // rax

  if ( (_BYTE)a2 )
  {
    v2 = _InterlockedIncrement((volatile signed __int32 *)this + 159);
  }
  else
  {
    v2 = _InterlockedDecrement((volatile signed __int32 *)this + 159);
    if ( v2 < 0 )
    {
      v4 = WdLogNewEntry5_WdAssertion(this, a2);
      *(_QWORD *)(v4 + 24) = 1229LL;
      WdLogEvent5_WdAssertion(v4);
    }
  }
  return v2 != 0;
}
