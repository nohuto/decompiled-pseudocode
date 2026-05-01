/*
 * XREFs of ??0AltTabWindowHook@@QEAA@PE$AAVXamlAltTabViewController@@@Z @ 0x18031EA34
 * Callers:
 *     ?RegisterKeyboardHook@XamlAltTabViewController@@QE$AAAXXZ @ 0x180311A58 (-RegisterKeyboardHook@XamlAltTabViewController@@QE$AAAXXZ.c)
 * Callees:
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x18004D370 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ??2@YAPEAX_K@Z @ 0x18008D5BC (--2@YAPEAX_K@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800F0410 (_guard_dispatch_icall_nop.c)
 *     ?__abi_winrt_ptr_ctor@@YAPEAXQE$ADVObject@Platform@@@Z @ 0x1802EBCEC (-__abi_winrt_ptr_ctor@@YAPEAXQE$ADVObject@Platform@@@Z.c)
 *     ??$?0AEAPE$AAVXamlAltTabViewController@@AEAPEAUHHOOK__@@@?$_Ref_count_obj@VAltTabWindowHookData@@@std@@QEAA@AEAPE$AAVXamlAltTabViewController@@AEAPEAUHHOOK__@@@Z @ 0x18031DBE8 (--$-0AEAPE$AAVXamlAltTabViewController@@AEAPEAUHHOOK__@@@-$_Ref_count_obj@VAltTabWindowHookData@.c)
 *     ??$_Emplace_reallocate@AEAV?$shared_ptr@VAltTabWindowHookData@@@std@@@?$vector@V?$shared_ptr@VAltTabWindowHookData@@@std@@V?$allocator@V?$shared_ptr@VAltTabWindowHookData@@@std@@@2@@std@@QEAAPEAV?$shared_ptr@VAltTabWindowHookData@@@1@QEAV21@AEAV21@@Z @ 0x18031E6A0 (--$_Emplace_reallocate@AEAV-$shared_ptr@VAltTabWindowHookData@@@std@@@-$vector@V-$shared_ptr@VAl.c)
 */

// Hidden C++ exception states: #wind=5
__int64 *__fastcall AltTabWindowHook::AltTabWindowHook(__int64 *a1, __int64 a2)
{
  void *v3; // rax
  __int64 v4; // rax
  volatile signed __int32 *v5; // rbx
  __int64 *v6; // rdx
  std::_Ref_count_base *v7; // rcx
  __int64 v9; // [rsp+20h] [rbp-18h] BYREF
  volatile signed __int32 *v10; // [rsp+28h] [rbp-10h]
  __int64 v11; // [rsp+68h] [rbp+30h] BYREF
  HHOOK v12; // [rsp+70h] [rbp+38h] BYREF
  RTL_SRWLOCK *v13; // [rsp+78h] [rbp+40h]

  v11 = a2;
  v11 = __abi_winrt_ptr_ctor(a2);
  *a1 = 0LL;
  a1[1] = 0LL;
  v12 = SetWindowsHookExW(13, AltTabWindowHook::AltTabHookProc, 0LL, 0);
  AcquireSRWLockExclusive(&AltTabWindowHook::s_altTabHookLock);
  v13 = &AltTabWindowHook::s_altTabHookLock;
  v3 = operator new(0x28uLL);
  v4 = std::_Ref_count_obj<AltTabWindowHookData>::_Ref_count_obj<AltTabWindowHookData>(
         (__int64)v3,
         &v11,
         (__int64 *)&v12);
  v9 = v4 + 16;
  v5 = (volatile signed __int32 *)v4;
  v10 = (volatile signed __int32 *)v4;
  v6 = (__int64 *)*((_QWORD *)&AltTabWindowHook::s_altTabHooks + 1);
  if ( qword_1805CC9D8 == *((_QWORD *)&AltTabWindowHook::s_altTabHooks + 1) )
  {
    std::vector<std::shared_ptr<AltTabWindowHookData>>::_Emplace_reallocate<std::shared_ptr<AltTabWindowHookData> &>(
      v4 + 16,
      *((char **)&AltTabWindowHook::s_altTabHooks + 1),
      &v9);
    v5 = v10;
  }
  else
  {
    **((_QWORD **)&AltTabWindowHook::s_altTabHooks + 1) = 0LL;
    v6[1] = 0LL;
    if ( v4 )
    {
      _InterlockedIncrement((volatile signed __int32 *)(v4 + 8));
      v5 = v10;
    }
    *v6 = v9;
    v6[1] = v4;
    *((_QWORD *)&AltTabWindowHook::s_altTabHooks + 1) += 16LL;
  }
  if ( v5 )
  {
    _InterlockedIncrement(v5 + 2);
    v5 = v10;
  }
  *a1 = v9;
  v7 = (std::_Ref_count_base *)a1[1];
  a1[1] = (__int64)v5;
  if ( v7 )
    std::_Ref_count_base::_Decref(v7);
  if ( v5 )
    std::_Ref_count_base::_Decref((std::_Ref_count_base *)v5);
  ReleaseSRWLockExclusive(&AltTabWindowHook::s_altTabHookLock);
  if ( v11 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v11 + 16LL))(v11);
  return a1;
}
