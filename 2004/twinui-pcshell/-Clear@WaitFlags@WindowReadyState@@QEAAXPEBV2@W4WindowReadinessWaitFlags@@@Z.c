/*
 * XREFs of ?Clear@WaitFlags@WindowReadyState@@QEAAXPEBV2@W4WindowReadinessWaitFlags@@@Z @ 0x18005C79C
 * Callers:
 *     ?HandlePresentationReadinessChange@WindowWrapperBase@@UEAAX_K@Z @ 0x18005C690 (-HandlePresentationReadinessChange@WindowWrapperBase@@UEAAX_K@Z.c)
 *     ?HandleShellHook@WindowReadyState@@QEAAX_K@Z @ 0x1802DBF9C (-HandleShellHook@WindowReadyState@@QEAAX_K@Z.c)
 *     ?SetWindow@WindowReadyState@@QEAAXPEAUHWND__@@W4WindowCreatedType@@@Z @ 0x1802DC0A4 (-SetWindow@WindowReadyState@@QEAAXPEAUHWND__@@W4WindowCreatedType@@@Z.c)
 *     ?VisibilityChanged@WindowReadyState@@QEAAXW4EventPhase@@W4Visibility@@@Z @ 0x1802DC1A8 (-VisibilityChanged@WindowReadyState@@QEAAXW4EventPhase@@W4Visibility@@@Z.c)
 * Callees:
 *     ?Register@TraceLoggingProvider@wil@@IEAAXQEBU_tlgProvider_t@@P6AXPEBU_GUID@@KE_K2PEAU_EVENT_FILTER_DESCRIPTOR@@PEAX@Z@Z @ 0x180085A24 (-Register@TraceLoggingProvider@wil@@IEAAXQEBU_tlgProvider_t@@P6AXPEBU_GUID@@KE_K2PEAU_EVENT_FILT.c)
 *     __security_check_cookie @ 0x18008CFC0 (__security_check_cookie.c)
 *     atexit @ 0x18008D6F4 (atexit.c)
 */

ULONG __fastcall WindowReadyState::WaitFlags::Clear(int *a1, __int64 *a2, int a3)
{
  int v3; // edi
  ULONG result; // eax
  __int64 v7; // rcx
  int v8; // eax
  unsigned __int16 *v9; // rax
  REGHANDLE v10; // rcx
  void (*v11)(const struct _GUID *, unsigned int, unsigned __int8, unsigned __int64, unsigned __int64, struct _EVENT_FILTER_DESCRIPTOR *, void *); // r8
  WINBOOL fPending; // [rsp+30h] [rbp-59h] BYREF
  int v13; // [rsp+34h] [rbp-55h] BYREF
  int v14; // [rsp+38h] [rbp-51h] BYREF
  LPVOID Context; // [rsp+40h] [rbp-49h] BYREF
  unsigned int v16; // [rsp+48h] [rbp-41h]
  __int64 v17; // [rsp+50h] [rbp-39h] BYREF
  EVENT_DESCRIPTOR EventDescriptor; // [rsp+58h] [rbp-31h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+70h] [rbp-19h] BYREF
  void *v20; // [rsp+80h] [rbp-9h]
  int v21; // [rsp+88h] [rbp-1h]
  int v22; // [rsp+8Ch] [rbp+3h]
  __int64 *v23; // [rsp+90h] [rbp+7h]
  int v24; // [rsp+98h] [rbp+Fh]
  int v25; // [rsp+9Ch] [rbp+13h]
  int *v26; // [rsp+A0h] [rbp+17h]
  int v27; // [rsp+A8h] [rbp+1Fh]
  int v28; // [rsp+ACh] [rbp+23h]
  int *v29; // [rsp+B0h] [rbp+27h]
  int v30; // [rsp+B8h] [rbp+2Fh]
  int v31; // [rsp+BCh] [rbp+33h]

  v3 = *a1;
  Context = 0LL;
  *a1 = v3 & ~a3;
  if ( InitOnceBeginInitialize(&`ViewManagerInteropLogging::Instance'::`2'::wrapper, 0, &fPending, &Context) && fPending )
  {
    Context = qword_1805CD530;
    qword_1805CD530[0] = &ShellScreenClippingLogging::`vftable';
    qword_1805CD548 = (struct _tlgProvider_t *)&`ViewManagerInteropLogging::StaticHandle::StaticHandle'::`2'::__hInner;
    atexit(_lambda_24753d83db9805a1b3cb729875e7abb0_::_lambda_invoker_cdecl_);
    wil::TraceLoggingProvider::Register((wil::TraceLoggingProvider *)qword_1805CD530, qword_1805CD548, v11);
    InitOnceComplete(&`ViewManagerInteropLogging::Instance'::`2'::wrapper, 0, qword_1805CD530);
  }
  result = (unsigned int)Context;
  v7 = *((_QWORD *)Context + 1);
  if ( *(_DWORD *)v7 > 5u )
  {
    v8 = *a1;
    v31 = 0;
    v28 = 0;
    v25 = 0;
    EventDescriptor.Keyword = 0LL;
    v13 = v8;
    v17 = *a2;
    v29 = &v13;
    v26 = &v14;
    v23 = &v17;
    *(_DWORD *)&EventDescriptor.Level = 5;
    v9 = *(unsigned __int16 **)(v7 + 8);
    v10 = *(_QWORD *)(v7 + 32);
    UserData.Ptr = (ULONGLONG)v9;
    v30 = 4;
    v27 = 4;
    v14 = v3;
    v24 = 8;
    *(_DWORD *)&EventDescriptor.Id = 184549376;
    UserData.Size = *v9;
    v20 = &unk_1805154E6;
    UserData.Reserved = 2;
    v21 = 66;
    v22 = 1;
    v16 = (unsigned int)&TraceLoggingMetadataEnd - (unsigned int)&TraceLoggingMetadata;
    return EventWriteTransfer(v10, &EventDescriptor, 0LL, 0LL, 5u, &UserData);
  }
  return result;
}
