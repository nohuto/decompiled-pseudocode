/*
 * XREFs of ?ValidateModuleCertChain@GameInputModule@@CAJPEBG@Z @ 0x18004394C
 * Callers:
 *     ?LoadModule@GameInputModule@@AEAAJW4ModuleKind@1@AEBUGameInputVersion@@@Z @ 0x180042E08 (-LoadModule@GameInputModule@@AEAAJW4ModuleKind@1@AEBUGameInputVersion@@@Z.c)
 * Callees:
 *     memset_0 @ 0x18003C460 (memset_0.c)
 *     __security_check_cookie @ 0x18003C480 (__security_check_cookie.c)
 */

__int64 __fastcall GameInputModule::ValidateModuleCertChain(const unsigned __int16 *a1)
{
  unsigned int v3; // edi
  int dwError; // ebx
  unsigned int v5; // esi
  CRYPT_PROVIDER_DATA *v6; // rax
  CRYPT_PROVIDER_SGNR *ProvSignerFromChain; // rax
  const CERT_CHAIN_CONTEXT *pChainContext; // rdx
  int dwError_low; // ebx
  signed int LastError; // eax
  int v11; // [rsp+28h] [rbp-79h] BYREF
  _CERT_CHAIN_POLICY_STATUS pPolicyStatus; // [rsp+30h] [rbp-71h] BYREF
  _CERT_CHAIN_POLICY_PARA pPolicyPara; // [rsp+48h] [rbp-59h] BYREF
  _QWORD v14[2]; // [rsp+58h] [rbp-49h] BYREF
  __int128 v15; // [rsp+68h] [rbp-39h]
  _DWORD pWVTData[10]; // [rsp+78h] [rbp-29h] BYREF
  _QWORD *v17; // [rsp+A0h] [rbp-1h]
  int v18; // [rsp+A8h] [rbp+7h]
  HANDLE hStateData; // [rsp+B0h] [rbp+Fh]
  int v20; // [rsp+C0h] [rbp+1Fh]
  GUID pgActionID; // [rsp+D8h] [rbp+37h] BYREF

  RtlGetDeviceFamilyInfoEnum(0LL, &v11, 0LL);
  if ( v11 == 5 )
    return 0LL;
  v14[1] = a1;
  v3 = 0;
  v14[0] = 32LL;
  v15 = 0LL;
  memset_0(pWVTData, 0, 0x58uLL);
  pWVTData[0] = 88;
  pWVTData[8] = 1;
  v18 = 1;
  pWVTData[6] = 2;
  v17 = v14;
  v20 = 4160;
  pgActionID.Data1 = 11191659;
  *(_DWORD *)&pgActionID.Data2 = 298896708;
  *(_DWORD *)pgActionID.Data4 = -1073692020;
  *(_DWORD *)&pgActionID.Data4[4] = -292175281;
  dwError = WinVerifyTrust(HWND_MESSAGE|0x2LL, &pgActionID, pWVTData);
  v5 = -2147467259;
  if ( dwError )
    goto LABEL_15;
  dwError = -2147467259;
  v6 = WTHelperProvDataFromStateData(hStateData);
  if ( !v6 )
    goto LABEL_14;
  ProvSignerFromChain = WTHelperGetProvSignerFromChain(v6, 0, 0, 0);
  if ( !ProvSignerFromChain )
    goto LABEL_14;
  pChainContext = ProvSignerFromChain->pChainContext;
  memset(&pPolicyStatus, 0, sizeof(pPolicyStatus));
  pPolicyStatus.cbSize = 24;
  pPolicyPara = 0LL;
  pPolicyPara.cbSize = 16;
  if ( CertVerifyCertificateChainPolicy((LPCSTR)7, pChainContext, &pPolicyPara, &pPolicyStatus) )
  {
    dwError = pPolicyStatus.dwError;
    if ( !pPolicyStatus.dwError )
    {
      dwError = 0;
      goto LABEL_14;
    }
    if ( (int)pPolicyStatus.dwError <= 0 )
      goto LABEL_14;
    dwError_low = LOWORD(pPolicyStatus.dwError);
  }
  else
  {
    LastError = GetLastError();
    dwError = LastError;
    if ( LastError <= 0 )
      goto LABEL_14;
    dwError_low = (unsigned __int16)LastError;
  }
  dwError = dwError_low | 0x80070000;
LABEL_14:
  v18 = 2;
  WinVerifyTrust(HWND_MESSAGE|0x2LL, &pgActionID, pWVTData);
  if ( dwError )
  {
LABEL_15:
    if ( dwError < 0 )
      return (unsigned int)dwError;
    return v5;
  }
  return v3;
}
