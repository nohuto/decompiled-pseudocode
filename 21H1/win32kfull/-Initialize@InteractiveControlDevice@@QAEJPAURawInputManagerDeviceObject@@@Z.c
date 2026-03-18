/*
 * XREFs of ?Initialize@InteractiveControlDevice@@QAEJPAURawInputManagerDeviceObject@@@Z @ 0x1B1F54
 * Callers:
 *     ?OnDeviceAttach@InteractiveControlManager@@QAEJPAURawInputManagerDeviceObject@@@Z @ 0x1AE299 (-OnDeviceAttach@InteractiveControlManager@@QAEJPAURawInputManagerDeviceObject@@@Z.c)
 * Callees:
 *     ?Instance@InteractiveControlManager@@SGPAV1@XZ @ 0xD64EA (-Instance@InteractiveControlManager@@SGPAV1@XZ.c)
 *     _memset @ 0xF92A7 (_memset.c)
 *     ??$Write@U?$_tlgWrapSz@D@@U?$_tlgWrapperByVal@$03@@@?$_tlgWriteTemplate@$$A6GJPBU_tlgProvider_t@@PBXPBU_GUID@@2IPAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YGJ0122I3@ZPBU2@PBU2@@@SGJPBU_tlgProvider_t@@PBXPBU_GUID@@2ABU?$_tlgWrapSz@D@@ABU?$_tlgWrapperByVal@$03@@@Z @ 0x1AD82B (--$Write@U-$_tlgWrapSz@D@@U-$_tlgWrapperByVal@$03@@@-$_tlgWriteTemplate@$$A6GJPBU_tlgProvider_t@.c)
 *     ?CreateDeadzone@InteractiveControlDevice@@QAEJXZ @ 0x1B18A2 (-CreateDeadzone@InteractiveControlDevice@@QAEJXZ.c)
 *     ?Deinitialize@InteractiveControlDevice@@QAEXXZ @ 0x1B1A87 (-Deinitialize@InteractiveControlDevice@@QAEXXZ.c)
 *     ?InitializeWaveformOrdinalForDevice@InteractiveControlDevice@@QAEJXZ @ 0x1B2253 (-InitializeWaveformOrdinalForDevice@InteractiveControlDevice@@QAEJXZ.c)
 *     ??0SimpleHapticsController@@QAE@XZ @ 0x1B4135 (--0SimpleHapticsController@@QAE@XZ.c)
 *     ?DeInitialize@SimpleHapticsController@@QAEJXZ @ 0x1B4278 (-DeInitialize@SimpleHapticsController@@QAEJXZ.c)
 *     ?Initialize@SimpleHapticsController@@QAEJPAU_UNICODE_STRING@@@Z @ 0x1B44C8 (-Initialize@SimpleHapticsController@@QAEJPAU_UNICODE_STRING@@@Z.c)
 *     ?SendDeviceIOControl@SimpleHapticsController@@QAEJKPAXK0KPAK@Z @ 0x1B4DDC (-SendDeviceIOControl@SimpleHapticsController@@QAEJKPAXK0KPAK@Z.c)
 *     ?SetDevicePropertyData@SimpleHapticsController@@QAEJPBU_DEVPROPKEY@@KKKKPAX@Z @ 0x1B5432 (-SetDevicePropertyData@SimpleHapticsController@@QAEJPBU_DEVPROPKEY@@KKKKPAX@Z.c)
 *     ?BuildDeviceCapabilities@InteractiveControlParser@@SGJPAU_HIDP_PREPARSED_DATA@@PAVInteractiveControlDevice@@@Z @ 0x1B5930 (-BuildDeviceCapabilities@InteractiveControlParser@@SGJPAU_HIDP_PREPARSED_DATA@@PAVInteractiveCon.c)
 */

NTSTATUS __thiscall InteractiveControlDevice::Initialize(InteractiveControlDevice *this, int Object)
{
  struct _UNICODE_STRING *v2; // ebx
  NTSTATUS v4; // esi
  int v5; // ecx
  void *v6; // eax
  SimpleHapticsController *v7; // eax
  SimpleHapticsController *v8; // eax
  int v9; // eax
  int v10; // ecx
  SimpleHapticsController *v11; // ecx
  int v12; // esi
  SimpleHapticsController *v14; // ecx
  SimpleHapticsController *v15; // ecx
  int v16; // eax
  int v17; // ecx
  NTSTATUS v18; // eax
  int v19; // ecx
  const struct _DEVPROPKEY *v20; // [esp-18h] [ebp-34h]
  unsigned int v21; // [esp-14h] [ebp-30h]
  unsigned int v22; // [esp-10h] [ebp-2Ch]
  unsigned int v23; // [esp-Ch] [ebp-28h]
  unsigned int v24; // [esp-8h] [ebp-24h]
  struct _HIDP_PREPARSED_DATA *v25; // [esp+0h] [ebp-1Ch]
  struct InteractiveControlDevice *v26; // [esp+4h] [ebp-18h]
  int v27; // [esp+Ch] [ebp-10h] BYREF
  int v28; // [esp+10h] [ebp-Ch]
  size_t Size; // [esp+14h] [ebp-8h] BYREF
  void *Handle; // [esp+18h] [ebp-4h] BYREF

  Handle = 0;
  Size = 0;
  v2 = (struct _UNICODE_STRING *)Object;
  v28 = *(_DWORD *)(Object + 260);
  v4 = RawInputManagerDeviceObjectReference(Object);
  if ( v4 >= 0 )
  {
    v5 = dword_26C380;
    *(_DWORD *)this = v2;
    *((_DWORD *)this + 1) = v5;
    dword_26C380 = v5 + 1;
    v4 = ObOpenObjectByPointer(
           v2,
           0,
           0,
           3u,
           ExRawInputManagerObjectType,
           (unsigned __int16)(~(unsigned __int16)*(_DWORD *)&v2[20].Length & 0x2000) >> 13,
           &Handle);
    if ( v4 >= 0 )
    {
      v4 = RIMGetDevicePreparsedDataLockfree(Handle, 0, &Size, 0);
      if ( v4 >= 0 )
      {
        v6 = (void *)Win32AllocPool(Size, 1819440195);
        *((_DWORD *)this + 49) = v6;
        if ( !v6 )
        {
LABEL_5:
          v4 = -1073741670;
          goto LABEL_22;
        }
        memset(v6, 0, Size);
        v4 = RIMGetDevicePreparsedDataLockfree(Handle, *((_DWORD *)this + 49), &Size, 0);
        if ( v4 >= 0 )
        {
          v7 = (SimpleHapticsController *)Win32AllocPool(56, 1667787091);
          if ( v7 )
            v8 = SimpleHapticsController::SimpleHapticsController(v7);
          else
            v8 = 0;
          *((_DWORD *)this + 76) = v8;
          if ( !v8 )
            goto LABEL_5;
          RIMUnlockExclusive(v28 + 60);
          v9 = SimpleHapticsController::Initialize(*((SimpleHapticsController **)this + 76), v2 + 23);
          if ( v9 < 0 )
          {
            if ( (unsigned int)dword_2662F8 > 4 )
            {
              Object = v9;
              v27 = (int)"SimpleHapticsController->Initialize failed with.";
              _tlgWriteTemplate<long __stdcall (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<char>,_tlgWrapperByVal<4>>(
                (int)&dword_2662F8,
                byte_256A55,
                v10,
                v10,
                (const char **)&v27,
                (int)&Object);
            }
            v11 = (SimpleHapticsController *)*((_DWORD *)this + 76);
            if ( v11 )
            {
              SimpleHapticsController::DeInitialize(v11);
              v12 = *((_DWORD *)this + 76);
              if ( v12 )
              {
                SimpleHapticsController::DeInitialize(*((SimpleHapticsController **)this + 76));
                Win32FreePool(v12);
              }
              *((_DWORD *)this + 76) = 0;
            }
          }
          v4 = InteractiveControlParser::BuildDeviceCapabilities(v25, v26);
          if ( v4 < 0 )
            goto LABEL_21;
          if ( *((_DWORD *)this + 10) != 1 )
          {
            v4 = -1073741637;
LABEL_21:
            RIMLockExclusive(v28 + 60);
            goto LABEL_22;
          }
          if ( *((_DWORD *)this + 47) )
            InteractiveControlDevice::CreateDeadzone(this);
          if ( *((_DWORD *)InteractiveControlManager::Instance() + 12) )
          {
            Object = 235930369;
            if ( _gdwInAtomicOperation && (_gdwExtraInstrumentations & 1) != 0 )
              KeBugCheckEx(0x160u, _gdwInAtomicOperation, 0, 0, 0);
            UserSessionSwitchLeaveCrit();
            v14 = (SimpleHapticsController *)*((_DWORD *)this + 76);
            if ( v14 )
              SimpleHapticsController::SendDeviceIOControl(v14, (ULONG)&loc_B0191, &Object, 4u, 0, 0, 0);
            EnterCrit(0, 1);
          }
          RIMLockExclusive(v28 + 60);
          if ( (*(_DWORD *)(*(_DWORD *)this + 160) & 0x2000) == 0 && *((_DWORD *)this + 10) == 1 )
          {
            v15 = (SimpleHapticsController *)*((_DWORD *)this + 76);
            if ( v15 )
            {
              v16 = SimpleHapticsController::SetDevicePropertyData(v15, v20, v21, v22, v23, v24, (char *)this + 40);
              if ( v16 < 0 && (unsigned int)dword_2662F8 > 2 )
              {
                Object = v16;
                v27 = (int)"Function failed.";
                _tlgWriteTemplate<long __stdcall (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<char>,_tlgWrapperByVal<4>>(
                  (int)&dword_2662F8,
                  byte_256AC8,
                  v17,
                  v17,
                  (const char **)&v27,
                  (int)&Object);
              }
            }
          }
          v18 = InteractiveControlDevice::InitializeWaveformOrdinalForDevice(this);
          v4 = v18;
          if ( v18 < 0 && (unsigned int)dword_2662F8 > 2 )
          {
            Object = v18;
            v27 = (int)"Function failed.";
            _tlgWriteTemplate<long __stdcall (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<char>,_tlgWrapperByVal<4>>(
              (int)&dword_2662F8,
              byte_256AC8,
              v19,
              v19,
              (const char **)&v27,
              (int)&Object);
          }
        }
      }
    }
  }
LABEL_22:
  if ( Handle )
    ObCloseHandle(Handle, 1);
  if ( v4 < 0 )
    InteractiveControlDevice::Deinitialize(this);
  return v4;
}
