/*
 * XREFs of ?SendDeviceIOControl@SimpleHapticsController@@QAEJKPAXK0KPAK@Z @ 0x1B4DDC
 * Callers:
 *     ?Initialize@InteractiveControlDevice@@QAEJPAURawInputManagerDeviceObject@@@Z @ 0x1B1F54 (-Initialize@InteractiveControlDevice@@QAEJPAURawInputManagerDeviceObject@@@Z.c)
 *     ?SetComponentResolution@InteractiveControlDevice@@QAEJW4_INTERACTIVECTRL_COMPONENT_TYPE@@JPAW4tagINTERACTIVECTRL_HAPTICS_MODE@@@Z @ 0x1B26FC (-SetComponentResolution@InteractiveControlDevice@@QAEJW4_INTERACTIVECTRL_COMPONENT_TYPE@@JPAW4ta.c)
 *     ?InitializeSupportedWaveformList@SimpleHapticsController@@IAEJXZ @ 0x1B479D (-InitializeSupportedWaveformList@SimpleHapticsController@@IAEJXZ.c)
 *     ?IntializePreparssedData@SimpleHapticsController@@IAEJXZ @ 0x1B4B32 (-IntializePreparssedData@SimpleHapticsController@@IAEJXZ.c)
 *     ?SetAutoTriggerWaveform@SimpleHapticsController@@QAEJG@Z @ 0x1B5113 (-SetAutoTriggerWaveform@SimpleHapticsController@@QAEJG@Z.c)
 *     ?BuildComponentInformation@InteractiveControlParser@@CGJPAU_HIDP_PREPARSED_DATA@@GPAVInteractiveControlDevice@@@Z @ 0x1B5646 (-BuildComponentInformation@InteractiveControlParser@@CGJPAU_HIDP_PREPARSED_DATA@@GPAVInteractive.c)
 * Callees:
 *     ??$Write@U?$_tlgWrapSz@D@@U?$_tlgWrapperByVal@$03@@@?$_tlgWriteTemplate@$$A6GJPBU_tlgProvider_t@@PBXPBU_GUID@@2IPAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YGJ0122I3@ZPBU2@PBU2@@@SGJPBU_tlgProvider_t@@PBXPBU_GUID@@2ABU?$_tlgWrapSz@D@@ABU?$_tlgWrapperByVal@$03@@@Z @ 0x1AD82B (--$Write@U-$_tlgWrapSz@D@@U-$_tlgWrapperByVal@$03@@@-$_tlgWriteTemplate@$$A6GJPBU_tlgProvider_t@.c)
 *     ??0LeaveEnterUserCritIfAcquired@@QAE@XZ @ 0x1B40F2 (--0LeaveEnterUserCritIfAcquired@@QAE@XZ.c)
 */

NTSTATUS __thiscall SimpleHapticsController::SendDeviceIOControl(
        SimpleHapticsController *this,
        const char *IoControlCode,
        PVOID InputBuffer,
        ULONG InputBufferLength,
        PVOID OutputBuffer,
        ULONG OutputBufferLength,
        unsigned int *a7)
{
  struct _FILE_OBJECT *v7; // edi
  NTSTATUS Status; // esi
  int v9; // ecx
  ULONG v10; // ebx
  struct _DEVICE_OBJECT *RelatedDeviceObject; // esi
  PIRP v12; // eax
  IRP *v13; // ebx
  NTSTATUS v14; // esi
  struct _KEVENT Event; // [esp+Ch] [ebp-1Ch] BYREF
  struct _IO_STATUS_BLOCK IoStatusBlock; // [esp+1Ch] [ebp-Ch] BYREF
  int v18; // [esp+24h] [ebp-4h] BYREF

  IoStatusBlock.Status = 0;
  IoStatusBlock.Information = 0;
  v7 = (struct _FILE_OBJECT *)*((_DWORD *)this + 7);
  if ( !v7 )
  {
    Status = -1073741436;
LABEL_17:
    if ( (unsigned int)dword_2662D0 > 2 )
    {
      OutputBuffer = (PVOID)Status;
      IoControlCode = "SimpleHapticsController::SendDeviceIOControl failed.";
      _tlgWriteTemplate<long __stdcall (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<char>,_tlgWrapperByVal<4>>(
        (int)&dword_2662D0,
        byte_25743E,
        (int)this,
        (int)this,
        &IoControlCode,
        (int)&OutputBuffer);
    }
    _DbgPrintEx(
      0x4Du,
      0,
      "HapticsCtrl: (%s, %s:%d) ERROR: 0x%x, %s\n",
      "SimpleHapticsController::SendDeviceIOControl",
      "clientcore\\windows\\core\\ntuser\\kernel\\windows\\simplehapticsctrl.cxx",
      446,
      Status,
      "SimpleHapticsController::SendDeviceIOControl failed.");
    return Status;
  }
  ObfReferenceObject(*((PVOID *)this + 7));
  v10 = (ULONG)IoControlCode;
  if ( (unsigned int)dword_2662D0 > 4 )
  {
    v18 = (int)"SimpleHapticsController::SendDeviceIOControl entry";
    _tlgWriteTemplate<long __stdcall (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<char>,_tlgWrapperByVal<4>>(
      (int)&dword_2662D0,
      byte_25751E,
      v9,
      v9,
      (const char **)&v18,
      (int)&IoControlCode);
  }
  KeInitializeEvent(&Event, SynchronizationEvent, 0);
  RelatedDeviceObject = IoGetRelatedDeviceObject(v7);
  if ( !RelatedDeviceObject
    || (v12 = IoBuildDeviceIoControlRequest(
                v10,
                RelatedDeviceObject,
                InputBuffer,
                InputBufferLength,
                OutputBuffer,
                OutputBufferLength,
                0,
                &Event,
                &IoStatusBlock),
        (v13 = v12) == 0) )
  {
    Status = -1073741823;
    goto LABEL_17;
  }
  *(_DWORD *)(v12->Tail.Overlay.PacketType - 12) = v7;
  LeaveEnterUserCritIfAcquired::LeaveEnterUserCritIfAcquired((LeaveEnterUserCritIfAcquired *)&IoControlCode);
  v14 = IofCallDriver(RelatedDeviceObject, v13);
  if ( BYTE1(IoControlCode) )
  {
    if ( (_BYTE)IoControlCode )
      EnterCrit(0, 1);
    else
      EnterSharedCrit(0, 1);
  }
  if ( v14 == 259 )
  {
    if ( OutputBuffer )
    {
      KeWaitForSingleObject(&Event, Executive, 0, 0, 0);
      if ( a7 )
        *a7 = IoStatusBlock.Information;
    }
  }
  Status = IoStatusBlock.Status;
  ObfDereferenceObject(v7);
  if ( Status < 0 )
    goto LABEL_17;
  return Status;
}
