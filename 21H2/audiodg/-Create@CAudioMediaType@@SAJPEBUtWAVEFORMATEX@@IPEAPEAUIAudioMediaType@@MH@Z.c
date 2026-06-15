/*
 * XREFs of ?Create@CAudioMediaType@@SAJPEBUtWAVEFORMATEX@@IPEAPEAUIAudioMediaType@@MH@Z @ 0x14000C680
 * Callers:
 *     ?CreateDeviceProcessNode@CDeviceProcessNode@@SAJPEAUAUDIO_DEVICE_PIPE_DESCRIPTOR@@PEAPEAV1@@Z @ 0x140001F1C (-CreateDeviceProcessNode@CDeviceProcessNode@@SAJPEAUAUDIO_DEVICE_PIPE_DESCRIPTOR@@PEAPEAV1@@Z.c)
 *     ?CreateStreamProcessNode@CStreamProcessNode@@SAJPEAUSYSTEM_AUDIO_STREAM_DESCRIPTOR@@PEAPEAV1@@Z @ 0x140002028 (-CreateStreamProcessNode@CStreamProcessNode@@SAJPEAUSYSTEM_AUDIO_STREAM_DESCRIPTOR@@PEAPEAV1@@Z.c)
 *     ?ResolveFormatConflictsRightLeft@CPipeInstance@@AEAAJXZ @ 0x140006040 (-ResolveFormatConflictsRightLeft@CPipeInstance@@AEAAJXZ.c)
 *     ?IsAudioFormatSupportedRemote@CAPOWrapperSrv@@UEAAJW4__MIDL___MIDL_itf_audioenginepolicy_0000_0009_0001@@PEBUtWAVEFORMATEX@@1PEAPEAU3@@Z @ 0x14000B6C0 (-IsAudioFormatSupportedRemote@CAPOWrapperSrv@@UEAAJW4__MIDL___MIDL_itf_audioenginepolicy_0000_00.c)
 *     ?CreateDummyProcessNode@CProcessNode@@SAJW4AUDIO_DIRECTION@@PEBUtWAVEFORMATEX@@PEAPEAV1@@Z @ 0x14000BA30 (-CreateDummyProcessNode@CProcessNode@@SAJW4AUDIO_DIRECTION@@PEBUtWAVEFORMATEX@@PEAPEAV1@@Z.c)
 *     ?ResolveFormatConflictsLeftRight@CPipeInstance@@AEAAJXZ @ 0x14000BD10 (-ResolveFormatConflictsLeftRight@CPipeInstance@@AEAAJXZ.c)
 *     ?CreateStreamPipeInstance@CPipeInstance@@SAJPEAUIDeviceGraphObjectCache@@PEAUSYSTEM_AUDIO_STREAM_DESCRIPTOR@@PEAV1@PEAUtWAVEFORMATEX@@PEAUSYSTEM_AUDIO_STREAM@@PEAPEAV1@@Z @ 0x14000CA10 (-CreateStreamPipeInstance@CPipeInstance@@SAJPEAUIDeviceGraphObjectCache@@PEAUSYSTEM_AUDIO_STREAM.c)
 *     ?CreateSubmixPipeInstance@CPipeInstance@@SAJPEAUIDeviceGraphObjectCache@@PEAUSUBMIX_DESCRIPTOR@@PEAPEAV1@@Z @ 0x14000E8B0 (-CreateSubmixPipeInstance@CPipeInstance@@SAJPEAUIDeviceGraphObjectCache@@PEAUSUBMIX_DESCRIPTOR@@.c)
 *     ?GetPreferredInputFormat@CAPOWrapperSrv@@UEAAJPEAUtWAVEFORMATEX@@PEAPEAU2@@Z @ 0x14001B300 (-GetPreferredInputFormat@CAPOWrapperSrv@@UEAAJPEAUtWAVEFORMATEX@@PEAPEAU2@@Z.c)
 *     ?CreateFormatConverterPipeInstance@CPipeInstance@@SAJPEAUIDeviceGraphObjectCache@@PEBUFORMAT_CONVERTER_PIPE_DESCRIPTOR@@PEAPEAV1@@Z @ 0x140046E24 (-CreateFormatConverterPipeInstance@CPipeInstance@@SAJPEAUIDeviceGraphObjectCache@@PEBUFORMAT_CON.c)
 *     ?CreateAPOEndpointProcessNode@CAPOEndpointProcessNode@@SAJW4SYSTEM_AUDIO_STREAM_TYPE@@PEAUIAudioProcessingObject@@PEAUtWAVEFORMATEX@@PEAPEAV1@@Z @ 0x140048040 (-CreateAPOEndpointProcessNode@CAPOEndpointProcessNode@@SAJW4SYSTEM_AUDIO_STREAM_TYPE@@PEAUIAudio.c)
 * Callees:
 *     ??0CAudioMediaType@@IEAA@XZ @ 0x14000C968 (--0CAudioMediaType@@IEAA@XZ.c)
 *     ?IsValidPcmWfx@@YAHPEBUtWAVEFORMATEX@@@Z @ 0x14000FE64 (-IsValidPcmWfx@@YAHPEBUtWAVEFORMATEX@@@Z.c)
 *     ??2@YAPEAX_K@Z @ 0x14001CC68 (--2@YAPEAX_K@Z.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x14001CCA8 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??_U@YAPEAX_K@Z @ 0x14001CCB4 (--_U@YAPEAX_K@Z.c)
 *     memcpy_0 @ 0x140029E1F (memcpy_0.c)
 *     _guard_dispatch_icall_nop @ 0x140029E50 (_guard_dispatch_icall_nop.c)
 *     ??_ECAudioMediaType@@MEAAPEAXI@Z @ 0x140050B00 (--_ECAudioMediaType@@MEAAPEAXI@Z.c)
 */

__int64 __fastcall CAudioMediaType::Create(
        const struct tWAVEFORMATEX *a1,
        unsigned int a2,
        struct IAudioMediaType **a3,
        float a4,
        int a5)
{
  CAudioMediaType *v8; // rax
  CAudioMediaType *v9; // rdi
  WORD wFormatTag; // r11
  unsigned __int64 v11; // rcx
  __int64 v12; // rax
  WORD nSamplesPerSec_high; // ax
  int nChannels; // ecx
  int valid; // r8d
  int wBitsPerSample; // edx
  int nBlockAlign; // r9d
  DWORD v18; // ecx
  DWORD nAvgBytesPerSec; // r9d
  unsigned int cbSize; // eax
  unsigned __int64 v21; // rsi
  void *v22; // rax
  __int16 *v23; // rcx
  __int16 v24; // dx
  __int64 v25; // rax
  __int64 v26; // rax
  unsigned int v27; // ebx

  if ( a3 )
  {
    *a3 = 0LL;
    v8 = (CAudioMediaType *)operator new(0x20uLL);
    if ( v8 )
    {
      v9 = CAudioMediaType::CAudioMediaType(v8);
      if ( v9 )
      {
        if ( !a1 )
        {
LABEL_42:
          *((float *)v9 + 6) = a4;
          v27 = 0;
          *a3 = 0LL;
          *a3 = (struct IAudioMediaType *)v9;
          (*(void (__fastcall **)(CAudioMediaType *, _QWORD))(*(_QWORD *)v9 + 8LL))(
            v9,
            *(_QWORD *)&GUID_4e997f73_b71f_4798_873b_ed7dfcf15b4d.Data1);
          return v27;
        }
        if ( a5 )
        {
LABEL_25:
          cbSize = a1->cbSize;
          if ( cbSize + 18 < cbSize )
          {
            v27 = -2147024362;
          }
          else
          {
            if ( cbSize + 18 <= a2 )
            {
              operator delete(*((void **)v9 + 2));
              *((_QWORD *)v9 + 2) = 0LL;
              v21 = 18LL;
              if ( a1->wFormatTag != 1 )
                v21 = a1->cbSize + 18LL;
              v22 = operator new[](v21);
              *((_QWORD *)v9 + 2) = v22;
              if ( v22 )
              {
                memcpy_0(v22, a1, v21);
                if ( a1->wFormatTag == 1 )
                  *(_WORD *)(*((_QWORD *)v9 + 2) + 16LL) = 0;
                v23 = (__int16 *)*((_QWORD *)v9 + 2);
                v24 = *v23;
                if ( *v23 )
                {
                  if ( ((v24 - 1) & 0xFFFD) == 0 )
                    goto LABEL_41;
                  if ( v24 != -2 )
                    goto LABEL_46;
                  v25 = *(_QWORD *)&GUID_00000001_0000_0010_8000_00aa00389b71.Data1 - *((_QWORD *)v23 + 3);
                  if ( *(_QWORD *)&GUID_00000001_0000_0010_8000_00aa00389b71.Data1 == *((_QWORD *)v23 + 3) )
                    v25 = *(_QWORD *)GUID_00000001_0000_0010_8000_00aa00389b71.Data4 - *((_QWORD *)v23 + 4);
                  if ( !v25 )
                    goto LABEL_41;
                  v26 = *(_QWORD *)&GUID_00000003_0000_0010_8000_00aa00389b71.Data1 - *((_QWORD *)v23 + 3);
                  if ( *(_QWORD *)&GUID_00000003_0000_0010_8000_00aa00389b71.Data1 == *((_QWORD *)v23 + 3) )
                    v26 = *(_QWORD *)GUID_00000003_0000_0010_8000_00aa00389b71.Data4 - *((_QWORD *)v23 + 4);
                  if ( v26 )
LABEL_46:
                    *((_DWORD *)v9 + 3) = 1;
                  else
LABEL_41:
                    *((_DWORD *)v9 + 3) = 0;
                }
                goto LABEL_42;
              }
              goto LABEL_55;
            }
            v27 = -2147024809;
          }
LABEL_56:
          if ( v9 )
            CAudioMediaType::`vector deleting destructor'(v9, 1u);
          *a3 = 0LL;
          return v27;
        }
        wFormatTag = a1->wFormatTag;
        if ( a1->wFormatTag == 0xFFFE )
        {
          if ( a1->cbSize < 0x16u )
            goto LABEL_48;
          v11 = *(_QWORD *)((char *)&GUID_00000000_0000_0010_8000_00aa00389b71.Data1 + 2)
              - *(_QWORD *)&a1[1].nAvgBytesPerSec;
          if ( *(_QWORD *)((char *)&GUID_00000000_0000_0010_8000_00aa00389b71.Data1 + 2) == *(_QWORD *)&a1[1].nAvgBytesPerSec )
          {
            v12 = *(unsigned int *)&a1[1].cbSize;
            v11 = *(unsigned int *)&GUID_00000000_0000_0010_8000_00aa00389b71.Data4[2] - v12;
            if ( *(unsigned int *)&GUID_00000000_0000_0010_8000_00aa00389b71.Data4[2] == v12 )
              v11 = *(unsigned __int16 *)&GUID_00000000_0000_0010_8000_00aa00389b71.Data4[6]
                  - (unsigned __int64)a1[2].nChannels;
          }
          if ( v11 )
LABEL_48:
            nSamplesPerSec_high = 0;
          else
            nSamplesPerSec_high = HIWORD(a1[1].nSamplesPerSec);
        }
        else
        {
          nSamplesPerSec_high = a1->wFormatTag;
        }
        if ( nSamplesPerSec_high == 1 )
        {
          valid = IsValidPcmWfx(a1);
        }
        else
        {
          if ( nSamplesPerSec_high != 3 )
          {
            valid = 1;
LABEL_21:
            if ( wFormatTag == 0xFFFE )
            {
              valid = 0;
              if ( a1->cbSize >= 0x16u )
                valid = a1[1].wFormatTag <= a1->wBitsPerSample;
            }
            if ( valid )
              goto LABEL_25;
LABEL_51:
            v27 = -2147024809;
            goto LABEL_56;
          }
          nChannels = a1->nChannels;
          valid = 0;
          if ( (_WORD)nChannels )
          {
            wBitsPerSample = a1->wBitsPerSample;
            if ( (((_WORD)wBitsPerSample - 32) & 0xFFDF) == 0 )
            {
              nBlockAlign = a1->nBlockAlign;
              if ( nBlockAlign == nChannels * wBitsPerSample / 8 )
              {
                v18 = nBlockAlign * a1->nSamplesPerSec;
                valid = 1;
                nAvgBytesPerSec = a1->nAvgBytesPerSec;
                if ( nAvgBytesPerSec > v18 / 0x14 + v18 || nAvgBytesPerSec < v18 - v18 / 0x14 )
                  valid = 0;
              }
            }
          }
        }
        if ( !valid )
          goto LABEL_51;
        goto LABEL_21;
      }
    }
    else
    {
      v9 = 0LL;
    }
LABEL_55:
    v27 = -2147024882;
    goto LABEL_56;
  }
  return 2147942487LL;
}
