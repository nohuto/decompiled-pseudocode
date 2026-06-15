/*
 * XREFs of sub_18005B0B0 @ 0x18005B0B0
 * Callers:
 *     sub_18005AD24 @ 0x18005AD24 (sub_18005AD24.c)
 * Callees:
 *     sub_18005B204 @ 0x18005B204 (sub_18005B204.c)
 *     memset @ 0x18006AB8C (memset.c)
 */

__int64 __fastcall sub_18005B0B0(__int64 a1)
{
  InitializeCriticalSectionEx((LPCRITICAL_SECTION)a1, 0, 0);
  *(_QWORD *)(a1 + 40) = 0LL;
  *(_QWORD *)(a1 + 48) = 0LL;
  *(_QWORD *)(a1 + 56) = 0LL;
  *(_QWORD *)(a1 + 64) = 0LL;
  *(_DWORD *)(a1 + 72) = 0;
  *(_BYTE *)(a1 + 76) = 0;
  *(_DWORD *)(a1 + 80) = 0;
  *(_DWORD *)(a1 + 176) = 0;
  *(_BYTE *)(a1 + 6852) = 0;
  *(_QWORD *)(a1 + 6872) = 0LL;
  *(_OWORD *)(a1 + 6856) = xmmword_18015B730;
  memset((void *)(a1 + 104), 0, 0x48uLL);
  memset((void *)(a1 + 180), 0, 0x1A10uLL);
  *(_OWORD *)(a1 + 6880) = 0LL;
  *(_OWORD *)(a1 + 6896) = 0LL;
  *(_QWORD *)(a1 + 6912) = 0LL;
  sub_18005B204(a1 + 84);
  return a1;
}
