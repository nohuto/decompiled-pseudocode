/*
 * XREFs of ??$MakeAndInitialize@VVirtualAudioSessionInfo@@V1@AEAPEAUIAudioProcess@@AEAPEBG_N_NW4_AudioSessionState@@@Details@WRL@Microsoft@@YAJPEAPEAVVirtualAudioSessionInfo@@AEAPEAUIAudioProcess@@AEAPEBG$$QEA_N3$$QEAW4_AudioSessionState@@@Z @ 0x1800721CC
 * Callers:
 *     ?RuntimeClassInitialize@CVirtualAudioStream@@QEAAJPEAUIAudioProcess@@KPEBGW4__MIDL___MIDL_itf_mmdeviceapi_0000_0000_0001@@@Z @ 0x1800F7F2C (-RuntimeClassInitialize@CVirtualAudioStream@@QEAAJPEAUIAudioProcess@@KPEBGW4__MIDL___MIDL_itf_mm.c)
 * Callees:
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x18006AB9C (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ??0VirtualAudioSessionInfo@@QEAA@XZ @ 0x1800722CC (--0VirtualAudioSessionInfo@@QEAA@XZ.c)
 *     ??1?$MakeAllocator@VAvoidEndpointPolicyRule@@@Details@WRL@Microsoft@@QEAA@XZ @ 0x180072350 (--1-$MakeAllocator@VAvoidEndpointPolicyRule@@@Details@WRL@Microsoft@@QEAA@XZ.c)
 *     ?RuntimeClassInitialize@VirtualAudioSessionInfo@@QEAAJPEAUIAudioProcess@@PEBG_N2W4_AudioSessionState@@@Z @ 0x18007267C (-RuntimeClassInitialize@VirtualAudioSessionInfo@@QEAAJPEAUIAudioProcess@@PEBG_N2W4_AudioSessionS.c)
 *     _guard_dispatch_icall_nop @ 0x180074B80 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall Microsoft::WRL::Details::MakeAndInitialize<VirtualAudioSessionInfo,VirtualAudioSessionInfo,IAudioProcess * &,unsigned short const * &,bool,bool,enum _AudioSessionState>(
        VirtualAudioSessionInfo **a1,
        struct IAudioProcess **a2,
        const unsigned __int16 **a3,
        bool *a4,
        bool *a5,
        enum _AudioSessionState *a6)
{
  VirtualAudioSessionInfo *v10; // rax
  int v11; // edi
  VirtualAudioSessionInfo *v12; // rbx
  VirtualAudioSessionInfo *v14; // [rsp+60h] [rbp+8h] BYREF

  *a1 = 0LL;
  v10 = (VirtualAudioSessionInfo *)operator new(0x28uLL, (const struct std::nothrow_t *)&std::nothrow);
  v14 = v10;
  if ( v10 )
  {
    v12 = VirtualAudioSessionInfo::VirtualAudioSessionInfo(v10);
    v14 = 0LL;
    v11 = VirtualAudioSessionInfo::RuntimeClassInitialize(v12, *a2, *a3, *a4, *a5, *a6);
    if ( v11 >= 0 )
    {
      if ( v12 )
        (*(void (__fastcall **)(VirtualAudioSessionInfo *))(*(_QWORD *)v12 + 8LL))(v12);
      *a1 = v12;
      v11 = 0;
    }
    if ( v12 )
      (*(void (__fastcall **)(VirtualAudioSessionInfo *))(*(_QWORD *)v12 + 16LL))(v12);
  }
  else
  {
    v11 = -2147024882;
  }
  Microsoft::WRL::Details::MakeAllocator<AvoidEndpointPolicyRule>::~MakeAllocator<AvoidEndpointPolicyRule>(&v14);
  return (unsigned int)v11;
}
