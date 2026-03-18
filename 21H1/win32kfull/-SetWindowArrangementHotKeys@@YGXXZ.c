/*
 * XREFs of ?SetWindowArrangementHotKeys@@YGXXZ @ 0xD511E
 * Callers:
 *     _RawInputThread@4 @ 0xD57F4 (_RawInputThread@4.c)
 * Callees:
 *     __RegisterHotKey@20 @ 0xC5F06 (__RegisterHotKey@20.c)
 */

void __stdcall SetWindowArrangementHotKeys()
{
  _DWORD *v0; // esi
  int v1; // edi

  v0 = &unk_24FBFC;
  v1 = 14;
  do
  {
    _RegisterHotKey(0, (int)WindowArrangementHotKeyCallback, (struct tagTHREADINFO *)*(v0 - 1), *v0 | 0x4000, v0[1]);
    v0 += 4;
    --v1;
  }
  while ( v1 );
}
