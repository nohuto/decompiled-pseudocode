/*
 * XREFs of ?Initialize@InteractiveControlDevice@@QEAAJPEAURawInputManagerDeviceObject@@@Z @ 0x1C0256DF0
 * Callers:
 *     ?OnDeviceAttach@InteractiveControlManager@@QEAAJPEAURawInputManagerDeviceObject@@@Z @ 0x1C0252008 (-OnDeviceAttach@InteractiveControlManager@@QEAAJPEAURawInputManagerDeviceObject@@@Z.c)
 * Callees:
 *     ?Instance@InteractiveControlManager@@SAPEAV1@XZ @ 0x1C000ACA4 (-Instance@InteractiveControlManager@@SAPEAV1@XZ.c)
 *     memset @ 0x1C015F880 (memset.c)
 *     ??$Write@U?$_tlgWrapSz@D@@U?$_tlgWrapperByVal@$03@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapSz@D@@AEBU?$_tlgWrapperByVal@$03@@@Z @ 0x1C0251114 (--$Write@U-$_tlgWrapSz@D@@U-$_tlgWrapperByVal@$03@@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t.c)
 *     ??_GSimpleHapticsController@@QEAAPEAXI@Z @ 0x1C02564E8 (--_GSimpleHapticsController@@QEAAPEAXI@Z.c)
 *     ?CreateDeadzone@InteractiveControlDevice@@QEAAJXZ @ 0x1C02565BC (-CreateDeadzone@InteractiveControlDevice@@QEAAJXZ.c)
 *     ?Deinitialize@InteractiveControlDevice@@QEAAXXZ @ 0x1C0256834 (-Deinitialize@InteractiveControlDevice@@QEAAXXZ.c)
 *     ?InitializeWaveformOrdinalForDevice@InteractiveControlDevice@@QEAAJXZ @ 0x1C02571FC (-InitializeWaveformOrdinalForDevice@InteractiveControlDevice@@QEAAJXZ.c)
 *     ?DeInitialize@SimpleHapticsController@@QEAAJXZ @ 0x1C02596C8 (-DeInitialize@SimpleHapticsController@@QEAAJXZ.c)
 *     ?Initialize@SimpleHapticsController@@QEAAJPEAU_UNICODE_STRING@@@Z @ 0x1C0259A3C (-Initialize@SimpleHapticsController@@QEAAJPEAU_UNICODE_STRING@@@Z.c)
 *     ?SendDeviceIOControl@SimpleHapticsController@@QEAAJKPEAXK0KPEAK@Z @ 0x1C025A67C (-SendDeviceIOControl@SimpleHapticsController@@QEAAJKPEAXK0KPEAK@Z.c)
 *     ?SetDevicePropertyData@SimpleHapticsController@@QEAAJPEBU_DEVPROPKEY@@KKKKPEAX@Z @ 0x1C025AF8C (-SetDevicePropertyData@SimpleHapticsController@@QEAAJPEBU_DEVPROPKEY@@KKKKPEAX@Z.c)
 *     ?BuildDeviceCapabilities@InteractiveControlParser@@SAJPEAU_HIDP_PREPARSED_DATA@@PEAVInteractiveControlDevice@@@Z @ 0x1C025B76C (-BuildDeviceCapabilities@InteractiveControlParser@@SAJPEAU_HIDP_PREPARSED_DATA@@PEAVInteractiveC.c)
 */

__int64 __fastcall InteractiveControlDevice::Initialize(InteractiveControlDevice *this, char *Object)
{
  __int64 v2; // r14
  NTSTATUS v5; // ebx
  int v6; // ecx
  void *v7; // rax
  __int64 v8; // rax
  __int64 v9; // r14
  int v10; // eax
  __int64 v11; // r8
  __int64 v12; // r9
  SimpleHapticsController *v13; // rcx
  SimpleHapticsController *v14; // rcx
  __int64 v15; // rdx
  __int64 v16; // r8
  __int64 v17; // r9
  __int64 v19; // rcx
  SimpleHapticsController *v20; // rcx
  const struct _DEVPROPKEY *v21; // rdx
  unsigned int v22; // r8d
  unsigned int v23; // r9d
  SimpleHapticsController *v24; // rcx
  int v25; // eax
  __int64 v26; // r8
  __int64 v27; // r9
  int v28; // eax
  __int64 v29; // r8
  __int64 v30; // r9
  unsigned int ObjectType; // [rsp+20h] [rbp-30h]
  unsigned int AccessMode; // [rsp+28h] [rbp-28h]
  __int64 v33[2]; // [rsp+40h] [rbp-10h] BYREF
  __int64 v34; // [rsp+88h] [rbp+38h] BYREF
  size_t Size; // [rsp+90h] [rbp+40h] BYREF
  HANDLE Handle; // [rsp+98h] [rbp+48h] BYREF

  v2 = *((_QWORD *)Object + 53);
  Handle = 0LL;
  LODWORD(Size) = 0;
  v5 = RawInputManagerDeviceObjectReference(Object);
  if ( v5 >= 0 )
  {
    v6 = dword_1C033341C;
    *((_DWORD *)this + 2) = dword_1C033341C;
    *(_QWORD *)this = Object;
    dword_1C033341C = v6 + 1;
    v5 = ObOpenObjectByPointer(
           Object,
           0,
           0LL,
           3u,
           ExRawInputManagerObjectType,
           (unsigned __int16)(~(unsigned __int16)*((_DWORD *)Object + 68) & 0x2000) >> 13,
           &Handle);
    if ( v5 >= 0 )
    {
      v5 = RIMGetDevicePreparsedDataLockfree(Handle, 0LL, &Size, 0LL);
      if ( v5 >= 0 )
      {
        v7 = (void *)Win32AllocPool((unsigned int)Size, 1819440195LL);
        *((_QWORD *)this + 32) = v7;
        if ( !v7 )
        {
LABEL_5:
          v5 = -1073741670;
          goto LABEL_22;
        }
        memset(v7, 0, (unsigned int)Size);
        v5 = RIMGetDevicePreparsedDataLockfree(Handle, *((_QWORD *)this + 32), &Size, 0LL);
        if ( v5 >= 0 )
        {
          v8 = Win32AllocPool(96LL, 1667787091LL);
          if ( v8 )
          {
            *(_QWORD *)(v8 + 16) = 0LL;
            *(_QWORD *)(v8 + 24) = 0LL;
            *(_QWORD *)(v8 + 32) = 0LL;
            *(_QWORD *)(v8 + 56) = 0LL;
            *(_QWORD *)(v8 + 64) = 0LL;
            *(_WORD *)(v8 + 72) = 0;
            *(_DWORD *)(v8 + 76) = 0;
            *(_QWORD *)(v8 + 80) = 0LL;
            *(_DWORD *)(v8 + 88) = 0;
            *(_BYTE *)(v8 + 92) = 0;
            *(_QWORD *)(v8 + 8) = 0LL;
          }
          else
          {
            v8 = 0LL;
          }
          *((_QWORD *)this + 48) = v8;
          if ( !v8 )
            goto LABEL_5;
          v9 = v2 + 104;
          RIMUnlockExclusive(v9);
          v10 = SimpleHapticsController::Initialize(
                  *((SimpleHapticsController **)this + 48),
                  (struct _UNICODE_STRING *)(Object + 296));
          if ( v10 < 0 )
          {
            if ( (unsigned int)dword_1C032A2F8 > 4 )
            {
              LODWORD(v34) = v10;
              v33[0] = (__int64)"SimpleHapticsController->Initialize failed with.";
              _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<char>,_tlgWrapperByVal<4>>(
                (__int64)&dword_1C032A2F8,
                byte_1C02F1B7D,
                v11,
                v12,
                (void **)v33,
                (__int64)&v34);
            }
            v13 = (SimpleHapticsController *)*((_QWORD *)this + 48);
            if ( v13 )
            {
              SimpleHapticsController::DeInitialize(v13);
              v14 = (SimpleHapticsController *)*((_QWORD *)this + 48);
              if ( v14 )
                SimpleHapticsController::`scalar deleting destructor'(v14);
              *((_QWORD *)this + 48) = 0LL;
            }
          }
          v5 = InteractiveControlParser::BuildDeviceCapabilities(*((PHIDP_PREPARSED_DATA *)this + 32), this);
          if ( v5 < 0 )
            goto LABEL_21;
          if ( *((_DWORD *)this + 18) != 1 )
          {
            v5 = -1073741637;
LABEL_21:
            RIMLockExclusive(v9);
            goto LABEL_22;
          }
          if ( *((_QWORD *)this + 30) )
            InteractiveControlDevice::CreateDeadzone(this, v15, v16, v17);
          if ( *((_DWORD *)InteractiveControlManager::Instance() + 21) )
          {
            LODWORD(v34) = 235930369;
            if ( gdwInAtomicOperation )
            {
              v19 = gdwExtraInstrumentations;
              if ( (gdwExtraInstrumentations & 1) != 0 )
                KeBugCheckEx(0x160u, gdwInAtomicOperation, 0LL, 0LL, 0LL);
            }
            UserSessionSwitchLeaveCrit(v19);
            v20 = (SimpleHapticsController *)*((_QWORD *)this + 48);
            if ( v20 )
              SimpleHapticsController::SendDeviceIOControl(v20, 0xB0191u, &v34, 4u, 0LL, 0, 0LL);
            EnterCrit(0LL, 1LL);
          }
          RIMLockExclusive(v9);
          if ( (*(_DWORD *)(*(_QWORD *)this + 272LL) & 0x2000) == 0 && *((_DWORD *)this + 18) == 1 )
          {
            v24 = (SimpleHapticsController *)*((_QWORD *)this + 48);
            if ( v24 )
            {
              v25 = SimpleHapticsController::SetDevicePropertyData(
                      v24,
                      v21,
                      v22,
                      v23,
                      ObjectType,
                      AccessMode,
                      (char *)this + 72);
              if ( v25 < 0 && (unsigned int)dword_1C032A2F8 > 2 )
              {
                LODWORD(v34) = v25;
                v33[0] = (__int64)"Function failed.";
                _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<char>,_tlgWrapperByVal<4>>(
                  (__int64)&dword_1C032A2F8,
                  byte_1C02F1BF0,
                  v26,
                  v27,
                  (void **)v33,
                  (__int64)&v34);
              }
            }
          }
          v28 = InteractiveControlDevice::InitializeWaveformOrdinalForDevice(this);
          v5 = v28;
          if ( v28 < 0 && (unsigned int)dword_1C032A2F8 > 2 )
          {
            LODWORD(v34) = v28;
            v33[0] = (__int64)"Function failed.";
            _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<char>,_tlgWrapperByVal<4>>(
              (__int64)&dword_1C032A2F8,
              byte_1C02F1BF0,
              v29,
              v30,
              (void **)v33,
              (__int64)&v34);
          }
        }
      }
    }
  }
LABEL_22:
  if ( Handle )
    ObCloseHandle(Handle, 1);
  if ( v5 < 0 )
    InteractiveControlDevice::Deinitialize(this);
  return (unsigned int)v5;
}
