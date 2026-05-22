/*
 * XREFs of ?ClearInputTargets@MPCInputProviderBase@@IEAAXXZ @ 0x1800408E4
 * Callers:
 *     ?Uninitialize3DComponents@MPCInputProviderBase@@UEAAXXZ @ 0x1800409D0 (-Uninitialize3DComponents@MPCInputProviderBase@@UEAAXXZ.c)
 *     ?OnDeviceRemoval@MPCHandProcessor@@UEAAJPEAUDeviceInfo@@@Z @ 0x18007E0C0 (-OnDeviceRemoval@MPCHandProcessor@@UEAAJPEAUDeviceInfo@@@Z.c)
 *     ?OnDeviceRemoval@MPCSixDofProcessor@@UEAAJPEAUDeviceInfo@@@Z @ 0x18018D840 (-OnDeviceRemoval@MPCSixDofProcessor@@UEAAJPEAUDeviceInfo@@@Z.c)
 * Callees:
 *     ?GetInstance@MPCHolographicInputManager@@SAPEAV1@XZ @ 0x180011CD0 (-GetInstance@MPCHolographicInputManager@@SAPEAV1@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x18004A660 (_guard_dispatch_icall_nop.c)
 *     ?ProcessSourceDetectedAndLost@MPCInputProviderBase@@IEAAXPEAUIMPCTarget@@0PEA_NI@Z @ 0x1800846D4 (-ProcessSourceDetectedAndLost@MPCInputProviderBase@@IEAAXPEAUIMPCTarget@@0PEA_NI@Z.c)
 */

void __fastcall MPCInputProviderBase::ClearInputTargets(MPCInputProviderBase *this)
{
  struct IMPCTarget *v2; // rax
  struct MPCHolographicInputManager *Instance; // rax
  __int64 v4; // rdx
  __int64 v5; // rsi
  unsigned int v6; // [rsp+20h] [rbp-18h]

  if ( *((_BYTE *)this + 4536) )
  {
    v2 = (struct IMPCTarget *)(*(__int64 (__fastcall **)(char *))(*((_QWORD *)this + 3) + 232LL))((char *)this + 24);
    MPCInputProviderBase::ProcessSourceDetectedAndLost(this, v2, 0LL, 0LL, v6);
  }
  if ( *((_BYTE *)this + 4538) )
  {
    Instance = MPCHolographicInputManager::GetInstance();
    v5 = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)Instance + 287) + 48LL))(*((_QWORD *)Instance + 287));
    if ( v5 )
    {
      LOBYTE(v4) = 1;
      (*(void (__fastcall **)(MPCInputProviderBase *, __int64, _QWORD, char *))(*(_QWORD *)this + 80LL))(
        this,
        v4,
        0LL,
        (char *)this + 472);
      *((_BYTE *)this + 2498) = 0;
      (*(void (__fastcall **)(__int64, char *))(*(_QWORD *)v5 + 24LL))(v5, (char *)this + 472);
    }
    *((_BYTE *)this + 4538) = 0;
  }
  (*(void (__fastcall **)(char *, _QWORD))(*((_QWORD *)this + 3) + 208LL))((char *)this + 24, 0LL);
}
