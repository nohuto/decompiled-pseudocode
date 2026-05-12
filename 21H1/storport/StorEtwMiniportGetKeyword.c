/*
 * XREFs of StorEtwMiniportGetKeyword @ 0x1C004F488
 * Callers:
 *     StorEtwMiniportEvent @ 0x1C004EC28 (StorEtwMiniportEvent.c)
 * Callees:
 *     <none>
 */

unsigned __int64 __fastcall StorEtwMiniportGetKeyword(char a1, __int64 a2)
{
  __int64 v4; // r9
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // rax

  v4 = ((a1 & 1) != 0 ? 0x200000600000LL : 0x200000000000LL) | 0x20;
  if ( (a1 & 2) == 0 )
    v4 = (a1 & 1) != 0 ? 0x200000600000LL : 0x200000000000LL;
  v5 = v4 | 0x100000000LL;
  if ( (a1 & 4) == 0 )
    v5 = v4;
  v6 = v5 | 0x400000000LL;
  if ( (a1 & 8) == 0 )
    v6 = v5;
  v7 = v6 | 0x80;
  if ( (a1 & 0x10) == 0 )
    v7 = v6;
  v8 = v7 | 0x200;
  if ( (a1 & 0x20) == 0 )
    v8 = v7;
  v9 = v8 | 0x8000000;
  if ( (a1 & 0x40) == 0 )
    v9 = v8;
  return a2 & 0xFF00000000000000uLL | v9;
}
