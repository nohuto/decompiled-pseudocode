/*
 * XREFs of sub_18007BB80 @ 0x18007BB80
 * Callers:
 *     sub_180016EC0 @ 0x180016EC0 (sub_180016EC0.c)
 *     sub_1800170A4 @ 0x1800170A4 (sub_1800170A4.c)
 *     sub_180079884 @ 0x180079884 (sub_180079884.c)
 *     sub_18007C500 @ 0x18007C500 (sub_18007C500.c)
 *     sub_18007C7D8 @ 0x18007C7D8 (sub_18007C7D8.c)
 *     sub_18007D560 @ 0x18007D560 (sub_18007D560.c)
 *     sub_18007FB54 @ 0x18007FB54 (sub_18007FB54.c)
 *     sub_180080510 @ 0x180080510 (sub_180080510.c)
 * Callees:
 *     ?GetLocaleT@_LocaleUpdate@@QEAAPEAU__crt_locale_pointers@@XZ @ 0x180010B80 (-GetLocaleT@_LocaleUpdate@@QEAAPEAU__crt_locale_pointers@@XZ.c)
 *     sub_1800E2E10 @ 0x1800E2E10 (sub_1800E2E10.c)
 *     sub_1800E3144 @ 0x1800E3144 (sub_1800E3144.c)
 *     _guard_dispatch_icall_nop @ 0x180125480 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall sub_18007BB80(__int64 a1, unsigned int a2, __int64 a3, __int64 a4)
{
  __int64 result; // rax
  __int64 v9; // rcx
  __int64 v10; // rcx
  struct __crt_locale_pointers *LocaleT; // rax
  __int64 v12; // rax
  volatile signed __int32 *v13; // rbx
  volatile signed __int32 *v14; // rbx
  _UNKNOWN *retaddr; // [rsp+A8h] [rbp+28h] BYREF

  result = (__int64)&retaddr;
  if ( *(_QWORD *)(a1 + 912) )
  {
    v9 = *(_QWORD *)(a4 + 8);
    if ( v9 )
      _InterlockedIncrement((volatile signed __int32 *)(v9 + 8));
    v10 = *(_QWORD *)(a3 + 8);
    if ( v10 )
      _InterlockedIncrement((volatile signed __int32 *)(v10 + 8));
    sub_1800E3144(a1 + 368);
    LocaleT = _LocaleUpdate::GetLocaleT((_LocaleUpdate *)(a1 + 368));
    v12 = sub_1800E2E10(LocaleT);
    result = (*(__int64 (__fastcall **)(__int64, _QWORD, __int64))(a1 + 912))(a1, a2, v12);
  }
  v13 = *(volatile signed __int32 **)(a3 + 8);
  if ( v13 )
  {
    result = (unsigned int)_InterlockedDecrement(v13 + 2);
    if ( !(_DWORD)result )
    {
      (**(void (__fastcall ***)(volatile signed __int32 *))v13)(v13);
      result = (unsigned int)_InterlockedDecrement(v13 + 3);
      if ( !(_DWORD)result )
        result = (*(__int64 (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v13 + 8LL))(v13);
    }
  }
  v14 = *(volatile signed __int32 **)(a4 + 8);
  if ( v14 )
  {
    result = (unsigned int)_InterlockedDecrement(v14 + 2);
    if ( !(_DWORD)result )
    {
      (**(void (__fastcall ***)(volatile signed __int32 *))v14)(v14);
      result = (unsigned int)_InterlockedDecrement(v14 + 3);
      if ( !(_DWORD)result )
        return (*(__int64 (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v14 + 8LL))(v14);
    }
  }
  return result;
}
