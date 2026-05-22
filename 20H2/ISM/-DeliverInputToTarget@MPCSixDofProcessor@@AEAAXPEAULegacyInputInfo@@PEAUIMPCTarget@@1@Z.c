/*
 * XREFs of ?DeliverInputToTarget@MPCSixDofProcessor@@AEAAXPEAULegacyInputInfo@@PEAUIMPCTarget@@1@Z @ 0x18018C7D8
 * Callers:
 *     ?Process3DInput@MPCSixDofProcessor@@UEAAJPEAUInputInfo@@@Z @ 0x18018E080 (-Process3DInput@MPCSixDofProcessor@@UEAAJPEAUInputInfo@@@Z.c)
 * Callees:
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x18003E194 (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18004A660 (_guard_dispatch_icall_nop.c)
 *     ?ProcessSourceDetectedAndLost@MPCInputProviderBase@@IEAAXPEAUIMPCTarget@@0PEA_NI@Z @ 0x1800846D4 (-ProcessSourceDetectedAndLost@MPCInputProviderBase@@IEAAXPEAUIMPCTarget@@0PEA_NI@Z.c)
 *     ?SendInputToPostProcessor@MPCInputProviderBase@@IEAAXPEAUInputInfo@@@Z @ 0x180084860 (-SendInputToPostProcessor@MPCInputProviderBase@@IEAAXPEAUInputInfo@@@Z.c)
 *     ?TreatTouchpadPressAsInteraction@MPCSixDofProcessor@@AEAAXPEAUInputInfo@@@Z @ 0x18018F158 (-TreatTouchpadPressAsInteraction@MPCSixDofProcessor@@AEAAXPEAUInputInfo@@@Z.c)
 */

void __fastcall MPCSixDofProcessor::DeliverInputToTarget(
        MPCSixDofProcessor *this,
        struct LegacyInputInfo *a2,
        struct IMPCTarget *a3,
        struct IMPCTarget *a4)
{
  int v8; // eax
  const char *v9; // r9
  signed int v10; // [rsp+20h] [rbp-18h]
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  bool v12; // [rsp+48h] [rbp+10h] BYREF

  if ( a4 && !(*(unsigned __int8 (__fastcall **)(struct IMPCTarget *))(*(_QWORD *)a4 + 32LL))(a4) )
    MPCSixDofProcessor::TreatTouchpadPressAsInteraction(this, a2);
  MPCInputProviderBase::SendInputToPostProcessor(this, a2);
  v12 = 0;
  MPCInputProviderBase::ProcessSourceDetectedAndLost(this, a3, a4, &v12, v10);
  if ( a4 && !v12 && ((*((_DWORD *)a2 + 17) - 1) & 0xFFFFFFFB) != 0 )
  {
    v8 = (*(__int64 (__fastcall **)(struct IMPCTarget *, struct LegacyInputInfo *))(*(_QWORD *)a4 + 24LL))(a4, a2);
    if ( v8 == -2147417853 )
    {
      *((_BYTE *)this + 4536) = 0;
    }
    else if ( (int)(v8 + 0x80000000) >= 0 && v8 != -2147417828 )
    {
      wil::details::in1diag3::_FailFast_Unexpected(
        retaddr,
        611LL,
        (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\mpc\\lib\\mpcsixdofprocessor.cpp",
        v9);
      JUMPOUT(0x18018C8BBLL);
    }
  }
}
