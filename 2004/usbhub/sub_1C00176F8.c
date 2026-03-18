/*
 * XREFs of sub_1C00176F8 @ 0x1C00176F8
 * Callers:
 *     sub_1C000DC30 @ 0x1C000DC30 (sub_1C000DC30.c)
 *     CompletionRoutine @ 0x1C000DFA0 (CompletionRoutine.c)
 *     sub_1C000E620 @ 0x1C000E620 (sub_1C000E620.c)
 *     sub_1C000E9B0 @ 0x1C000E9B0 (sub_1C000E9B0.c)
 *     sub_1C00109A0 @ 0x1C00109A0 (sub_1C00109A0.c)
 *     sub_1C0016F40 @ 0x1C0016F40 (sub_1C0016F40.c)
 *     sub_1C00173C0 @ 0x1C00173C0 (sub_1C00173C0.c)
 *     sub_1C001820C @ 0x1C001820C (sub_1C001820C.c)
 *     sub_1C00304E0 @ 0x1C00304E0 (sub_1C00304E0.c)
 *     sub_1C003AEF8 @ 0x1C003AEF8 (sub_1C003AEF8.c)
 *     sub_1C003E6C4 @ 0x1C003E6C4 (sub_1C003E6C4.c)
 *     sub_1C0056E30 @ 0x1C0056E30 (sub_1C0056E30.c)
 * Callees:
 *     sub_1C002DC78 @ 0x1C002DC78 (sub_1C002DC78.c)
 */

__int64 __fastcall sub_1C00176F8(__int64 a1, __int64 a2, int a3, int a4)
{
  __int64 v7; // rbx
  int v8; // eax
  __int64 result; // rax

  if ( !a1 )
    sub_1C002DC78(0LL, 0LL);
  v7 = *(_QWORD *)(a1 + 64);
  if ( !v7 )
    sub_1C002DC78(a1, 0LL);
  if ( *(_DWORD *)v7 != 541218120 )
    sub_1C002DC78(a1, *(_QWORD *)(a1 + 64));
  *(_BYTE *)(v7 + 5064) = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v7 + 5056));
  v8 = *(_DWORD *)(v7 + 4172);
  *(_DWORD *)(a2 + 44) = a3;
  *(_DWORD *)(a2 + 36) = a4;
  *(_DWORD *)(a2 + 40) = v8;
  *(_DWORD *)(a2 + 32) = 844055622;
  *(_QWORD *)(a2 + 24) = KeGetCurrentThread();
  result = *(unsigned int *)(v7 + 4172);
  *(_QWORD *)(v7 + 1344) = a2;
  return result;
}
