/*
 * XREFs of _lambda_23c26f952cd19a1a8b0d89221ba81740_::operator() @ 0x18003EE64
 * Callers:
 *     _lambda_23c26f952cd19a1a8b0d89221ba81740_::_lambda_invoker_cdecl_ @ 0x18003EDD0 (_lambda_23c26f952cd19a1a8b0d89221ba81740_--_lambda_invoker_cdecl_.c)
 * Callees:
 *     ??0DropAndReacquireLock@BamoImpl@Microsoft@@QEAA@PEAVBaseBamoConnectionImpl@12@@Z @ 0x18000BE8C (--0DropAndReacquireLock@BamoImpl@Microsoft@@QEAA@PEAVBaseBamoConnectionImpl@12@@Z.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18003E44C (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18004A6B0 (_guard_dispatch_icall_nop.c)
 *     ??1DropAndReacquireLock@BamoImpl@Microsoft@@QEAA@XZ @ 0x18006DD48 (--1DropAndReacquireLock@BamoImpl@Microsoft@@QEAA@XZ.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall lambda_23c26f952cd19a1a8b0d89221ba81740_::operator()(
        __int64 a1,
        __int64 a2,
        __int64 (__fastcall *a3)(__int64, _QWORD, __int64, __int128 *, int *),
        unsigned int a4,
        __int64 a5,
        __int128 *a6,
        __int64 a7)
{
  int v10; // eax
  int v12[4]; // [rsp+30h] [rbp-48h] BYREF
  __int64 v13; // [rsp+40h] [rbp-38h]
  __int128 v14; // [rsp+50h] [rbp-28h] BYREF
  __int64 v15; // [rsp+60h] [rbp-18h]
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+0h]
  __int64 v17; // [rsp+80h] [rbp+8h] BYREF

  v17 = a1;
  Microsoft::BamoImpl::DropAndReacquireLock::DropAndReacquireLock(
    (Microsoft::BamoImpl::DropAndReacquireLock *)&v17,
    *(struct Microsoft::BamoImpl::BaseBamoConnectionImpl **)(*(_QWORD *)(*(_QWORD *)(a2 + 40) + 24LL) + 32LL));
  *(_OWORD *)v12 = *(_OWORD *)a7;
  v13 = *(_QWORD *)(a7 + 16);
  v14 = *a6;
  v15 = *((_QWORD *)a6 + 2);
  v10 = a3(a2 - 16, a4, a5, &v14, v12);
  if ( v10 < 0 )
  {
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      5919LL,
      (__int64)"onecoreuap\\windows\\moderncore\\Inputv2\\InputHost\\Components\\MPCManager\\bamo\\objfre\\amd64\\MPCMana"
               "gerBamo.MPCManagerBamo.bamo.h",
      (const char *)(unsigned int)v10);
    __debugbreak();
  }
  Microsoft::BamoImpl::DropAndReacquireLock::~DropAndReacquireLock((Microsoft::BamoImpl::DropAndReacquireLock *)&v17);
  return 0LL;
}
