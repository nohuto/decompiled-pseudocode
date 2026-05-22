/*
 * XREFs of ?CreateCursor@DWMCursorBroker@@UEAAJPEAUDeviceInfo@@KPEAPEAUICursor@@@Z @ 0x180025CB0
 * Callers:
 *     <none>
 * Callees:
 *     ?_Fnv1a_append_bytes@std@@YA_K_KQEBE_K@Z @ 0x18000DAF4 (-_Fnv1a_append_bytes@std@@YA_K_KQEBE_K@Z.c)
 *     ?Create@DWMCursor@@KAJPEAVDWMCursorBroker@@UCursorId@@W4InputType@@PEAPEAV1@@Z @ 0x180022030 (-Create@DWMCursor@@KAJPEAVDWMCursorBroker@@UCursorId@@W4InputType@@PEAPEAV1@@Z.c)
 *     ?_End@?$_Hash@V?$_Umap_traits@KPEAULegacyDeviceInfo@@V?$_Uhash_compare@KU?$hash@K@std@@U?$equal_to@K@2@@std@@V?$allocator@U?$pair@$$CBKPEAULegacyDeviceInfo@@@std@@@3@$0A@@std@@@std@@IEAA?AV?$_List_unchecked_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBKPEAULegacyDeviceInfo@@@std@@@std@@@std@@@2@_K@Z @ 0x1800242D0 (-_End@-$_Hash@V-$_Umap_traits@KPEAULegacyDeviceInfo@@V-$_Uhash_compare@KU-$hash@K@std@@U-$equal_.c)
 *     ??$_Insert_or_assign@UDWMPointerMapping@@AEAUCursorId@@@?$unordered_map@UDWMPointerMapping@@UCursorId@@UDWMMappingHash@@U?$equal_to@UDWMPointerMapping@@@std@@V?$allocator@U?$pair@$$CBUDWMPointerMapping@@UCursorId@@@std@@@5@@std@@QEAA?AU?$pair@V?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBUDWMPointerMapping@@UCursorId@@@std@@@std@@@std@@@std@@_N@1@$$QEAUDWMPointerMapping@@AEAUCursorId@@@Z @ 0x180025EF0 (--$_Insert_or_assign@UDWMPointerMapping@@AEAUCursorId@@@-$unordered_map@UDWMPointerMapping@@UCur.c)
 *     ?GetCursorDefaultState@@YAJW4InputType@@PEAUCursorState@@@Z @ 0x18002610C (-GetCursorDefaultState@@YAJW4InputType@@PEAUCursorState@@@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800357E0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIMessageProxy@@@WRL@Microsoft@@IEAAKXZ @ 0x180037660 (-InternalRelease@-$ComPtr@UIMessageProxy@@@WRL@Microsoft@@IEAAKXZ.c)
 *     __security_check_cookie @ 0x18003C560 (__security_check_cookie.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18003E15C (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18004A660 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall DWMCursorBroker::CreateCursor(
        DWMCursorBroker *this,
        struct DeviceInfo *a2,
        int a3,
        struct ICursor **a4)
{
  struct ICursor *v4; // rsi
  unsigned int v9; // ebx
  int CursorDefaultState; // eax
  int v11; // r8d
  unsigned __int8 v12; // al
  __int64 v13; // r14
  _QWORD *v14; // rax
  __int64 v15; // r10
  __int64 v16; // r11
  int v18; // eax
  __int64 (__fastcall *v19)(DWMCursorBroker *, __int64 *); // rbx
  int v20; // eax
  _DWORD *v21; // rbx
  int v22; // eax
  int v23; // eax
  int v24; // eax
  int v25; // eax
  unsigned __int8 v26[8]; // [rsp+20h] [rbp-58h] BYREF
  struct ICursor *v27; // [rsp+28h] [rbp-50h] BYREF
  __int64 v28; // [rsp+30h] [rbp-48h] BYREF
  _BYTE v29[16]; // [rsp+38h] [rbp-40h] BYREF
  _BYTE v30[8]; // [rsp+48h] [rbp-30h] BYREF
  _BYTE v31[16]; // [rsp+50h] [rbp-28h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+B8h] [rbp+40h]

  *a4 = 0LL;
  v27 = 0LL;
  v9 = *((_DWORD *)a2 + 1);
  CursorDefaultState = GetCursorDefaultState(v9, v29);
  if ( CursorDefaultState < 0 )
  {
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      (void *)0x1DC,
      (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\dwm\\components\\cursor\\lib\\dwmcursorbroker.cpp",
      (const char *)(unsigned int)CursorDefaultState,
      *(int *)v26);
    __debugbreak();
  }
  if ( v29[0] != (_BYTE)v11 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x1DF,
      (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\dwm\\components\\cursor\\lib\\dwmcursorbroker.cpp",
      (const char *)0x80070057LL,
      *(int *)v26);
    return 2147942487LL;
  }
  if ( ((unsigned __int8)v9 & (unsigned __int8)(v11 + 2)) != 0 )
  {
    v12 = v9;
    v9 = v11 + 64;
    if ( (v12 & (unsigned __int8)(v11 + 64)) != 0 )
    {
      *(_QWORD *)v26 = (unsigned int)(v11 + 2);
    }
    else
    {
      v9 = v11 + 2;
      *(_QWORD *)v26 = 1LL;
    }
  }
  else
  {
    *(_DWORD *)v26 = *((_DWORD *)this + 114);
    *((_DWORD *)this + 114) = *(_DWORD *)v26 + 1;
    *(_DWORD *)&v26[4] = 0;
  }
  v13 = std::_Fnv1a_append_bytes((unsigned int)(v11 + 2), v26, 4uLL) & *((_QWORD *)this + 12);
  while ( 1 )
  {
    v14 = std::_Hash<std::_Umap_traits<unsigned long,LegacyDeviceInfo *,std::_Uhash_compare<unsigned long,std::hash<unsigned long>,std::equal_to<unsigned long>>,std::allocator<std::pair<unsigned long const,LegacyDeviceInfo *>>,0>>::_End(
            (__int64)this + 48,
            &v28,
            v13);
    if ( v15 == *v14 )
      break;
    if ( *(_DWORD *)(v15 + 16) == (_DWORD)v16 )
      goto LABEL_9;
  }
  v15 = *((_QWORD *)this + 7);
LABEL_9:
  if ( v15 == *((_QWORD *)this + 7) )
  {
    v18 = DWMCursor::Create((__int64)this, v16, v9, (__int64 *)&v27);
    if ( v18 < 0 )
    {
      wil::details::in1diag3::FailFast_Hr(
        retaddr,
        (void *)0x1FF,
        (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\dwm\\components\\cursor\\lib\\dwmcursorbroker.cpp",
        (const char *)(unsigned int)v18,
        *(int *)v26);
    }
    else
    {
      v28 = 0LL;
      v19 = *(__int64 (__fastcall **)(DWMCursorBroker *, __int64 *))(*(_QWORD *)this + 40LL);
      Microsoft::WRL::ComPtr<IMessageProxy>::InternalRelease(&v28);
      v20 = v19(this, &v28);
      v4 = v27;
      if ( v20 < 0 )
      {
LABEL_22:
        Microsoft::WRL::ComPtr<IMessageProxy>::InternalRelease(&v28);
        goto LABEL_11;
      }
      v21 = (_DWORD *)(*(__int64 (__fastcall **)(struct ICursor *, _BYTE *))(*(_QWORD *)v27 + 40LL))(v27, v30);
      if ( *(_DWORD *)(*(__int64 (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)v28 + 40LL))(v28, v29) == *v21 )
      {
        v27 = *(struct ICursor **)((char *)this + 460);
LABEL_19:
        v22 = (*(__int64 (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)v28 + 96LL))(v28, v31);
        if ( v22 < 0 )
        {
          wil::details::in1diag3::FailFast_Hr(
            retaddr,
            (void *)0x211,
            (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\dwm\\components\\cursor\\lib\\dw"
                          "mcursorbroker.cpp",
            (const char *)(unsigned int)v22,
            *(int *)v26);
          __debugbreak();
        }
        v23 = (*(__int64 (__fastcall **)(struct ICursor *, _QWORD, _QWORD))(*(_QWORD *)v4 + 24LL))(
                v4,
                (unsigned int)v27,
                HIDWORD(v27));
        if ( v23 < 0 )
        {
          wil::details::in1diag3::FailFast_Hr(
            retaddr,
            (void *)0x213,
            (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\dwm\\components\\cursor\\lib\\dw"
                          "mcursorbroker.cpp",
            (const char *)(unsigned int)v23,
            *(int *)v26);
          __debugbreak();
        }
        v24 = (*(__int64 (__fastcall **)(struct ICursor *, _BYTE *))(*(_QWORD *)v4 + 88LL))(v4, v31);
        if ( v24 < 0 )
        {
          wil::details::in1diag3::FailFast_Hr(
            retaddr,
            (void *)0x214,
            (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\dwm\\components\\cursor\\lib\\dw"
                          "mcursorbroker.cpp",
            (const char *)(unsigned int)v24,
            *(int *)v26);
          JUMPOUT(0x180058BF6LL);
        }
        goto LABEL_22;
      }
    }
    v25 = (*(__int64 (__fastcall **)(__int64, struct ICursor **, char *))(*(_QWORD *)v28 + 32LL))(
            v28,
            &v27,
            (char *)&v27 + 4);
    if ( v25 < 0 )
    {
      wil::details::in1diag3::FailFast_Hr(
        retaddr,
        (void *)0x20F,
        (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\dwm\\components\\cursor\\lib\\dwmcursorbroker.cpp",
        (const char *)(unsigned int)v25,
        *(int *)v26);
      __debugbreak();
    }
    goto LABEL_19;
  }
  v4 = *(struct ICursor **)(v15 + 24);
  (*(void (__fastcall **)(struct ICursor *))(*(_QWORD *)v4 + 8LL))(v4);
LABEL_11:
  if ( *(_DWORD *)a2 )
  {
    LODWORD(v27) = *(_DWORD *)a2;
    HIDWORD(v27) = a3;
    std::unordered_map<DWMPointerMapping,CursorId,DWMMappingHash,std::equal_to<DWMPointerMapping>,std::allocator<std::pair<DWMPointerMapping const,CursorId>>>::_Insert_or_assign<DWMPointerMapping,CursorId &>(
      (char *)this + 112,
      v31,
      &v27,
      v26);
  }
  *a4 = v4;
  return 0LL;
}
