/*
 * XREFs of ?Start@CAudioDeviceGraph@@UEAAJPEAUISaDeviceCallback@@@Z @ 0x140005460
 * Callers:
 *     <none>
 * Callees:
 *     ?GetTail@?$CAtlList@PEAVCConnectionInstance@@V?$CElementTraits@PEAVCConnectionInstance@@@ATL@@@ATL@@QEAAAEAPEAVCConnectionInstance@@XZ @ 0x140001EF8 (-GetTail@-$CAtlList@PEAVCConnectionInstance@@V-$CElementTraits@PEAVCConnectionInstance@@@ATL@@@A.c)
 *     ?GetNext@?$CAtlList@PEAVCProcessNode@@V?$CElementTraits@PEAVCProcessNode@@@ATL@@@ATL@@QEAAAEAPEAVCProcessNode@@AEAPEAU__POSITION@@@Z @ 0x140002BA0 (-GetNext@-$CAtlList@PEAVCProcessNode@@V-$CElementTraits@PEAVCProcessNode@@@ATL@@@ATL@@QEAAAEAPEA.c)
 *     ?Start@CPipeInstance@@QEAAJXZ @ 0x140002D74 (-Start@CPipeInstance@@QEAAJXZ.c)
 *     ?get@?$static_lazy@VAudioDgTelemetryProvider@@@details@wil@@QEAAPEAVAudioDgTelemetryProvider@@P6AXXZ@Z @ 0x1400053BC (-get@-$static_lazy@VAudioDgTelemetryProvider@@@details@wil@@QEAAPEAVAudioDgTelemetryProvider@@P6.c)
 *     ?CreateStreamingResourceManager@@YAJPEAPEAUIAudioStreamingResourceRegistration@@@Z @ 0x140017E8C (-CreateStreamingResourceManager@@YAJPEAPEAUIAudioStreamingResourceRegistration@@@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x14001B400 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x14001CFC0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x140029E50 (_guard_dispatch_icall_nop.c)
 *     _tlgWriteTransfer_EtwEventWriteTransfer @ 0x14003ECA8 (_tlgWriteTransfer_EtwEventWriteTransfer.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1400447C8 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

__int64 __fastcall CAudioDeviceGraph::Start(CAudioDeviceGraph *this, struct ISaDeviceCallback *a2)
{
  struct _RTL_CRITICAL_SECTION *v2; // r14
  __int64 *v5; // rbx
  char v6; // r15
  __int64 v7; // rsi
  __int64 v8; // rax
  _QWORD *v9; // rax
  int v10; // eax
  __int64 (__fastcall ***v11)(_QWORD, GUID *, _QWORD **); // rcx
  int v12; // eax
  unsigned int v13; // esi
  int v14; // eax
  __int64 v15; // rcx
  int v16; // eax
  unsigned int v17; // esi
  __int64 v18; // rcx
  CPipeInstance **Next; // rax
  int v20; // eax
  __int64 v21; // rcx
  int StreamingResourceManager; // eax
  int v24; // [rsp+20h] [rbp-78h]
  int v25; // [rsp+20h] [rbp-78h]
  _QWORD *v26; // [rsp+30h] [rbp-68h] BYREF
  __int64 (__fastcall ***v27)(_QWORD, GUID *, _QWORD **); // [rsp+38h] [rbp-60h] BYREF
  __int64 v28; // [rsp+40h] [rbp-58h] BYREF
  _BYTE v29[32]; // [rsp+48h] [rbp-50h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+98h] [rbp+0h]

  v2 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 264);
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 264));
  if ( *((_DWORD *)this + 64) )
  {
    v5 = 0LL;
    v6 = 1;
    if ( *((_QWORD *)this + 46)
      || (StreamingResourceManager = CreateStreamingResourceManager((struct IAudioStreamingResourceRegistration **)this + 46),
          StreamingResourceManager >= 0) )
    {
      v5 = (__int64 *)*((_QWORD *)this + 46);
      if ( v5 )
      {
        (*(void (__fastcall **)(_QWORD))(*v5 + 8))(*((_QWORD *)this + 46));
        v7 = *v5;
        v8 = (*(__int64 (__fastcall **)(char *))(*((_QWORD *)this + 2) + 56LL))((char *)this + 16);
        (*(void (__fastcall **)(__int64 *, __int64))(v7 + 72))(v5, v8);
      }
    }
    else
    {
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x2DC,
        (unsigned int)"avcore\\audiocore\\server\\audiodg\\exe\\audiodevicegraph.cpp",
        (const char *)(unsigned int)StreamingResourceManager,
        v24);
    }
    v9 = *(_QWORD **)(*(_QWORD *)ATL::CAtlList<CConnectionInstance *,ATL::CElementTraits<CConnectionInstance *>>::GetTail(*((_QWORD *)this + 20) + 16LL)
                    + 32LL);
    v27 = 0LL;
    v10 = (**(__int64 (__fastcall ***)(_QWORD, GUID *, _QWORD))*v9)(
            *v9,
            &GUID_30a99515_1527_4451_af9f_00c5f0234daf,
            &v27);
    if ( v10 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x2F1,
        (unsigned int)"avcore\\audiocore\\server\\audiodg\\exe\\audiodevicegraph.cpp",
        (const char *)(unsigned int)v10,
        v24);
    v11 = v27;
    if ( v27 )
    {
      if ( v5 )
      {
        v26 = 0LL;
        v12 = (**v27)(v27, &GUID_d4952f5a_a0b2_4cc4_8b82_9358488dd8ac, &v26);
        v13 = v12;
        if ( v12 < 0 )
        {
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)0x4E1,
            (unsigned int)"onecore\\internal\\sdk\\inc\\wil\\opensource\\wil\\com.h",
            (const char *)(unsigned int)v12,
            v24);
          wil::details::in1diag3::_Log_Hr(
            retaddr,
            (void *)0x2F8,
            (unsigned int)"avcore\\audiocore\\server\\audiodg\\exe\\audiodevicegraph.cpp",
            (const char *)v13,
            v25);
        }
        if ( v26 )
        {
          v14 = (*(__int64 (__fastcall **)(__int64 *, _QWORD *, char *))(*v5 + 56))(v5, v26, (char *)this + 376);
          if ( v14 < 0 )
            wil::details::in1diag3::_Log_Hr(
              retaddr,
              (void *)0x2FC,
              (unsigned int)"avcore\\audiocore\\server\\audiodg\\exe\\audiodevicegraph.cpp",
              (const char *)(unsigned int)v14,
              v24);
          if ( v26 )
            (*(void (__fastcall **)(_QWORD *))(*v26 + 16LL))(v26);
        }
        v11 = v27;
      }
      if ( v11 )
        ((void (__fastcall *)(__int64 (__fastcall ***)(_QWORD, GUID *, _QWORD **)))(*v11)[2])(v11);
    }
    v15 = *((_QWORD *)this + 19);
    v28 = 0LL;
    v16 = (*(__int64 (__fastcall **)(__int64, __int64 *, struct ISaDeviceCallback *, __int64 *))(*(_QWORD *)v15 + 32LL))(
            v15,
            &v28,
            a2,
            v5);
    v17 = v16;
    if ( v16 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x304,
        (unsigned int)"avcore\\audiocore\\server\\audiodg\\exe\\audiodevicegraph.cpp",
        (const char *)(unsigned int)v16,
        v24);
    }
    else
    {
      EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 216));
      v26 = (_QWORD *)*((_QWORD *)this + 21);
      if ( v26 )
      {
        while ( 1 )
        {
          Next = (CPipeInstance **)ATL::CAtlList<CProcessNode *,ATL::CElementTraits<CProcessNode *>>::GetNext(v18, &v26);
          v20 = CPipeInstance::Start(*Next);
          v17 = v20;
          if ( v20 < 0 )
            break;
          if ( !v26 )
            goto LABEL_23;
        }
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x30C,
          (unsigned int)"avcore\\audiocore\\server\\audiodg\\exe\\audiodevicegraph.cpp",
          (const char *)(unsigned int)v20,
          v24);
        if ( this != (CAudioDeviceGraph *)-216LL )
          LeaveCriticalSection((LPCRITICAL_SECTION)((char *)this + 216));
      }
      else
      {
LABEL_23:
        if ( this != (CAudioDeviceGraph *)-216LL )
          LeaveCriticalSection((LPCRITICAL_SECTION)((char *)this + 216));
        v6 = 0;
        if ( !*((_BYTE *)this + 80) )
        {
          QueryPerformanceCounter((LARGE_INTEGER *)this + 12);
          *((_BYTE *)this + 80) = 1;
        }
        v21 = wil::details::static_lazy<AudioDgTelemetryProvider>::get(
                v18,
                _lambda_5306e8013c9084f1ba6b78d0c08c093f_::_lambda_invoker_cdecl_)[1];
        if ( *(_DWORD *)v21 > 4u
          && (*(_BYTE *)(v21 + 16) & 1) != 0
          && (*(_QWORD *)(v21 + 24) & 1LL) == *(_QWORD *)(v21 + 24) )
        {
          tlgWriteTransfer_EtwEventWriteTransfer(
            v21,
            (unsigned int)&unk_14007C368,
            (_DWORD)this + 352,
            0,
            2,
            (__int64)v29);
        }
        v17 = 0;
      }
    }
    if ( v5 )
      (*(void (__fastcall **)(__int64 *))(*v5 + 16))(v5);
    if ( v6 )
      (*(void (__fastcall **)(CAudioDeviceGraph *))(*(_QWORD *)this + 120LL))(this);
  }
  else
  {
    v17 = -2005139437;
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x2D6,
      (unsigned int)"avcore\\audiocore\\server\\audiodg\\exe\\audiodevicegraph.cpp",
      (const char *)0x887C0013LL,
      v24);
  }
  if ( v2 )
    LeaveCriticalSection(v2);
  return v17;
}
