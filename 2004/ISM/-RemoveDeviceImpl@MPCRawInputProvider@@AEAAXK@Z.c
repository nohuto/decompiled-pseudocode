/*
 * XREFs of ?RemoveDeviceImpl@MPCRawInputProvider@@AEAAXK@Z @ 0x18008AD70
 * Callers:
 *     ?FlushQueuedDeviceChanges@MPCRawInputProvider@@AEAAXXZ @ 0x18008A4BC (-FlushQueuedDeviceChanges@MPCRawInputProvider@@AEAAXXZ.c)
 *     ?RemoveDevice@MPCRawInputProvider@@QEAAJK@Z @ 0x18008ACAC (-RemoveDevice@MPCRawInputProvider@@QEAAJK@Z.c)
 * Callees:
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18003E44C (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     memmove_0 @ 0x18004A697 (memmove_0.c)
 *     _guard_dispatch_icall_nop @ 0x18004A6B0 (_guard_dispatch_icall_nop.c)
 *     std::remove_if_std::_Vector_iterator_std::_Vector_val_std::_Simple_types_LegacyInputInfo_______lambda_1157ceaaacdd00f9cf6535b50f5a150f___ @ 0x180089D8C (std--remove_if_std--_Vector_iterator_std--_Vector_val_std--_Simple_types_LegacyInputInfo_______l.c)
 *     ?erase@?$vector@V?$shared_ptr@ULegacyDeviceInfo@@@std@@V?$allocator@V?$shared_ptr@ULegacyDeviceInfo@@@std@@@2@@std@@QEAA?AV?$_Vector_iterator@V?$_Vector_val@U?$_Simple_types@V?$shared_ptr@ULegacyDeviceInfo@@@std@@@std@@@std@@@2@V?$_Vector_const_iterator@V?$_Vector_val@U?$_Simple_types@V?$shared_ptr@ULegacyDeviceInfo@@@std@@@std@@@std@@@2@@Z @ 0x18008B0C8 (-erase@-$vector@V-$shared_ptr@ULegacyDeviceInfo@@@std@@V-$allocator@V-$shared_ptr@ULegacyDeviceI.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall MPCRawInputProvider::RemoveDeviceImpl(MPCRawInputProvider *this, int a2)
{
  struct _RTL_CRITICAL_SECTION *v3; // rbp
  _QWORD *i; // rdi
  _DWORD *v5; // r8
  _DWORD *j; // rbx
  __int64 *v7; // rcx
  __int64 v8; // rax
  int v9; // eax
  _DWORD *v10; // rax
  int v11; // eax
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  struct _RTL_CRITICAL_SECTION *v13; // [rsp+40h] [rbp+8h] BYREF
  int v14; // [rsp+48h] [rbp+10h]

  v14 = a2;
  v3 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 96);
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 96));
  v13 = v3;
  for ( i = (_QWORD *)*((_QWORD *)this + 3); i != *((_QWORD **)this + 4) && *(_DWORD *)*i != v14; i += 2 )
    ;
  v5 = (_DWORD *)*((_QWORD *)this + 24);
  j = (_DWORD *)*((_QWORD *)this + 23);
  if ( i == *((_QWORD **)this + 4) )
  {
    std::remove_if_std::_Vector_iterator_std::_Vector_val_std::_Simple_types_LegacyInputInfo_______lambda_1157ceaaacdd00f9cf6535b50f5a150f___(
      &v13,
      *((_DWORD **)this + 23),
      v5,
      v14);
    *((_QWORD *)this + 24) = v13;
  }
  else
  {
    while ( j != v5 && j[1] != v14 )
      j += 508;
    while ( 1 )
    {
      v7 = (__int64 *)*((_QWORD *)this + 2);
      v8 = *v7;
      if ( j == v5 )
        break;
      v9 = (*(__int64 (__fastcall **)(__int64 *, _DWORD *))(v8 + 24))(v7, j);
      if ( v9 < 0 )
      {
        wil::details::in1diag3::FailFast_Hr(
          retaddr,
          333LL,
          (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\mpc\\lib\\mpcrawinputprovider.cpp",
          (const char *)(unsigned int)v9);
        __debugbreak();
      }
      memmove_0(j, j + 508, *((_QWORD *)this + 24) - (_QWORD)(j + 508));
      *((_QWORD *)this + 24) -= 2032LL;
      v10 = (_DWORD *)*((_QWORD *)this + 24);
      v5 = v10;
      for ( j = (_DWORD *)*((_QWORD *)this + 23); j != v10; j += 508 )
      {
        if ( j[1] == v14 )
          break;
      }
    }
    v11 = (*(__int64 (__fastcall **)(__int64 *, _QWORD))(v8 + 56))(v7, *i);
    if ( v11 < 0 )
    {
      wil::details::in1diag3::FailFast_Hr(
        retaddr,
        341LL,
        (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\mpc\\lib\\mpcrawinputprovider.cpp",
        (const char *)(unsigned int)v11);
      __debugbreak();
    }
    std::vector<std::shared_ptr<LegacyDeviceInfo>>::erase((char *)this + 24, &v13, i);
  }
  if ( v3 )
    LeaveCriticalSection(v3);
}
