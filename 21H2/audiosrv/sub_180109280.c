/*
 * XREFs of sub_180109280 @ 0x180109280
 * Callers:
 *     <none>
 * Callees:
 *     sub_180106534 @ 0x180106534 (sub_180106534.c)
 *     sub_180106850 @ 0x180106850 (sub_180106850.c)
 *     sub_1801069E4 @ 0x1801069E4 (sub_1801069E4.c)
 *     sub_18010AFAC @ 0x18010AFAC (sub_18010AFAC.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall sub_180109280(__int64 a1)
{
  int v1; // esi
  __int64 v2; // rdi
  __int64 i; // rax

  v1 = *(_DWORD *)(a1 + 16);
  v2 = *(_QWORD *)(a1 + 8);
  EnterCriticalSection((LPCRITICAL_SECTION)(v2 + 64));
  for ( i = sub_180106850(v2, v1); i; i = sub_1801069E4(v2, v1) )
    sub_18010AFAC(i);
  sub_180106534(v2, v1);
  if ( v2 != -64 )
    LeaveCriticalSection((LPCRITICAL_SECTION)(v2 + 64));
}
