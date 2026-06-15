/*
 * XREFs of ?CreateDummyProcessNode@CProcessNode@@SAJW4AUDIO_DIRECTION@@PEBUtWAVEFORMATEX@@PEAPEAV1@@Z @ 0x14000BA30
 * Callers:
 *     ?ResolveFormatConflictsRightLeft@CPipeInstance@@AEAAJXZ @ 0x140006040 (-ResolveFormatConflictsRightLeft@CPipeInstance@@AEAAJXZ.c)
 *     ?ResolveFormatConflictsLeftRight@CPipeInstance@@AEAAJXZ @ 0x14000BD10 (-ResolveFormatConflictsLeftRight@CPipeInstance@@AEAAJXZ.c)
 *     ?CreateStreamPipeInstance@CPipeInstance@@SAJPEAUIDeviceGraphObjectCache@@PEAUSYSTEM_AUDIO_STREAM_DESCRIPTOR@@PEAV1@PEAUtWAVEFORMATEX@@PEAUSYSTEM_AUDIO_STREAM@@PEAPEAV1@@Z @ 0x14000CA10 (-CreateStreamPipeInstance@CPipeInstance@@SAJPEAUIDeviceGraphObjectCache@@PEAUSYSTEM_AUDIO_STREAM.c)
 *     ?CreateDevicePipeInstance@CPipeInstance@@SAJPEAUIAudioProcessor@@PEAUIDeviceGraphObjectCache@@PEAUAUDIO_DEVICE_PIPE_DESCRIPTOR@@AEAV?$unique_ptr@VCPipeInstance@@U?$default_delete@VCPipeInstance@@@wistd@@@wistd@@@Z @ 0x14000E140 (-CreateDevicePipeInstance@CPipeInstance@@SAJPEAUIAudioProcessor@@PEAUIDeviceGraphObjectCache@@PE.c)
 *     ?CreateSubmixPipeInstance@CPipeInstance@@SAJPEAUIDeviceGraphObjectCache@@PEAUSUBMIX_DESCRIPTOR@@PEAPEAV1@@Z @ 0x14000E8B0 (-CreateSubmixPipeInstance@CPipeInstance@@SAJPEAUIDeviceGraphObjectCache@@PEAUSUBMIX_DESCRIPTOR@@.c)
 *     ?CreateBridgeStreamPipeInstance@CPipeInstance@@SAJPEAUIDeviceGraphObjectCache@@PEAUBRIDGE_STREAM_DESCRIPTOR@@PEAUIAudioProcessingObject@@PEAV1@PEAUtWAVEFORMATEX@@PEAUSYSTEM_AUDIO_STREAM@@PEAPEAV1@@Z @ 0x1400469CC (-CreateBridgeStreamPipeInstance@CPipeInstance@@SAJPEAUIDeviceGraphObjectCache@@PEAUBRIDGE_STREAM.c)
 *     ?CreateFormatConverterPipeInstance@CPipeInstance@@SAJPEAUIDeviceGraphObjectCache@@PEBUFORMAT_CONVERTER_PIPE_DESCRIPTOR@@PEAPEAV1@@Z @ 0x140046E24 (-CreateFormatConverterPipeInstance@CPipeInstance@@SAJPEAUIDeviceGraphObjectCache@@PEBUFORMAT_CON.c)
 * Callees:
 *     ?Create@CAudioMediaType@@SAJPEBUtWAVEFORMATEX@@IPEAPEAUIAudioMediaType@@MH@Z @ 0x14000C680 (-Create@CAudioMediaType@@SAJPEBUtWAVEFORMATEX@@IPEAPEAUIAudioMediaType@@MH@Z.c)
 *     ??2@YAPEAX_K@Z @ 0x14001CC68 (--2@YAPEAX_K@Z.c)
 *     _guard_dispatch_icall_nop @ 0x140029E50 (_guard_dispatch_icall_nop.c)
 *     WPP_SF_D @ 0x14003EAEC (WPP_SF_D.c)
 *     ?AudDGTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x14004DAEC (-AudDGTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall CProcessNode::CreateDummyProcessNode(int a1, const struct tWAVEFORMATEX *a2, _QWORD *a3)
{
  struct IAudioMediaType *v6; // rbx
  void *v7; // rdi
  int v8; // esi
  struct IAudioMediaType *v9; // rcx
  struct IAudioMediaType *v10; // rcx
  struct IAudioMediaType *v12; // [rsp+78h] [rbp+20h] BYREF

  v6 = 0LL;
  v12 = 0LL;
  v7 = operator new(0x30uLL);
  if ( v7 )
  {
    *(_QWORD *)v7 = &CProcessNode::`vftable';
    *((_QWORD *)v7 + 1) = 0LL;
    *((_QWORD *)v7 + 2) = 0LL;
    *((_DWORD *)v7 + 6) = a1;
    *((_QWORD *)v7 + 4) = 0LL;
    *((_DWORD *)v7 + 10) = 4;
  }
  else
  {
    v7 = 0LL;
  }
  if ( v7 )
  {
    v8 = CAudioMediaType::Create(a2, (unsigned int)a2->cbSize + 18, &v12, 0.0, 0);
    if ( v8 >= 0 )
    {
      v9 = (struct IAudioMediaType *)*((_QWORD *)v7 + 1);
      v6 = v12;
      if ( v9 != v12 )
      {
        if ( v12 )
        {
          ((void (__fastcall *)(struct IAudioMediaType *))v12->lpVtbl->AddRef)(v12);
          v9 = (struct IAudioMediaType *)*((_QWORD *)v7 + 1);
        }
        if ( v9 )
          ((void (__fastcall *)(struct IAudioMediaType *))v9->lpVtbl->Release)(v9);
        *((_QWORD *)v7 + 1) = v6;
      }
      v10 = (struct IAudioMediaType *)*((_QWORD *)v7 + 2);
      if ( v10 != v6 )
      {
        if ( v6 )
        {
          ((void (__fastcall *)(struct IAudioMediaType *))v6->lpVtbl->AddRef)(v6);
          v10 = (struct IAudioMediaType *)*((_QWORD *)v7 + 2);
        }
        if ( v10 )
          ((void (__fastcall *)(struct IAudioMediaType *))v10->lpVtbl->Release)(v10);
        *((_QWORD *)v7 + 2) = v6;
      }
      *a3 = v7;
      goto LABEL_18;
    }
    (**(void (__fastcall ***)(void *, __int64))v7)(v7, 1LL);
    v6 = v12;
  }
  else
  {
    v8 = -2147024882;
  }
  if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x20000) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 2u )
  {
    WPP_SF_D(
      *((_QWORD *)WPP_GLOBAL_Control + 2),
      10LL,
      &WPP_322a074b0bd933fdfde6fb1895abf2b7_Traceguids,
      (unsigned int)v8);
  }
  AudDGTraceLoggingErrorHelper("CProcessNode::CreateDummyProcessNode", 0x4Du, v8);
LABEL_18:
  if ( v6 )
    ((void (__fastcall *)(struct IAudioMediaType *))v6->lpVtbl->Release)(v6);
  return (unsigned int)v8;
}
