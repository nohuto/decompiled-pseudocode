/*
 * XREFs of PiCMSetDeviceProblem @ 0x14071ADDC
 * Callers:
 *     PiCMHandleIoctl @ 0x1406A67D0 (PiCMHandleIoctl.c)
 * Callees:
 *     __security_check_cookie @ 0x1403CC020 (__security_check_cookie.c)
 *     memset @ 0x140408F80 (memset.c)
 *     _CmValidateDeviceName @ 0x140618100 (_CmValidateDeviceName.c)
 *     PiCMReturnBasicResultData @ 0x1406B2284 (PiCMReturnBasicResultData.c)
 *     PiAuDoesClientHaveAccess @ 0x1406B2B20 (PiAuDoesClientHaveAccess.c)
 *     PiAuDoesClientHavePrivilege @ 0x14071B518 (PiAuDoesClientHavePrivilege.c)
 *     PiCMSetProblem @ 0x14071B814 (PiCMSetProblem.c)
 *     PiCMCaptureProblemInputData @ 0x14071B8FC (PiCMCaptureProblemInputData.c)
 */

__int64 __fastcall PiCMSetDeviceProblem(
        __int64 a1,
        unsigned int a2,
        _QWORD *a3,
        unsigned int a4,
        __int64 a5,
        _DWORD *a6)
{
  __int64 v10; // r8
  __int64 result; // rax
  __int64 v12; // rcx
  int v13; // eax
  _DWORD v14[104]; // [rsp+30h] [rbp-1E8h] BYREF

  memset(v14, 0, sizeof(v14));
  *a6 = 0;
  result = PiCMCaptureProblemInputData(a1, a2, v10, v14);
  if ( (int)result >= 0 )
  {
    if ( PiAuDoesClientHaveAccess(4u) && (unsigned __int8)PiAuDoesClientHavePrivilege(10LL) )
    {
      if ( LOWORD(v14[2]) && a3 && a4 >= 8 && (unsigned int)(v14[1] - 1) <= 1 )
      {
        v13 = CmValidateDeviceName(v12, (const wchar_t *)&v14[2]);
        if ( v13 >= 0 )
          v13 = PiCMSetProblem((PCWSTR)&v14[2]);
      }
      else
      {
        v13 = -1073741811;
      }
    }
    else
    {
      v13 = -1073741790;
    }
    return PiCMReturnBasicResultData(v13, v14[103], a3, a4, a6);
  }
  return result;
}
