/*
 * XREFs of ?GetProcessModuleNameAndAppId@@YAJPEAXPEAPEAG1@Z @ 0x18001ACFC
 * Callers:
 *     ?RpcGetProcess@CApplicationManager@@QEAAJPEAXPEAPEAVCProcess@@@Z @ 0x18001B7E4 (-RpcGetProcess@CApplicationManager@@QEAAJPEAXPEAPEAVCProcess@@@Z.c)
 * Callees:
 *     WPP_SF_d @ 0x1800050FC (WPP_SF_d.c)
 *     ?AudPolicyLogError@@YAXPEBDHJ@Z @ 0x180005724 (-AudPolicyLogError@@YAXPEBDHJ@Z.c)
 *     ??$_AllocStringWorker@VCTCoAllocPolicy@@@@YAJPEAXKPEBG_K2PEAPEAG@Z @ 0x180018844 (--$_AllocStringWorker@VCTCoAllocPolicy@@@@YAJPEAXKPEBG_K2PEAPEAG@Z.c)
 *     ?GetProcessAppId@CallerIdentity@@YAJPEAXPEAPEAG@Z @ 0x180036BEC (-GetProcessAppId@CallerIdentity@@YAJPEAXPEAPEAG@Z.c)
 */

__int64 __fastcall GetProcessModuleNameAndAppId(HANDLE ProcessHandle, unsigned __int16 **a2, unsigned __int16 **a3)
{
  unsigned __int16 *v3; // rdi
  unsigned __int16 *v4; // r14
  const unsigned __int16 **v5; // rsi
  int v9; // eax
  signed int LastError; // eax
  int v11; // ebx
  __int64 v12; // rdx
  __int64 v13; // rcx
  unsigned __int16 **v14; // r8
  __int64 v15; // rdx
  __int64 v16; // rcx
  unsigned __int16 *v17; // rax
  PULONG ReturnLength; // [rsp+20h] [rbp-20h]
  PULONG ReturnLengtha; // [rsp+20h] [rbp-20h]
  unsigned __int16 *v21[2]; // [rsp+30h] [rbp-10h] BYREF
  ULONG ProcessInformationLength; // [rsp+80h] [rbp+40h] BYREF
  unsigned __int16 *v23; // [rsp+98h] [rbp+58h] BYREF

  v3 = 0LL;
  v4 = 0LL;
  v5 = 0LL;
  v21[0] = 0LL;
  v23 = 0LL;
  if ( !ProcessHandle )
    goto LABEL_11;
  v9 = NtQueryInformationProcess(ProcessHandle, ProcessImageFileName, 0LL, 0, &ProcessInformationLength);
  if ( (int)(v9 + 0x80000000) >= 0 && v9 != -1073741820 )
    goto LABEL_4;
  v5 = (const unsigned __int16 **)LocalAlloc(0x40u, ProcessInformationLength);
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
  v11 = _AllocStringWorker<CTCoAllocPolicy>(
          v13,
          v12,
          v5[1],
          (unsigned __int64)*((unsigned __int16 *)v5 + 1) >> 1,
          (__int64)ReturnLengtha,
          v21);
  if ( v11 < 0 )
    goto LABEL_18;
  v3 = v21[0];
  if ( !v21[0] )
  {
LABEL_11:
    v11 = _AllocStringWorker<CTCoAllocPolicy>(
            (__int64)ProcessHandle,
            (__int64)a2,
            word_1800428B8,
            0LL,
            (__int64)ReturnLength,
            v21);
    if ( v11 >= 0 )
    {
      v3 = v21[0];
      goto LABEL_13;
    }
LABEL_18:
    v3 = v21[0];
    goto LABEL_19;
  }
LABEL_13:
  CallerIdentity::GetProcessAppId(ProcessHandle, &v23, v14);
  v17 = v23;
  if ( v23 )
  {
LABEL_16:
    *a2 = v3;
    v3 = 0LL;
    *a3 = v17;
    goto LABEL_19;
  }
  v11 = _AllocStringWorker<CTCoAllocPolicy>(v16, v15, word_1800428B8, 0LL, (__int64)ReturnLength, &v23);
  if ( v11 >= 0 )
  {
    v17 = v23;
    goto LABEL_16;
  }
  v4 = v23;
LABEL_19:
  CoTaskMemFree(v3);
  CoTaskMemFree(v4);
  LocalFree(v5);
  if ( v11 < 0 )
  {
    if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
      && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x40) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 2u )
    {
      WPP_SF_d(*((_QWORD *)WPP_GLOBAL_Control + 2), 0xAu, &WPP_386a857d2e283c5fe15986819513c374_Traceguids, v11);
    }
    AudPolicyLogError("GetProcessModuleNameAndAppId", 356, v11);
  }
  return (unsigned int)v11;
}
