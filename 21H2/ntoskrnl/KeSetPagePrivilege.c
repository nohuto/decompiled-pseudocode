/*
 * XREFs of KeSetPagePrivilege @ 0x14039FDB0
 * Callers:
 *     MiClearPfnImageVerified @ 0x14023CC50 (MiClearPfnImageVerified.c)
 *     MiDeletePerSessionProtos @ 0x14025592C (MiDeletePerSessionProtos.c)
 *     MiMarkPfnVerified @ 0x14026C644 (MiMarkPfnVerified.c)
 *     MiInsertPageInFreeOrZeroedList @ 0x1402C6EB0 (MiInsertPageInFreeOrZeroedList.c)
 *     MiCopyPage @ 0x1402E7D60 (MiCopyPage.c)
 *     MiAllocateWsle @ 0x140322F10 (MiAllocateWsle.c)
 *     MiDbgWriteCheck @ 0x1403AD16C (MiDbgWriteCheck.c)
 *     MiLockDriverPageRange @ 0x140581D58 (MiLockDriverPageRange.c)
 *     MiProtectDriverSectionPte @ 0x140582320 (MiProtectDriverSectionPte.c)
 *     ExpRevokeBootLoaderPagePrivileges @ 0x140B4B89C (ExpRevokeBootLoaderPagePrivileges.c)
 * Callees:
 *     VslpEnterIumSecureMode @ 0x140358A20 (VslpEnterIumSecureMode.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     memset @ 0x140435E00 (memset.c)
 *     VslMakeProtectedPageExecutable @ 0x14054EBEC (VslMakeProtectedPageExecutable.c)
 *     VslMakeProtectedPageWritable @ 0x14054EC88 (VslMakeProtectedPageWritable.c)
 */

__int64 __fastcall KeSetPagePrivilege(__int64 a1, __int128 *a2, __int16 a3)
{
  char v3; // bl
  __int16 v6; // dx
  __int128 v7; // xmm0
  __int64 result; // rax
  _OWORD v9[7]; // [rsp+20h] [rbp-39h] BYREF

  v3 = a3;
  if ( (a3 & 0x100) != 0 )
  {
    memset(v9, 0, 0x68uLL);
    v6 = 245;
    goto LABEL_4;
  }
  if ( (a3 & 0x400) != 0 )
  {
    memset(v9, 0, 0x68uLL);
    v6 = 246;
LABEL_4:
    v7 = *a2;
    *((_QWORD *)&v9[0] + 1) = a1;
    v9[1] = v7;
    return VslpEnterIumSecureMode(2u, v6, 0, (__int64)v9);
  }
  if ( (a3 & 6) == 0 )
  {
    memset(v9, 0, 0x68uLL);
    v6 = 243;
    goto LABEL_4;
  }
  result = 0LL;
  if ( (a3 & 2) == 0 || (result = VslMakeProtectedPageExecutable(a1, a2, a3 & 0x800), (int)result >= 0) )
  {
    if ( (v3 & 4) != 0 )
      return VslMakeProtectedPageWritable(a1, a2);
  }
  return result;
}
