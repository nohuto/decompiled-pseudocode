/*
 * XREFs of ?SetComponentResolution@InteractiveControlDevice@@QAEJW4_INTERACTIVECTRL_COMPONENT_TYPE@@JPAW4tagINTERACTIVECTRL_HAPTICS_MODE@@@Z @ 0x1B26FC
 * Callers:
 *     ?OnDeviceAttach@InteractiveControlManager@@QAEJPAURawInputManagerDeviceObject@@@Z @ 0x1AE299 (-OnDeviceAttach@InteractiveControlManager@@QAEJPAURawInputManagerDeviceObject@@@Z.c)
 *     ?SetDeviceComponentResolution@InteractiveControlManager@@QAEJKW4_INTERACTIVECTRL_COMPONENT_TYPE@@JPAW4tagINTERACTIVECTRL_HAPTICS_MODE@@@Z @ 0x1AE72E (-SetDeviceComponentResolution@InteractiveControlManager@@QAEJKW4_INTERACTIVECTRL_COMPONENT_TYPE@.c)
 *     ?SetMessagePromotionType@InteractiveControlDevice@@IAEXW4tagINTERACTIVECTRL_PROMOTION_TYPE@@@Z @ 0x1B2CE5 (-SetMessagePromotionType@InteractiveControlDevice@@IAEXW4tagINTERACTIVECTRL_PROMOTION_TYPE@@@Z.c)
 * Callees:
 *     ?Instance@InteractiveControlManager@@SGPAV1@XZ @ 0xD64EA (-Instance@InteractiveControlManager@@SGPAV1@XZ.c)
 *     @__security_check_cookie@4 @ 0xED840 (@__security_check_cookie@4.c)
 *     _memset @ 0xF92A7 (_memset.c)
 *     ??$Write@U?$_tlgWrapSz@D@@U?$_tlgWrapperByVal@$03@@U2@@?$_tlgWriteTemplate@$$A6GJPBU_tlgProvider_t@@PBXPBU_GUID@@2IPAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YGJ0122I3@ZPBU2@PBU2@@@SGJPBU_tlgProvider_t@@PBXPBU_GUID@@2ABU?$_tlgWrapSz@D@@ABU?$_tlgWrapperByVal@$03@@4@Z @ 0x142C21 (--$Write@U-$_tlgWrapSz@D@@U-$_tlgWrapperByVal@$03@@U2@@-$_tlgWriteTemplate@$$A6GJPBU_tlgProvider.c)
 *     ??$Write@U?$_tlgWrapSz@D@@@?$_tlgWriteTemplate@$$A6GJPBU_tlgProvider_t@@PBXPBU_GUID@@2IPAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YGJ0122I3@ZPBU2@PBU2@@@SGJPBU_tlgProvider_t@@PBXPBU_GUID@@2ABU?$_tlgWrapSz@D@@@Z @ 0x1439C9 (--$Write@U-$_tlgWrapSz@D@@@-$_tlgWriteTemplate@$$A6GJPBU_tlgProvider_t@@PBXPBU_GUID@@2IPAU_EVENT.c)
 *     ?SendDeviceIOControl@SimpleHapticsController@@QAEJKPAXK0KPAK@Z @ 0x1B4DDC (-SendDeviceIOControl@SimpleHapticsController@@QAEJKPAXK0KPAK@Z.c)
 *     ?GetResolutionMultiplierForDevice@InteractiveControlParser@@SGJPAUtagINTERACTIVECTRL_COMPONENT_ENTRY@@JJJ@Z @ 0x1B5EED (-GetResolutionMultiplierForDevice@InteractiveControlParser@@SGJPAUtagINTERACTIVECTRL_COMPONENT_E.c)
 *     ?GetScaledComponentValue@InteractiveControlParser@@SGJPAUtagINTERACTIVECTRL_COMPONENT_ENTRY@@J@Z @ 0x1B5F36 (-GetScaledComponentValue@InteractiveControlParser@@SGJPAUtagINTERACTIVECTRL_COMPONENT_ENTRY@@J@Z.c)
 */

int __thiscall InteractiveControlDevice::SetComponentResolution(int this, int a2, int a3, _DWORD *a4)
{
  int v4; // ebx
  int v6; // esi
  int v7; // edx
  struct InteractiveControlManager *v9; // eax
  _DWORD *v10; // ecx
  _DWORD *v11; // eax
  _DWORD *v12; // esi
  int v13; // eax
  int v14; // ecx
  struct tagINTERACTIVECTRL_COMPONENT_ENTRY *ResolutionMultiplierForDevice; // eax
  _BYTE *v16; // eax
  SimpleHapticsController *v17; // ecx
  SimpleHapticsController *v18; // ecx
  int v19; // eax
  int v20; // eax
  struct tagINTERACTIVECTRL_COMPONENT_ENTRY *v21; // [esp+0h] [ebp-D4h]
  int v22; // [esp+4h] [ebp-D0h]
  int v23; // [esp+10h] [ebp-C4h] BYREF
  NTSTATUS (__stdcall *v24)(HIDP_REPORT_TYPE, USAGE, USHORT, USAGE, ULONG, PHIDP_PREPARSED_DATA, PCHAR, ULONG); // [esp+14h] [ebp-C0h]
  NTSTATUS (__stdcall *v25)(HIDP_REPORT_TYPE, USAGE, USHORT, USAGE, PHIDP_VALUE_CAPS, PUSHORT, PHIDP_PREPARSED_DATA); // [esp+18h] [ebp-BCh]
  int v26; // [esp+1Ch] [ebp-B8h] BYREF
  int v27; // [esp+20h] [ebp-B4h] BYREF
  struct tagINTERACTIVECTRL_COMPONENT_ENTRY *v28; // [esp+24h] [ebp-B0h]
  int v29; // [esp+28h] [ebp-ACh]
  int v30; // [esp+2Ch] [ebp-A8h] BYREF
  PVOID OutputBuffer; // [esp+30h] [ebp-A4h]
  int v32; // [esp+34h] [ebp-A0h]
  _WORD v33[36]; // [esp+38h] [ebp-9Ch] BYREF
  struct tagINTERACTIVECTRL_COMPONENT_ENTRY *v34[19]; // [esp+80h] [ebp-54h] BYREF

  v4 = 0;
  v23 = 1;
  OutputBuffer = 0;
  memset(v34, 0, 0x48u);
  v6 = a3;
  v29 = a3;
  v32 = 2;
  if ( !a4 || (v32 = 2, *a4) )
  {
LABEL_7:
    if ( !*(_DWORD *)(this + 36) && *((_DWORD *)InteractiveControlManager::Instance() + 20) )
    {
      v6 = *((_DWORD *)InteractiveControlManager::Instance() + 18);
      v29 = v6;
    }
    goto LABEL_10;
  }
  v32 = 2;
  if ( !*(_DWORD *)(this + 36) )
  {
    v32 = 2;
    if ( !*((_DWORD *)InteractiveControlManager::Instance() + 12) )
    {
      v32 = 2;
      if ( *((_DWORD *)InteractiveControlManager::Instance() + 16) )
        v32 = 3;
    }
    goto LABEL_7;
  }
LABEL_10:
  v7 = a2;
  if ( a2 != 2 )
  {
    if ( a2 == 3 )
    {
      v9 = InteractiveControlManager::Instance();
      v7 = 3;
      v29 = (v6 << 8) / *((_DWORD *)v9 + 26);
    }
    else if ( a2 != 4 )
    {
      return -1073741637;
    }
  }
  v10 = (_DWORD *)(this + 148);
  v11 = *(_DWORD **)(this + 148);
  if ( v11 == (_DWORD *)(this + 148) )
    return v4;
  v25 = HidP_GetSpecificValueCaps;
  v24 = HidP_SetUsageValue;
  while ( 1 )
  {
    v12 = v11;
    v27 = (int)v11;
    v11 = (_DWORD *)*v11;
    v26 = (int)v11;
    if ( v12[2] == v7 )
      break;
LABEL_52:
    if ( v11 == v10 )
      goto LABEL_57;
  }
  v13 = v25(
          HidP_Feature,
          1,
          *((_WORD *)v12 + 11),
          72,
          (PHIDP_VALUE_CAPS)v34,
          (PUSHORT)&v23,
          *(PHIDP_PREPARSED_DATA *)(this + 196));
  v4 = v13;
  if ( v13 >= 0 )
  {
    if ( *((_DWORD *)InteractiveControlManager::Instance() + 12) )
      ResolutionMultiplierForDevice = v34[11];
    else
      ResolutionMultiplierForDevice = (struct tagINTERACTIVECTRL_COMPONENT_ENTRY *)InteractiveControlParser::GetResolutionMultiplierForDevice(
                                                                                     v34[10],
                                                                                     (int)v34[11],
                                                                                     (int)v21,
                                                                                     v22);
    v28 = ResolutionMultiplierForDevice;
    if ( (struct tagINTERACTIVECTRL_COMPONENT_ENTRY *)v12[29] != ResolutionMultiplierForDevice
      || a4 && *a4 != *(_DWORD *)(this + 32) )
    {
      v16 = OutputBuffer;
      if ( !OutputBuffer )
      {
        v16 = (_BYTE *)Win32AllocPool(*(unsigned __int16 *)(this + 52), 1819440195);
        OutputBuffer = v16;
        if ( !v16 )
          return -1073741670;
      }
      *v16 = BYTE2(v34[0]);
      v17 = *(SimpleHapticsController **)(this + 304);
      if ( v17
        && SimpleHapticsController::SendDeviceIOControl(v17, 0xB0192u, 0, 0, v16, *(unsigned __int16 *)(this + 52), 0) >= 0 )
      {
        if ( a4 )
        {
          memset(v33, 0, sizeof(v33));
          v30 = 1;
          v25(HidP_Feature, 14, 0, 32, (PHIDP_VALUE_CAPS)v33, (PUSHORT)&v30, *(PHIDP_PREPARSED_DATA *)(this + 196));
          v24(
            HidP_Feature,
            14,
            *(_DWORD *)&v33[3],
            32,
            v32,
            *(PHIDP_PREPARSED_DATA *)(this + 196),
            (PCHAR)OutputBuffer,
            *(unsigned __int16 *)(this + 52));
        }
        if ( v24(
               HidP_Feature,
               1,
               (USHORT)*(struct tagINTERACTIVECTRL_COMPONENT_ENTRY **)((char *)&v34[1] + 2),
               72,
               (ULONG)v28,
               *(PHIDP_PREPARSED_DATA *)(this + 196),
               (PCHAR)OutputBuffer,
               *(unsigned __int16 *)(this + 52)) >= 0 )
        {
          v18 = *(SimpleHapticsController **)(this + 304);
          if ( v18 )
          {
            if ( SimpleHapticsController::SendDeviceIOControl(
                   v18,
                   (ULONG)&loc_B0191,
                   OutputBuffer,
                   *(unsigned __int16 *)(this + 52),
                   0,
                   0,
                   0) >= 0 )
              v12[29] = v28;
          }
        }
      }
    }
    v12[26] = InteractiveControlParser::GetScaledComponentValue(v21, v22);
    if ( a4 )
      *(_DWORD *)(this + 32) = *a4;
LABEL_41:
    if ( *((_DWORD *)InteractiveControlManager::Instance() + 12) )
    {
      v19 = v29;
      if ( !v29 )
        v19 = v12[26];
      v12[26] = v19;
    }
    if ( *((_DWORD *)InteractiveControlManager::Instance() + 22) )
    {
      if ( *((_DWORD *)InteractiveControlManager::Instance() + 22) != 1 )
      {
        v20 = 1;
        goto LABEL_51;
      }
    }
    else
    {
      v20 = a3;
      if ( a3 )
      {
LABEL_51:
        v7 = a2;
        *(_DWORD *)(v27 + 100) = v20;
        v10 = (_DWORD *)(this + 148);
        v12[24] = 0;
        v11 = (_DWORD *)v26;
        goto LABEL_52;
      }
    }
    v20 = v12[26];
    goto LABEL_51;
  }
  if ( v13 == -1072627708 )
  {
    if ( (unsigned int)dword_2662F8 > 4 )
    {
      v30 = (int)"Device does not support resolution multiplier. Falling back to OS based scaling.";
      _tlgWriteTemplate<long __stdcall (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<char>>(
        (int)&dword_2662F8,
        byte_256B00,
        0,
        0,
        (const char **)&v30);
    }
    v4 = 0;
    goto LABEL_41;
  }
  if ( (unsigned int)dword_2662F8 > 2 )
  {
    v26 = v12[26];
    v27 = v13;
    v30 = (int)"Failed to updated device resolution multiplier. Keeping existing actual resolution.";
    _tlgWriteTemplate<long __stdcall (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
      (int)&dword_2662F8,
      byte_25738F,
      v14,
      v14,
      (const char **)&v30,
      (int)&v27,
      (int)&v26);
  }
LABEL_57:
  if ( OutputBuffer )
    Win32FreePool(OutputBuffer);
  return v4;
}
