/*
 * XREFs of ?FreeEdgyFrameData@Edgy@@YGXPAUtagEDGY_DATA@@@Z @ 0x16E002
 * Callers:
 *     _xxxSwitchDesktop@16 @ 0xB0C6A (_xxxSwitchDesktop@16.c)
 * Callees:
 *     <none>
 */

void __thiscall Edgy::FreeEdgyFrameData(_DWORD *ecx0)
{
  int v2; // esi
  struct _LIST_ENTRY *v3; // esi
  struct _LIST_ENTRY *Blink; // eax
  struct _LIST_ENTRY *v5; // ecx

  v2 = ecx0[62];
  if ( v2 )
  {
    v3 = (struct _LIST_ENTRY *)(v2 + 644);
    while ( v3->Flink != v3 )
    {
      Blink = v3->Blink;
      if ( Blink->Flink != v3 || (v5 = Blink->Blink, v5->Flink != Blink) )
        __fastfail(3u);
      v3->Blink = v5;
      v5->Flink = v3;
      Blink->Blink = Blink;
      Blink->Flink = Blink;
      CTouchProcessor::UnreferenceUndispatchedFrame(_gpTouchProcessor, Blink);
    }
    ecx0[62] = 0;
    ecx0[3] = 0;
  }
}
