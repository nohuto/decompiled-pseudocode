/*
 * XREFs of _NtUserGetWindowCompositionAttribute@8 @ 0x80AF0
 * Callers:
 *     <none>
 * Callees:
 *     __GetTopLevelWindow@4 @ 0x313A0 (__GetTopLevelWindow@4.c)
 *     __GetWindowCompositionInfo@8 @ 0x6DCA6 (__GetWindowCompositionInfo@8.c)
 *     _IsTopLevelOrLayeredChildWindow@4 @ 0x6DD1A (_IsTopLevelOrLayeredChildWindow@4.c)
 *     __GetProp@12 @ 0x6E54C (__GetProp@12.c)
 *     _UserSetLastError@4 @ 0x81122 (_UserSetLastError@4.c)
 *     _DwmSyncGetCompositionAttribute@16 @ 0xBFC92 (_DwmSyncGetCompositionAttribute@16.c)
 *     _GetWindowEffectiveCloakState@4 @ 0xF3D09 (_GetWindowEffectiveCloakState@4.c)
 *     _memcpy @ 0xF929B (_memcpy.c)
 *     __W32ExceptionHandler@4 @ 0x1B6D61 (__W32ExceptionHandler@4.c)
 */

BOOL __stdcall NtUserGetWindowCompositionAttribute(int a1, char *Address)
{
  NTSTATUS CompositionAttribute; // ebx
  char *v3; // ecx
  int v4; // edi
  _DWORD *v5; // eax
  _DWORD *v6; // esi
  void *v7; // esi
  int v8; // ecx
  int v9; // eax
  int v10; // edx
  int v11; // edx
  int v12; // eax
  int v13; // edx
  int v14; // edx
  const void *Prop; // eax
  unsigned int v16; // ecx
  char v17; // al
  int v18; // esi
  int v19; // edx
  ULONG v20; // eax
  unsigned int v22[9]; // [esp+10h] [ebp-80h] BYREF
  _DWORD Src[5]; // [esp+34h] [ebp-5Ch] BYREF
  int v24; // [esp+48h] [ebp-48h]
  _DWORD *v25; // [esp+4Ch] [ebp-44h]
  SIZE_T v26; // [esp+50h] [ebp-40h]
  _DWORD *v27; // [esp+5Ch] [ebp-34h]
  int v28; // [esp+60h] [ebp-30h]
  NTSTATUS v29; // [esp+64h] [ebp-2Ch]
  size_t MaxCount; // [esp+6Ch] [ebp-24h]
  SIZE_T v31; // [esp+70h] [ebp-20h]
  int v32; // [esp+74h] [ebp-1Ch]
  CPPEH_RECORD ms_exc; // [esp+78h] [ebp-18h]
  _DWORD *Addressa; // [esp+9Ch] [ebp+Ch]

  CompositionAttribute = -1073741811;
  v24 = 0;
  v25 = 0;
  v26 = 0;
  MaxCount = 0;
  memset(Src, 0, sizeof(Src));
  ms_exc.registration.TryLevel = 0;
  v3 = Address;
  if ( Address + 12 < Address || (unsigned int)(Address + 12) > _MmUserProbeAddress )
    v3 = (char *)_MmUserProbeAddress;
  v4 = *(_DWORD *)v3;
  v32 = v4;
  Addressa = (_DWORD *)*((_DWORD *)v3 + 1);
  v31 = *((_DWORD *)v3 + 2);
  v24 = v4;
  v25 = Addressa;
  v26 = v31;
  ProbeForWrite(Addressa, v31, 1u);
  if ( (unsigned int)(v4 - 1) <= 0x19 )
  {
    MaxCount = ::MaxCount[2 * v4];
    CompositionAttribute = v31 < MaxCount ? 0xC0000023 : 0;
    v29 = CompositionAttribute;
  }
  ms_exc.registration.TryLevel = -2;
  if ( CompositionAttribute < 0 )
    goto LABEL_70;
  v31 = 0;
  EnterSharedCrit(0, 1);
  v5 = (_DWORD *)ValidateHwnd(a1);
  v6 = v5;
  v27 = v5;
  if ( !v5 )
    goto LABEL_61;
  if ( v4 == 18 )
  {
    Src[0] = GetWindowEffectiveCloakState(v5);
    v7 = (void *)ReferenceDwmApiPort();
    v31 = (SIZE_T)v7;
    goto LABEL_62;
  }
  if ( v4 == 21 )
  {
    Src[0] = *(_BYTE *)(v5[5] + 146) & 0x10;
    v7 = (void *)ReferenceDwmApiPort();
    v31 = (SIZE_T)v7;
    goto LABEL_62;
  }
  v8 = v5[14];
  v28 = v8;
  if ( !v8 )
    goto LABEL_74;
  v9 = 0;
  v10 = v6[3];
  if ( v10 )
  {
    v11 = *(_DWORD *)(v10 + 4);
    if ( v11 )
      v9 = *(_DWORD *)(v11 + 12);
  }
  if ( v8 != v9 )
  {
LABEL_74:
    if ( v4 != 20 || !IsTopLevelOrLayeredChildWindow(v6) )
      goto LABEL_61;
    v8 = v28;
  }
  switch ( v4 )
  {
    case 1:
      v12 = 0;
      memset(v22, 0, sizeof(v22));
      if ( v8 )
      {
        v13 = v6[3];
        if ( v13 )
        {
          v14 = *(_DWORD *)(v13 + 4);
          if ( v14 )
            v12 = *(_DWORD *)(v14 + 12);
        }
        if ( v8 == v12 )
          goto LABEL_33;
      }
      if ( (*(_BYTE *)(v6[5] + 18) & 8) != 0 && _GetTopLevelWindow((int)v6) )
      {
LABEL_33:
        Prop = (const void *)_GetProp((int)v6, (unsigned __int16)atomDWMProp, 1);
        if ( Prop )
        {
          qmemcpy(v22, Prop, sizeof(v22));
          v16 = v22[1];
          v17 = v22[0];
          v6 = v27;
          v4 = v32;
        }
        else
        {
          v17 = 0;
          v16 = 0;
        }
        v18 = v6[5];
        v19 = *(_DWORD *)(v18 + 16);
        if ( (((unsigned int)&loc_80000 & v19) == 0 || (v19 & 0x20000000) != 0) && (v17 & 1) == 0 )
        {
          if ( v16 )
          {
            if ( v16 == 2 )
            {
LABEL_58:
              Src[0] = 1;
              v7 = (void *)ReferenceDwmApiPort();
              v31 = (SIZE_T)v7;
              goto LABEL_62;
            }
          }
          else if ( ((unsigned __int8)~(*(_BYTE *)(v18 + 22) >> 2) & ((*(_BYTE *)(v18 + 22) & 0xC0) != 0xC0)) == 0 )
          {
            goto LABEL_58;
          }
        }
      }
      Src[0] = 0;
      v7 = (void *)ReferenceDwmApiPort();
      v31 = (SIZE_T)v7;
      goto LABEL_62;
    case 20:
      memset(v22, 0, sizeof(v22));
      if ( _GetWindowCompositionInfo((int)v6, v22) && (v22[0] & 0x1000) != 0 )
        goto LABEL_58;
      goto LABEL_60;
    case 23:
      memset(v22, 0, sizeof(v22));
      if ( _GetWindowCompositionInfo((int)v6, v22) && (v22[0] & 0x2000) != 0 )
        goto LABEL_58;
      goto LABEL_60;
    case 24:
      memset(v22, 0, sizeof(v22));
      if ( _GetWindowCompositionInfo((int)v6, v22) && (v22[0] & 0x4000) != 0 )
        goto LABEL_58;
      goto LABEL_60;
    case 25:
      memset(v22, 0, sizeof(v22));
      if ( _GetWindowCompositionInfo((int)v6, v22) && (v22[0] & 0x8000) != 0 )
        goto LABEL_58;
      goto LABEL_60;
    case 26:
      memset(v22, 0, sizeof(v22));
      if ( _GetWindowCompositionInfo((int)v6, v22) && (v22[0] & 0x10000) != 0 )
        goto LABEL_58;
      goto LABEL_60;
  }
  if ( IsWindowDesktopComposed(v6) )
  {
LABEL_60:
    v7 = (void *)ReferenceDwmApiPort();
    v31 = (SIZE_T)v7;
    goto LABEL_62;
  }
LABEL_61:
  CompositionAttribute = -1073741816;
  v7 = 0;
LABEL_62:
  UserSessionSwitchLeaveCrit();
  if ( CompositionAttribute >= 0 )
  {
    switch ( v4 )
    {
      case 1:
      case 18:
      case 20:
      case 21:
      case 23:
      case 24:
      case 25:
      case 26:
        break;
      case 5:
        CompositionAttribute = DwmSyncGetCompositionAttribute(v7, 5, (int)Src);
        v7 = 0;
        break;
      case 8:
        CompositionAttribute = DwmSyncGetCompositionAttribute(v7, 8, (int)Src);
        v7 = 0;
        break;
      case 12:
        ms_exc.registration.TryLevel = 1;
        ProbeForRead(Addressa, 4u, 1u);
        Src[0] = *Addressa;
        ms_exc.registration.TryLevel = -2;
        CompositionAttribute = DwmSyncGetCompositionAttribute(v7, 12, (int)Src);
        v7 = 0;
        break;
      default:
        CompositionAttribute = -1073741811;
        break;
    }
  }
  DereferenceDwmApiPort(v7);
  if ( CompositionAttribute < 0 )
  {
LABEL_70:
    v20 = RtlNtStatusToDosError(CompositionAttribute);
    UserSetLastError(v20);
    return CompositionAttribute >= 0;
  }
  ms_exc.registration.TryLevel = 2;
  memcpy(Addressa, Src, MaxCount);
  ms_exc.registration.TryLevel = -2;
  return CompositionAttribute >= 0;
}
