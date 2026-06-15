/*
 * XREFs of ?ConnectToRightSubmix@CStreamInstance@@QEAAJPEAUISubmixInternal@@PEBVCPipeInstance@@_J@Z @ 0x14001756C
 * Callers:
 *     ?CreateStream@CSubmixImpl@@UEAAJPEAUSYSTEM_AUDIO_STREAM_DESCRIPTOR@@PEAUIAudioGraphCallback@@PEAUSYSTEM_AUDIO_STREAM@@@Z @ 0x140007AA0 (-CreateStream@CSubmixImpl@@UEAAJPEAUSYSTEM_AUDIO_STREAM_DESCRIPTOR@@PEAUIAudioGraphCallback@@PEA.c)
 *     ?ConnectPipesToRightSubmix@CSubmixImpl@@UEAAJPEAUISubmixInternal@@PEAVCPipeInstance@@@Z @ 0x140017430 (-ConnectPipesToRightSubmix@CSubmixImpl@@UEAAJPEAUISubmixInternal@@PEAVCPipeInstance@@@Z.c)
 *     ?CreateBridgeStream@CStreamGroup@@UEAAJPEAUBRIDGE_STREAM_DESCRIPTOR@@PEAUIStreamGroup@@PEAUSYSTEM_AUDIO_STREAM@@@Z @ 0x14004D0C0 (-CreateBridgeStream@CStreamGroup@@UEAAJPEAUBRIDGE_STREAM_DESCRIPTOR@@PEAUIStreamGroup@@PEAUSYSTE.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x14001B400 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x140029E50 (_guard_dispatch_icall_nop.c)
 *     ?ConnectToRightPipe@CPipeInstance@@QEAAJPEBV1@@Z @ 0x14004689C (-ConnectToRightPipe@CPipeInstance@@QEAAJPEBV1@@Z.c)
 *     ?UnregisterResources@CStreamInstance@@QEAAXPEAUIAudioStreamingResourceRegistration@@@Z @ 0x14004F490 (-UnregisterResources@CStreamInstance@@QEAAXPEAUIAudioStreamingResourceRegistration@@@Z.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall CStreamInstance::ConnectToRightSubmix(
        CStreamInstance *this,
        struct ISubmixInternal *a2,
        const struct CPipeInstance *a3)
{
  char v6; // r14
  int v7; // eax
  int v8; // ebx
  __int64 v9; // rax
  __int64 v10; // rdx
  int v11; // eax
  struct IAudioStreamingResourceRegistration *v12; // rcx
  __int64 v14; // rdx
  int v15; // eax
  unsigned __int64 v16; // r9
  int v17; // eax
  struct IAudioStreamingResourceRegistration **v18; // [rsp+20h] [rbp-38h]
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]
  struct IAudioStreamingResourceRegistration *v20; // [rsp+78h] [rbp+20h] BYREF

  v20 = 0LL;
  (*(void (__fastcall **)(struct ISubmixInternal *, struct IAudioStreamingResourceRegistration **))(*(_QWORD *)a2 + 120LL))(
    a2,
    &v20);
  v18 = &v20;
  v6 = 1;
  if ( v20 )
  {
    if ( *((_QWORD *)this + 11)
      || (unsigned __int64)(*((_QWORD *)this + 5) - 1LL) > 0xFFFFFFFFFFFFFFFDuLL
      || (v7 = (*(__int64 (**)(void))(*(_QWORD *)v20 + 24LL))(), v8 = v7, v7 >= 0) )
    {
      v8 = 0;
    }
    else
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0xD8,
        (unsigned int)"avcore\\audiocore\\server\\audiodg\\exe\\submix.cpp",
        (const char *)(unsigned int)v7,
        (int)&v20);
    }
    if ( v8 < 0 )
    {
      v14 = 95LL;
LABEL_24:
      v16 = (unsigned int)v8;
      goto LABEL_25;
    }
  }
  if ( !a3 )
  {
    v9 = *(_QWORD *)a2;
    v10 = *(_QWORD *)this;
    if ( *((_DWORD *)this + 5) == 2 )
      v11 = (*(__int64 (__fastcall **)(struct ISubmixInternal *, __int64))(v9 + 32))(a2, v10);
    else
      v11 = (*(__int64 (__fastcall **)(struct ISubmixInternal *, __int64))(v9 + 24))(a2, v10);
    v8 = v11;
    if ( v11 >= 0 )
      goto LABEL_11;
    v14 = 110LL;
    goto LABEL_24;
  }
  v15 = CPipeInstance::ConnectToRightPipe(*(CPipeInstance **)this, a3);
  v8 = v15;
  if ( v15 < 0 )
  {
    v16 = (unsigned int)v15;
    v14 = 102LL;
LABEL_25:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v14,
      (unsigned int)"avcore\\audiocore\\server\\audiodg\\exe\\submix.cpp",
      (const char *)v16,
      (int)v18);
    goto LABEL_12;
  }
  v17 = (*(__int64 (__fastcall **)(struct ISubmixInternal *, _QWORD))(*(_QWORD *)a2 + 40LL))(a2, *(_QWORD *)this);
  v8 = v17;
  if ( v17 < 0 )
  {
    v16 = (unsigned int)v17;
    v14 = 104LL;
    goto LABEL_25;
  }
LABEL_11:
  v6 = 0;
  *((_BYTE *)this + 17) = 1;
  v8 = 0;
LABEL_12:
  v12 = v20;
  if ( v6 && v20 )
  {
    CStreamInstance::UnregisterResources(this, v20);
    v12 = v20;
  }
  if ( v12 )
    (*(void (__fastcall **)(struct IAudioStreamingResourceRegistration *))(*(_QWORD *)v12 + 16LL))(v12);
  return (unsigned int)v8;
}
