/*
 * XREFs of ?IsLastTopMostWindow@@YAHPEBUtagWND@@@Z @ 0x1C0126FB8
 * Callers:
 *     ?TrackBackground@@YAHPEAUtagWINDOWPOS@@PEAUtagWND@@1111@Z @ 0x1C0024154 (-TrackBackground@@YAHPEAUtagWINDOWPOS@@PEAUtagWND@@1111@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall IsLastTopMostWindow(const struct tagWND *a1)
{
  unsigned int v1; // r8d
  __int64 v3; // rax

  v1 = 0;
  if ( (*(_BYTE *)(*((_QWORD *)a1 + 5) + 24LL) & 8) != 0 )
  {
    v3 = *((_QWORD *)a1 + 11);
    if ( v3 )
      return (*(_BYTE *)(*(_QWORD *)(v3 + 40) + 24LL) & 8) == 0;
  }
  return v1;
}
