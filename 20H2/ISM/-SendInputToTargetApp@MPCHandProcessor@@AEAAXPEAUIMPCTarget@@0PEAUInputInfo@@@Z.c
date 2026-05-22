/*
 * XREFs of ?SendInputToTargetApp@MPCHandProcessor@@AEAAXPEAUIMPCTarget@@0PEAUInputInfo@@@Z @ 0x18007EE28
 * Callers:
 *     ?Process3DInput@MPCHandProcessor@@UEAAJPEAUInputInfo@@@Z @ 0x18007EA80 (-Process3DInput@MPCHandProcessor@@UEAAJPEAUInputInfo@@@Z.c)
 * Callees:
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18003FA98 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18004A660 (_guard_dispatch_icall_nop.c)
 *     ?ProcessSourceDetectedAndLost@MPCInputProviderBase@@IEAAXPEAUIMPCTarget@@0PEA_NI@Z @ 0x1800846D4 (-ProcessSourceDetectedAndLost@MPCInputProviderBase@@IEAAXPEAUIMPCTarget@@0PEA_NI@Z.c)
 */

void __fastcall MPCHandProcessor::SendInputToTargetApp(
        MPCHandProcessor *this,
        struct IMPCTarget *a2,
        struct IMPCTarget *a3,
        struct InputInfo *a4)
{
  int v4; // eax
  bool v8; // cl
  bool v9; // al
  int v10; // eax
  unsigned int v11; // [rsp+20h] [rbp-18h]
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  bool v13; // [rsp+50h] [rbp+18h] BYREF

  if ( a3 )
  {
    v4 = *((_DWORD *)a4 + 16);
    v8 = v4 == 5 && *((_BYTE *)this + 4536) || v4 == 4 && !*((_BYTE *)this + 4536);
    v13 = v8;
    if ( !v8 )
    {
      MPCInputProviderBase::ProcessSourceDetectedAndLost(this, a2, a3, &v13, v11);
      v4 = *((_DWORD *)a4 + 16);
      v8 = v13;
    }
    v9 = v8 || (unsigned int)(v4 - 4) <= 1;
    if ( *((_BYTE *)this + 4536) && !v9 )
    {
      v10 = (*(__int64 (__fastcall **)(struct IMPCTarget *, struct InputInfo *))(*(_QWORD *)a3 + 24LL))(a3, a4);
      if ( v10 == -2147417853 )
      {
        *((_BYTE *)this + 4536) = 0;
      }
      else if ( v10 < 0 )
      {
        wil::details::in1diag3::_Log_Hr(
          retaddr,
          563LL,
          (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\mpc\\lib\\mpchandprocessor.cpp",
          (const char *)(unsigned int)v10);
      }
    }
  }
}
