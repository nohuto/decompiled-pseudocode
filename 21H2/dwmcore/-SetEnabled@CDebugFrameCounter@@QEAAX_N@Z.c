/*
 * XREFs of ?SetEnabled@CDebugFrameCounter@@QEAAX_N@Z @ 0x180155FF0
 * Callers:
 *     ?UpdateDebugCounter@CComposition@@QEAAX_N@Z @ 0x1801560A4 (-UpdateDebugCounter@CComposition@@QEAAX_N@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall CDebugFrameCounter::SetEnabled(CDebugFrameCounter *this, char a2)
{
  if ( *((_QWORD *)this + 581) )
  {
    if ( *((_BYTE *)this + 24) != a2 )
    {
      *((_BYTE *)this + 24) = a2;
      *((_DWORD *)this + 5) = -1;
      *((_DWORD *)this + 4) = -1;
      *((_QWORD *)this + 4) = 0LL;
      *(_WORD *)((char *)this + 25) = 0;
    }
  }
}
