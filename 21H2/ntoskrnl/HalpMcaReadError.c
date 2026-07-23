/*
 * XREFs of HalpMcaReadError @ 0x1404BAA50
 * Callers:
 *     HalpCmcPollProcessor @ 0x1403A0C60 (HalpCmcPollProcessor.c)
 *     HalpMceHandlerCore @ 0x1404BB004 (HalpMceHandlerCore.c)
 *     HalpHandlePreviousMcaErrorsOnProcessor @ 0x1409A7D20 (HalpHandlePreviousMcaErrorsOnProcessor.c)
 * Callees:
 *     HalpGetMcaPcrContext @ 0x1403A0D18 (HalpGetMcaPcrContext.c)
 *     HalpWheaReadMsrStatus @ 0x1403A0F6C (HalpWheaReadMsrStatus.c)
 *     HalpGetCpuVendor @ 0x1403A108C (HalpGetCpuVendor.c)
 *     __security_check_cookie @ 0x1403D05D0 (__security_check_cookie.c)
 *     HalpMcaPopulateErrorData @ 0x1404BA8BC (HalpMcaPopulateErrorData.c)
 *     HalpMcaReadErrorCorrected @ 0x1404BD5B0 (HalpMcaReadErrorCorrected.c)
 *     HalpMcaReadErrorUncorrectedAMD @ 0x1404BD680 (HalpMcaReadErrorUncorrectedAMD.c)
 *     HalpMcaReadErrorUncorrectedUnknown @ 0x1404BD6DC (HalpMcaReadErrorUncorrectedUnknown.c)
 */

__int64 __fastcall HalpMcaReadError(int a1, __int64 a2, int *a3, __int64 a4, __int64 a5)
{
  unsigned int v5; // esi
  unsigned int v6; // r12d
  __int64 v7; // rbx
  char v8; // r13
  unsigned __int64 v9; // rax
  int v10; // r15d
  int v11; // r14d
  __int64 MsrStatus; // rax
  int v13; // r15d
  __int64 McaPcrContext; // r8
  unsigned __int64 v15; // rax
  char v16; // di
  char CpuVendor; // al
  int v18; // eax
  _WORD v20[2]; // [rsp+30h] [rbp-50h] BYREF
  unsigned int v21; // [rsp+34h] [rbp-4Ch]
  int v22; // [rsp+38h] [rbp-48h]
  __int128 v23; // [rsp+40h] [rbp-40h] BYREF
  __int64 v24; // [rsp+50h] [rbp-30h]
  __int64 v25; // [rsp+58h] [rbp-28h] BYREF
  __int64 v26; // [rsp+60h] [rbp-20h]
  __int64 v27; // [rsp+68h] [rbp-18h]
  int *v28; // [rsp+70h] [rbp-10h]

  v5 = 0;
  v27 = a4;
  v28 = a3;
  v24 = 0LL;
  v6 = -1;
  v26 = a2;
  v7 = 0LL;
  v22 = a1;
  v8 = 0;
  v20[0] = 0;
  v23 = 0LL;
  if ( !HalpMcaNumberOfBanks )
  {
    v9 = __readmsr(0x179u);
    HalpMcaNumberOfBanks = v9;
  }
  v10 = 0;
  v21 = (unsigned __int8)HalpMcaNumberOfBanks;
  if ( !HalpMcaNumberOfBanks )
    return (unsigned int)-1073741275;
  v11 = 1;
  while ( 1 )
  {
    v25 = 0LL;
    MsrStatus = HalpWheaReadMsrStatus(a5, v10, (__int64)&v25);
    if ( MsrStatus >= 0 )
      goto LABEL_20;
    BYTE8(v23) = HalpMcaRecoverySupported;
    *(_QWORD *)&v23 = MsrStatus;
    v24 = a5;
    HIDWORD(v23) = v10;
    v20[0] = 0;
    if ( v22 == 16 )
    {
      if ( HalpGetCpuVendor() == 1 )
        HalpMcaReadErrorUncorrectedAMD(&v23, v20);
      else
        HalpMcaReadErrorUncorrectedUnknown(&v23, v20);
      if ( LOBYTE(v20[0]) )
      {
        if ( !HIBYTE(v20[0]) || !v8 )
        {
          v7 = v23;
          v6 = v10;
          v8 = HIBYTE(v20[0]);
        }
        if ( !HIBYTE(v20[0]) )
          goto LABEL_24;
      }
      goto LABEL_20;
    }
    if ( v22 != 1 )
      break;
    HalpMcaReadErrorCorrected(&v23, v20);
    if ( LOBYTE(v20[0]) )
    {
      v7 = v23;
      v8 = HIBYTE(v20[0]);
      goto LABEL_23;
    }
LABEL_20:
    if ( ++v10 >= v21 )
      goto LABEL_24;
  }
  if ( v22 != 17 )
    goto LABEL_20;
  v7 = MsrStatus;
LABEL_23:
  v6 = v10;
LABEL_24:
  if ( v6 == -1 )
    return (unsigned int)-1073741275;
  v13 = v22;
  if ( v22 != 16 )
  {
    McaPcrContext = HalpGetMcaPcrContext(a5);
    v15 = __rdtsc();
    if ( v15 - *(_QWORD *)(McaPcrContext + 144) <= 0xBEBC200
      && *(_DWORD *)(McaPcrContext + 124) == v6
      && *(_QWORD *)(McaPcrContext + 128) == v7 )
    {
      if ( ++*(_DWORD *)(McaPcrContext + 136) > 3u )
        __wbinvd();
    }
    else
    {
      *(_DWORD *)(McaPcrContext + 124) = v6;
      *(_QWORD *)(McaPcrContext + 128) = v7;
      *(_DWORD *)(McaPcrContext + 136) = 1;
    }
    *(_QWORD *)(McaPcrContext + 144) = v15;
  }
  HalpMcaPopulateErrorData(a5, v6, v7, v27, v26);
  v16 = HalpMcaRecoverySupported;
  CpuVendor = HalpGetCpuVendor();
  if ( (v7 & 0x2000000000000000LL) != 0 )
  {
    if ( v8 )
    {
      v18 = 0;
      if ( v13 == 1 )
        v18 = 2;
      v11 = v18;
    }
  }
  else if ( CpuVendor != 1 || !v16 || (v11 = 0, !v8) )
  {
    v11 = 2;
  }
  *v28 = v11;
  return v5;
}
