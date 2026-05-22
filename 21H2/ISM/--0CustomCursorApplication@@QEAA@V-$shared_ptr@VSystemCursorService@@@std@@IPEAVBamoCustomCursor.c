/*
 * XREFs of ??0CustomCursorApplication@@QEAA@V?$shared_ptr@VSystemCursorService@@@std@@IPEAVBamoCustomCursorControllerClientProxy@@@Z @ 0x18013B58C
 * Callers:
 *     ??$?0AEAV?$shared_ptr@VSystemCursorService@@@std@@AEAIAEAPEAVBamoCustomCursorControllerClientProxy@@@?$_Ref_count_obj@VCustomCursorApplication@@@std@@QEAA@AEAV?$shared_ptr@VSystemCursorService@@@1@AEAIAEAPEAVBamoCustomCursorControllerClientProxy@@@Z @ 0x18013ABD8 (--$-0AEAV-$shared_ptr@VSystemCursorService@@@std@@AEAIAEAPEAVBamoCustomCursorControllerClientPro.c)
 * Callees:
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x18003B028 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x18004B280 (_guard_dispatch_icall_nop.c)
 *     ??0?$_Hash@V?$_Uset_traits@_KV?$_Uhash_compare@_KU?$hash@_K@std@@U?$equal_to@_K@2@@std@@V?$allocator@_K@2@$0A@@std@@@std@@QEAA@AEBV?$_Uhash_compare@_KU?$hash@_K@std@@U?$equal_to@_K@2@@1@AEBV?$allocator@_K@1@@Z @ 0x180097890 (--0-$_Hash@V-$_Uset_traits@_KV-$_Uhash_compare@_KU-$hash@_K@std@@U-$equal_to@_K@2@@std@@V-$alloc.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall CustomCursorApplication::CustomCursorApplication(
        __int64 a1,
        _QWORD *a2,
        int a3,
        void (__fastcall ***a4)(_QWORD))
{
  __int64 v8; // rax
  std::_Ref_count_base *v9; // rcx
  int v11; // [rsp+60h] [rbp+18h] BYREF
  __int64 v12; // [rsp+68h] [rbp+20h]

  *(_QWORD *)a1 = 0LL;
  *(_QWORD *)(a1 + 8) = 0LL;
  v8 = a2[1];
  if ( v8 )
    _InterlockedIncrement((volatile signed __int32 *)(v8 + 12));
  *(_QWORD *)a1 = *a2;
  *(_QWORD *)(a1 + 8) = a2[1];
  v12 = a1 + 16;
  v11 = 0;
  std::_Hash<std::_Uset_traits<unsigned __int64,std::_Uhash_compare<unsigned __int64,std::hash<unsigned __int64>,std::equal_to<unsigned __int64>>,std::allocator<unsigned __int64>,0>>::_Hash<std::_Uset_traits<unsigned __int64,std::_Uhash_compare<unsigned __int64,std::hash<unsigned __int64>,std::equal_to<unsigned __int64>>,std::allocator<unsigned __int64>,0>>(
    a1 + 16,
    &v11);
  *(_DWORD *)(a1 + 80) = a3;
  *(_QWORD *)(a1 + 88) = a4;
  if ( a4 )
    (**a4)(a4);
  *(_QWORD *)(a1 + 96) = 0LL;
  *(_QWORD *)(a1 + 104) = 0LL;
  v9 = (std::_Ref_count_base *)a2[1];
  if ( v9 )
    std::_Ref_count_base::_Decref(v9);
  return a1;
}
