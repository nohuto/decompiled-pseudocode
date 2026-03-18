/*
 * XREFs of ?RotationRequired@CLegacyRotationMgr@@AAEHW4ORIENTATION_PREFERENCE@@PAK@Z @ 0x140BE0
 * Callers:
 *     ?xxxApplyOrientationPreference@CLegacyRotationMgr@@AAEXXZ @ 0xB2190 (-xxxApplyOrientationPreference@CLegacyRotationMgr@@AAEXXZ.c)
 * Callees:
 *     ?GetCurrentOrientation@@YGJPAK@Z @ 0xAC782 (-GetCurrentOrientation@@YGJPAK@Z.c)
 *     ?QueryAutoRotationState@CLegacyRotationMgr@@UAE?AW4tagAR_STATE@@XZ @ 0xB21BA (-QueryAutoRotationState@CLegacyRotationMgr@@UAE-AW4tagAR_STATE@@XZ.c)
 */

BOOL __thiscall CLegacyRotationMgr::RotationRequired(CLegacyRotationMgr *this, int a2, unsigned int *a3)
{
  unsigned int AutoRotationState; // edi
  unsigned int v4; // ecx
  unsigned int v5; // edx
  BOOL result; // eax
  unsigned int v7; // [esp+Ch] [ebp-4h] BYREF

  v7 = 0;
  AutoRotationState = CLegacyRotationMgr::QueryAutoRotationState(this);
  if ( AutoRotationState > 1 || !_grpdeskRitInput )
    return 0;
  if ( a3 )
  {
    v4 = *a3;
  }
  else
  {
    if ( GetCurrentOrientation(&v7) < 0 )
      return 0;
    v4 = v7;
  }
  v7 = v4;
  if ( !dword_2738E0 )
  {
    if ( a2 != 0x80000000 && a2 != 0x40000000 )
    {
      if ( AutoRotationState == 1 )
      {
        v5 = *(_DWORD *)Data;
        if ( !a2 || ((1 << Data[0]) & a2) != 0 )
          goto LABEL_38;
      }
      else
      {
        if ( !a2 )
          goto LABEL_28;
        v5 = *(_DWORD *)gAutoRotationInfo;
        if ( ((1 << gAutoRotationInfo[0]) & a2) != 0 )
          goto LABEL_31;
      }
      if ( (a2 & 1) == 0 )
      {
        if ( (a2 & 2) != 0 )
          v5 = 1;
        else
          v5 = (~(_BYTE)a2 & 4 | 8u) >> 2;
        goto LABEL_38;
      }
LABEL_26:
      v5 = 0;
      goto LABEL_38;
    }
LABEL_37:
    v5 = v4;
    goto LABEL_38;
  }
  if ( a2 == 0x80000000 || a2 == 0x40000000 )
    goto LABEL_37;
  if ( AutoRotationState == 1 )
  {
    v5 = *(_DWORD *)Data;
    if ( !a2 || ((1 << ((Data[0] + 1) & 3)) & a2) != 0 )
      goto LABEL_38;
LABEL_16:
    if ( (a2 & 2) == 0 )
    {
      if ( (a2 & 1) != 0 )
        v5 = 3;
      else
        v5 = ((a2 & 8) != 0) + 1;
      goto LABEL_38;
    }
    goto LABEL_26;
  }
  if ( !a2 )
  {
LABEL_28:
    if ( dword_2738F0 )
    {
      v5 = *(_DWORD *)gAutoRotationInfo;
      goto LABEL_38;
    }
    return 0;
  }
  v5 = *(_DWORD *)gAutoRotationInfo;
  if ( ((1 << ((gAutoRotationInfo[0] + 1) & 3)) & a2) == 0 )
    goto LABEL_16;
LABEL_31:
  if ( !dword_2738F0 )
    return 0;
LABEL_38:
  result = v5 != v7;
  if ( a3 )
    *a3 = v5;
  return result;
}
