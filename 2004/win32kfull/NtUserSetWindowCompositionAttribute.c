/*
 * XREFs of NtUserSetWindowCompositionAttribute @ 0x1C0065FC0
 * Callers:
 *     <none>
 * Callees:
 *     zzzSetWindowCompositionCloak @ 0x1C0022188 (zzzSetWindowCompositionCloak.c)
 *     SetWindowExtendedBoundsMargin @ 0x1C0062A20 (SetWindowExtendedBoundsMargin.c)
 *     SetWindowCompositionNCRenderingExiled @ 0x1C0062B40 (SetWindowCompositionNCRenderingExiled.c)
 *     DwmAsyncSetCompositionAttribute @ 0x1C0062F30 (DwmAsyncSetCompositionAttribute.c)
 *     ValidateHwndIAMComponetUIAware @ 0x1C0066444 (ValidateHwndIAMComponetUIAware.c)
 *     IAMThreadAccessGranted @ 0x1C0066514 (IAMThreadAccessGranted.c)
 *     ?IsComponent@CoreWindowProp@@SAHPEBUtagWND@@@Z @ 0x1C006A3BC (-IsComponent@CoreWindowProp@@SAHPEBUtagWND@@@Z.c)
 *     IsTopLevelOrLayeredChildWindow @ 0x1C006E71C (IsTopLevelOrLayeredChildWindow.c)
 *     _IsTopLevelWindow @ 0x1C006EA50 (_IsTopLevelWindow.c)
 *     UserSetLastError @ 0x1C0090F00 (UserSetLastError.c)
 *     GetWindowCloakState @ 0x1C00B2AEC (GetWindowCloakState.c)
 *     SetWindowCompositionAccentPolicy @ 0x1C0115888 (SetWindowCompositionAccentPolicy.c)
 *     ?GetHost@CoreWindowProp@@SAPEAUtagWND@@PEBU2@@Z @ 0x1C0118568 (-GetHost@CoreWindowProp@@SAPEAUtagWND@@PEBU2@@Z.c)
 *     SetWindowCompositionHasIconicBitmap @ 0x1C011AE4C (SetWindowCompositionHasIconicBitmap.c)
 *     SetWindowCompositionFreezeSWR @ 0x1C011AF44 (SetWindowCompositionFreezeSWR.c)
 *     SetWindowCompositionExcludeFromLivePreview @ 0x1C011EA1C (SetWindowCompositionExcludeFromLivePreview.c)
 *     SetWindowCompositionDarkModeColors @ 0x1C011EC04 (SetWindowCompositionDarkModeColors.c)
 *     SetWindowCompositionForceActiveWindowAppearance @ 0x1C01201CC (SetWindowCompositionForceActiveWindowAppearance.c)
 *     SetWindowCompositionForceIconicSWR @ 0x1C0125198 (SetWindowCompositionForceIconicSWR.c)
 *     SetWindowCompositionPassiveUpdateMode @ 0x1C0155C58 (SetWindowCompositionPassiveUpdateMode.c)
 *     SetWindowCompositionExcludedFromDDA @ 0x1C0155D20 (SetWindowCompositionExcludedFromDDA.c)
 *     memmove @ 0x1C015BD40 (memmove.c)
 *     SetWindowCompositionAllowNCPaint @ 0x1C0214C14 (SetWindowCompositionAllowNCPaint.c)
 *     SetWindowCompositionDisallowPeek @ 0x1C0214CE8 (SetWindowCompositionDisallowPeek.c)
 *     SetWindowCompositionHolographic @ 0x1C0214DBC (SetWindowCompositionHolographic.c)
 *     SetWindowCompositionNCRenderPolicy @ 0x1C0214E90 (SetWindowCompositionNCRenderPolicy.c)
 *     SetWindowCompositionNonClientRTLLayout @ 0x1C0214F44 (SetWindowCompositionNonClientRTLLayout.c)
 *     SetWindowCompositionTransitions @ 0x1C0215018 (SetWindowCompositionTransitions.c)
 *     SetWindowCompositionVisualOwner @ 0x1C02151C0 (SetWindowCompositionVisualOwner.c)
 */

__int64 __fastcall NtUserSetWindowCompositionAttribute(__int64 a1, __m128i *a2)
{
  NTSTATUS v3; // edi
  ULONG64 v4; // rcx
  __int64 CurrentProcessWow64Process; // rax
  volatile void *v6; // xmm0_8
  size_t v7; // r8
  __int64 v8; // r14
  __int64 v9; // rax
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // r8
  __int64 v13; // rsi
  int v14; // ebx
  int v15; // ebx
  int v16; // ebx
  int v17; // ebx
  int v18; // ebx
  int v19; // ebx
  int v20; // ebx
  int v21; // ebx
  int v22; // ebx
  NTSTATUS active; // eax
  bool v24; // sf
  ULONG v26; // eax
  int v27; // ebx
  int v28; // ebx
  int v29; // ebx
  unsigned int v30; // r15d
  __int64 v31; // rcx
  int v32; // ebx
  int v33; // ebx
  int v34; // ebx
  int v35; // ebx
  int v36; // ebx
  void *v37; // rax
  struct tagWND *Host; // rax
  int v39; // eax
  __int128 v40; // [rsp+28h] [rbp-A0h] BYREF
  __int64 v41; // [rsp+38h] [rbp-90h]
  __m128i v42; // [rsp+50h] [rbp-78h]
  SIZE_T v43; // [rsp+60h] [rbp-68h]
  __m128i v44; // [rsp+68h] [rbp-60h]
  __m128i v45; // [rsp+80h] [rbp-48h]
  SIZE_T Length; // [rsp+90h] [rbp-38h]

  v3 = -1073741811;
  v42 = 0LL;
  v43 = 0LL;
  v40 = 0LL;
  v41 = 0LL;
  v4 = (ULONG64)&a2[1].m128i_u64[1];
  if ( &a2[1].m128i_u64[1] < (unsigned __int64 *)a2 || v4 > MmUserProbeAddress )
    a2 = (__m128i *)MmUserProbeAddress;
  v44 = *a2;
  v45 = v44;
  Length = a2[1].m128i_u64[0];
  v42 = v44;
  v43 = Length;
  CurrentProcessWow64Process = PsGetCurrentProcessWow64Process(v4);
  v6 = (volatile void *)_mm_srli_si128(v44, 8).m128i_u64[0];
  ProbeForRead(v6, (unsigned int)Length, CurrentProcessWow64Process != 0 ? 1 : 4);
  if ( (unsigned int)(v44.m128i_i32[0] - 1) <= 0x19 )
  {
    v7 = qword_1C02EA6C8[2 * v44.m128i_i32[0]];
    if ( (unsigned int)Length >= v7 )
    {
      memmove(&v40, (const void *)v6, v7);
      v8 = 0LL;
      v3 = 0;
      goto LABEL_9;
    }
    v3 = -1073741789;
  }
  v8 = 0LL;
LABEL_9:
  if ( v3 < 0 )
  {
LABEL_30:
    v26 = RtlNtStatusToDosError(v3);
    UserSetLastError(v26);
    v24 = v3 < 0;
    goto LABEL_27;
  }
  EnterCrit(0LL, 1LL);
  v9 = ValidateHwndIAMComponetUIAware(a1);
  v13 = v9;
  if ( !v9 )
    goto LABEL_29;
  v14 = v42.m128i_i32[0];
  if ( v42.m128i_i32[0] != 17
    || !(unsigned int)IsTopLevelOrLayeredChildWindow(v9, v10, v12)
    || *(_DWORD *)(*(_QWORD *)(v13 + 40) + 236LL) == 15 )
  {
    if ( (unsigned int)IsTopLevelWindow(v13) || v14 == 20 && (unsigned int)IsTopLevelOrLayeredChildWindow(v13, v10, v12) )
    {
      if ( v14 > 13 )
      {
        v27 = v14 - 15;
        if ( !v27 )
        {
          active = SetWindowCompositionForceActiveWindowAppearance(v13, &v40);
          goto LABEL_25;
        }
        v28 = v27 - 1;
        if ( !v28 )
        {
          active = SetWindowCompositionDisallowPeek(v13, &v40);
          goto LABEL_25;
        }
        v29 = v28 - 3;
        if ( !v29 )
        {
          active = SetWindowCompositionAccentPolicy(v13, &v40);
          goto LABEL_25;
        }
        v32 = v29 - 1;
        if ( v32 )
        {
          v33 = v32 - 2;
          if ( !v33 )
          {
            active = SetWindowCompositionVisualOwner(v13, &v40);
            goto LABEL_25;
          }
          v34 = v33 - 1;
          if ( !v34 )
          {
            if ( (unsigned int)IAMThreadAccessGranted(gptiCurrent) )
            {
              active = SetWindowCompositionHolographic(v13, &v40);
              goto LABEL_25;
            }
            v3 = -1073741790;
            goto LABEL_26;
          }
          v35 = v34 - 1;
          if ( !v35 )
          {
            active = SetWindowCompositionExcludedFromDDA(v13, &v40);
            goto LABEL_25;
          }
          v36 = v35 - 1;
          if ( !v36 )
          {
            active = SetWindowCompositionPassiveUpdateMode(v13, &v40);
            goto LABEL_25;
          }
          if ( v36 == 1 )
          {
            active = SetWindowCompositionDarkModeColors(v13, &v40);
            goto LABEL_25;
          }
LABEL_72:
          v3 = -1073741811;
          goto LABEL_26;
        }
        SetWindowCompositionFreezeSWR(v13, &v40);
      }
      else
      {
        if ( v14 == 13 )
        {
          active = SetWindowCompositionExcludeFromLivePreview(v13, &v40);
          goto LABEL_25;
        }
        v15 = v14 - 2;
        if ( !v15 )
        {
          active = SetWindowCompositionNCRenderPolicy(v13, &v40);
          goto LABEL_25;
        }
        v16 = v15 - 1;
        if ( !v16 )
        {
          active = SetWindowCompositionTransitions(v13, &v40);
          goto LABEL_25;
        }
        v17 = v16 - 1;
        if ( !v17 )
        {
          active = SetWindowCompositionAllowNCPaint(v13, &v40);
          goto LABEL_25;
        }
        v18 = v17 - 2;
        if ( !v18 )
        {
          active = SetWindowCompositionNonClientRTLLayout(v13, &v40);
          goto LABEL_25;
        }
        v19 = v18 - 1;
        if ( !v19 )
        {
          active = SetWindowCompositionForceIconicSWR(v13, &v40);
          goto LABEL_25;
        }
        v20 = v19 - 1;
        if ( !v20 )
        {
          active = SetWindowExtendedBoundsMargin((struct tagTHREADINFO **)v13, &v40);
          goto LABEL_25;
        }
        v21 = v20 - 1;
        if ( v21 )
        {
          v22 = v21 - 1;
          if ( !v22 )
          {
            if ( !(unsigned int)IsWindowDesktopComposed(v13) )
              goto LABEL_26;
            v37 = (void *)ReferenceDwmApiPort(v11);
            active = DwmAsyncSetCompositionAttribute(v37, a1, 10, &v40);
            goto LABEL_25;
          }
          if ( v22 == 1 )
          {
            active = SetWindowCompositionNCRenderingExiled(v13, &v40);
            goto LABEL_25;
          }
          goto LABEL_72;
        }
      }
      active = SetWindowCompositionHasIconicBitmap(v13, &v40);
      goto LABEL_25;
    }
LABEL_29:
    v3 = -1073741816;
    goto LABEL_26;
  }
  v30 = 0;
  if ( (unsigned int)IAMThreadAccessGranted(gptiCurrent) )
  {
    v30 = 2;
  }
  else
  {
    v11 = *(_QWORD *)(gptiCurrent + 416LL);
    if ( *(_QWORD *)(*(_QWORD *)(v13 + 16) + 416LL) == v11
      && ((*(_DWORD *)(v11 + 820) & 0x30) != 0x10 || (v39 = IsTopLevelWindow(v13)) == 0)
      || (unsigned int)CoreWindowProp::IsComponent((const struct tagWND *)v13)
      && (Host = CoreWindowProp::GetHost((const struct tagWND *)v13)) != 0LL
      && (v11 = *((_QWORD *)Host + 2), *(_QWORD *)(v11 + 416) == *(_QWORD *)(gptiCurrent + 416LL)) )
    {
      v30 = 1;
    }
    else
    {
      v3 = -1073741790;
    }
  }
  if ( v3 >= 0 )
  {
    if ( !(_DWORD)v40 )
    {
      v31 = *(_QWORD *)(v13 + 120);
      if ( v31 )
      {
        if ( ((unsigned int)GetWindowCloakState(v31) & v30) != 0 )
          goto LABEL_72;
      }
    }
    active = zzzSetWindowCompositionCloak(v13, &v40, v30);
LABEL_25:
    v3 = active;
  }
LABEL_26:
  UserSessionSwitchLeaveCrit(v11, v10, v12);
  v24 = v3 < 0;
  if ( v3 < 0 )
    goto LABEL_30;
LABEL_27:
  LOBYTE(v8) = !v24;
  return v8;
}
