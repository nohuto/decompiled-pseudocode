/*
 * XREFs of ?MouseKeys@@YAHPEAUtagKE@@KH@Z @ 0x1C0189A90
 * Callers:
 *     <none>
 * Callees:
 *     PostWinlogonMessage @ 0x1C0052F60 (PostWinlogonMessage.c)
 *     _guard_dispatch_icall_nop @ 0x1C00D2DC0 (_guard_dispatch_icall_nop.c)
 *     ApiSetEditionKillAccessibilityTimer @ 0x1C01CEBE0 (ApiSetEditionKillAccessibilityTimer.c)
 *     ApiSetEditionPostRitSound @ 0x1C01CFA4C (ApiSetEditionPostRitSound.c)
 */

__int64 __fastcall MouseKeys(struct tagKE *a1)
{
  __int64 v1; // rdx
  __int16 v2; // bx
  int v3; // r9d
  int v4; // r8d
  int v5; // edi
  __int16 v6; // dx
  __int64 i; // rcx
  int v9; // eax

  v1 = *((unsigned __int16 *)a1 + 1);
  v2 = *((unsigned __int8 *)a1 + 2);
  v3 = *((_WORD *)a1 + 1) & 0x8000;
  v4 = (unsigned __int8)gLockBits | (unsigned __int8)gLatchBits | (unsigned __int8)gPhysModifierState;
  if ( (dword_1C0251BA4 & 1) == 0 )
  {
    if ( (dword_1C0251BA4 & 4) != 0 && v2 == gNumLockVk && (*((_WORD *)a1 + 1) & 0x8000) == 0 && v4 == 17 )
    {
      gMKPreviousVk = *((_BYTE *)a1 + 2);
      if ( (dword_1C0251BA4 & 0x10) != 0 )
        ApiSetEditionPostRitSound(0LL, v1, 0LL);
      PostWinlogonMessage(1026LL, 3u);
      return 0LL;
    }
    return 1LL;
  }
  v5 = 0;
  v6 = v2 | v1 & 0x100;
  for ( i = 0LL; i < 16; ++i )
  {
    if ( v6 == *(_WORD *)(gpusMouseVKey + 2 * i) )
      break;
    ++v5;
  }
  if ( v5 == 16 || !gbMKMouseMode && v2 != gNumLockVk )
    return 1LL;
  if ( (_BYTE)v2 == 46 )
  {
    LOBYTE(i) = (v4 & 0x30) != 0;
    if ( ((unsigned __int8)i & ((v4 & 0xC) != 0)) != 0 )
      return 1LL;
  }
  if ( v3 )
  {
    if ( gMKPreviousVk == (_BYTE)v2 )
    {
      if ( gtmridMKMoveCursor )
      {
        ApiSetEditionKillAccessibilityTimer(i, gtmridMKMoveCursor);
        gtmridMKMoveCursor = 0LL;
      }
      gdwPUDFlags &= ~0x2000u;
      gMKPreviousVk = 0;
    }
    return v2 == gNumLockVk;
  }
  if ( gMKPreviousVk == (_BYTE)v2 )
    v9 = gdwPUDFlags | 0x2000;
  else
    v9 = gdwPUDFlags & 0xFFFFDFFF;
  gdwPUDFlags = v9;
  if ( (v9 & 0x2000) == 0 && gtmridMKMoveCursor )
  {
    ApiSetEditionKillAccessibilityTimer(0x2000LL, gtmridMKMoveCursor);
    gtmridMKMoveCursor = 0LL;
  }
  gMKPreviousVk = v2;
  return off_1C020C580[v5](word_1C0227DC8[v5]);
}
