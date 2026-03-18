/*
 * XREFs of ?NlsCodeInputToggleProc@@YAHPEAUtagKE@@_KK@Z @ 0x1C01A61D0
 * Callers:
 *     <none>
 * Callees:
 *     xxxKeyEventEx @ 0x1C002CAE0 (xxxKeyEventEx.c)
 *     ?NlsClearKeyStateToggle@@YAXE@Z @ 0x1C01A6168 (-NlsClearKeyStateToggle@@YAXE@Z.c)
 *     ?NlsGetCurrentInputMode@@YAEPEAE@Z @ 0x1C01A6324 (-NlsGetCurrentInputMode@@YAEPEAE@Z.c)
 */

__int64 __fastcall NlsCodeInputToggleProc(struct tagKE *a1, __int64 a2)
{
  __int16 v2; // di
  unsigned __int8 CurrentInputMode; // al
  int v6; // r11d

  v2 = *((_WORD *)a1 + 1);
  if ( v2 < 0 )
    return 0LL;
  CurrentInputMode = NlsGetCurrentInputMode(&NlsCodeInputMode);
  *((_WORD *)a1 + 1) = v2 & 0x8F00;
  NlsClearKeyStateToggle(CurrentInputMode);
  if ( v6 == 250 )
  {
    xxxKeyEventEx(
      *((_WORD *)a1 + 1) | 0x80FA,
      *(unsigned __int8 *)a1,
      *((_DWORD *)a1 + 1),
      a2,
      *((void **)a1 + 1),
      (unsigned __int16 *)a1 + 8,
      0,
      0,
      0LL,
      0LL);
    *((_WORD *)a1 + 1) |= 0xFBu;
  }
  else if ( v6 == 251 )
  {
    xxxKeyEventEx(
      *((_WORD *)a1 + 1) | 0x80FB,
      *(unsigned __int8 *)a1,
      *((_DWORD *)a1 + 1),
      a2,
      *((void **)a1 + 1),
      (unsigned __int16 *)a1 + 8,
      0,
      0,
      0LL,
      0LL);
    *((_WORD *)a1 + 1) |= 0xFAu;
  }
  return 1LL;
}
