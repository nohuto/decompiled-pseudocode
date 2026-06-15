/*
 * XREFs of ?RuntimeClassInitialize@CAastPreStartContext@@QEAAJPEAUIAudioStreamInfo@@@Z @ 0x180025140
 * Callers:
 *     ?RegisterStreamPreStart@CWindowsPolicyManager@@UEAAJPEAUIAudioStreamInfo@@PEAPEAUIAudioStreamPreStartContext@@@Z @ 0x180007980 (-RegisterStreamPreStart@CWindowsPolicyManager@@UEAAJPEAUIAudioStreamInfo@@PEAPEAUIAudioStreamPre.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180003AB0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$_Reallocate_for@V_lambda_05cef1f6fdf474c9f3ed207deba0f73b_@@PEBG@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@AEAAAEAV01@_KV_lambda_05cef1f6fdf474c9f3ed207deba0f73b_@@PEBG@Z @ 0x18000ED88 (--$_Reallocate_for@V_lambda_05cef1f6fdf474c9f3ed207deba0f73b_@@PEBG@-$basic_string@GU-$char_trai.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18000F8F4 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?UpdateVolumeForAllAppsInSession@CApplicationManager@@QEAAJKW4AudioVolumeChangeType@@@Z @ 0x18001E454 (-UpdateVolumeForAllAppsInSession@CApplicationManager@@QEAAJKW4AudioVolumeChangeType@@@Z.c)
 *     ?ApplyEndpointVolumeOverride@CApplicationManager@@QEAAJPEBGKAEA_N1AEAM11@Z @ 0x18001FFCC (-ApplyEndpointVolumeOverride@CApplicationManager@@QEAAJPEBGKAEA_N1AEAM11@Z.c)
 *     ?UpdateEndpointVolume@CApplicationManager@@QEAAJPEBGHMHH@Z @ 0x1800203F4 (-UpdateEndpointVolume@CApplicationManager@@QEAAJPEBGHMHH@Z.c)
 *     memmove_0 @ 0x18003AE1B (memmove_0.c)
 *     _guard_dispatch_icall_nop @ 0x18003AE40 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall CAastPreStartContext::RuntimeClassInitialize(char **this, struct IAudioStreamInfo *a2)
{
  int v4; // eax
  unsigned int v5; // ebx
  const char *v6; // r9
  __int64 result; // rax
  int v8; // eax
  unsigned int v9; // ebx
  _WORD *v10; // rax
  __int64 v11; // r8
  const unsigned __int16 *v12; // rdi
  unsigned __int64 v13; // rdx
  char *v14; // rsi
  __int64 v15; // rbx
  unsigned int v16; // eax
  const unsigned __int16 *v17; // rdx
  int v18; // eax
  unsigned int v19; // ebx
  int v20; // eax
  int updated; // eax
  bool v22; // [rsp+40h] [rbp-48h] BYREF
  DWORD dwMilliseconds; // [rsp+44h] [rbp-44h] BYREF
  DWORD pcbData; // [rsp+48h] [rbp-40h] BYREF
  float v25; // [rsp+4Ch] [rbp-3Ch] BYREF
  __int64 v26; // [rsp+50h] [rbp-38h]
  _QWORD v27[6]; // [rsp+58h] [rbp-30h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+88h] [rbp+0h]
  bool v29; // [rsp+98h] [rbp+10h] BYREF
  bool v30; // [rsp+A0h] [rbp+18h] BYREF
  bool v31; // [rsp+A8h] [rbp+20h] BYREF

  v26 = 0LL;
  try
  {
    v4 = (*(__int64 (**)(void))(*(_QWORD *)a2 + 24LL))();
    v5 = v4;
    if ( v4 >= 0 )
    {
      v27[0] = 0LL;
      v8 = (*(__int64 (__fastcall **)(struct IAudioStreamInfo *, _QWORD *))(*(_QWORD *)a2 + 32LL))(a2, v27);
      v9 = v8;
      if ( v8 >= 0 )
      {
        v10 = (_WORD *)(*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)v27[0] + 72LL))(v27[0]);
        v12 = (const unsigned __int16 *)(this + 3);
        v13 = -1LL;
        do
          ++v13;
        while ( v10[v13] );
        if ( v13 > (unsigned __int64)this[6] )
        {
          std::wstring::_Reallocate_for<_lambda_05cef1f6fdf474c9f3ed207deba0f73b_,unsigned short const *>(
            this + 3,
            v13,
            v11,
            v10);
        }
        else
        {
          v14 = (char *)(this + 3);
          if ( (unsigned __int64)this[6] >= 8 )
            v14 = *(char **)v12;
          this[5] = (char *)v13;
          v15 = 2 * v13;
          memmove_0(v14, v10, 2 * v13);
          *(_WORD *)&v14[v15] = 0;
        }
        v16 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v26 + 48LL))(v26);
        *((_DWORD *)this + 5) = v16;
        v17 = (const unsigned __int16 *)(this + 3);
        if ( (unsigned __int64)this[6] >= 8 )
          v17 = *(const unsigned __int16 **)v12;
        v18 = CApplicationManager::ApplyEndpointVolumeOverride(
                (CApplicationManager *)&v30,
                v17,
                v16,
                &v31,
                &v30,
                &v25,
                &v29,
                &v22);
        v19 = v18;
        if ( v18 >= 0 )
        {
          if ( v31 )
          {
            v20 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v26 + 48LL))(v26);
            CApplicationManager::UpdateVolumeForAllAppsInSession((__int64)g_ApplicationManager, v20, 4u);
          }
          if ( v30 || v29 )
          {
            dwMilliseconds = 0;
            pcbData = 4;
            RegGetValueW(
              HKEY_LOCAL_MACHINE,
              L"Software\\Microsoft\\Windows\\CurrentVersion\\Audio",
              L"AastRenderDelayInMs",
              0x18u,
              0LL,
              &dwMilliseconds,
              &pcbData);
            if ( dwMilliseconds )
              Sleep(dwMilliseconds);
            if ( (unsigned __int64)this[6] >= 8 )
              v12 = *(const unsigned __int16 **)v12;
            updated = CApplicationManager::UpdateEndpointVolume((CApplicationManager *)v29, v12, v30, v25, v29, v22);
            if ( updated < 0 )
              wil::details::in1diag3::_Log_Hr(
                retaddr,
                (void *)0x68,
                (__int64)"multimedia\\audiocore\\server\\audiosrv\\windowspolicymanager\\streamprestartcontext.cpp",
                (const char *)(unsigned int)updated);
          }
          *((_BYTE *)this + 16) = 1;
          if ( v27[0] )
            (*(void (__fastcall **)(_QWORD))(*(_QWORD *)v27[0] + 16LL))(v27[0]);
          if ( v26 )
            (*(void (__fastcall **)(__int64))(*(_QWORD *)v26 + 16LL))(v26);
          result = 0LL;
        }
        else
        {
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)0x4D,
            (__int64)"multimedia\\audiocore\\server\\audiosrv\\windowspolicymanager\\streamprestartcontext.cpp",
            (const char *)(unsigned int)v18);
          if ( v27[0] )
            (*(void (__fastcall **)(_QWORD))(*(_QWORD *)v27[0] + 16LL))(v27[0]);
          if ( v26 )
            (*(void (__fastcall **)(__int64))(*(_QWORD *)v26 + 16LL))(v26);
          result = v19;
        }
      }
      else
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x3F,
          (__int64)"multimedia\\audiocore\\server\\audiosrv\\windowspolicymanager\\streamprestartcontext.cpp",
          (const char *)(unsigned int)v8);
        if ( v27[0] )
          (*(void (__fastcall **)(_QWORD))(*(_QWORD *)v27[0] + 16LL))(v27[0]);
        result = v9;
      }
    }
    else
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x3C,
        (__int64)"multimedia\\audiocore\\server\\audiosrv\\windowspolicymanager\\streamprestartcontext.cpp",
        (const char *)(unsigned int)v4);
      result = v5;
    }
  }
  catch ( ... )
  {
    return (unsigned int)wil::details::in1diag3::Return_CaughtException(
                           retaddr,
                           (void *)0x6F,
                           (__int64)"multimedia\\audiocore\\server\\audiosrv\\windowspolicymanager\\streamprestartcontext.cpp",
                           v6);
  }
  return result;
}
