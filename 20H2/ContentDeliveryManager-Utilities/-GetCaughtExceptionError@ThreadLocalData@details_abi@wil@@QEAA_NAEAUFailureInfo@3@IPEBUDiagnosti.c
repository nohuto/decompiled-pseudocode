/*
 * XREFs of ?GetCaughtExceptionError@ThreadLocalData@details_abi@wil@@QEAA_NAEAUFailureInfo@3@IPEBUDiagnosticsInfo@3@JPEAX@Z @ 0x180006B5C
 * Callers:
 *     ?GetCaughtExceptionError@ThreadErrorContext@wil@@QEAA_NAEAUFailureInfo@2@PEBUDiagnosticsInfo@2@J@Z @ 0x180006D84 (-GetCaughtExceptionError@ThreadErrorContext@wil@@QEAA_NAEAUFailureInfo@2@PEBUDiagnosticsInfo@2@J.c)
 * Callees:
 *     ?ResultFromCaughtException@wil@@YAJXZ @ 0x180004FD4 (-ResultFromCaughtException@wil@@YAJXZ.c)
 *     ?ReportFailure_CaughtExceptionCommon@details@wil@@YAJPEAXIPEBD110W4FailureType@2@PEAG_KW4SupportedExceptions@2@@Z @ 0x1800057BC (-ReportFailure_CaughtExceptionCommon@details@wil@@YAJPEAXIPEBD110W4FailureType@2@PEAG_KW4Support.c)
 *     ?GetLastError@ThreadLocalData@details_abi@wil@@QEAA_NAEAUFailureInfo@3@IJ@Z @ 0x180006A58 (-GetLastError@ThreadLocalData@details_abi@wil@@QEAA_NAEAUFailureInfo@3@IJ@Z.c)
 *     __security_check_cookie @ 0x1800CD280 (__security_check_cookie.c)
 *     memset_0 @ 0x1800CD9F1 (memset_0.c)
 *     _alloca_probe @ 0x1800CE6E0 (_alloca_probe.c)
 */

char __fastcall wil::details_abi::ThreadLocalData::GetCaughtExceptionError(
        wil::details_abi::ThreadLocalData *this,
        struct wil::FailureInfo *a2,
        unsigned int a3,
        const struct DiagnosticsInfo *a4)
{
  char v8; // di
  void *v9; // rdx
  wil *v10; // rcx
  unsigned int v11; // r8d
  int v12; // eax
  __int128 v13; // xmm1
  __int128 v14; // xmm0
  __int128 v15; // xmm1
  __int128 v16; // xmm0
  __int128 v17; // xmm1
  __int128 v18; // xmm0
  __int128 v19; // xmm1
  char result; // al
  unsigned __int16 v21; // ax
  int v22; // eax
  __int128 v23; // [rsp+50h] [rbp-B0h]
  _OWORD v24[9]; // [rsp+70h] [rbp-90h] BYREF
  __int16 v25; // [rsp+100h] [rbp+0h]

  memset_0(v24, 0, sizeof(v24));
  v8 = 0;
  if ( *((_QWORD *)this + 3)
    && wil::details_abi::ThreadLocalData::GetLastError(this, (struct wil::FailureInfo *)v24, a3, 0)
    && (v12 = wil::ResultFromCaughtException(v10, v9, v11), DWORD1(v24[0]) == v12) )
  {
    v13 = v24[1];
    *(_OWORD *)a2 = v24[0];
    v14 = v24[2];
    *((_OWORD *)a2 + 1) = v13;
    v15 = v24[3];
    *((_OWORD *)a2 + 2) = v14;
    v16 = v24[4];
    *((_OWORD *)a2 + 3) = v15;
    v17 = v24[5];
    *((_OWORD *)a2 + 4) = v16;
    v18 = v24[6];
    *((_OWORD *)a2 + 5) = v17;
    v19 = v24[8];
    *((_OWORD *)a2 + 6) = v18;
    result = 1;
    *((_OWORD *)a2 + 7) = v24[7];
    *((_OWORD *)a2 + 8) = v19;
  }
  else
  {
    v21 = 0;
    v23 = 0LL;
    if ( a4 )
    {
      v21 = (unsigned __int16)a4[3];
      v23 = *(_OWORD *)&a4->cost;
    }
    v25 = 0;
    v22 = wil::details::ReportFailure_CaughtExceptionCommon(v23, v21, *((__int64 *)&v23 + 1));
    if ( *((_QWORD *)this + 3) )
      return wil::details_abi::ThreadLocalData::GetLastError(this, a2, a3, v22);
    return v8;
  }
  return result;
}
