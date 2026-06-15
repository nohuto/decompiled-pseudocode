/*
 * XREFs of ?CreateStreamProcessNode@CStreamProcessNode@@SAJPEAUSYSTEM_AUDIO_STREAM_DESCRIPTOR@@PEAPEAV1@@Z @ 0x140002028
 * Callers:
 *     ?CreateStreamPipeInstance@CPipeInstance@@SAJPEAUIDeviceGraphObjectCache@@PEAUSYSTEM_AUDIO_STREAM_DESCRIPTOR@@PEAV1@PEAUtWAVEFORMATEX@@PEAUSYSTEM_AUDIO_STREAM@@PEAPEAV1@@Z @ 0x14000CA10 (-CreateStreamPipeInstance@CPipeInstance@@SAJPEAUIDeviceGraphObjectCache@@PEAUSYSTEM_AUDIO_STREAM.c)
 * Callees:
 *     ??4?$CComPtr@UIAudioMediaType@@@ATL@@QEAAPEAUIAudioMediaType@@AEBV01@@Z @ 0x140002110 (--4-$CComPtr@UIAudioMediaType@@@ATL@@QEAAPEAUIAudioMediaType@@AEBV01@@Z.c)
 *     ?Create@CAudioMediaType@@SAJPEBUtWAVEFORMATEX@@IPEAPEAUIAudioMediaType@@MH@Z @ 0x14000C680 (-Create@CAudioMediaType@@SAJPEBUtWAVEFORMATEX@@IPEAPEAUIAudioMediaType@@MH@Z.c)
 *     ??2@YAPEAX_K@Z @ 0x14001CC68 (--2@YAPEAX_K@Z.c)
 *     _guard_dispatch_icall_nop @ 0x140029E50 (_guard_dispatch_icall_nop.c)
 *     WPP_SF_D @ 0x14003EAEC (WPP_SF_D.c)
 *     ?AudDGTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x14004DAEC (-AudDGTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CStreamProcessNode::CreateStreamProcessNode(
        const struct tWAVEFORMATEX **a1,
        struct IAudioMediaType ***a2)
{
  struct IAudioMediaType **v4; // rax
  struct IAudioMediaType **v5; // rbx
  int v6; // r8d
  unsigned int v7; // edi

  v4 = (struct IAudioMediaType **)operator new(0x40uLL);
  v5 = v4;
  if ( v4 )
  {
    v6 = *(_DWORD *)a1;
    v4[1] = 0LL;
    v4[2] = 0LL;
    *((_DWORD *)v4 + 6) = v6 != 0;
    v4[4] = 0LL;
    *((_DWORD *)v4 + 10) = 3;
    *v4 = (struct IAudioMediaType *)&CStreamProcessNode::`vftable';
    v4[6] = 0LL;
    *((_DWORD *)v4 + 14) = 0;
  }
  else
  {
    v5 = 0LL;
  }
  if ( v5 )
  {
    v7 = CAudioMediaType::Create(a1[16], (unsigned int)a1[16]->cbSize + 18, v5 + 6, 0.0, 0);
    if ( (v7 & 0x80000000) == 0 )
    {
      *((_DWORD *)v5 + 14) = *((_DWORD *)a1 + 3);
      *((_DWORD *)v5 + 15) = *(_DWORD *)a1;
      ATL::CComPtr<IAudioMediaType>::operator=(v5 + 1, v5 + 6);
      ATL::CComPtr<IAudioMediaType>::operator=(v5 + 2, v5 + 6);
      *a2 = v5;
      return v7;
    }
    ((void (__fastcall *)(struct IAudioMediaType **, __int64))(*v5)->lpVtbl)(v5, 1LL);
  }
  else
  {
    v7 = -2147024882;
  }
  if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x20000) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 2u )
  {
    WPP_SF_D(*((_QWORD *)WPP_GLOBAL_Control + 2), 16LL, &WPP_322a074b0bd933fdfde6fb1895abf2b7_Traceguids, v7);
  }
  AudDGTraceLoggingErrorHelper("CStreamProcessNode::CreateStreamProcessNode", 0x19Bu, v7);
  return v7;
}
