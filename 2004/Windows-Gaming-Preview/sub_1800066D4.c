/*
 * XREFs of sub_1800066D4 @ 0x1800066D4
 * Callers:
 *     sub_180008538 @ 0x180008538 (sub_180008538.c)
 * Callees:
 *     sub_180005164 @ 0x180005164 (sub_180005164.c)
 *     sub_1800062A8 @ 0x1800062A8 (sub_1800062A8.c)
 *     sub_180006368 @ 0x180006368 (sub_180006368.c)
 *     sub_1800069F8 @ 0x1800069F8 (sub_1800069F8.c)
 */

__int64 __fastcall sub_1800066D4(__int64 a1)
{
  void *v2; // rsi
  HANDLE ProcessHeap; // rax
  _BYTE v5[64]; // [rsp+20h] [rbp-C8h] BYREF
  _BYTE v6[64]; // [rsp+60h] [rbp-88h] BYREF
  _BYTE v7[64]; // [rsp+A0h] [rbp-48h] BYREF

  sub_1800062A8((__int64)v5);
  if ( *(_BYTE *)(a1 + 64) )
    sub_180005164((__int64)v5, a1 + 8);
  if ( *(_BYTE *)(a1 + 128) )
    sub_180005164((__int64)v6, a1 + 72);
  if ( *(_BYTE *)(a1 + 192) )
    sub_180005164((__int64)v7, a1 + 136);
  sub_180006368(v5);
  sub_1800069F8(v5);
  v2 = *(void **)(a1 + 264);
  *(_QWORD *)(a1 + 264) = 0LL;
  if ( v2 )
  {
    ProcessHeap = GetProcessHeap();
    HeapFree(ProcessHeap, 0, v2);
  }
  DeleteCriticalSection((LPCRITICAL_SECTION)(a1 + 200));
  return sub_1800069F8(a1 + 8);
}
