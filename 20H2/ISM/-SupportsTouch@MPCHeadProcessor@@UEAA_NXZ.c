/*
 * XREFs of ?SupportsTouch@MPCHeadProcessor@@UEAA_NXZ @ 0x180197C30
 * Callers:
 *     <none>
 * Callees:
 *     ?GetInstance@MPCHolographicInputManager@@SAPEAV1@XZ @ 0x180011CD0 (-GetInstance@MPCHolographicInputManager@@SAPEAV1@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x18004A660 (_guard_dispatch_icall_nop.c)
 *     ?IsPrimary@MPCInputProviderBase@@UEBA_NXZ @ 0x180083450 (-IsPrimary@MPCInputProviderBase@@UEBA_NXZ.c)
 */

char __fastcall MPCHeadProcessor::SupportsTouch(MPCHeadProcessor *this)
{
  char v1; // bl
  struct MPCHolographicInputManager *Instance; // rax

  v1 = 0;
  if ( !MPCInputProviderBase::IsPrimary((unsigned __int64)this) )
  {
    Instance = MPCHolographicInputManager::GetInstance();
    return (*(unsigned __int8 (__fastcall **)(_QWORD))(***((_QWORD ***)Instance + 322) + 344LL))(**((_QWORD **)Instance
                                                                                                  + 322)) != 0;
  }
  return v1;
}
