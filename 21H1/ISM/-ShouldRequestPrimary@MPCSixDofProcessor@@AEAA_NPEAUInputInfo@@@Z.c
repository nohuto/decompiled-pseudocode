/*
 * XREFs of ?ShouldRequestPrimary@MPCSixDofProcessor@@AEAA_NPEAUInputInfo@@@Z @ 0x18018F608
 * Callers:
 *     ?Process3DInput@MPCSixDofProcessor@@UEAAJPEAUInputInfo@@@Z @ 0x18018E5D0 (-Process3DInput@MPCSixDofProcessor@@UEAAJPEAUInputInfo@@@Z.c)
 * Callees:
 *     ?GetInstance@MPCHolographicInputManager@@SAPEAV1@XZ @ 0x180011C98 (-GetInstance@MPCHolographicInputManager@@SAPEAV1@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x18004ACA0 (_guard_dispatch_icall_nop.c)
 *     ?IsProviderPrimary@MPCHolographicInputManager@@QEBA_NPEBUIMPCInputProviderBase@@@Z @ 0x180076AB4 (-IsProviderPrimary@MPCHolographicInputManager@@QEBA_NPEBUIMPCInputProviderBase@@@Z.c)
 *     ?IsPrimary@MPCInputProviderBase@@UEBA_NXZ @ 0x1800839A0 (-IsPrimary@MPCInputProviderBase@@UEBA_NXZ.c)
 *     ?AreButtonsOrAxesActive@MPCSixDofProcessor@@AEAA_NPEAUInputInfo@@I@Z @ 0x18018CB54 (-AreButtonsOrAxesActive@MPCSixDofProcessor@@AEAA_NPEAUInputInfo@@I@Z.c)
 */

char __fastcall MPCSixDofProcessor::ShouldRequestPrimary(MPCSixDofProcessor *this, struct InputInfo *a2)
{
  struct MPCHolographicInputManager *Instance; // rdi
  const char *v5; // r9
  char v6; // bl

  Instance = MPCHolographicInputManager::GetInstance();
  v6 = 0;
  if ( MPCInputProviderBase::IsPrimary((unsigned __int64)this + 24) )
    return 0;
  if ( MPCSixDofProcessor::AreButtonsOrAxesActive(this, a2, 0, v5)
    || (*(unsigned int (__fastcall **)(_QWORD))(***((_QWORD ***)Instance + 322) + 48LL))(**((_QWORD **)Instance + 322)) == 0x2000
    || *((_DWORD *)a2 + 17) == 1
    && MPCHolographicInputManager::IsProviderPrimary(Instance, *((const struct IMPCInputProviderBase **)Instance + 293)) )
  {
    return 1;
  }
  return v6;
}
