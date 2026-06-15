/*
 * XREFs of ?GetCaughtExceptionError@ThreadLocalData@details_abi@wil@@QEAA_NAEAUFailureInfo@3@IPEBUDiagnosticsInfo@3@JPEAX@Z @ 0x1800B8CE4
 * Callers:
 *     ?GetCaughtExceptionError@ThreadErrorContext@wil@@QEAA_NAEAUFailureInfo@2@PEBUDiagnosticsInfo@2@J@Z @ 0x1800B8CB0 (-GetCaughtExceptionError@ThreadErrorContext@wil@@QEAA_NAEAUFailureInfo@2@PEBUDiagnosticsInfo@2@J.c)
 * Callees:
 *     __security_check_cookie @ 0x180069C20 (__security_check_cookie.c)
 *     memset_0 @ 0x18006AD3C (memset_0.c)
 *     _alloca_probe @ 0x1800740F0 (_alloca_probe.c)
 *     ?GetLastError@ThreadLocalData@details_abi@wil@@QEAA_NAEAUFailureInfo@3@IJ@Z @ 0x1800B8ED4 (-GetLastError@ThreadLocalData@details_abi@wil@@QEAA_NAEAUFailureInfo@3@IJ@Z.c)
 *     ?ReportFailure_CaughtExceptionCommon@details@wil@@YAJPEAXIPEBD110W4FailureType@2@PEAG_KW4SupportedExceptions@2@@Z @ 0x1800BA158 (-ReportFailure_CaughtExceptionCommon@details@wil@@YAJPEAXIPEBD110W4FailureType@2@PEAG_KW4Support.c)
 *     ?ResultFromCaughtException@wil@@YAJXZ @ 0x1800BA304 (-ResultFromCaughtException@wil@@YAJXZ.c)
 */

bool __fastcall wil::details_abi::ThreadLocalData::GetCaughtExceptionError(
        wil::details_abi::ThreadLocalData *this,
        struct wil::FailureInfo *a2,
        unsigned int a3,
        const struct DiagnosticsInfo *a4)
{
  wil *v8; // rcx
  int v9; // eax
  __int128 v10; // xmm1
  __int128 v11; // xmm0
  __int128 v12; // xmm1
  __int128 v13; // xmm0
  __int128 v14; // xmm1
  __int128 v15; // xmm0
  __int128 v16; // xmm1
  bool result; // al
  unsigned __int16 v18; // ax
  int v19; // eax
  __int128 v20; // [rsp+50h] [rbp-B0h]
  _OWORD v21[9]; // [rsp+70h] [rbp-90h] BYREF
  __int16 v22; // [rsp+100h] [rbp+0h]

  memset_0(v21, 0, sizeof(v21));
  if ( wil::details_abi::ThreadLocalData::GetLastError(this, (struct wil::FailureInfo *)v21, a3, 0)
    && (v9 = wil::ResultFromCaughtException(v8), DWORD1(v21[0]) == v9) )
  {
    v10 = v21[1];
    *(_OWORD *)a2 = v21[0];
    v11 = v21[2];
    *((_OWORD *)a2 + 1) = v10;
    v12 = v21[3];
    *((_OWORD *)a2 + 2) = v11;
    v13 = v21[4];
    *((_OWORD *)a2 + 3) = v12;
    v14 = v21[5];
    *((_OWORD *)a2 + 4) = v13;
    v15 = v21[6];
    *((_OWORD *)a2 + 5) = v14;
    v16 = v21[8];
    *((_OWORD *)a2 + 6) = v15;
    result = 1;
    *((_OWORD *)a2 + 7) = v21[7];
    *((_OWORD *)a2 + 8) = v16;
  }
  else
  {
    v18 = 0;
    v20 = 0LL;
    if ( a4 )
    {
      v18 = (unsigned __int16)a4[3];
      v20 = *(_OWORD *)&a4->cost;
    }
    v22 = 0;
    v19 = wil::details::ReportFailure_CaughtExceptionCommon(v20, v18, *((_QWORD *)&v20 + 1));
    return wil::details_abi::ThreadLocalData::GetLastError(this, a2, a3, v19);
  }
  return result;
}
