/*
 * XREFs of ?Serialize@SerializedFailure@details_abi@wil@@SA_NAEBUFEATURE_ERROR@@PEA_KPEAX_K@Z @ 0x18000A780
 * Callers:
 *     ?RecordFeatureError@FeatureStateData@details_abi@wil@@QEAA_NIAEBUFEATURE_ERROR@@@Z @ 0x18000B2E0 (-RecordFeatureError@FeatureStateData@details_abi@wil@@QEAA_NIAEBUFEATURE_ERROR@@@Z.c)
 * Callees:
 *     ??R_lambda_057488ec2a114cea6fb77af5c8c7453a_@@QEBAXPEBDAEAGG@Z @ 0x18000A954 (--R_lambda_057488ec2a114cea6fb77af5c8c7453a_@@QEBAXPEBDAEAGG@Z.c)
 *     __security_check_cookie @ 0x1800CD6D0 (__security_check_cookie.c)
 */

bool __fastcall wil::details_abi::SerializedFailure::Serialize(
        const struct FEATURE_ERROR *a1,
        unsigned __int64 *a2,
        char *a3,
        unsigned __int64 a4)
{
  char *v5; // rbx
  PCSTR file; // rdx
  PCSTR process; // rdx
  PCSTR module; // rdx
  PCSTR callerModule; // rdx
  PCSTR message; // rdx
  PCSTR originFile; // rdx
  PCSTR v13; // rdx
  PCSTR originModule; // rdx
  PCSTR originCallerModule; // rdx
  PCSTR originName; // rdx
  char *v18; // [rsp+20h] [rbp-49h] BYREF
  unsigned __int64 v19; // [rsp+28h] [rbp-41h] BYREF
  _QWORD v20[5]; // [rsp+30h] [rbp-39h] BYREF
  char *v21; // [rsp+58h] [rbp-11h] BYREF
  char *v22; // [rsp+60h] [rbp-9h] BYREF
  char v23; // [rsp+68h] [rbp-1h] BYREF

  v19 = a4;
  v21 = a3;
  v18 = a3;
  *a2 = 36LL;
  v5 = &v23;
  v22 = &a3[a4];
  if ( a4 >= 0x24 )
    v5 = a3;
  if ( a4 >= 0x24 )
  {
    *(_OWORD *)v5 = 0LL;
    *((_OWORD *)v5 + 1) = 0LL;
    *((_DWORD *)v5 + 8) = 0;
    *(_DWORD *)v5 = a1->hr;
    *((_WORD *)v5 + 2) = a1->lineNumber;
    *((_DWORD *)v5 + 3) = a1->callerReturnAddressOffset;
    *((_WORD *)v5 + 9) = a1->originLineNumber;
    *((_DWORD *)v5 + 6) = a1->originCallerReturnAddressOffset;
    v18 += 36;
  }
  file = a1->file;
  v20[0] = &v21;
  v20[2] = &v19;
  v20[3] = &v18;
  v20[4] = &v22;
  v20[1] = a2;
  if ( file )
    _lambda_057488ec2a114cea6fb77af5c8c7453a_::operator()(v20, file, v5 + 6, 0LL);
  process = a1->process;
  if ( process )
    _lambda_057488ec2a114cea6fb77af5c8c7453a_::operator()(v20, process, v5 + 32, 0LL);
  module = a1->module;
  if ( module )
    _lambda_057488ec2a114cea6fb77af5c8c7453a_::operator()(v20, module, v5 + 8, *((unsigned __int16 *)v5 + 16));
  callerModule = a1->callerModule;
  if ( callerModule )
    _lambda_057488ec2a114cea6fb77af5c8c7453a_::operator()(v20, callerModule, v5 + 10, *((unsigned __int16 *)v5 + 4));
  message = a1->message;
  if ( message )
    _lambda_057488ec2a114cea6fb77af5c8c7453a_::operator()(v20, message, v5 + 16, 0LL);
  originFile = a1->originFile;
  if ( originFile )
    _lambda_057488ec2a114cea6fb77af5c8c7453a_::operator()(v20, originFile, v5 + 20, *((unsigned __int16 *)v5 + 3));
  v13 = a1->callerModule;
  if ( v13 )
    _lambda_057488ec2a114cea6fb77af5c8c7453a_::operator()(v20, v13, v5 + 10, *((unsigned __int16 *)v5 + 4));
  originModule = a1->originModule;
  if ( originModule )
    _lambda_057488ec2a114cea6fb77af5c8c7453a_::operator()(v20, originModule, v5 + 22, *((unsigned __int16 *)v5 + 4));
  originCallerModule = a1->originCallerModule;
  if ( originCallerModule )
    _lambda_057488ec2a114cea6fb77af5c8c7453a_::operator()(
      v20,
      originCallerModule,
      v5 + 28,
      *((unsigned __int16 *)v5 + 11));
  originName = a1->originName;
  if ( originName )
    _lambda_057488ec2a114cea6fb77af5c8c7453a_::operator()(v20, originName, v5 + 30, 0LL);
  return *a2 <= v19;
}
