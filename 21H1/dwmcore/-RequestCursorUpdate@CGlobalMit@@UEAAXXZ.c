/*
 * XREFs of ?RequestCursorUpdate@CGlobalMit@@UEAAXXZ @ 0x1800C34E0
 * Callers:
 *     <none>
 * Callees:
 *     ?SetEvent@details@wil@@YAXPEAX@Z @ 0x1800C3504 (-SetEvent@details@wil@@YAXPEAX@Z.c)
 */

void __fastcall CGlobalMit::RequestCursorUpdate(CGlobalMit *this, void *a2)
{
  wil::details *v2; // rcx

  v2 = (wil::details *)*((_QWORD *)this + 18);
  if ( v2 )
    wil::details::SetEvent(v2, a2);
}
