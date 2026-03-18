/*
 * XREFs of ?Remove@?$CArray@PEAVCInteraction@@V?$CArrayEqualHelper@PEAVCInteraction@@@@@@QEAAHAEBQEAVCInteraction@@@Z @ 0x1801C60E0
 * Callers:
 *     ??1CInteraction@@MEAA@XZ @ 0x1800DBED4 (--1CInteraction@@MEAA@XZ.c)
 *     ?ResetDefaultInteractionForCurrentMC@CInteraction@@QEAAX_N@Z @ 0x1801C6400 (-ResetDefaultInteractionForCurrentMC@CInteraction@@QEAAX_N@Z.c)
 * Callees:
 *     memmove_0 @ 0x1800EE9D7 (memmove_0.c)
 */

__int64 __fastcall CArray<CInteraction *,CArrayEqualHelper<CInteraction *>>::Remove(__int64 a1, _QWORD *a2)
{
  int v2; // r8d
  int v3; // r9d
  unsigned int v4; // ebx
  __int64 v5; // rax

  v2 = dword_180348448;
  v3 = 0;
  v4 = 1;
  if ( dword_180348448 <= 0 )
  {
LABEL_5:
    v3 = -1;
  }
  else
  {
    v5 = 0LL;
    while ( *(_QWORD *)((char *)CInteraction::s_DefaultStateLockedInteractions + v5) != *a2 )
    {
      ++v3;
      v5 += 8LL;
      if ( v3 >= dword_180348448 )
        goto LABEL_5;
    }
  }
  if ( v3 == -1 )
    return 0LL;
  if ( v3 < 0 || v3 + 1 > dword_180348448 )
  {
    return 0;
  }
  else
  {
    if ( v3 + 1 != dword_180348448 )
    {
      memmove_0(
        (char *)CInteraction::s_DefaultStateLockedInteractions + 8 * v3,
        (char *)CInteraction::s_DefaultStateLockedInteractions + 8 * v3 + 8,
        8LL * (dword_180348448 - v3 - 1));
      v2 = dword_180348448;
    }
    dword_180348448 = v2 - 1;
  }
  return v4;
}
