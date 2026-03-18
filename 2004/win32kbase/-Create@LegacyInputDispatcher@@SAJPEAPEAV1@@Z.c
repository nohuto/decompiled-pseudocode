/*
 * XREFs of ?Create@LegacyInputDispatcher@@SAJPEAPEAV1@@Z @ 0x1C005D350
 * Callers:
 *     <none>
 * Callees:
 *     Win32AllocPool @ 0x1C0080DF0 (Win32AllocPool.c)
 */

__int64 __fastcall LegacyInputDispatcher::Create(struct LegacyInputDispatcher **a1)
{
  __int64 v2; // rax

  v2 = Win32AllocPool(64LL, 1885947971LL);
  if ( v2 )
  {
    *(_QWORD *)(v2 + 8) = 0LL;
    *(_QWORD *)v2 = &LegacyInputDispatcher::`vftable';
    *(_QWORD *)(v2 + 16) = 0LL;
    *(_QWORD *)(v2 + 24) = 0LL;
    *(_QWORD *)(v2 + 32) = 0LL;
    *(_QWORD *)(v2 + 40) = 64LL;
    *(_QWORD *)(v2 + 48) = 0LL;
    *(_WORD *)(v2 + 56) = 2;
  }
  else
  {
    v2 = 0LL;
  }
  if ( !v2 )
    return 3221225495LL;
  *a1 = (struct LegacyInputDispatcher *)v2;
  return 0LL;
}
