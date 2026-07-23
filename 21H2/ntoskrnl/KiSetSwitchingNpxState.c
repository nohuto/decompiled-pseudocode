/*
 * XREFs of KiSetSwitchingNpxState @ 0x140266D64
 * Callers:
 *     KiInitializeContextThread @ 0x140266AAC (KiInitializeContextThread.c)
 * Callees:
 *     <none>
 */

void __fastcall KiSetSwitchingNpxState(__int64 a1, char a2)
{
  unsigned __int64 v2; // r8

  v2 = MEMORY[0xFFFFF780000003D8] & 0xFFFFFFFFFFFFFFFCuLL | (a2 == 0);
  if ( (*(_DWORD *)(a1 + 116) & 0x100000) != 0 )
    v2 = MEMORY[0xFFFFF780000003D8] & 0xFFFFFFFFFFFFFFFCuLL | (2049LL - (a2 != 0));
  *(_QWORD *)(a1 + 592) = v2;
}
