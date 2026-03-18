/*
 * XREFs of ?xxxAutoRotateScreen@CLegacyRotationMgr@@UAEJK@Z @ 0x140E60
 * Callers:
 *     <none>
 * Callees:
 *     ?QueryAutoRotationState@CLegacyRotationMgr@@UAE?AW4tagAR_STATE@@XZ @ 0xB21BA (-QueryAutoRotationState@CLegacyRotationMgr@@UAE-AW4tagAR_STATE@@XZ.c)
 *     ?AutoRotationUpdateRegistry@CLegacyRotationMgr@@UAEXXZ @ 0xD1612 (-AutoRotationUpdateRegistry@CLegacyRotationMgr@@UAEXXZ.c)
 *     ?GetDockedOrientationValue@CLegacyRotationMgr@@AAEKPAK@Z @ 0x14086D (-GetDockedOrientationValue@CLegacyRotationMgr@@AAEKPAK@Z.c)
 *     ?IsOrientationWithinPreferences@CLegacyRotationMgr@@AAEHK@Z @ 0x140A16 (-IsOrientationWithinPreferences@CLegacyRotationMgr@@AAEHK@Z.c)
 *     ?xxxRotateScreen@CLegacyRotationMgr@@AAEJKHPAH@Z @ 0x141004 (-xxxRotateScreen@CLegacyRotationMgr@@AAEJKHPAH@Z.c)
 *     ?TraceLoggingScreenOrientationArStateChangeEvent@@YGXKW4arInitiatedBy@@W4tagAR_STATE@@@Z @ 0x186EF4 (-TraceLoggingScreenOrientationArStateChangeEvent@@YGXKW4arInitiatedBy@@W4tagAR_STATE@@@Z.c)
 *     ?TraceLoggingScreenOrientationChangeEvent@@YGXKW4arInitiatedBy@@HW4arFailureReason@@@Z @ 0x186F6A (-TraceLoggingScreenOrientationChangeEvent@@YGXKW4arInitiatedBy@@HW4arFailureReason@@@Z.c)
 */

int __thiscall CLegacyRotationMgr::xxxAutoRotateScreen(CLegacyRotationMgr *this, unsigned int a2)
{
  CLegacyRotationMgr *v2; // ebx
  int v3; // eax
  int AutoRotationState; // eax
  CLegacyRotationMgr *v6; // ecx
  int v7; // edi
  CLegacyRotationMgr *v8; // ecx
  int v9; // edi
  int v10; // esi
  unsigned int v11; // edx
  unsigned __int64 v12; // kr00_8
  int v13; // [esp+Ch] [ebp-14h] BYREF
  unsigned int v14; // [esp+10h] [ebp-10h]
  int v15; // [esp+14h] [ebp-Ch]
  int v16; // [esp+18h] [ebp-8h]
  CLegacyRotationMgr *v17; // [esp+1Ch] [ebp-4h]

  v2 = this;
  v17 = this;
  v3 = _gPowerDisplayState[16];
  if ( v3 != 1 && v3 != 2 )
    return -1;
  dword_2738F0 = 1;
  *(_DWORD *)gAutoRotationInfo = a2;
  AutoRotationState = CLegacyRotationMgr::QueryAutoRotationState(this);
  v7 = AutoRotationState;
  if ( !AutoRotationState
    || (AutoRotationState == 64 || AutoRotationState == 128 || AutoRotationState == 192)
    && a2 == CLegacyRotationMgr::GetDockedOrientationValue(v2, (unsigned int *)v6) )
  {
    if ( CLegacyRotationMgr::IsOrientationWithinPreferences(v6, a2) )
    {
      v13 = 0;
      v9 = CLegacyRotationMgr::xxxRotateScreen(v8, a2, 1, &v13);
      v16 = v9;
      if ( v13 )
      {
        TraceLoggingScreenOrientationChangeEvent(a2, 0, 0, 1001);
      }
      else
      {
        v10 = MEMORY[0xFFDF0004];
        v15 = MEMORY[0xFFDF0004];
        v11 = MEMORY[0xFFDF0324];
        v14 = MEMORY[0xFFDF0320];
        if ( MEMORY[0xFFDF0324] != MEMORY[0xFFDF0328] )
        {
          do
          {
            _mm_pause();
            v11 = MEMORY[0xFFDF0324];
            v14 = MEMORY[0xFFDF0320];
          }
          while ( MEMORY[0xFFDF0324] != MEMORY[0xFFDF0328] );
          v9 = v16;
          v2 = v17;
          v10 = v15;
        }
        v12 = (((unsigned int)v15 * (unsigned __int64)v14) >> 24) + (((unsigned int)v10 * (unsigned __int64)v11) << 8);
        CInputGlobals::UpdateLastInputTime(_gpInputGlobals, v12, HIDWORD(v12), 16);
      }
    }
    else
    {
      TraceLoggingScreenOrientationChangeEvent(a2, 0, 0, 1002);
      v9 = 0;
    }
    if ( !v9 )
      CLegacyRotationMgr::AutoRotationUpdateRegistry(v2);
    return v9;
  }
  else
  {
    TraceLoggingScreenOrientationArStateChangeEvent(a2, v7);
    return -1073741790;
  }
}
