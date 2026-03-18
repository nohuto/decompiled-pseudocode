/*
 * XREFs of _IsHungWindow@4 @ 0x738B4
 * Callers:
 *     _xxxHungAppDemon@16 @ 0x7336E (_xxxHungAppDemon@16.c)
 *     _xxxInternalDoSyncPaint@8 @ 0x734E0 (_xxxInternalDoSyncPaint@8.c)
 *     _NtUserQueryWindow@8 @ 0x920B2 (_NtUserQueryWindow@8.c)
 *     _xxxSimpleDoSyncPaint@4 @ 0xA4A1C (_xxxSimpleDoSyncPaint@4.c)
 *     _xxxRegisterGhostWindow@8 @ 0xC20E8 (_xxxRegisterGhostWindow@8.c)
 *     _ProcessHungWindow@4 @ 0xC2576 (_ProcessHungWindow@4.c)
 *     _ShouldProcessHungWindow@4 @ 0xC25A4 (_ShouldProcessHungWindow@4.c)
 *     _xxxRedrawHungWindow@8 @ 0xCC8B8 (_xxxRedrawHungWindow@8.c)
 *     _NtUserSetWindowArrangement@16 @ 0x169EA1 (_NtUserSetWindowArrangement@16.c)
 *     _EditionHandleHungWindow@4 @ 0x1704C2 (_EditionHandleHungWindow@4.c)
 *     ?xxxValidateCapture@CMoveSizeRequest@@CG_NPAUtagWND@@KPAUtagPOINT@@@Z @ 0x19FE53 (-xxxValidateCapture@CMoveSizeRequest@@CG_NPAUtagWND@@KPAUtagPOINT@@@Z.c)
 * Callees:
 *     _IsPumpingInputMsgs@4 @ 0x7393E (_IsPumpingInputMsgs@4.c)
 */

int __stdcall IsHungWindow(int a1)
{
  int v1; // edx
  int v2; // edi
  int v3; // esi
  _DWORD *v4; // ebx
  int v5; // ecx
  int v6; // edx
  int v8; // edi
  unsigned int v9; // eax

  v1 = MEMORY[0xFFDF0004];
  v2 = a1;
  v3 = 0;
  v4 = *(_DWORD **)(a1 + 8);
  if ( (unsigned int)MEMORY[0xFFDF0004] < 0x1000000 )
  {
    v8 = MEMORY[0xFFDF0324];
    if ( MEMORY[0xFFDF0324] == MEMORY[0xFFDF0328] )
    {
      v9 = MEMORY[0xFFDF0320];
    }
    else
    {
      do
      {
        _mm_pause();
        v8 = MEMORY[0xFFDF0324];
        v9 = MEMORY[0xFFDF0320];
      }
      while ( MEMORY[0xFFDF0324] != MEMORY[0xFFDF0328] );
      v4 = *(_DWORD **)(a1 + 8);
      v3 = 0;
      v1 = MEMORY[0xFFDF0004];
    }
    v5 = MEMORY[0xFFDF0004] * (v8 << 8) + (((unsigned int)v1 * (unsigned __int64)v9) >> 24);
    v2 = a1;
  }
  else
  {
    v5 = ((unsigned int)MEMORY[0xFFDF0004] * (unsigned __int64)MEMORY[0xFFDF0320]) >> 24;
  }
  v6 = v4[61];
  if ( (unsigned int)(v5 - *(_DWORD *)(v6 + 12)) > _gdwHungAppTimeout
    && (*(_WORD *)(v6 + 10) & 0x1C07) == 0
    && !PsGetThreadFreezeCount(*v4)
    && (*(_BYTE *)(v4[58] + 8) & 0x40) == 0
    || !IsPumpingInputMsgs(v2) )
  {
    return 1;
  }
  return v3;
}
