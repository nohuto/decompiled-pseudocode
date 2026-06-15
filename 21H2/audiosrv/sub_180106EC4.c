/*
 * XREFs of sub_180106EC4 @ 0x180106EC4
 * Callers:
 *     sub_180109260 @ 0x180109260 (sub_180109260.c)
 * Callees:
 *     sub_180106534 @ 0x180106534 (sub_180106534.c)
 *     sub_180106850 @ 0x180106850 (sub_180106850.c)
 *     sub_1801069E4 @ 0x1801069E4 (sub_1801069E4.c)
 *     sub_18010A130 @ 0x18010A130 (sub_18010A130.c)
 *     sub_18010B238 @ 0x18010B238 (sub_18010B238.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall sub_180106EC4(__int64 a1, int a2)
{
  struct _RTL_CRITICAL_SECTION *v4; // rbx
  __int64 i; // rax

  v4 = (struct _RTL_CRITICAL_SECTION *)(a1 + 64);
  EnterCriticalSection((LPCRITICAL_SECTION)(a1 + 64));
  sub_18010A130("Sarm::CSpatialAudioResourceManager::HandleRedistributeObjects", 580LL);
  for ( i = sub_180106850(a1, a2); i; i = sub_1801069E4(a1, a2) )
    sub_18010B238(i);
  sub_180106534(a1, a2);
  if ( v4 )
    LeaveCriticalSection(v4);
}
