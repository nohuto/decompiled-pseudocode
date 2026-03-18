/*
 * XREFs of NtUserSetWindowCompositionAttribute @ 0x1C008F0E0
 * Callers:
 *     <none>
 * Callees:
 *     ?GetHost@CoreWindowProp@@SAPEAUtagWND@@PEBU2@@Z @ 0x1C001432C (-GetHost@CoreWindowProp@@SAPEAUtagWND@@PEBU2@@Z.c)
 *     GetWindowCloakState @ 0x1C004042C (GetWindowCloakState.c)
 *     _IsTopLevelWindow @ 0x1C0046FA0 (_IsTopLevelWindow.c)
 *     IsTopLevelOrLayeredChildWindow @ 0x1C00472B4 (IsTopLevelOrLayeredChildWindow.c)
 *     ?IsComponent@CoreWindowProp@@SAHPEBUtagWND@@@Z @ 0x1C004C75C (-IsComponent@CoreWindowProp@@SAHPEBUtagWND@@@Z.c)
 *     DwmAsyncSetCompositionAttribute @ 0x1C008EFF0 (DwmAsyncSetCompositionAttribute.c)
 *     ValidateHwndIAMComponetUIAware @ 0x1C008F564 (ValidateHwndIAMComponetUIAware.c)
 *     IAMThreadAccessGranted @ 0x1C008F634 (IAMThreadAccessGranted.c)
 *     SetWindowCompositionNCRenderingExiled @ 0x1C008F68C (SetWindowCompositionNCRenderingExiled.c)
 *     SetWindowExtendedBoundsMargin @ 0x1C008F75C (SetWindowExtendedBoundsMargin.c)
 *     zzzSetWindowCompositionCloak @ 0x1C00C91F8 (zzzSetWindowCompositionCloak.c)
 *     UserSetLastError @ 0x1C00D60E0 (UserSetLastError.c)
 *     SetWindowCompositionAccentPolicy @ 0x1C0116E18 (SetWindowCompositionAccentPolicy.c)
 *     SetWindowCompositionHasIconicBitmap @ 0x1C011BA4C (SetWindowCompositionHasIconicBitmap.c)
 *     SetWindowCompositionFreezeSWR @ 0x1C011BB44 (SetWindowCompositionFreezeSWR.c)
 *     SetWindowCompositionExcludeFromLivePreview @ 0x1C0120290 (SetWindowCompositionExcludeFromLivePreview.c)
 *     SetWindowCompositionDarkModeColors @ 0x1C0120484 (SetWindowCompositionDarkModeColors.c)
 *     SetWindowCompositionForceActiveWindowAppearance @ 0x1C01215FC (SetWindowCompositionForceActiveWindowAppearance.c)
 *     SetWindowCompositionForceIconicSWR @ 0x1C0126488 (SetWindowCompositionForceIconicSWR.c)
 *     SetWindowCompositionPassiveUpdateMode @ 0x1C01585B8 (SetWindowCompositionPassiveUpdateMode.c)
 *     SetWindowCompositionExcludedFromDDA @ 0x1C0158680 (SetWindowCompositionExcludedFromDDA.c)
 *     memmove @ 0x1C015F5C0 (memmove.c)
 *     SetWindowCompositionAllowNCPaint @ 0x1C0213D94 (SetWindowCompositionAllowNCPaint.c)
 *     SetWindowCompositionDisallowPeek @ 0x1C0213E68 (SetWindowCompositionDisallowPeek.c)
 *     SetWindowCompositionHolographic @ 0x1C0213F3C (SetWindowCompositionHolographic.c)
 *     SetWindowCompositionNCRenderPolicy @ 0x1C0214010 (SetWindowCompositionNCRenderPolicy.c)
 *     SetWindowCompositionNonClientRTLLayout @ 0x1C02140C4 (SetWindowCompositionNonClientRTLLayout.c)
 *     SetWindowCompositionTransitions @ 0x1C0214198 (SetWindowCompositionTransitions.c)
 *     SetWindowCompositionVisualOwner @ 0x1C0214340 (SetWindowCompositionVisualOwner.c)
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
  __int64 v10; // rcx
  __int64 v11; // rsi
  int v12; // ebx
  int v13; // ebx
  int v14; // ebx
  int v15; // ebx
  int v16; // ebx
  int v17; // ebx
  int v18; // ebx
  int v19; // ebx
  int v20; // ebx
  NTSTATUS active; // eax
  bool v22; // sf
  ULONG v24; // eax
  int v25; // ebx
  int v26; // ebx
  int v27; // ebx
  unsigned int v28; // r15d
  _QWORD *v29; // rcx
  int v30; // ebx
  int v31; // ebx
  int v32; // ebx
  int v33; // ebx
  int v34; // ebx
  void *v35; // rax
  struct tagWND *Host; // rax
  int v37; // eax
  __int128 v38; // [rsp+28h] [rbp-A0h] BYREF
  __int64 v39; // [rsp+38h] [rbp-90h]
  __m128i v40; // [rsp+50h] [rbp-78h]
  SIZE_T v41; // [rsp+60h] [rbp-68h]
  __m128i v42; // [rsp+68h] [rbp-60h]
  __m128i v43; // [rsp+80h] [rbp-48h]
  SIZE_T Length; // [rsp+90h] [rbp-38h]

  v3 = -1073741811;
  v40 = 0LL;
  v41 = 0LL;
  v38 = 0LL;
  v39 = 0LL;
  v4 = (ULONG64)&a2[1].m128i_u64[1];
  if ( &a2[1].m128i_u64[1] < (unsigned __int64 *)a2 || v4 > MmUserProbeAddress )
    a2 = (__m128i *)MmUserProbeAddress;
  v42 = *a2;
  v43 = v42;
  Length = a2[1].m128i_u64[0];
  v40 = v42;
  v41 = Length;
  CurrentProcessWow64Process = PsGetCurrentProcessWow64Process(v4);
  v6 = (volatile void *)_mm_srli_si128(v42, 8).m128i_u64[0];
  ProbeForRead(v6, (unsigned int)Length, CurrentProcessWow64Process != 0 ? 1 : 4);
  if ( (unsigned int)(v42.m128i_i32[0] - 1) <= 0x19 )
  {
    v7 = qword_1C02E9858[2 * v42.m128i_i32[0]];
    if ( (unsigned int)Length >= v7 )
    {
      memmove(&v38, (const void *)v6, v7);
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
    v24 = RtlNtStatusToDosError(v3);
    UserSetLastError(v24);
    v22 = v3 < 0;
    goto LABEL_27;
  }
  EnterCrit(0LL, 1LL);
  v9 = ValidateHwndIAMComponetUIAware(a1);
  v11 = v9;
  if ( !v9 )
    goto LABEL_29;
  v12 = v40.m128i_i32[0];
  if ( v40.m128i_i32[0] != 17 || !IsTopLevelOrLayeredChildWindow(v9) || *(_DWORD *)(*(_QWORD *)(v11 + 40) + 236LL) == 15 )
  {
    if ( (unsigned int)IsTopLevelWindow(v11) || v12 == 20 && IsTopLevelOrLayeredChildWindow(v11) )
    {
      if ( v12 > 13 )
      {
        v25 = v12 - 15;
        if ( !v25 )
        {
          active = SetWindowCompositionForceActiveWindowAppearance(v11, &v38);
          goto LABEL_25;
        }
        v26 = v25 - 1;
        if ( !v26 )
        {
          active = SetWindowCompositionDisallowPeek(v11, &v38);
          goto LABEL_25;
        }
        v27 = v26 - 3;
        if ( !v27 )
        {
          active = SetWindowCompositionAccentPolicy(v11, &v38);
          goto LABEL_25;
        }
        v30 = v27 - 1;
        if ( v30 )
        {
          v31 = v30 - 2;
          if ( !v31 )
          {
            active = SetWindowCompositionVisualOwner(v11, &v38);
            goto LABEL_25;
          }
          v32 = v31 - 1;
          if ( !v32 )
          {
            if ( (unsigned int)IAMThreadAccessGranted(gptiCurrent) )
            {
              active = SetWindowCompositionHolographic(v11, &v38);
              goto LABEL_25;
            }
            v3 = -1073741790;
            goto LABEL_26;
          }
          v33 = v32 - 1;
          if ( !v33 )
          {
            active = SetWindowCompositionExcludedFromDDA(v11, &v38);
            goto LABEL_25;
          }
          v34 = v33 - 1;
          if ( !v34 )
          {
            active = SetWindowCompositionPassiveUpdateMode(v11, &v38);
            goto LABEL_25;
          }
          if ( v34 == 1 )
          {
            active = SetWindowCompositionDarkModeColors(v11, &v38);
            goto LABEL_25;
          }
LABEL_72:
          v3 = -1073741811;
          goto LABEL_26;
        }
        SetWindowCompositionFreezeSWR(v11, &v38);
      }
      else
      {
        if ( v12 == 13 )
        {
          active = SetWindowCompositionExcludeFromLivePreview(v11, &v38);
          goto LABEL_25;
        }
        v13 = v12 - 2;
        if ( !v13 )
        {
          active = SetWindowCompositionNCRenderPolicy(v11, &v38);
          goto LABEL_25;
        }
        v14 = v13 - 1;
        if ( !v14 )
        {
          active = SetWindowCompositionTransitions(v11, &v38);
          goto LABEL_25;
        }
        v15 = v14 - 1;
        if ( !v15 )
        {
          active = SetWindowCompositionAllowNCPaint(v11, &v38);
          goto LABEL_25;
        }
        v16 = v15 - 2;
        if ( !v16 )
        {
          active = SetWindowCompositionNonClientRTLLayout(v11, &v38);
          goto LABEL_25;
        }
        v17 = v16 - 1;
        if ( !v17 )
        {
          active = SetWindowCompositionForceIconicSWR(v11, &v38);
          goto LABEL_25;
        }
        v18 = v17 - 1;
        if ( !v18 )
        {
          active = SetWindowExtendedBoundsMargin((struct tagWND *)v11);
          goto LABEL_25;
        }
        v19 = v18 - 1;
        if ( v19 )
        {
          v20 = v19 - 1;
          if ( !v20 )
          {
            if ( !(unsigned int)IsWindowDesktopComposed(v11) )
              goto LABEL_26;
            v35 = (void *)ReferenceDwmApiPort(v10);
            active = DwmAsyncSetCompositionAttribute(v35, a1, 10, &v38);
            goto LABEL_25;
          }
          if ( v20 == 1 )
          {
            active = SetWindowCompositionNCRenderingExiled(v11, &v38);
            goto LABEL_25;
          }
          goto LABEL_72;
        }
      }
      active = SetWindowCompositionHasIconicBitmap(v11, &v38);
      goto LABEL_25;
    }
LABEL_29:
    v3 = -1073741816;
    goto LABEL_26;
  }
  v28 = 0;
  if ( (unsigned int)IAMThreadAccessGranted(gptiCurrent) )
  {
    v28 = 2;
  }
  else
  {
    v10 = *(_QWORD *)(gptiCurrent + 424LL);
    if ( *(_QWORD *)(*(_QWORD *)(v11 + 16) + 424LL) == v10
      && ((*(_DWORD *)(v10 + 820) & 0x30) != 0x10 || (v37 = IsTopLevelWindow(v11)) == 0)
      || (unsigned int)CoreWindowProp::IsComponent((const struct tagWND *)v11)
      && (Host = CoreWindowProp::GetHost((const struct tagWND *)v11)) != 0LL
      && (v10 = *((_QWORD *)Host + 2), *(_QWORD *)(v10 + 424) == *(_QWORD *)(gptiCurrent + 424LL)) )
    {
      v28 = 1;
    }
    else
    {
      v3 = -1073741790;
    }
  }
  if ( v3 >= 0 )
  {
    if ( !(_DWORD)v38 )
    {
      v29 = *(_QWORD **)(v11 + 120);
      if ( v29 )
      {
        if ( ((unsigned int)GetWindowCloakState(v29) & v28) != 0 )
          goto LABEL_72;
      }
    }
    active = zzzSetWindowCompositionCloak(v11, &v38, v28);
LABEL_25:
    v3 = active;
  }
LABEL_26:
  UserSessionSwitchLeaveCrit(v10);
  v22 = v3 < 0;
  if ( v3 < 0 )
    goto LABEL_30;
LABEL_27:
  LOBYTE(v8) = !v22;
  return v8;
}
