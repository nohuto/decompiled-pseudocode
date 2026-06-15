/*
 * XREFs of sub_180107084 @ 0x180107084
 * Callers:
 *     sub_180109220 @ 0x180109220 (sub_180109220.c)
 * Callees:
 *     sub_180106674 @ 0x180106674 (sub_180106674.c)
 *     sub_180109F18 @ 0x180109F18 (sub_180109F18.c)
 *     sub_18010A130 @ 0x18010A130 (sub_18010A130.c)
 *     sub_18010AFAC @ 0x18010AFAC (sub_18010AFAC.c)
 */

void __fastcall sub_180107084(__int64 a1, __int64 a2)
{
  struct _RTL_CRITICAL_SECTION *v2; // rdi
  __int64 v5; // rax
  __int64 v6; // rcx

  v2 = (struct _RTL_CRITICAL_SECTION *)(a1 + 64);
  EnterCriticalSection((LPCRITICAL_SECTION)(a1 + 64));
  sub_18010A130("Sarm::CSpatialAudioResourceManager::HandleRevocationCompletion", 557LL);
  v5 = sub_180106674(a1, a2);
  if ( v5 )
    sub_18010AFAC(v5);
  else
    sub_180109F18(v6, 562LL, a2);
  if ( v2 )
    LeaveCriticalSection(v2);
}
