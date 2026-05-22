/*
 * XREFs of ?SendInputToPostProcessor@MPCInputProviderBase@@IEAAXPEAUInputInfo@@@Z @ 0x180084DB0
 * Callers:
 *     ?Process3DInput@MPCHandProcessor@@UEAAJPEAUInputInfo@@@Z @ 0x18007EFD0 (-Process3DInput@MPCHandProcessor@@UEAAJPEAUInputInfo@@@Z.c)
 *     ?DeliverInputToTarget@MPCSixDofProcessor@@AEAAXPEAULegacyInputInfo@@PEAUIMPCTarget@@1@Z @ 0x18018CD28 (-DeliverInputToTarget@MPCSixDofProcessor@@AEAAXPEAULegacyInputInfo@@PEAUIMPCTarget@@1@Z.c)
 *     ?Process3DInput@MPCClickerProcessor@@UEAAJPEAUInputInfo@@@Z @ 0x180198C40 (-Process3DInput@MPCClickerProcessor@@UEAAJPEAUInputInfo@@@Z.c)
 * Callees:
 *     ?GetInstance@MPCHolographicInputManager@@SAPEAV1@XZ @ 0x180011C98 (-GetInstance@MPCHolographicInputManager@@SAPEAV1@XZ.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18003FAC8 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18004ACA0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall MPCInputProviderBase::SendInputToPostProcessor(MPCInputProviderBase *this, struct InputInfo *a2)
{
  struct MPCHolographicInputManager *Instance; // rax
  __int64 v5; // r14
  int v6; // eax
  int v7; // eax
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  Instance = MPCHolographicInputManager::GetInstance();
  v5 = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)Instance + 287) + 48LL))(*((_QWORD *)Instance + 287));
  if ( v5 )
  {
    if ( !*((_BYTE *)this + 4538) )
    {
      (*(void (__fastcall **)(MPCInputProviderBase *, _QWORD, _QWORD, char *))(*(_QWORD *)this + 80LL))(
        this,
        0LL,
        0LL,
        (char *)this + 472);
      *((_BYTE *)this + 2498) = 0;
      v6 = (*(__int64 (__fastcall **)(__int64, char *))(*(_QWORD *)v5 + 24LL))(v5, (char *)this + 472);
      if ( v6 < 0 )
      {
        if ( v6 != -2147417853 )
          wil::details::in1diag3::_Log_Hr(
            retaddr,
            409LL,
            (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\mpc\\lib\\mpcinputproviderbase.cpp",
            (const char *)(unsigned int)v6);
      }
      else
      {
        *((_BYTE *)this + 4538) = 1;
      }
    }
    if ( !(*(unsigned __int8 (__fastcall **)(MPCInputProviderBase *, struct InputInfo *))(*(_QWORD *)this + 88LL))(
            this,
            a2) )
    {
      if ( *((_BYTE *)this + 4538) )
      {
        if ( *((_BYTE *)this + 4540) )
        {
          v7 = (*(__int64 (__fastcall **)(__int64, struct InputInfo *))(*(_QWORD *)v5 + 24LL))(v5, a2);
          if ( v7 < 0 )
          {
            *((_BYTE *)this + 4538) = 0;
            if ( v7 != -2147417853 )
              wil::details::in1diag3::_Log_Hr(
                retaddr,
                423LL,
                (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\mpc\\lib\\mpcinputproviderbase.cpp",
                (const char *)(unsigned int)v7);
          }
        }
      }
    }
  }
  *((_BYTE *)a2 + 2026) = 1;
}
