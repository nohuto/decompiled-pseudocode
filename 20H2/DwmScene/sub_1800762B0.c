/*
 * XREFs of sub_1800762B0 @ 0x1800762B0
 * Callers:
 *     sub_180016C80 @ 0x180016C80 (sub_180016C80.c)
 *     sub_180016E64 @ 0x180016E64 (sub_180016E64.c)
 *     sub_180073FB4 @ 0x180073FB4 (sub_180073FB4.c)
 *     sub_180076C30 @ 0x180076C30 (sub_180076C30.c)
 *     sub_180076F08 @ 0x180076F08 (sub_180076F08.c)
 *     sub_180077C90 @ 0x180077C90 (sub_180077C90.c)
 *     sub_18007A284 @ 0x18007A284 (sub_18007A284.c)
 *     sub_18007AC40 @ 0x18007AC40 (sub_18007AC40.c)
 * Callees:
 *     ?GetLocaleT@_LocaleUpdate@@QEAAPEAU__crt_locale_pointers@@XZ @ 0x180010AA0 (-GetLocaleT@_LocaleUpdate@@QEAAPEAU__crt_locale_pointers@@XZ.c)
 *     sub_1800DD540 @ 0x1800DD540 (sub_1800DD540.c)
 *     sub_1800DD874 @ 0x1800DD874 (sub_1800DD874.c)
 *     _guard_dispatch_icall_nop @ 0x18011FBB0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall sub_1800762B0(__int64 a1, unsigned int a2, __int64 a3, __int64 a4)
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
    sub_1800DD874(a1 + 368);
    LocaleT = _LocaleUpdate::GetLocaleT((_LocaleUpdate *)(a1 + 368));
    v12 = sub_1800DD540(LocaleT);
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
