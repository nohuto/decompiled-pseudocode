/*
 * XREFs of ?DisableApplicationVisibilityOverride@CApplicationManager@@UEAAJPEAUIImmersiveApplication@@@Z @ 0x180149B60
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x1800663F0 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?_Free@?$NativeString@V?$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAXXZ @ 0x18007D4C4 (-_Free@-$NativeString@V-$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800F0410 (_guard_dispatch_icall_nop.c)
 *     ?SetOverrideImmuneApplication@CReportWindowVisibilityChange@@QEAAJPEAUIImmersiveApplicationInternal@@@Z @ 0x1801514EC (-SetOverrideImmuneApplication@CReportWindowVisibilityChange@@QEAAJPEAUIImmersiveApplicationInter.c)
 *     WPP_SF_Sdd @ 0x18015A1A8 (WPP_SF_Sdd.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall CApplicationManager::DisableApplicationVisibilityOverride(
        CApplicationManager *this,
        __int64 (__fastcall ***a2)(struct IImmersiveApplication *, GUID *, struct IImmersiveApplicationInternal **))
{
  __int64 (__fastcall *v4)(struct IImmersiveApplication *, GUID *, struct IImmersiveApplicationInternal **); // rbx
  int v5; // edi
  __int64 (__fastcall *v6)(struct IImmersiveApplication *, GUID *, struct IImmersiveApplicationInternal **); // rbx
  char v7; // al
  __int64 v9; // [rsp+30h] [rbp-20h] BYREF
  __int64 v10; // [rsp+38h] [rbp-18h]
  __int64 v11; // [rsp+40h] [rbp-10h]
  struct IImmersiveApplicationInternal *v12; // [rsp+78h] [rbp+28h] BYREF
  __int64 v13; // [rsp+80h] [rbp+30h] BYREF

  AcquireSRWLockExclusive(CApplicationManagerUtility::g_pIAMGlobals);
  v12 = 0LL;
  v4 = **a2;
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v12);
  v5 = v4((struct IImmersiveApplication *)a2, &GUID_c9301630_27da_428e_a432_0a5e49c0ffee, &v12);
  if ( v5 >= 0 )
  {
    v5 = CReportWindowVisibilityChange::SetOverrideImmuneApplication(
           (CReportWindowVisibilityChange *)&CApplicationManagerUtility::g_pIAMGlobals[1],
           v12);
    if ( v5 >= 0 )
    {
      v13 = 0LL;
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v13);
      (*(void (__fastcall **)(_QWORD, _QWORD, GUID *, __int64 *))(**((_QWORD **)this + 49) + 32LL))(
        *((_QWORD *)this + 49),
        0LL,
        &GUID_af7f312d_0a79_47c9_9bb6_8bd386c0ffee,
        &v13);
      (*(void (__fastcall **)(__int64, struct IImmersiveApplicationInternal *, _QWORD, __int64))(*(_QWORD *)v13 + 32LL))(
        v13,
        v12,
        *((unsigned int *)this + 194),
        1LL);
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v13);
    }
  }
  if ( (*((_BYTE *)WPP_GLOBAL_Control + 28) & 1) != 0 )
  {
    v9 = 0LL;
    v10 = 0LL;
    v11 = 0LL;
    v6 = (*a2)[4];
    Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free((__int64)&v9);
    v10 = -1LL;
    v11 = -1LL;
    if ( ((int (__fastcall *)(__int64 (__fastcall ***)(struct IImmersiveApplication *, GUID *, struct IImmersiveApplicationInternal **), __int64 *))v6)(
           a2,
           &v9) >= 0
      && v12
      && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 1) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
    {
      v7 = (*(__int64 (**)(void))(*(_QWORD *)v12 + 160LL))();
      WPP_SF_Sdd(
        *((_QWORD *)WPP_GLOBAL_Control + 2),
        12,
        (unsigned int)&WPP_aee8e1c44b463265fc366b7f5fbb13f4_Traceguids,
        v9,
        v7,
        v5);
    }
    Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free((__int64)&v9);
  }
  ReleaseSRWLockExclusive(CApplicationManagerUtility::g_pIAMGlobals);
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v12);
  return (unsigned int)v5;
}
