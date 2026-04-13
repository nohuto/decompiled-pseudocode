/*
 * XREFs of ?BackfillItems@TargetedContentLayoutHelpers@CreativeFramework@@YAXPEAUITargetedContentIdAliasStore@Internal@TargetedContent@Services@Windows@@AEAV?$vector@V?$shared_ptr@UItem@TargetedContentLayoutHelpers@CreativeFramework@@@std@@V?$allocator@V?$shared_ptr@UItem@TargetedContentLayoutHelpers@CreativeFramework@@@std@@@2@@std@@AEAV?$vector@UTile@TargetedContentLayoutHelpers@CreativeFramework@@V?$allocator@UTile@TargetedContentLayoutHelpers@CreativeFramework@@@std@@@9@@Z @ 0x1800A60A0
 * Callers:
 *     ?ProcessLayoutBindings@LayoutResolver@TargetedContentLayoutHelpers@CreativeFramework@@QEAAXPEAUHSTRING__@@V1ShellPlacementTelemetry@Logging@3@@Z @ 0x1800A1E64 (-ProcessLayoutBindings@LayoutResolver@TargetedContentLayoutHelpers@CreativeFramework@@QEAAXPEAUH.c)
 * Callees:
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180005F48 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$?0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z @ 0x1800180B8 (--$-0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z.c)
 *     ??0?$shared_ptr@UItem@TargetedContentLayoutHelpers@CreativeFramework@@@std@@QEAA@AEBV01@@Z @ 0x1800311D4 (--0-$shared_ptr@UItem@TargetedContentLayoutHelpers@CreativeFramework@@@std@@QEAA@AEBV01@@Z.c)
 *     __security_check_cookie @ 0x1800CB070 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800CC480 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
unsigned __int64 __fastcall CreativeFramework::TargetedContentLayoutHelpers::BackfillItems(
        __int64 a1,
        __int64 *a2,
        _QWORD *a3)
{
  __int64 v4; // r13
  unsigned __int64 v5; // rdi
  unsigned __int64 v6; // rsi
  __int64 v7; // r9
  unsigned __int64 result; // rax
  __int64 v9; // rcx
  __int64 v10; // rbx
  __int64 *v11; // r14
  char v12; // cl
  _BYTE *v13; // r15
  __int64 v14; // r13
  HSTRING_HEADER *v15; // rax
  __int64 v16; // r9
  int v17; // eax
  volatile signed __int32 *v18; // rbx
  unsigned __int64 v19; // rax
  unsigned __int64 v20; // rax
  volatile signed __int32 *v21; // rbx
  __int64 *v22; // [rsp+38h] [rbp-49h] BYREF
  volatile signed __int32 *v23; // [rsp+40h] [rbp-41h]
  const WCHAR *v24; // [rsp+48h] [rbp-39h] BYREF
  __int64 v25; // [rsp+50h] [rbp-31h]
  __int64 v26; // [rsp+58h] [rbp-29h]
  __int64 (__fastcall *v27)(__int64, PVOID, __int64, __int64); // [rsp+60h] [rbp-21h]
  _QWORD *v28; // [rsp+68h] [rbp-19h]
  __int64 v29; // [rsp+70h] [rbp-11h]
  HSTRING_HEADER v30; // [rsp+78h] [rbp-9h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+E0h] [rbp+5Fh]

  v29 = -2LL;
  v28 = a3;
  v4 = a1;
  v26 = a1;
  v5 = 0LL;
  v6 = 0LL;
  v7 = *a2;
  result = (a2[1] - *a2) >> 4;
  if ( result )
  {
    while ( 1 )
    {
      v9 = a3[1] - *a3;
      result = (unsigned __int64)((unsigned __int128)(v9 * (__int128)0x4924924924924925LL) >> 64) >> 63;
      if ( v6 >= v9 / 56 )
        return result;
      v10 = *a3 + 56 * v6;
      std::shared_ptr<CreativeFramework::TargetedContentLayoutHelpers::Item>::shared_ptr<CreativeFramework::TargetedContentLayoutHelpers::Item>(
        &v22,
        (__int64 *)(v7 + 16 * v5));
      v11 = v22;
      v12 = *((_BYTE *)v22 + 48);
      if ( v12 || (v13 = (_BYTE *)(v10 + 48), *(_BYTE *)(v10 + 48)) )
      {
        v19 = v5 + 1;
        if ( !v12 )
          v19 = v5;
        v5 = v19;
        v20 = v6 + 1;
        if ( !*(_BYTE *)(v10 + 48) )
          v20 = v6;
        v6 = v20;
        if ( v23 )
        {
          if ( _InterlockedExchangeAdd(v23 + 2, 0xFFFFFFFF) == 1 )
          {
            v21 = v23;
            (**(void (__fastcall ***)(volatile signed __int32 *))v23)(v23);
            if ( _InterlockedExchangeAdd(v21 + 3, 0xFFFFFFFF) == 1 )
LABEL_19:
              (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v23 + 8LL))(v23);
          }
        }
      }
      else
      {
        v27 = *(__int64 (__fastcall **)(__int64, PVOID, __int64, __int64))(*(_QWORD *)v4 + 48LL);
        v14 = v22[1];
        v25 = *v22;
        if ( *(_QWORD *)(v10 + 24) >= 8uLL )
          v10 = *(_QWORD *)v10;
        v24 = (const WCHAR *)v10;
        v15 = Microsoft::WRL::Wrappers::HStringReference::HStringReference(&v30, &v24);
        v16 = v14;
        v4 = v26;
        v17 = v27(v26, v15[1].Reserved.Reserved1, v25, v16);
        if ( v17 < 0 )
        {
          wil::details::in1diag3::Throw_Hr(
            retaddr,
            (void *)0x98,
            (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\targetedcontentlayoutresolver\\tilebinder.cpp",
            (const char *)(unsigned int)v17);
          JUMPOUT(0x1800A62DDLL);
        }
        *((_BYTE *)v11 + 48) = 1;
        *v13 = 1;
        ++v5;
        ++v6;
        if ( v23 )
        {
          if ( _InterlockedExchangeAdd(v23 + 2, 0xFFFFFFFF) == 1 )
          {
            v18 = v23;
            (**(void (__fastcall ***)(volatile signed __int32 *))v23)(v23);
            if ( _InterlockedExchangeAdd(v18 + 3, 0xFFFFFFFF) == 1 )
              goto LABEL_19;
          }
        }
      }
      v7 = *a2;
      result = (a2[1] - *a2) >> 4;
      if ( v5 >= result )
        return result;
      a3 = v28;
    }
  }
  return result;
}
