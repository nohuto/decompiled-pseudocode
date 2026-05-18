/*
 * XREFs of sub_180066F8C @ 0x180066F8C
 * Callers:
 *     sub_1800668C4 @ 0x1800668C4 (sub_1800668C4.c)
 *     sub_18006698C @ 0x18006698C (sub_18006698C.c)
 *     sub_180066A54 @ 0x180066A54 (sub_180066A54.c)
 *     sub_180066B2C @ 0x180066B2C (sub_180066B2C.c)
 *     sub_180066DEC @ 0x180066DEC (sub_180066DEC.c)
 *     sub_1800672C0 @ 0x1800672C0 (sub_1800672C0.c)
 * Callees:
 *     __tlregdtor @ 0x180124854 (__tlregdtor.c)
 */

__int64 sub_180066F8C()
{
  __int64 v0; // rbx
  int v1; // eax

  v0 = *((_QWORD *)NtCurrentTeb()->ThreadLocalStoragePointer + (unsigned int)TlsIndex);
  v1 = *(_DWORD *)(v0 + 40);
  if ( (v1 & 1) == 0 )
  {
    *(_DWORD *)(v0 + 40) = v1 | 1;
    *(_QWORD *)(v0 + 16) = 0LL;
    *(_QWORD *)(v0 + 24) = 0LL;
    *(_QWORD *)(v0 + 32) = 0LL;
    _tlregdtor(sub_180131430);
  }
  return v0 + 16;
}
