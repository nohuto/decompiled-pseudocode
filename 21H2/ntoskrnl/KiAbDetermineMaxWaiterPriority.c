/*
 * XREFs of KiAbDetermineMaxWaiterPriority @ 0x1402EF4E0
 * Callers:
 *     KiAbProcessThreadLocks @ 0x1402F10C4 (KiAbProcessThreadLocks.c)
 *     KiAbProcessContextSwitch @ 0x140347C50 (KiAbProcessContextSwitch.c)
 * Callees:
 *     <none>
 */

char __fastcall KiAbDetermineMaxWaiterPriority(__int64 a1, __int64 a2)
{
  __int16 v2; // ax
  __int64 v3; // rax

  v2 = *(_WORD *)(a1 + 90);
  *(_DWORD *)a2 = 0;
  if ( (v2 & 0x1FE) != 0 )
    *(_BYTE *)(a2 + 1) = 2;
  if ( (v2 & 0xFE00) != 0 )
    *(_BYTE *)(a2 + 2) = 1;
  v3 = *(_QWORD *)(a1 + 72);
  if ( v3 )
  {
    LOBYTE(v3) = *(_BYTE *)(v3 + 48);
    *(_BYTE *)a2 = v3;
  }
  if ( (*(_BYTE *)(a1 + 25) & 1) != 0 )
  {
    LOBYTE(v3) = *(_BYTE *)(a1 - 16LL * *(unsigned __int8 *)(a1 + 24) + 195);
    if ( (char)v3 > 15 )
      LOBYTE(v3) = 15;
    if ( (char)v3 > *(char *)a2 )
      *(_BYTE *)a2 = v3;
  }
  return v3;
}
