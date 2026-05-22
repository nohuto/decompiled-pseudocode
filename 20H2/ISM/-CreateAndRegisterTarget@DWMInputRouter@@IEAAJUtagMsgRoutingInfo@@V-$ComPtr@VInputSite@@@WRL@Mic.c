/*
 * XREFs of ?CreateAndRegisterTarget@DWMInputRouter@@IEAAJUtagMsgRoutingInfo@@V?$ComPtr@VInputSite@@@WRL@Microsoft@@PEAPEAUIInputTarget@@@Z @ 0x180137DC0
 * Callers:
 *     ?GetTargetFromInputSite@DWMInputRouter@@AEAA?AV?$ComPtr@UIInputTarget@@@WRL@Microsoft@@AEBV?$ComPtr@VInputSite@@@34@W4InputType@@AEBUHitTestResult@@AEBU_LUID@@AEAV?$ComPtr@UIDCompInputTarget@@@34@@Z @ 0x180017EE0 (-GetTargetFromInputSite@DWMInputRouter@@AEAA-AV-$ComPtr@UIInputTarget@@@WRL@Microsoft@@AEBV-$Com.c)
 * Callees:
 *     ?_Fnv1a_append_bytes@std@@YA_K_KQEBE_K@Z @ 0x18000DAF4 (-_Fnv1a_append_bytes@std@@YA_K_KQEBE_K@Z.c)
 *     ??1?$com_ptr_t@VAsyncHRESULTPrincipal@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x1800107DC (--1-$com_ptr_t@VAsyncHRESULTPrincipal@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     ??8@YA_NAEBUtagMsgRoutingInfo@@0@Z @ 0x1800356A8 (--8@YA_NAEBUtagMsgRoutingInfo@@0@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800357E0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18003E15C (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18004A660 (_guard_dispatch_icall_nop.c)
 *     ?Create@DWMInputTarget@@SAJAEBUtagMsgRoutingInfo@@V?$ComPtr@VInputSite@@@WRL@Microsoft@@PEAPEAUIInputTarget@@@Z @ 0x1800B6324 (-Create@DWMInputTarget@@SAJAEBUtagMsgRoutingInfo@@V-$ComPtr@VInputSite@@@WRL@Microsoft@@PEAPEAUI.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall DWMInputRouter::CreateAndRegisterTarget(_QWORD *a1, __int64 a2, _QWORD *a3, _QWORD *a4)
{
  int v8; // r12d
  int v9; // r13d
  __int64 v10; // rcx
  unsigned __int64 v11; // r8
  __int64 appended; // rax
  __int64 v13; // r11
  __int64 v14; // rsi
  __int64 v15; // r11
  __int64 v16; // r9
  __int64 v17; // r10
  __int64 v18; // rax
  __int64 *v19; // r9
  char v20; // al
  __int64 v21; // r9
  __int64 v22; // rcx
  __int64 v23; // rax
  int v24; // eax
  unsigned int v25; // esi
  __int64 v26; // rcx
  __int64 v28; // rcx
  unsigned __int64 v29; // r8
  __int64 v30; // rax
  __int64 v31; // r11
  __int64 v32; // rsi
  __int64 v33; // r11
  __int64 v34; // r9
  __int64 v35; // r10
  __int64 v36; // rax
  __int64 *v37; // r9
  char v38; // al
  __int64 v39; // r9
  __int64 v40; // rcx
  __int64 v41; // rbx
  __int64 v42; // rcx
  int v43; // eax
  unsigned int v44; // ebx
  __int64 v45; // rcx
  unsigned __int8 v46[8]; // [rsp+30h] [rbp-48h] BYREF
  _QWORD *v47; // [rsp+38h] [rbp-40h]
  _OWORD v48[2]; // [rsp+40h] [rbp-38h] BYREF
  __int64 v49; // [rsp+60h] [rbp-18h]
  wil::details::in1diag3 *retaddr; // [rsp+B8h] [rbp+40h]

  v47 = a3;
  v8 = *(_DWORD *)a2;
  *(_DWORD *)v46 = *(_DWORD *)a2;
  std::_Fnv1a_append_bytes((__int64)a1, v46, 4uLL);
  v9 = *(_DWORD *)(a2 + 4);
  *(_DWORD *)v46 = v9;
  appended = std::_Fnv1a_append_bytes(v10, v46, v11);
  v14 = 2 * (a1[16] & (v13 ^ appended));
  v15 = a1[13];
  v16 = *(_QWORD *)(v15 + 8 * v14);
  v17 = a1[11];
  while ( 1 )
  {
    if ( *(_QWORD *)(v15 + 8 * v14) == v17 )
      v18 = v17;
    else
      v18 = **(_QWORD **)(v15 + 8 * v14 + 8);
    if ( v16 == v18 )
    {
      v22 = v17;
      goto LABEL_12;
    }
    if ( operator==(v16 + 16, a2) )
      break;
    v16 = *v19;
  }
  v20 = operator==(a2, (__int64)(v19 + 2));
  v22 = v17;
  if ( v20 )
    v22 = v21;
LABEL_12:
  if ( v22 == v17 )
  {
    v23 = a1[6];
    v48[0] = *(_OWORD *)a2;
    v48[1] = *(_OWORD *)(a2 + 16);
    v49 = *(_QWORD *)(a2 + 32);
    v24 = (*(__int64 (__fastcall **)(_QWORD *, _OWORD *, _QWORD, _QWORD))(v23 + 24))(a1 + 6, v48, 0LL, 0LL);
    v25 = v24;
    if ( v24 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x3C6,
        (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\dwm\\lib\\dwminputrouter.cpp",
        (const char *)(unsigned int)v24);
      v26 = *a3;
      if ( *a3 )
      {
        *a3 = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v26 + 16LL))(v26);
      }
      return v25;
    }
  }
  if ( !*a3 )
  {
    *(_DWORD *)v46 = v8;
    std::_Fnv1a_append_bytes(v22, v46, 4uLL);
    *(_DWORD *)v46 = v9;
    v30 = std::_Fnv1a_append_bytes(v28, v46, v29);
    v32 = 2 * (a1[16] & (v31 ^ v30));
    v33 = a1[13];
    v34 = *(_QWORD *)(v33 + 8 * v32);
    v35 = a1[11];
    while ( 1 )
    {
      if ( *(_QWORD *)(v33 + 8 * v32) == v35 )
        v36 = v35;
      else
        v36 = **(_QWORD **)(v33 + 8 * v32 + 8);
      if ( v34 == v36 )
      {
        v40 = v35;
        goto LABEL_29;
      }
      if ( operator==(v34 + 16, a2) )
        break;
      v34 = *v37;
    }
    v38 = operator==(a2, (__int64)(v37 + 2));
    v40 = v35;
    if ( v38 )
      v40 = v39;
LABEL_29:
    if ( v40 == v35 )
    {
      wil::details::in1diag3::FailFast_Hr(
        retaddr,
        978LL,
        (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\dwm\\lib\\dwminputrouter.cpp",
        (const char *)0x80004005LL);
      __debugbreak();
    }
    v41 = *(_QWORD *)(v40 + 56);
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v41 + 8LL))(v41);
    *a4 = v41;
    goto LABEL_32;
  }
  *(_QWORD *)v46 = *a3;
  wil::com_ptr_t<AsyncHRESULTPrincipal,wil::err_exception_policy>::~com_ptr_t<AsyncHRESULTPrincipal,wil::err_exception_policy>((__int64 *)v46);
  v43 = DWMInputTarget::Create(a2, (__int64 *)v46, a4);
  v44 = v43;
  if ( v43 >= 0 )
  {
LABEL_32:
    v42 = *a3;
    if ( *a3 )
    {
      *a3 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v42 + 16LL))(v42);
    }
    return 0LL;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x3E4,
    (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\dwm\\lib\\dwminputrouter.cpp",
    (const char *)(unsigned int)v43);
  v45 = *a3;
  if ( *a3 )
  {
    *a3 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v45 + 16LL))(v45);
  }
  return v44;
}
