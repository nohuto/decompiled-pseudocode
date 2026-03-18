/*
 * XREFs of PiCMSetDeviceProblem @ 0x14095618C
 * Callers:
 *     PiCMHandleIoctl @ 0x14077BCA0 (PiCMHandleIoctl.c)
 * Callees:
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     memset @ 0x140435E00 (memset.c)
 *     PiCMSetProblem @ 0x14065F700 (PiCMSetProblem.c)
 *     PiAuDoesClientHavePrivilege @ 0x14065FC74 (PiAuDoesClientHavePrivilege.c)
 *     _CmValidateDeviceName @ 0x14077FAC0 (_CmValidateDeviceName.c)
 *     PiCMReturnBasicResultData @ 0x14078A584 (PiCMReturnBasicResultData.c)
 *     PiAuDoesClientHaveAccess @ 0x14078A600 (PiAuDoesClientHaveAccess.c)
 *     PiCMCaptureProblemInputData @ 0x140954024 (PiCMCaptureProblemInputData.c)
 */

__int64 __fastcall PiCMSetDeviceProblem(
        _OWORD *a1,
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
  int v14; // ebx
  _OWORD v15[26]; // [rsp+30h] [rbp-1E8h] BYREF

  memset(v15, 0, sizeof(v15));
  *a6 = 0;
  result = PiCMCaptureProblemInputData(a1, a2, v10, v15);
  if ( (int)result >= 0 )
  {
    if ( PiAuDoesClientHaveAccess(4u) && PiAuDoesClientHavePrivilege(0xAu) )
    {
      if ( WORD4(v15[0]) && a3 && a4 >= 8 && (v14 = DWORD1(v15[0]), (unsigned int)(DWORD1(v15[0]) - 1) <= 1) )
      {
        v13 = CmValidateDeviceName(v12, (const wchar_t *)v15 + 4);
        if ( v13 >= 0 )
          v13 = PiCMSetProblem((PCWSTR)v15 + 4, SDWORD2(v15[25]), v14);
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
    return PiCMReturnBasicResultData(v13, SHIDWORD(v15[25]), a3, a4, a6);
  }
  return result;
}
