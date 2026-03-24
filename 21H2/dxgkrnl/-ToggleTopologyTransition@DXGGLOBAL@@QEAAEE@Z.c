/*
 * XREFs of ?ToggleTopologyTransition@DXGGLOBAL@@QEAAEE@Z @ 0x1C0019034
 * Callers:
 *     DxgkCompleteTopologyTransition @ 0x1C015EED0 (DxgkCompleteTopologyTransition.c)
 * Callees:
 *     <none>
 */

bool __fastcall DXGGLOBAL::ToggleTopologyTransition(DXGGLOBAL *this, __int64 a2)
{
  int v2; // ebx
  __int64 v4; // rax

  if ( (_BYTE)a2 )
  {
    v2 = _InterlockedIncrement((volatile signed __int32 *)this + 187);
  }
  else
  {
    v2 = _InterlockedDecrement((volatile signed __int32 *)this + 187);
    if ( v2 < 0 )
    {
      v4 = WdLogNewEntry5_WdAssertion(this, a2);
      *(_QWORD *)(v4 + 24) = 1245LL;
      WdLogEvent5_WdAssertion(v4);
    }
  }
  return v2 != 0;
}
