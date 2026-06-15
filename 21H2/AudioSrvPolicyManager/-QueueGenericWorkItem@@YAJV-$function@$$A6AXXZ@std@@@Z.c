/*
 * XREFs of ?QueueGenericWorkItem@@YAJV?$function@$$A6AXXZ@std@@@Z @ 0x18002D14C
 * Callers:
 *     ?Callback@AudioSrvPolicyManagerTelemetryProvider@@CAXPEBU_GUID@@KE_K1PEAU_EVENT_FILTER_DESCRIPTOR@@PEAX@Z @ 0x1800059B0 (-Callback@AudioSrvPolicyManagerTelemetryProvider@@CAXPEBU_GUID@@KE_K1PEAU_EVENT_FILTER_DESCRIPTO.c)
 *     ?NotifyVoipCallStateChange@CWindowsPolicyManager@@UEAAJPEAUIAudioProcess@@_N@Z @ 0x180007B80 (-NotifyVoipCallStateChange@CWindowsPolicyManager@@UEAAJPEAUIAudioProcess@@_N@Z.c)
 *     ?NotifyDialogSessionStateChange@CWindowsPolicyManager@@UEAAJPEAUIAudioProcess@@_N@Z @ 0x180007D20 (-NotifyDialogSessionStateChange@CWindowsPolicyManager@@UEAAJPEAUIAudioProcess@@_N@Z.c)
 *     ?RefreshPolicyVolumes@CWindowsPolicyManager@@UEAAJK@Z @ 0x180008630 (-RefreshPolicyVolumes@CWindowsPolicyManager@@UEAAJK@Z.c)
 *     ?MarkAsTerminated@CProcess@@QEAAXXZ @ 0x1800166BC (-MarkAsTerminated@CProcess@@QEAAXXZ.c)
 *     PbmSetSmtcSubscriptionState @ 0x180023590 (PbmSetSmtcSubscriptionState.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180003AB0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??0CGenericWorkItem@@QEAA@V?$function@$$A6AXXZ@std@@@Z @ 0x18002D3E8 (--0CGenericWorkItem@@QEAA@V-$function@$$A6AXXZ@std@@@Z.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x180039DDC (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18003AE40 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall QueueGenericWorkItem(__int64 a1)
{
  void *v2; // rax
  void *v3; // rsi
  __int64 (__fastcall ***v4)(_QWORD, _BYTE *); // rcx
  ULONG_PTR v5; // r14
  __int64 v6; // rdx
  const char *v7; // r9
  __int64 v8; // rcx
  __int64 result; // rax
  __int64 v10; // rdx
  signed int LastError; // eax
  unsigned int v12; // esi
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // rcx
  __int64 v16; // rcx
  __int64 v17; // rdx
  _BYTE v18[56]; // [rsp+20h] [rbp-58h] BYREF
  __int64 v19; // [rsp+58h] [rbp-20h]
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+0h]
  unsigned int v22; // [rsp+88h] [rbp+10h]

  v2 = operator new(0x18uLL, (const struct std::nothrow_t *)&std::nothrow);
  try
  {
    v3 = v2;
    if ( v2 )
    {
      v19 = 0LL;
      v4 = *(__int64 (__fastcall ****)(_QWORD, _BYTE *))(a1 + 56);
      if ( v4 )
        v19 = (**v4)(v4, v18);
      v5 = CGenericWorkItem::CGenericWorkItem(v3, v18);
    }
    else
    {
      v5 = 0LL;
    }
    if ( v5 )
    {
      if ( PostQueuedCompletionStatus(g_WorkerEventPort, 0, v5, 0LL) )
      {
        v12 = 0;
      }
      else
      {
        LastError = GetLastError();
        v12 = (unsigned __int16)LastError | 0x80070000;
        if ( LastError <= 0 )
          v12 = LastError;
      }
      if ( (v12 & 0x80000000) == 0 )
      {
        v15 = *(_QWORD *)(a1 + 56);
        if ( v15 )
        {
          LOBYTE(v10) = v15 != a1;
          (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v15 + 32LL))(v15, v10);
          *(_QWORD *)(a1 + 56) = 0LL;
        }
        result = 0LL;
      }
      else
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x419,
          (__int64)"multimedia\\audiocore\\server\\audiosrv\\windowspolicymanager\\workitem.cpp",
          (const char *)v12);
        (*(void (__fastcall **)(ULONG_PTR, __int64))(*(_QWORD *)v5 + 8LL))(v5, 1LL);
        v14 = *(_QWORD *)(a1 + 56);
        if ( v14 )
        {
          LOBYTE(v13) = v14 != a1;
          (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v14 + 32LL))(v14, v13);
          *(_QWORD *)(a1 + 56) = 0LL;
        }
        result = v12;
      }
    }
    else
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x417,
        (__int64)"multimedia\\audiocore\\server\\audiosrv\\windowspolicymanager\\workitem.cpp",
        (const char *)0x8007000ELL);
      v8 = *(_QWORD *)(a1 + 56);
      if ( v8 )
      {
        LOBYTE(v6) = v8 != a1;
        (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v8 + 32LL))(v8, v6);
        *(_QWORD *)(a1 + 56) = 0LL;
      }
      result = 2147942414LL;
    }
  }
  catch ( ... )
  {
    v22 = wil::details::in1diag3::Return_CaughtException(
            retaddr,
            (void *)0x41F,
            (__int64)"multimedia\\audiocore\\server\\audiosrv\\windowspolicymanager\\workitem.cpp",
            v7);
    v16 = *(_QWORD *)(a1 + 56);
    if ( v16 )
    {
      LOBYTE(v17) = v16 != a1;
      (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v16 + 32LL))(v16, v17);
      *(_QWORD *)(a1 + 56) = 0LL;
    }
    return v22;
  }
  return result;
}
