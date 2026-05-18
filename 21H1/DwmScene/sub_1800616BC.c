/*
 * XREFs of sub_1800616BC @ 0x1800616BC
 * Callers:
 *     sub_180060FF4 @ 0x180060FF4 (sub_180060FF4.c)
 *     sub_1800610BC @ 0x1800610BC (sub_1800610BC.c)
 *     sub_180061184 @ 0x180061184 (sub_180061184.c)
 *     sub_18006125C @ 0x18006125C (sub_18006125C.c)
 *     sub_18006151C @ 0x18006151C (sub_18006151C.c)
 *     sub_1800619F0 @ 0x1800619F0 (sub_1800619F0.c)
 * Callees:
 *     __tlregdtor @ 0x18011EF84 (__tlregdtor.c)
 */

__int64 sub_1800616BC()
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
    _tlregdtor(sub_18012BA70);
  }
  return v0 + 16;
}
