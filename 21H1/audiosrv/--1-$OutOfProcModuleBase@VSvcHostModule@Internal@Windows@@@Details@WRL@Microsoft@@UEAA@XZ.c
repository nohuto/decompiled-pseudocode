/*
 * XREFs of ??1?$OutOfProcModuleBase@VSvcHostModule@Internal@Windows@@@Details@WRL@Microsoft@@UEAA@XZ @ 0x1800B84DC
 * Callers:
 *     ??_E?$OutOfProcModuleBase@VSvcHostModule@Internal@Windows@@@Details@WRL@Microsoft@@UEAAPEAXI@Z @ 0x1800B8B10 (--_E-$OutOfProcModuleBase@VSvcHostModule@Internal@Windows@@@Details@WRL@Microsoft@@UEAAPEAXI@Z.c)
 *     ??_ESvcHostModule@Internal@Windows@@UEAAPEAXI@Z @ 0x1800B8EAC (--_ESvcHostModule@Internal@Windows@@UEAAPEAXI@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180074B80 (_guard_dispatch_icall_nop.c)
 */

bool __fastcall Microsoft::WRL::Details::OutOfProcModuleBase<Windows::Internal::SvcHostModule>::~OutOfProcModuleBase<Windows::Internal::SvcHostModule>(
        Microsoft::WRL::Details *a1,
        __int64 a2,
        const unsigned __int16 *a3,
        bool a4)
{
  __int64 v5; // rcx

  *(_QWORD *)a1 = &Microsoft::WRL::Details::OutOfProcModuleBase<Windows::Internal::SvcHostModule>::`vftable';
  v5 = *((_QWORD *)a1 + 1);
  if ( v5 )
  {
    if ( *(_BYTE *)(v5 + 8) )
      (**(void (__fastcall ***)(__int64, __int64))v5)(v5, 1LL);
    *((_QWORD *)a1 + 1) = 0LL;
  }
  return Microsoft::WRL::Module<1,Windows::Internal::SvcHostModule>::~Module<1,Windows::Internal::SvcHostModule>(
           a1,
           a2,
           a3,
           a4);
}
