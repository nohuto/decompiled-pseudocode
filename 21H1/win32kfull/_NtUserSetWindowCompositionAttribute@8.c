/*
 * XREFs of _NtUserSetWindowCompositionAttribute@8 @ 0x25CE6
 * Callers:
 *     <none>
 * Callees:
 *     _zzzSetWindowCompositionCloak@12 @ 0x1C5F8 (_zzzSetWindowCompositionCloak@12.c)
 *     _DwmAsyncSetCompositionAttribute@16 @ 0x2557C (_DwmAsyncSetCompositionAttribute@16.c)
 *     _SetWindowCompositionNCRenderingExiled@8 @ 0x25858 (_SetWindowCompositionNCRenderingExiled@8.c)
 *     _SetWindowExtendedBoundsMargin@8 @ 0x258E8 (_SetWindowExtendedBoundsMargin@8.c)
 *     _ValidateHwndIAMComponetUIAware@4 @ 0x260B6 (_ValidateHwndIAMComponetUIAware@4.c)
 *     _IAMThreadAccessGranted@4 @ 0x26140 (_IAMThreadAccessGranted@4.c)
 *     _GetWindowCloakState@4 @ 0x26960 (_GetWindowCloakState@4.c)
 *     ?IsComponent@CoreWindowProp@@SGHPBUtagWND@@@Z @ 0x26A8A (-IsComponent@CoreWindowProp@@SGHPBUtagWND@@@Z.c)
 *     __IsTopLevelWindow@4 @ 0x38178 (__IsTopLevelWindow@4.c)
 *     _IsTopLevelOrLayeredChildWindow@4 @ 0x6DD1A (_IsTopLevelOrLayeredChildWindow@4.c)
 *     _HasImmersiveAppRight@4 @ 0x7C7B4 (_HasImmersiveAppRight@4.c)
 *     _UserSetLastError@4 @ 0x81122 (_UserSetLastError@4.c)
 *     _SetWindowCompositionAccentPolicy@8 @ 0xAAC88 (_SetWindowCompositionAccentPolicy@8.c)
 *     _SetWindowCompositionForceActiveWindowAppearance@8 @ 0xAC3D0 (_SetWindowCompositionForceActiveWindowAppearance@8.c)
 *     _SetWindowCompositionFreezeSWR@8 @ 0xAC91A (_SetWindowCompositionFreezeSWR@8.c)
 *     _SetWindowCompositionHasIconicBitmap@8 @ 0xACBD2 (_SetWindowCompositionHasIconicBitmap@8.c)
 *     ?GetHost@CoreWindowProp@@SGPAUtagWND@@PBU2@@Z @ 0xAE592 (-GetHost@CoreWindowProp@@SGPAUtagWND@@PBU2@@Z.c)
 *     _SetWindowCompositionForceIconicSWR@8 @ 0xC54E8 (_SetWindowCompositionForceIconicSWR@8.c)
 *     _SetWindowCompositionExcludeFromLivePreview@8 @ 0xCA1E2 (_SetWindowCompositionExcludeFromLivePreview@8.c)
 *     _SetWindowCompositionDarkModeColors@8 @ 0xF3D60 (_SetWindowCompositionDarkModeColors@8.c)
 *     __SEH_prolog4 @ 0xF9120 (__SEH_prolog4.c)
 *     _memcpy @ 0xF929B (_memcpy.c)
 *     _SetWindowCompositionAllowNCPaint@8 @ 0x179049 (_SetWindowCompositionAllowNCPaint@8.c)
 *     _SetWindowCompositionDisallowPeek@8 @ 0x1790DC (_SetWindowCompositionDisallowPeek@8.c)
 *     _SetWindowCompositionExcludedFromDDA@8 @ 0x179172 (_SetWindowCompositionExcludedFromDDA@8.c)
 *     _SetWindowCompositionHolographic@8 @ 0x179203 (_SetWindowCompositionHolographic@8.c)
 *     _SetWindowCompositionNCRenderPolicy@8 @ 0x179299 (_SetWindowCompositionNCRenderPolicy@8.c)
 *     _SetWindowCompositionNonClientRTLLayout@8 @ 0x179312 (_SetWindowCompositionNonClientRTLLayout@8.c)
 *     _SetWindowCompositionPassiveUpdateMode@8 @ 0x1793A7 (_SetWindowCompositionPassiveUpdateMode@8.c)
 *     _SetWindowCompositionTransitions@8 @ 0x179438 (_SetWindowCompositionTransitions@8.c)
 *     _SetWindowCompositionVisualOwner@8 @ 0x179561 (_SetWindowCompositionVisualOwner@8.c)
 */

BOOL __stdcall NtUserSetWindowCompositionAttribute(int a1, unsigned int a2)
{
  NTSTATUS v2; // ebx
  _DWORD *v3; // esi
  volatile void **v4; // esi
  size_t v5; // eax
  int v6; // edi
  int v7; // eax
  struct tagQ *v8; // esi
  int v9; // ecx
  struct tagWND *Host; // eax
  int v11; // ecx
  int active; // eax
  void *v13; // eax
  ULONG v14; // eax
  const struct tagWND *v16; // [esp+0h] [ebp-60h]
  const struct tagWND *v17; // [esp+0h] [ebp-60h]
  _DWORD v18[5]; // [esp+10h] [ebp-50h] BYREF
  int v19; // [esp+24h] [ebp-3Ch]
  volatile void *v20; // [esp+28h] [ebp-38h]
  SIZE_T v21; // [esp+2Ch] [ebp-34h]
  int v22; // [esp+30h] [ebp-30h]
  volatile void *Address; // [esp+34h] [ebp-2Ch]
  SIZE_T Length; // [esp+38h] [ebp-28h]
  int v25; // [esp+44h] [ebp-1Ch]
  CPPEH_RECORD ms_exc; // [esp+48h] [ebp-18h]

  v2 = -1073741811;
  v25 = -1073741811;
  v19 = 0;
  v20 = 0;
  v21 = 0;
  memset(v18, 0, sizeof(v18));
  ms_exc.registration.TryLevel = 0;
  v3 = (_DWORD *)a2;
  if ( a2 + 12 < a2 || a2 + 12 > _MmUserProbeAddress )
    v3 = (_DWORD *)_MmUserProbeAddress;
  v22 = *v3;
  v4 = (volatile void **)(v3 + 1);
  Address = *v4;
  Length = (SIZE_T)v4[1];
  v19 = v22;
  v20 = Address;
  v21 = Length;
  ProbeForRead(Address, Length, 1u);
  if ( (unsigned int)(v22 - 1) > 0x19 )
    goto LABEL_8;
  v5 = MaxCount[2 * v22];
  if ( Length < v5 )
  {
    v2 = -1073741789;
    v25 = -1073741789;
LABEL_8:
    v6 = 0;
    goto LABEL_9;
  }
  memcpy(v18, (const void *)Address, v5);
  v6 = 0;
  v2 = 0;
  v25 = 0;
LABEL_9:
  ms_exc.registration.TryLevel = -2;
  if ( v2 < 0 )
  {
LABEL_59:
    v14 = RtlNtStatusToDosError(v2);
    UserSetLastError(v14);
    return v2 >= 0;
  }
  EnterCrit(0, 1);
  v7 = ValidateHwndIAMComponetUIAware(a1);
  v8 = (struct tagQ *)v7;
  if ( !v7 )
    goto LABEL_57;
  if ( v19 == 17 && IsTopLevelOrLayeredChildWindow(v7) && *(_DWORD *)(*((_DWORD *)v8 + 5) + 148) != 15 )
  {
    if ( IAMThreadAccessGranted(_gptiCurrent) )
    {
      v6 = 2;
    }
    else if ( *(_DWORD *)(*((_DWORD *)v8 + 2) + 232) == *(_DWORD *)(v9 + 232)
           && (!HasImmersiveAppRight() || !_IsTopLevelWindow(v8))
           || CoreWindowProp::IsComponent(v16)
           && (Host = CoreWindowProp::GetHost(v17)) != 0
           && *(_DWORD *)(*((_DWORD *)Host + 2) + 232) == *(_DWORD *)(_gptiCurrent + 232) )
    {
      v6 = 1;
    }
    else
    {
      v2 = -1073741790;
    }
    if ( v2 >= 0 )
    {
      if ( !v18[0] && (v11 = *((_DWORD *)v8 + 16)) != 0 && (GetWindowCloakState(v11) & v6) != 0 )
      {
LABEL_56:
        v2 = -1073741811;
      }
      else
      {
        active = zzzSetWindowCompositionCloak(v8, v18, v6);
LABEL_51:
        v2 = active;
      }
    }
    goto LABEL_58;
  }
  if ( !_IsTopLevelWindow(v8) && (v19 != 20 || !IsTopLevelOrLayeredChildWindow(v8)) )
  {
LABEL_57:
    v2 = -1073741816;
    goto LABEL_58;
  }
  switch ( v19 )
  {
    case 2:
      active = SetWindowCompositionNCRenderPolicy(v8, v18);
      goto LABEL_51;
    case 3:
      active = SetWindowCompositionTransitions(v8, v18);
      goto LABEL_51;
    case 4:
      active = SetWindowCompositionAllowNCPaint(v8, v18);
      goto LABEL_51;
    case 6:
      active = SetWindowCompositionNonClientRTLLayout(v8, v18);
      goto LABEL_51;
    case 7:
      active = SetWindowCompositionForceIconicSWR(v8, v18);
      goto LABEL_51;
    case 8:
      active = SetWindowExtendedBoundsMargin(v8, v18);
      goto LABEL_51;
    case 9:
      goto LABEL_39;
    case 10:
      if ( !IsWindowDesktopComposed(v8) )
        break;
      v13 = (void *)ReferenceDwmApiPort();
      active = DwmAsyncSetCompositionAttribute(v13, a1, 10, v18);
      goto LABEL_51;
    case 11:
      active = SetWindowCompositionNCRenderingExiled((int *)v8, v18);
      goto LABEL_51;
    case 13:
      active = SetWindowCompositionExcludeFromLivePreview(v8, v18);
      goto LABEL_51;
    case 15:
      active = SetWindowCompositionForceActiveWindowAppearance(v8, v18);
      goto LABEL_51;
    case 16:
      active = SetWindowCompositionDisallowPeek(v8, v18);
      goto LABEL_51;
    case 19:
      active = SetWindowCompositionAccentPolicy(v8, v18);
      goto LABEL_51;
    case 20:
      SetWindowCompositionFreezeSWR(v8, v18);
LABEL_39:
      active = SetWindowCompositionHasIconicBitmap(v8, v18);
      goto LABEL_51;
    case 22:
      active = SetWindowCompositionVisualOwner(v8, v18);
      goto LABEL_51;
    case 23:
      if ( IAMThreadAccessGranted(_gptiCurrent) )
      {
        active = SetWindowCompositionHolographic(v8, v18);
        goto LABEL_51;
      }
      v2 = -1073741790;
      break;
    case 24:
      active = SetWindowCompositionExcludedFromDDA(v8, v18);
      goto LABEL_51;
    case 25:
      active = SetWindowCompositionPassiveUpdateMode(v8, v18);
      goto LABEL_51;
    case 26:
      active = SetWindowCompositionDarkModeColors(v8, v18);
      goto LABEL_51;
    default:
      goto LABEL_56;
  }
LABEL_58:
  UserSessionSwitchLeaveCrit();
  if ( v2 < 0 )
    goto LABEL_59;
  return v2 >= 0;
}
