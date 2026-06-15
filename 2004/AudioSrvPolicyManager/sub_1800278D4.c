/*
 * XREFs of sub_1800278D4 @ 0x1800278D4
 * Callers:
 *     sub_180027958 @ 0x180027958 (sub_180027958.c)
 *     sub_1800293D4 @ 0x1800293D4 (sub_1800293D4.c)
 * Callees:
 *     sub_18002B4D8 @ 0x18002B4D8 (sub_18002B4D8.c)
 *     sub_180039D98 @ 0x180039D98 (sub_180039D98.c)
 */

__int64 __fastcall sub_1800278D4(int a1, int a2)
{
  int v4; // edi
  HANDLE ProcessHeap; // rax
  _DWORD *v6; // rax
  __int64 v7; // rcx
  void *v8; // rbx

  v4 = -2147024882;
  ProcessHeap = GetProcessHeap();
  v6 = HeapAlloc(ProcessHeap, 0, 8uLL);
  v8 = v6;
  if ( v6 )
  {
    v6[1] = a1;
    *v6 = a2;
    v4 = sub_18002B4D8(v7, v6);
    if ( v4 < 0 )
      sub_180039D98(v8);
  }
  return (unsigned int)v4;
}
