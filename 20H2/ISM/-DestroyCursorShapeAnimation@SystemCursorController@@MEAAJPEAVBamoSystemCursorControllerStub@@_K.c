/*
 * XREFs of ?DestroyCursorShapeAnimation@SystemCursorController@@MEAAJPEAVBamoSystemCursorControllerStub@@_K1@Z @ 0x18013C130
 * Callers:
 *     <none>
 * Callees:
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x18003B368 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18003E15C (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18004A660 (_guard_dispatch_icall_nop.c)
 *     ?_Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18007F53C (-_Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$_Try_emplace@AEB_K$$V@?$unordered_map@_KV?$shared_ptr@VSystemCursor@@@std@@U?$hash@_K@2@U?$equal_to@_K@2@V?$allocator@U?$pair@$$CB_KV?$shared_ptr@VSystemCursor@@@std@@@std@@@2@@std@@QEAA?AU?$pair@V?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CB_KV?$shared_ptr@VSystemCursor@@@std@@@std@@@std@@@std@@@std@@_N@1@AEB_K@Z @ 0x18013ACF8 (--$_Try_emplace@AEB_K$$V@-$unordered_map@_KV-$shared_ptr@VSystemCursor@@@std@@U-$hash@_K@2@U-$eq.c)
 *     ?CursorExists@SystemCursorService@@QEAA_N_K@Z @ 0x18013BF78 (-CursorExists@SystemCursorService@@QEAA_N_K@Z.c)
 *     ?ShapeExists@SystemCursor@@QEBA_N_K@Z @ 0x18013CD20 (-ShapeExists@SystemCursor@@QEBA_N_K@Z.c)
 *     ?RemoveShape@SystemCursor@@QEAAX_K@Z @ 0x1801401B0 (-RemoveShape@SystemCursor@@QEAAX_K@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall SystemCursorController::DestroyCursorShapeAnimation(
        SystemCursorController *this,
        struct BamoSystemCursorControllerStub *a2,
        __int64 a3,
        unsigned __int64 a4)
{
  __int64 v7; // r11
  __int64 v8; // rax
  volatile signed __int32 *v9; // rbx
  SystemCursor *v10; // rdi
  const char *v11; // r9
  __int64 result; // rax
  __int64 v13; // [rsp+20h] [rbp-28h] BYREF
  SystemCursor *v14; // [rsp+30h] [rbp-18h]
  volatile signed __int32 *v15; // [rsp+38h] [rbp-10h]
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]
  __int64 v17; // [rsp+50h] [rbp+8h] BYREF

  if ( !*((_QWORD *)this + 12) )
  {
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      246LL,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\dwm\\components\\cursor\\service\\lib\\syst"
               "emcursorcontroller.cpp",
      (const char *)0x8000FFFFLL);
    __debugbreak();
  }
  try
  {
    if ( *(_DWORD *)((*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(*((_QWORD *)a2 + 7) + 16LL) + 8LL))(*(_QWORD *)(*((_QWORD *)a2 + 7) + 16LL))
                   + 36) != *((_DWORD *)this + 18) )
      wil::details::in1diag3::_Throw_Hr(
        retaddr,
        251LL,
        (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\dwm\\components\\cursor\\service\\lib\\sy"
                 "stemcursorcontroller.cpp",
        (const char *)0x80070005LL);
    if ( HIBYTE(a4) )
      wil::details::in1diag3::_Throw_Hr(
        retaddr,
        257LL,
        (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\dwm\\components\\cursor\\service\\lib\\sy"
                 "stemcursorcontroller.cpp",
        (const char *)0x80070057LL);
    if ( !SystemCursorService::CursorExists(*((SystemCursorService **)this + 12), a3) )
      wil::details::in1diag3::_Throw_Hr(
        retaddr,
        259LL,
        (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\dwm\\components\\cursor\\service\\lib\\sy"
                 "stemcursorcontroller.cpp",
        (const char *)0x80070057LL);
    v17 = a3;
    std::unordered_map<unsigned __int64,std::shared_ptr<SystemCursor>>::_Try_emplace<unsigned __int64 const &,>(
      v7 + 40,
      (__int64)&v13,
      (const unsigned __int8 *)&v17);
    v8 = v13;
    v9 = *(volatile signed __int32 **)(v13 + 32);
    if ( v9 )
    {
      _InterlockedIncrement(v9 + 2);
      v9 = *(volatile signed __int32 **)(v8 + 32);
    }
    v14 = *(SystemCursor **)(v8 + 24);
    v10 = v14;
    v15 = v9;
    if ( !SystemCursor::ShapeExists(v14, a4) )
      wil::details::in1diag3::_Throw_Hr(
        retaddr,
        262LL,
        (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\dwm\\components\\cursor\\service\\lib\\sy"
                 "stemcursorcontroller.cpp",
        (const char *)0x80070057LL);
    SystemCursor::RemoveShape(v10, a4);
    if ( v9 )
      std::_Ref_count_base::_Decref((std::_Ref_count_base *)v9);
    result = 0LL;
  }
  catch ( ... )
  {
    wil::details::in1diag3::Log_CaughtException(
      retaddr,
      (void *)0x10D,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\dwm\\components\\cursor\\service\\lib\\syst"
               "emcursorcontroller.cpp",
      v11);
    return 0LL;
  }
  return result;
}
