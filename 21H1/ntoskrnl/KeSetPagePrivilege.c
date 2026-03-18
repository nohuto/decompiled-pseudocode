/*
 * XREFs of KeSetPagePrivilege @ 0x14050D3B8
 * Callers:
 *     MiAllocateWsle @ 0x140211190 (MiAllocateWsle.c)
 *     MiCopyPage @ 0x140221A00 (MiCopyPage.c)
 *     MiInsertPageInFreeOrZeroedList @ 0x1402970B0 (MiInsertPageInFreeOrZeroedList.c)
 *     MiMarkPfnVerified @ 0x140306818 (MiMarkPfnVerified.c)
 *     MiDeletePerSessionProtos @ 0x14031F1CC (MiDeletePerSessionProtos.c)
 *     MiClearPfnImageVerified @ 0x140353638 (MiClearPfnImageVerified.c)
 *     MiLockDriverPageRange @ 0x140527EE4 (MiLockDriverPageRange.c)
 *     MiDbgWriteCheck @ 0x140540B9C (MiDbgWriteCheck.c)
 *     ExpRevokeBootLoaderPagePrivileges @ 0x140A8A254 (ExpRevokeBootLoaderPagePrivileges.c)
 * Callees:
 *     VslpEnterIumSecureMode @ 0x14032A7E0 (VslpEnterIumSecureMode.c)
 *     __security_check_cookie @ 0x1403CC020 (__security_check_cookie.c)
 *     memset @ 0x140408F80 (memset.c)
 *     VslMakeProtectedPageExecutable @ 0x1404F73B8 (VslMakeProtectedPageExecutable.c)
 *     VslMakeProtectedPageWritable @ 0x1404F7454 (VslMakeProtectedPageWritable.c)
 */

int __fastcall KeSetPagePrivilege(__int64 a1, __int128 *a2, __int16 a3)
{
  char v3; // bl
  __int16 v6; // dx
  int result; // eax
  __int128 v8; // xmm0
  _OWORD v9[7]; // [rsp+20h] [rbp-39h] BYREF

  v3 = a3;
  if ( (a3 & 0x100) != 0 )
  {
    memset(v9, 0, 0x68uLL);
    v6 = 245;
LABEL_11:
    v8 = *a2;
    *((_QWORD *)&v9[0] + 1) = a1;
    v9[1] = v8;
    return VslpEnterIumSecureMode(2u, v6, 0, (__int64)v9);
  }
  if ( (a3 & 0x400) != 0 )
  {
    memset(v9, 0, 0x68uLL);
    v6 = 246;
    goto LABEL_11;
  }
  if ( (a3 & 6) == 0 )
  {
    memset(v9, 0, 0x68uLL);
    v6 = 243;
    goto LABEL_11;
  }
  result = 0;
  if ( (a3 & 2) == 0 || (result = VslMakeProtectedPageExecutable(a1, a2, a3 & 0x800), result >= 0) )
  {
    if ( (v3 & 4) != 0 )
      return VslMakeProtectedPageWritable(a1, a2);
  }
  return result;
}
