/*
 * XREFs of ?CreateCrossProcessEvent@CStandardCrossProcessEventManager@@UEAAJPEAPEAUICrossProcessEvent@@@Z @ 0x14003E950
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$com_ptr_t@UIAudioVirtualProtectedOutput@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x140002134 (--1-$com_ptr_t@UIAudioVirtualProtectedOutput@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ??$MakeAndInitialize@VCStandardEvent@@UICrossProcessEvent@@PEAX@Details@WRL@Microsoft@@YAJPEAPEAUICrossProcessEvent@@$$QEAPEAX@Z @ 0x140013810 (--$MakeAndInitialize@VCStandardEvent@@UICrossProcessEvent@@PEAX@Details@WRL@Microsoft@@YAJPEAPEA.c)
 *     ?reset@?$unique_storage@U?$resource_policy@PEAXP6AXPEAX@Z$1?CloseHandle@details@wil@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAXPEAX$0A@$$T@details@wil@@@details@wil@@QEAAXPEAX@Z @ 0x140014630 (-reset@-$unique_storage@U-$resource_policy@PEAXP6AXPEAX@Z$1-CloseHandle@details@wil@@YAX0@ZU-$in.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x14001B180 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?CloseHandle@details@wil@@YAXPEAX@Z @ 0x14001B52C (-CloseHandle@details@wil@@YAXPEAX@Z.c)
 *     _guard_dispatch_icall_nop @ 0x14001F470 (_guard_dispatch_icall_nop.c)
 *     ?GetLastErrorFailHr@details@wil@@YAJXZ @ 0x140030CC4 (-GetLastErrorFailHr@details@wil@@YAJXZ.c)
 *     ?reset@?$com_ptr_t@UICrossProcessEvent@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x14003FB64 (-reset@-$com_ptr_t@UICrossProcessEvent@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ.c)
 */

__int64 __fastcall CStandardCrossProcessEventManager::CreateCrossProcessEvent(
        CStandardCrossProcessEventManager *this,
        struct ICrossProcessEvent **a2)
{
  wil::details *v3; // rbx
  __int64 v4; // rdx
  wil::details *v5; // rcx
  wil::details *Event; // rdi
  __int64 v7; // r8
  const char *v8; // r9
  __int64 v9; // rdx
  __int64 v10; // r8
  __int64 v11; // r9
  signed int LastErrorFailHr; // edi
  void *v13; // rdx
  int v14; // eax
  struct ICrossProcessEvent *v15; // rcx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  struct ICrossProcessEvent *v18; // [rsp+40h] [rbp+18h] BYREF
  wil::details *v19; // [rsp+48h] [rbp+20h] BYREF

  v3 = 0LL;
  v19 = 0LL;
  Event = (wil::details *)CreateEventExW(0LL, 0LL, 0, 0x1F0003u);
  if ( Event )
  {
    GetLastError();
    wil::details::unique_storage<wil::details::resource_policy<void *,void (*)(void *),&void wil::details::CloseHandle(void *),wistd::integral_constant<unsigned __int64,0>,void *,void *,0,std::nullptr_t>>::reset(
      &v19,
      Event);
    v3 = v19;
    LastErrorFailHr = 0;
  }
  else
  {
    LastErrorFailHr = wil::details::GetLastErrorFailHr(v5, v4, v7, v8);
  }
  if ( LastErrorFailHr >= 0 )
  {
    v18 = 0LL;
    v19 = v3;
    wil::com_ptr_t<ICrossProcessEvent,wil::err_returncode_policy>::reset(&v18, v9, v10, v11);
    v14 = Microsoft::WRL::Details::MakeAndInitialize<CStandardEvent,ICrossProcessEvent,void *>(&v18, &v19);
    LastErrorFailHr = v14;
    if ( v14 >= 0 )
    {
      v15 = v18;
      v3 = 0LL;
      if ( v18 )
      {
        *a2 = v18;
        (*(void (__fastcall **)(struct ICrossProcessEvent *))(*(_QWORD *)v15 + 8LL))(v15);
      }
      else
      {
        *a2 = 0LL;
      }
      LastErrorFailHr = 0;
    }
    else
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x3C,
        (__int64)"avcore\\audiocore\\Engine\\Core\\CrossProcessEngineObjects\\CPStandardEvent.h",
        (const char *)(unsigned int)v14);
    }
    wil::com_ptr_t<IAudioVirtualProtectedOutput,wil::err_returncode_policy>::~com_ptr_t<IAudioVirtualProtectedOutput,wil::err_returncode_policy>((__int64 *)&v18);
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x39,
      (__int64)"avcore\\audiocore\\Engine\\Core\\CrossProcessEngineObjects\\CPStandardEvent.h",
      (const char *)(unsigned int)LastErrorFailHr);
  }
  if ( v3 )
    wil::details::CloseHandle(v3, v13);
  return (unsigned int)LastErrorFailHr;
}
