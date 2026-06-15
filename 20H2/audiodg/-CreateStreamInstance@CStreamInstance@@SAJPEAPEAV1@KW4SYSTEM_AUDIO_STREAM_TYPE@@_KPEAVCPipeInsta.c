/*
 * XREFs of ?CreateStreamInstance@CStreamInstance@@SAJPEAPEAV1@KW4SYSTEM_AUDIO_STREAM_TYPE@@_KPEAVCPipeInstance@@_J@Z @ 0x140012640
 * Callers:
 *     ?CreateStream@CSubmixImpl@@UEAAJPEAUSYSTEM_AUDIO_STREAM_DESCRIPTOR@@PEAUIAudioGraphCallback@@PEAUSYSTEM_AUDIO_STREAM@@@Z @ 0x140007AD0 (-CreateStream@CSubmixImpl@@UEAAJPEAUSYSTEM_AUDIO_STREAM_DESCRIPTOR@@PEAUIAudioGraphCallback@@PEA.c)
 *     ?CreateBridgeStream@CStreamGroup@@UEAAJPEAUBRIDGE_STREAM_DESCRIPTOR@@PEAUIStreamGroup@@PEAUSYSTEM_AUDIO_STREAM@@@Z @ 0x14004CF30 (-CreateBridgeStream@CStreamGroup@@UEAAJPEAUBRIDGE_STREAM_DESCRIPTOR@@PEAUIStreamGroup@@PEAUSYSTE.c)
 *     ?CreateStream@CStreamGroup@@UEAAJPEAUSYSTEM_AUDIO_STREAM_DESCRIPTOR@@PEAUIAudioGraphCallback@@PEAUSYSTEM_AUDIO_STREAM@@@Z @ 0x14004D560 (-CreateStream@CStreamGroup@@UEAAJPEAUSYSTEM_AUDIO_STREAM_DESCRIPTOR@@PEAUIAudioGraphCallback@@PE.c)
 * Callees:
 *     ?reset@?$unique_storage@U?$handle_null_resource_policy@P6AHPEAX@Z$1?CloseHandle@@YAH0@Z@details@wil@@@details@wil@@QEAAXPEAX@Z @ 0x1400147C8 (-reset@-$unique_storage@U-$handle_null_resource_policy@P6AHPEAX@Z$1-CloseHandle@@YAH0@Z@details@.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x14001B430 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x14001D6DC (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ?_Log_GetLastError@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x14004F384 (-_Log_GetLastError@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 */

__int64 __fastcall CStreamInstance::CreateStreamInstance(
        _QWORD *a1,
        DWORD a2,
        int a3,
        __int64 a4,
        __int64 a5,
        __int64 a6)
{
  int v6; // r15d
  unsigned int v7; // ebp
  char *v12; // rbx
  HRESULT v13; // eax
  int v14; // esi
  void *v15; // rdx
  unsigned int v16; // r8d
  const char *v17; // r9
  char *v18; // rax
  _QWORD *v19; // rdi
  void **v20; // r14
  __int64 v21; // rax
  __int64 v22; // rax
  void *v23; // r13
  __int64 v25; // r9
  __int64 v26; // rdx
  HANDLE v27; // rax
  DWORD LastError; // esi
  int v29; // [rsp+20h] [rbp-28h]
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]
  char *v31; // [rsp+50h] [rbp+8h] BYREF

  v7 = 0;
  v29 = v6;
  *a1 = 0LL;
  v12 = 0LL;
  if ( a2 )
  {
    v13 = CoImpersonateClient();
    v14 = v13;
    if ( v13 < 0 )
    {
      v25 = (unsigned int)v13;
      v26 = 43LL;
LABEL_19:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v26,
        (unsigned int)"avcore\\audiocore\\server\\audiodg\\exe\\submix.cpp",
        (const char *)v25,
        v29);
      v7 = v14;
      goto LABEL_14;
    }
    v12 = (char *)OpenProcess(0x3000u, 0, a2);
    v31 = v12;
    if ( ((unsigned __int64)(v12 + 1) & 0xFFFFFFFFFFFFFFFEuLL) == 0 )
    {
      v27 = OpenProcess(0x2400u, 0, a2);
      wil::details::unique_storage<wil::details::handle_null_resource_policy<int (*)(void *),&int CloseHandle(void *)>>::reset(
        &v31,
        v27);
      v12 = v31;
    }
    if ( ((unsigned __int64)(v12 + 1) & 0xFFFFFFFFFFFFFFFEuLL) == 0 )
      wil::details::in1diag3::_Log_GetLastError(retaddr, v15, v16, v17);
    CoRevertToSelf();
  }
  v18 = (char *)operator new(0x68uLL, (const struct std::nothrow_t *)&std::nothrow);
  v19 = v18;
  if ( !v18 )
  {
    v14 = -2147024882;
    v26 = 63LL;
    v25 = 2147942414LL;
    goto LABEL_19;
  }
  *((_DWORD *)v18 + 5) = a3;
  v20 = (void **)(v18 + 40);
  *(_QWORD *)v18 = 0LL;
  *((_QWORD *)v18 + 1) = 0LL;
  *((_WORD *)v18 + 8) = 0;
  *((_QWORD *)v18 + 3) = 0LL;
  *((_QWORD *)v18 + 4) = 0LL;
  *((_QWORD *)v18 + 5) = 0LL;
  InitializeCriticalSectionEx((LPCRITICAL_SECTION)(v18 + 48), 0, 0);
  v21 = a5;
  v19[11] = 0LL;
  *v19 = v21;
  v22 = a6;
  v19[1] = a4;
  v19[12] = v22;
  if ( v20 != (void **)&v31 )
  {
    v23 = *v20;
    if ( (char *)*v20 - 1 <= (char *)0xFFFFFFFFFFFFFFFDLL )
    {
      LastError = GetLastError();
      CloseHandle(v23);
      SetLastError(LastError);
    }
    *v20 = v12;
    v12 = 0LL;
  }
  *a1 = v19;
LABEL_14:
  if ( (unsigned __int64)(v12 - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
    CloseHandle(v12);
  return v7;
}
