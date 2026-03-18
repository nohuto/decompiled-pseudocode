/*
 * XREFs of _UnreferenceUndispatchedFrameList@0 @ 0xF3664
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __stdcall UnreferenceUndispatchedFrameList()
{
  struct _LIST_ENTRY *v0; // esi
  struct _LIST_ENTRY *v1; // eax
  struct _LIST_ENTRY *Blink; // ecx

  v0 = (struct _LIST_ENTRY *)(_gptiCurrent + 644);
  while ( v0->Flink != v0 )
  {
    v1 = *(struct _LIST_ENTRY **)(_gptiCurrent + 648);
    if ( v1->Flink != v0 || (Blink = v1->Blink, Blink->Flink != v1) )
      __fastfail(3u);
    *(_DWORD *)(_gptiCurrent + 648) = Blink;
    Blink->Flink = v0;
    v1->Blink = v1;
    v1->Flink = v1;
    CTouchProcessor::UnreferenceUndispatchedFrame(_gpTouchProcessor, v1);
  }
}
