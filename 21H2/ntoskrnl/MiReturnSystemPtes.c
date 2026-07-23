/*
 * XREFs of MiReturnSystemPtes @ 0x140240318
 * Callers:
 *     MiReleasePtes @ 0x1402EA050 (MiReleasePtes.c)
 *     MiAttemptCoalesce @ 0x140353C10 (MiAttemptCoalesce.c)
 * Callees:
 *     MiReturnSystemVa @ 0x140305338 (MiReturnSystemVa.c)
 */

__int64 __fastcall MiReturnSystemPtes(__int64 a1, __int64 a2, __int64 a3, int a4)
{
  __int64 v4; // rax
  __int64 v5; // r10
  int v6; // r11d
  __int64 v7; // rdx
  __int64 v8; // r8
  __int64 v9; // rdx

  v4 = *(_QWORD *)(a1 + 16);
  v5 = 16 * a2;
  v6 = *(_DWORD *)(a1 + 24) & 4;
  if ( !v6 )
    v5 = a2;
  _InterlockedExchangeAdd64((volatile signed __int64 *)(a1 + 88), -a3);
  _InterlockedExchangeAdd64((volatile signed __int64 *)(a1 + 56), -a3);
  v7 = 16 * a3;
  if ( !v6 )
    v7 = a3;
  v8 = *(unsigned int *)(a1 + 28);
  v9 = (((v4 + 8 * v5) << 25) + (v7 << 28)) >> 16;
  if ( a4 == 1 )
    v8 = 13LL;
  return MiReturnSystemVa((v4 + 8 * v5) << 25 >> 16, v9, v8, 0LL);
}
