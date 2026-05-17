/*
 * XREFs of _TpDbgDumpHeapUsage@12 @ 0x4B384700
 * Callers:
 *     <none>
 * Callees:
 *     _RtlpHpAppCompatDontChangePolicy@0 @ 0x4B2ED850 (_RtlpHpAppCompatDontChangePolicy@0.c)
 *     @__security_check_cookie@4 @ 0x4B2F4B20 (@__security_check_cookie@4.c)
 *     _RtlQueryTagHeap@20 @ 0x4B356E90 (_RtlQueryTagHeap@20.c)
 */

int *__stdcall TpDbgDumpHeapUsage(
        char a1,
        int (__thiscall *a2)(_DWORD, int, unsigned int, int *, _DWORD, _DWORD, _DWORD),
        int a3)
{
  unsigned int v3; // esi
  int *result; // eax
  int v5; // [esp+Ch] [ebp-14h]
  _DWORD v6[3]; // [esp+10h] [ebp-10h] BYREF

  v3 = 0;
  LOBYTE(v5) = a1;
  do
  {
    result = RtlQueryTagHeap((int)NtCurrentPeb()->ProcessHeap, 0, v3 + ((unsigned int)TppHeapTag >> 18), v5, v6);
    if ( result )
      result = (int *)a2(a2, a3, v3 + TppHeapTag, result, v6[0], v6[1], v6[2]);
    ++v3;
  }
  while ( v3 < 0xE );
  return result;
}
