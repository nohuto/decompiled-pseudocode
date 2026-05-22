/*
 * XREFs of ?RuntimeClassInitialize@MPCGamepadProcessor@@QEAAJPEBUInputProcessorCreateParams@@@Z @ 0x18019401C
 * Callers:
 *     ??$MakeAndInitialize@VMPCGamepadProcessor@@UIInputProcessor@@AEAPEAUInputProcessorCreateParams@@@Details@WRL@Microsoft@@YAJPEAPEAUIInputProcessor@@AEAPEAUInputProcessorCreateParams@@@Z @ 0x180191970 (--$MakeAndInitialize@VMPCGamepadProcessor@@UIInputProcessor@@AEAPEAUInputProcessorCreateParams@@.c)
 * Callees:
 *     ?RuntimeClassInitialize@MPCInputProviderBase@@QEAAJPEBUInputProcessorCreateParams@@@Z @ 0x18001F9E0 (-RuntimeClassInitialize@MPCInputProviderBase@@QEAAJPEBUInputProcessorCreateParams@@@Z.c)
 *     ?CreateChildInputProcessor@@YAJW4InputType@@PEAUInputProcessorCreateParams@@PEAPEAUIInputProcessor@@@Z @ 0x1800283B0 (-CreateChildInputProcessor@@YAJW4InputType@@PEAUInputProcessorCreateParams@@PEAPEAUIInputProcess.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18003E3EC (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18004ACA0 (_guard_dispatch_icall_nop.c)
 *     std::call_once__lambda_c78139b4692b055c43ac45a1104373ed___ @ 0x180191B08 (std--call_once__lambda_c78139b4692b055c43ac45a1104373ed___.c)
 */

__int64 __fastcall MPCGamepadProcessor::RuntimeClassInitialize(
        MPCGamepadProcessor *this,
        const struct InputProcessorCreateParams *a2)
{
  unsigned __int64 v2; // rsi
  int v5; // eax
  __int64 v6; // rcx
  __int128 v7; // xmm0
  _QWORD *v8; // rdi
  __int64 v9; // rcx
  int ChildInputProcessor; // eax
  __int64 (__fastcall ***v11)(_QWORD, GUID *, char *); // rdi
  __int64 v12; // rcx
  __int64 (__fastcall *v13)(_QWORD, GUID *, char *); // rsi
  int v14; // eax
  int v16[4]; // [rsp+20h] [rbp-28h] BYREF
  __int64 v17; // [rsp+30h] [rbp-18h]
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]
  MPCGamepadProcessor *v19; // [rsp+50h] [rbp+8h] BYREF

  v2 = (unsigned __int64)this + 8;
  v5 = MPCInputProviderBase::RuntimeClassInitialize((MPCGamepadProcessor *)((char *)this + 8), a2);
  if ( v5 < 0 )
  {
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      31LL,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\mpc\\lib\\mpcgamepadprocessor.cpp",
      (const char *)(unsigned int)v5);
    __debugbreak();
  }
  v19 = this;
  std::call_once__lambda_c78139b4692b055c43ac45a1104373ed___(v6, (__int64)&v19);
  v7 = *(_OWORD *)a2;
  v8 = (_QWORD *)((char *)this + 4640);
  *(_OWORD *)v16 = v7;
  v17 = v2 & -(__int64)(this != 0LL);
  v9 = *((_QWORD *)this + 580);
  if ( v9 )
  {
    *v8 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v9 + 16LL))(v9);
  }
  ChildInputProcessor = CreateChildInputProcessor(64, (__int64)v16, (__int64)this + 4640);
  if ( ChildInputProcessor < 0 )
  {
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      41LL,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\mpc\\lib\\mpcgamepadprocessor.cpp",
      (const char *)(unsigned int)ChildInputProcessor);
    __debugbreak();
  }
  v11 = (__int64 (__fastcall ***)(_QWORD, GUID *, char *))*v8;
  v12 = *((_QWORD *)this + 581);
  v13 = **v11;
  if ( v12 )
  {
    *((_QWORD *)this + 581) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v12 + 16LL))(v12);
  }
  v14 = v13(v11, &GUID_5f803b2b_07e1_432d_a888_acfaad4b25d8, (char *)this + 4648);
  if ( v14 < 0 )
  {
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      45LL,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\mpc\\lib\\mpcgamepadprocessor.cpp",
      (const char *)(unsigned int)v14);
    __debugbreak();
  }
  return 0LL;
}
