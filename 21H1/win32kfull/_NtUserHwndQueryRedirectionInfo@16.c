/*
 * XREFs of _NtUserHwndQueryRedirectionInfo@16 @ 0xB96F4
 * Callers:
 *     <none>
 * Callees:
 *     _RecreateRedirectionBitmap@24 @ 0x23D22 (_RecreateRedirectionBitmap@24.c)
 *     _GetStyleWindow@8 @ 0x387E8 (_GetStyleWindow@8.c)
 *     _GreGetDxSharedSurface@24 @ 0x38958 (_GreGetDxSharedSurface@24.c)
 *     _UserSetLastError@4 @ 0x81122 (_UserSetLastError@4.c)
 *     _UserSetLastStatus@8 @ 0x81F3C (_UserSetLastStatus@8.c)
 *     __SEH_prolog4_GS @ 0xF917C (__SEH_prolog4_GS.c)
 *     _memcpy @ 0xF929B (_memcpy.c)
 *     _GreGetHwndUpdateIds@12 @ 0x1CE24A (_GreGetHwndUpdateIds@12.c)
 */

int __stdcall NtUserHwndQueryRedirectionInfo(int a1, int a2, void *a3, ULONG a4)
{
  int v4; // ebx
  int v5; // eax
  int *StyleWindow; // eax
  int *v7; // ecx
  unsigned int *v8; // esi
  unsigned int v9; // esi
  const void *v10; // esi
  void *v11; // edi
  int DxSharedSurface; // esi
  size_t v13; // esi
  _DWORD *v14; // eax
  int v16; // ecx
  int CurrentProcess; // eax
  _DWORD *v18; // ecx
  int *v19; // eax
  size_t v20; // [esp-4h] [ebp-94h]
  int v21; // [esp+24h] [ebp-6Ch] BYREF
  int v22; // [esp+28h] [ebp-68h]
  ULONG v23; // [esp+2Ch] [ebp-64h]
  int v24; // [esp+30h] [ebp-60h] BYREF
  int v25; // [esp+34h] [ebp-5Ch]
  size_t MaxCount; // [esp+38h] [ebp-58h]
  int v27; // [esp+3Ch] [ebp-54h] BYREF
  int v28; // [esp+40h] [ebp-50h] BYREF
  int v29; // [esp+44h] [ebp-4Ch]
  void *v30; // [esp+48h] [ebp-48h]
  int v31; // [esp+4Ch] [ebp-44h] BYREF
  int *v32; // [esp+50h] [ebp-40h]
  _DWORD Src[9]; // [esp+54h] [ebp-3Ch] BYREF
  CPPEH_RECORD ms_exc; // [esp+78h] [ebp-18h]

  v30 = a3;
  v23 = a4;
  memset(Src, 0, 0x20u);
  v4 = 0;
  v21 = 0;
  v22 = 0;
  v27 = 0;
  v24 = 0;
  v25 = 0;
  v28 = 0;
  v31 = 0;
  EnterSharedCrit(0, 1);
  v5 = ValidateHwnd(a1);
  if ( !v5 )
    goto LABEL_25;
  if ( a2 >= 5 )
    goto LABEL_26;
  StyleWindow = (int *)GetStyleWindow(v5, 2568);
  v7 = StyleWindow;
  v32 = StyleWindow;
  if ( !StyleWindow || (*(_WORD *)(StyleWindow[5] + 30) & 0x3FFF) == 0x29D )
    goto LABEL_44;
  ms_exc.registration.TryLevel = 0;
  v8 = (unsigned int *)v23;
  if ( v23 >= _MmUserProbeAddress )
    v8 = (unsigned int *)_MmUserProbeAddress;
  v9 = *v8;
  v29 = v9;
  ms_exc.registration.TryLevel = -2;
  switch ( a2 )
  {
    case 0:
      if ( v30 )
      {
        MaxCount = 32;
        if ( v9 >= 0x20 )
        {
          v29 = 32;
          ms_exc.registration.TryLevel = 1;
          v10 = v30;
          if ( (unsigned int)v30 >= _MmUserProbeAddress )
            v10 = (const void *)_MmUserProbeAddress;
          qmemcpy(Src, v10, 0x20u);
          ms_exc.registration.TryLevel = -2;
          v31 = Src[1];
          if ( (Src[1] & 0xFFFFFFFB) != 0 )
          {
            v16 = -1073741811;
            goto LABEL_45;
          }
          v11 = v30;
          goto LABEL_14;
        }
        goto LABEL_37;
      }
      goto LABEL_44;
    case 1:
      v11 = v30;
      if ( !v30 )
        goto LABEL_44;
      v20 = 16;
      break;
    case 2:
      v11 = v30;
      if ( !v30 )
        goto LABEL_44;
      v20 = 4;
      break;
    case 3:
      CurrentProcess = PsGetCurrentProcess();
      if ( !IsProcessDwm(CurrentProcess) )
      {
        v16 = -1073741790;
        goto LABEL_45;
      }
      v11 = v30;
      if ( v30 )
      {
        if ( v9 >= 8 )
        {
          MaxCount = 8;
          v29 = 8;
          ms_exc.registration.TryLevel = 2;
          v18 = v30;
          if ( (unsigned int)v30 >= _MmUserProbeAddress )
            v18 = (_DWORD *)_MmUserProbeAddress;
          Src[0] = *v18;
          Src[1] = v18[1];
          ms_exc.registration.TryLevel = -2;
LABEL_14:
          v7 = v32;
          goto LABEL_15;
        }
LABEL_37:
        v16 = -1073741306;
        goto LABEL_45;
      }
LABEL_44:
      v16 = -1073741811;
      goto LABEL_45;
    default:
LABEL_26:
      v16 = -1073741821;
      goto LABEL_45;
  }
  MaxCount = v20;
  if ( v9 < v20 )
    goto LABEL_37;
  v29 = v20;
LABEL_15:
  if ( !a2 )
  {
    v24 = Src[4];
    v25 = Src[5];
    DxSharedSurface = GreGetDxSharedSurface(*v7, &v27, &v24, &v28, &v31, &v21);
    if ( DxSharedSurface != -1071775484 )
      goto LABEL_17;
    GreLockVisRgn(*(_DWORD *)(_gpDispInfo + 20));
    DxSharedSurface = RecreateRedirectionBitmap((int)v32, 0, 0, 0, 1u, 0);
    GreUnlockVisRgn(*(_DWORD *)(_gpDispInfo + 20));
    if ( DxSharedSurface >= 0 )
    {
      DxSharedSurface = GreGetDxSharedSurface(*v32, &v27, &v24, &v28, &v31, &v21);
LABEL_17:
      if ( DxSharedSurface >= 0 )
      {
        Src[0] = v28;
        Src[1] = v31;
        Src[2] = v21;
        Src[3] = v22;
        Src[4] = v24;
        Src[5] = v25;
        Src[6] = v27;
        goto LABEL_19;
      }
    }
LABEL_55:
    v16 = DxSharedSurface;
    goto LABEL_45;
  }
  if ( a2 != 1 )
  {
    if ( a2 != 2 )
    {
      DxSharedSurface = -1073741811;
LABEL_19:
      if ( DxSharedSurface < 0 )
        goto LABEL_25;
      goto LABEL_20;
    }
    v19 = (int *)GreGetDxSharedSurface(*v7, &v27, &v24, &v28, &v31, &v21);
    v32 = v19;
    if ( v19 == (int *)-1073741822 )
    {
      v32 = 0;
LABEL_51:
      Src[0] = v31;
      DxSharedSurface = (int)v32;
      goto LABEL_19;
    }
    if ( (int)v19 >= 0 )
      goto LABEL_51;
    v16 = (int)v19;
LABEL_45:
    UserSetLastStatus(v16, 1);
    goto LABEL_25;
  }
  DxSharedSurface = GreGetHwndUpdateIds((HWND)*v7, (int)&Src[2]);
  if ( DxSharedSurface < 0 )
    goto LABEL_55;
LABEL_20:
  v4 = 1;
  ms_exc.registration.TryLevel = 3;
  if ( (unsigned int)v11 >= _MmUserProbeAddress )
    v11 = (void *)_MmUserProbeAddress;
  v13 = MaxCount;
  memcpy(v11, Src, MaxCount);
  v14 = (_DWORD *)_MmUserProbeAddress;
  if ( v23 < _MmUserProbeAddress )
    v14 = (_DWORD *)v23;
  *v14 = v13;
  ms_exc.registration.TryLevel = -2;
LABEL_25:
  UserSessionSwitchLeaveCrit();
  return v4;
}
