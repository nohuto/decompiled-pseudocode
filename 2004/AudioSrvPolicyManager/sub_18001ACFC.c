/*
 * XREFs of sub_18001ACFC @ 0x18001ACFC
 * Callers:
 *     sub_18001B7E4 @ 0x18001B7E4 (sub_18001B7E4.c)
 * Callees:
 *     sub_1800050FC @ 0x1800050FC (sub_1800050FC.c)
 *     sub_180005724 @ 0x180005724 (sub_180005724.c)
 *     sub_180018844 @ 0x180018844 (sub_180018844.c)
 *     sub_180036BEC @ 0x180036BEC (sub_180036BEC.c)
 */

__int64 __fastcall sub_18001ACFC(HANDLE ProcessHandle, _QWORD *a2, _QWORD *a3)
{
  void *v3; // rdi
  void *v4; // r14
  __int64 *v5; // rsi
  int v9; // eax
  signed int LastError; // eax
  int v11; // ebx
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // rdx
  __int64 v15; // rcx
  void *v16; // rax
  PULONG ReturnLength; // [rsp+20h] [rbp-20h]
  PULONG ReturnLengtha; // [rsp+20h] [rbp-20h]
  _QWORD v20[2]; // [rsp+30h] [rbp-10h] BYREF
  ULONG ProcessInformationLength; // [rsp+80h] [rbp+40h] BYREF
  void *v22; // [rsp+98h] [rbp+58h] BYREF

  v3 = 0LL;
  v4 = 0LL;
  v5 = 0LL;
  v20[0] = 0LL;
  v22 = 0LL;
  if ( !ProcessHandle )
    goto LABEL_11;
  v9 = NtQueryInformationProcess(ProcessHandle, ProcessImageFileName, 0LL, 0, &ProcessInformationLength);
  if ( (int)(v9 + 0x80000000) >= 0 && v9 != -1073741820 )
    goto LABEL_4;
  v5 = (__int64 *)LocalAlloc(0x40u, ProcessInformationLength);
  v11 = v5 == 0LL ? 0x8007000E : 0;
  if ( !v5 )
    goto LABEL_19;
  v9 = NtQueryInformationProcess(
         ProcessHandle,
         ProcessImageFileName,
         v5,
         ProcessInformationLength,
         &ProcessInformationLength);
  if ( v9 < 0 )
  {
LABEL_4:
    RtlSetLastWin32ErrorAndNtStatusFromNtStatus(v9);
    LastError = GetLastError();
    v11 = (unsigned __int16)LastError | 0x80070000;
    if ( LastError <= 0 )
      v11 = LastError;
    goto LABEL_19;
  }
  v11 = sub_180018844(
          v13,
          v12,
          v5[1],
          (unsigned __int64)*((unsigned __int16 *)v5 + 1) >> 1,
          (__int64)ReturnLengtha,
          v20);
  if ( v11 < 0 )
    goto LABEL_18;
  v3 = (void *)v20[0];
  if ( !v20[0] )
  {
LABEL_11:
    v11 = sub_180018844((__int64)ProcessHandle, (__int64)a2, (__int64)&unk_1800428B8, 0LL, (__int64)ReturnLength, v20);
    if ( v11 >= 0 )
    {
      v3 = (void *)v20[0];
      goto LABEL_13;
    }
LABEL_18:
    v3 = (void *)v20[0];
    goto LABEL_19;
  }
LABEL_13:
  sub_180036BEC(ProcessHandle);
  v16 = v22;
  if ( v22 )
  {
LABEL_16:
    *a2 = v3;
    v3 = 0LL;
    *a3 = v16;
    goto LABEL_19;
  }
  v11 = sub_180018844(v15, v14, (__int64)&unk_1800428B8, 0LL, (__int64)ReturnLength, &v22);
  if ( v11 >= 0 )
  {
    v16 = v22;
    goto LABEL_16;
  }
  v4 = v22;
LABEL_19:
  CoTaskMemFree(v3);
  CoTaskMemFree(v4);
  LocalFree(v5);
  if ( v11 < 0 )
  {
    if ( off_18004F000 != (_UNKNOWN *)&off_18004F000
      && (*((_BYTE *)off_18004F000 + 28) & 0x40) != 0
      && *((_BYTE *)off_18004F000 + 25) >= 2u )
    {
      sub_1800050FC(*((_QWORD *)off_18004F000 + 2), 0xAu, &stru_1800445C8, v11);
    }
    sub_180005724("GetProcessModuleNameAndAppId", 356, v11);
  }
  return (unsigned int)v11;
}
