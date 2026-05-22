/*
 * XREFs of ?DoConvergedHitTestCallback@Win32kInterop@@AEAAJPEAU_InputHitTestRequest@@PEAU_InputHitTestResult@@@Z @ 0x18000B550
 * Callers:
 *     ?HitTest@OneCoreUAPInputHost@@UEAAJPEAU_InputHitTestRequest@@PEAU_InputHitTestResult@@@Z @ 0x180011A20 (-HitTest@OneCoreUAPInputHost@@UEAAJPEAU_InputHitTestRequest@@PEAU_InputHitTestResult@@@Z.c)
 * Callees:
 *     ?lower_bound@?$_Hash@V?$_Umap_traits@_KUTargetingInfo@Win32kInterop@@V?$_Uhash_compare@_KU?$hash@_K@std@@U?$equal_to@_K@2@@std@@V?$allocator@U?$pair@$$CB_KUTargetingInfo@Win32kInterop@@@std@@@4@$0A@@std@@@std@@QEAA?AV?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CB_KUTargetingInfo@Win32kInterop@@@std@@@std@@@std@@@2@AEB_K@Z @ 0x18000A3F0 (-lower_bound@-$_Hash@V-$_Umap_traits@_KUTargetingInfo@Win32kInterop@@V-$_Uhash_compare@_KU-$hash.c)
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x18000B0D0 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?_Fnv1a_append_bytes@std@@YA_K_KQEBE_K@Z @ 0x18000DAF4 (-_Fnv1a_append_bytes@std@@YA_K_KQEBE_K@Z.c)
 *     ?Create@InputContext@@SAJPEAPEAV1@@Z @ 0x180023D94 (-Create@InputContext@@SAJPEAPEAV1@@Z.c)
 *     ??$emplace@AEA_KUTargetingInfo@Win32kInterop@@@?$_Hash@V?$_Umap_traits@_KUTargetingInfo@Win32kInterop@@V?$_Uhash_compare@_KU?$hash@_K@std@@U?$equal_to@_K@2@@std@@V?$allocator@U?$pair@$$CB_KUTargetingInfo@Win32kInterop@@@std@@@4@$0A@@std@@@std@@QEAA?AU?$pair@V?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CB_KUTargetingInfo@Win32kInterop@@@std@@@std@@@std@@@std@@_N@1@AEA_K$$QEAUTargetingInfo@Win32kInterop@@@Z @ 0x18002426C (--$emplace@AEA_KUTargetingInfo@Win32kInterop@@@-$_Hash@V-$_Umap_traits@_KUTargetingInfo@Win32kIn.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18003E3EC (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18004ACA0 (_guard_dispatch_icall_nop.c)
 *     ?erase@?$list@U?$pair@$$CB_KUTargetingInfo@Win32kInterop@@@std@@V?$allocator@U?$pair@$$CB_KUTargetingInfo@Win32kInterop@@@std@@@2@@std@@QEAA?AV?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CB_KUTargetingInfo@Win32kInterop@@@std@@@std@@@std@@@2@V?$_List_const_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CB_KUTargetingInfo@Win32kInterop@@@std@@@std@@@std@@@2@@Z @ 0x1800B4380 (-erase@-$list@U-$pair@$$CB_KUTargetingInfo@Win32kInterop@@@std@@V-$allocator@U-$pair@$$CB_KUTarg.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall Win32kInterop::DoConvergedHitTestCallback(
        Win32kInterop *this,
        struct _InputHitTestRequest *a2,
        struct _InputHitTestResult *a3)
{
  Win32kInterop *v5; // rsi
  bool v6; // dl
  __int64 v7; // rcx
  unsigned __int64 v8; // rcx
  __int64 v9; // r11
  __int64 v10; // rbx
  __int64 v12; // rcx
  int v13; // eax
  unsigned __int64 v14; // rdx
  __int64 v15; // r11
  _QWORD *v16; // rcx
  int v17; // [rsp+20h] [rbp-78h]
  _BYTE v18[16]; // [rsp+40h] [rbp-58h] BYREF
  __int128 v19; // [rsp+50h] [rbp-48h] BYREF
  __int64 v20; // [rsp+60h] [rbp-38h]
  wil::details::in1diag3 *retaddr; // [rsp+98h] [rbp+0h]
  Win32kInterop *v22; // [rsp+A0h] [rbp+8h] BYREF
  __int64 v23; // [rsp+A8h] [rbp+10h] BYREF

  v22 = this;
  v5 = Win32kInterop::s_pInterop;
  v6 = *((_DWORD *)a2 + 4) != 0;
  switch ( *(_DWORD *)a2 )
  {
    case 4:
      v7 = 2LL;
      break;
    case 2:
      v7 = 8LL;
      break;
    case 3:
      v7 = 16LL;
      break;
    case 5:
      v7 = 0x2000000LL;
      if ( !v6 )
        v7 = 32LL;
      break;
    default:
      v7 = 0LL;
      break;
  }
  v22 = (Win32kInterop *)(*((unsigned int *)a2 + 8) | (unsigned __int64)(v7 << 32));
  std::_Hash<std::_Umap_traits<unsigned __int64,Win32kInterop::TargetingInfo,std::_Uhash_compare<unsigned __int64,std::hash<unsigned __int64>,std::equal_to<unsigned __int64>>,std::allocator<std::pair<unsigned __int64 const,Win32kInterop::TargetingInfo>>,0>>::lower_bound(
    (_QWORD *)Win32kInterop::s_pInterop + 24,
    &v23,
    (unsigned __int8 *)&v22);
  v9 = *((_QWORD *)v5 + 25);
  v10 = v23;
  if ( v23 == v9 )
    goto LABEL_7;
  if ( *(_BYTE *)(v23 + 40) )
  {
    v14 = 16 * (std::_Fnv1a_append_bytes(v8, (const unsigned __int8 *const)(v23 + 16), 8uLL) & *((_QWORD *)v5 + 30));
    v16 = (_QWORD *)(v14 + *((_QWORD *)v5 + 27));
    if ( v16[1] == v10 )
    {
      if ( *v16 == v10 )
      {
        *v16 = v15;
        *(_QWORD *)(v14 + *((_QWORD *)v5 + 27) + 8) = *((_QWORD *)v5 + 25);
      }
      else
      {
        v16[1] = *(_QWORD *)(v10 + 8);
      }
    }
    else if ( *v16 == v10 )
    {
      *v16 = *(_QWORD *)v10;
    }
    std::list<std::pair<unsigned __int64 const,Win32kInterop::TargetingInfo>>::erase((char *)v5 + 200, &v23, v10);
    v10 = *((_QWORD *)v5 + 25);
    v9 = v10;
  }
  if ( v10 == v9 )
  {
LABEL_7:
    v20 = 0LL;
    v19 = 0LL;
    v10 = *(_QWORD *)std::_Hash<std::_Umap_traits<unsigned __int64,Win32kInterop::TargetingInfo,std::_Uhash_compare<unsigned __int64,std::hash<unsigned __int64>,std::equal_to<unsigned __int64>>,std::allocator<std::pair<unsigned __int64 const,Win32kInterop::TargetingInfo>>,0>>::emplace<unsigned __int64 &,Win32kInterop::TargetingInfo>(
                       (char *)v5 + 192,
                       v18,
                       &v22,
                       &v19);
    Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v19 + 1);
    if ( (_QWORD)v19 )
      (*(void (__fastcall **)(_QWORD))(*(_QWORD *)v19 + 16LL))(v19);
    v12 = *(_QWORD *)(v10 + 24);
    if ( v12 )
    {
      *(_QWORD *)(v10 + 24) = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v12 + 16LL))(v12);
    }
    v13 = InputContext::Create((struct InputContext **)(v10 + 24));
    if ( v13 < 0 )
    {
      wil::details::in1diag3::FailFast_Hr(
        retaddr,
        (void *)0x638,
        (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputhosts\\components\\win32kinterop\\lib\\win32kinterop.cpp",
        (const char *)(unsigned int)v13,
        v17);
      JUMPOUT(0x180053EC2LL);
    }
  }
  return (*(__int64 (__fastcall **)(_QWORD, struct _InputHitTestRequest *, struct _InputHitTestResult *, _QWORD, __int64, __int64))(**((_QWORD **)v5 + 6) + 48LL))(
           *((_QWORD *)v5 + 6),
           a2,
           a3,
           *(_QWORD *)(v10 + 24),
           (__int64)v5 + 8,
           v10 + 32);
}
