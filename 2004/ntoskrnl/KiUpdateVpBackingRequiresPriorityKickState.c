/*
 * XREFs of KiUpdateVpBackingRequiresPriorityKickState @ 0x14051B640
 * Callers:
 *     KiSwapThread @ 0x14020C300 (KiSwapThread.c)
 * Callees:
 *     <none>
 */

void __fastcall KiUpdateVpBackingRequiresPriorityKickState(__int64 a1, char a2)
{
  volatile signed __int32 *v2; // rax

  if ( (*(_DWORD *)(a1 + 120) & 0x400000) != 0 )
  {
    v2 = *(volatile signed __int32 **)(a1 + 968);
    if ( a2 )
      _InterlockedOr(v2, 0x40000u);
    else
      _InterlockedAnd(v2, 0xFFFBFFFF);
  }
}
