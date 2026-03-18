/*
 * XREFs of KeSetPagePrivilege @ 0x14050DA08
 * Callers:
 *     MiInsertPageInFreeOrZeroedList @ 0x14023E080 (MiInsertPageInFreeOrZeroedList.c)
 *     MiAllocateWsle @ 0x1402A3CA0 (MiAllocateWsle.c)
 *     MiCopyPage @ 0x1402B4680 (MiCopyPage.c)
 *     MiClearPfnImageVerified @ 0x1402F7658 (MiClearPfnImageVerified.c)
 *     MiMarkPfnVerified @ 0x14034461C (MiMarkPfnVerified.c)
 *     MiDeletePerSessionProtos @ 0x14035CCDC (MiDeletePerSessionProtos.c)
 *     MiLockDriverPageRange @ 0x140528534 (MiLockDriverPageRange.c)
 *     MiDbgWriteCheck @ 0x1405411EC (MiDbgWriteCheck.c)
 *     ExpRevokeBootLoaderPagePrivileges @ 0x140A897E4 (ExpRevokeBootLoaderPagePrivileges.c)
 * Callees:
 *     VslpEnterIumSecureMode @ 0x1402E56B0 (VslpEnterIumSecureMode.c)
 *     __security_check_cookie @ 0x1403CCE60 (__security_check_cookie.c)
 *     memset @ 0x14040A280 (memset.c)
 *     VslMakeProtectedPageExecutable @ 0x1404F7A08 (VslMakeProtectedPageExecutable.c)
 *     VslMakeProtectedPageWritable @ 0x1404F7AA4 (VslMakeProtectedPageWritable.c)
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
