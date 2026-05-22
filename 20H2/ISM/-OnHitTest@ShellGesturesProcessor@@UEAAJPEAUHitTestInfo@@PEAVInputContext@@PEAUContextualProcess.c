/*
 * XREFs of ?OnHitTest@ShellGesturesProcessor@@UEAAJPEAUHitTestInfo@@PEAVInputContext@@PEAUContextualProcessorInitialState@@@Z @ 0x18017E6F0
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x18000B0D0 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x18003B368 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18003E15C (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18004A660 (_guard_dispatch_icall_nop.c)
 *     ??$GetAttachedObject@UIShellGesturesClientProxy@@VShellGesturesClientProxy@@@InputSite@@QEAA?AV?$ComPtr@VShellGesturesClientProxy@@@WRL@Microsoft@@XZ @ 0x18017E4E0 (--$GetAttachedObject@UIShellGesturesClientProxy@@VShellGesturesClientProxy@@@InputSite@@QEAA-AV-.c)
 *     ??$MakeAndInitialize@VShellGesturesTarget@@UIUnknown@@$$CBV?$shared_any_t@V?$shared_storage@V?$unique_any_t@V?$unique_storage@U?$handle_null_resource_policy@P6AJPEAX@Z$1?NtCloseCompositionInputSink@@YAJ0@Z@details@wil@@@details@wil@@@wil@@@details@wil@@@wil@@@Details@WRL@Microsoft@@YAJPEAPEAUIUnknown@@$$QEBV?$shared_any_t@V?$shared_storage@V?$unique_any_t@V?$unique_storage@U?$handle_null_resource_policy@P6AJPEAX@Z$1?NtCloseCompositionInputSink@@YAJ0@Z@details@wil@@@details@wil@@@wil@@@details@wil@@@wil@@@Z @ 0x18017E570 (--$MakeAndInitialize@VShellGesturesTarget@@UIUnknown@@$$CBV-$shared_any_t@V-$shared_storage@V-$u.c)
 */

__int64 __fastcall ShellGesturesProcessor::OnHitTest(
        ShellGesturesProcessor *this,
        struct HitTestInfo *a2,
        struct InputContext *a3,
        struct ContextualProcessorInitialState *a4)
{
  __int64 *v4; // rsi
  __int64 v5; // rax
  __int64 *v6; // rdi
  __int64 *v7; // rbp
  __int64 *Attached; // rax
  __int64 v9; // rbx
  __int64 v10; // rcx
  _QWORD *v11; // rdx
  volatile signed __int32 *v12; // rax
  int v13; // eax
  int v15[2]; // [rsp+20h] [rbp-28h] BYREF
  std::_Ref_count_base *v16; // [rsp+28h] [rbp-20h]
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]
  __int64 v18; // [rsp+58h] [rbp+10h] BYREF
  char v19; // [rsp+68h] [rbp+20h] BYREF

  *(_DWORD *)a4 = 0;
  if ( *(_DWORD *)a2 == 0x2000000 )
  {
    v4 = (__int64 *)((char *)a4 + 8);
    *(_DWORD *)a4 = 2;
    if ( !*((_QWORD *)a4 + 1) && (*((_BYTE *)a2 + 32) & 4) != 0 )
    {
      v5 = *((_QWORD *)a3 + 22);
      v6 = *(__int64 **)(v5 + 8);
      v7 = *(__int64 **)(v5 + 16);
      if ( v6 != v7 )
      {
        while ( 1 )
        {
          Attached = InputSite::GetAttachedObject<IShellGesturesClientProxy,ShellGesturesClientProxy>(*v6, &v18);
          v9 = 0LL;
          if ( &v19 != (char *)Attached )
          {
            v9 = *Attached;
            *Attached = 0LL;
          }
          v10 = v18;
          if ( v18 )
          {
            v18 = 0LL;
            (**(void (__fastcall ***)(__int64))(v10 + 16))(v10 + 16);
          }
          if ( v9 )
            break;
          if ( ++v6 == v7 )
            goto LABEL_20;
        }
        v11 = *(_QWORD **)(v9 + 96);
        if ( v11 && (unsigned __int64)(*v11 - 1LL) <= 0xFFFFFFFFFFFFFFFDuLL )
        {
          v12 = *(volatile signed __int32 **)(v9 + 104);
          if ( v12 )
          {
            _InterlockedIncrement(v12 + 2);
            v11 = *(_QWORD **)(v9 + 96);
            v12 = *(volatile signed __int32 **)(v9 + 104);
          }
          *(_QWORD *)v15 = v11;
          v16 = (std::_Ref_count_base *)v12;
          Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(v4);
          v13 = Microsoft::WRL::Details::MakeAndInitialize<ShellGesturesTarget,IUnknown,wil::shared_any_t<wil::details::shared_storage<wil::unique_any_t<wil::details::unique_storage<wil::details::handle_null_resource_policy<long (*)(void *),&long NtCloseCompositionInputSink(void *)>>>>> const>(
                  v4,
                  v15);
          if ( v13 < 0 )
          {
            wil::details::in1diag3::FailFast_Hr(
              retaddr,
              58LL,
              (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\contextualprocessors\\processors\\shellgestures\\proces"
                       "sor\\shellgesturesprocessor.cpp",
              (const char *)(unsigned int)v13);
            __debugbreak();
          }
          if ( v16 )
            std::_Ref_count_base::_Decref(v16);
        }
LABEL_20:
        if ( v9 )
          (**(void (__fastcall ***)(__int64))(v9 + 16))(v9 + 16);
      }
    }
  }
  return 0LL;
}
