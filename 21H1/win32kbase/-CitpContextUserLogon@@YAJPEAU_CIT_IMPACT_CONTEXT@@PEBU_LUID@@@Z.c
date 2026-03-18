/*
 * XREFs of ?CitpContextUserLogon@@YAJPEAU_CIT_IMPACT_CONTEXT@@PEBU_LUID@@@Z @ 0x1C0023CB4
 * Callers:
 *     CitProcessCallout @ 0x1C006AF60 (CitProcessCallout.c)
 * Callees:
 *     ?CitpCleanupGlobalImpactContext@@YAXPEAPEAU_CIT_IMPACT_CONTEXT@@@Z @ 0x1C0024380 (-CitpCleanupGlobalImpactContext@@YAXPEAPEAU_CIT_IMPACT_CONTEXT@@@Z.c)
 *     ?CitpUpdateBootStats@@YAXPEAU_CIT_IMPACT_CONTEXT@@@Z @ 0x1C0024578 (-CitpUpdateBootStats@@YAXPEAU_CIT_IMPACT_CONTEXT@@@Z.c)
 *     ?CitpParametersCompute@@YAXPEAU_CIT_PARAMETERS@@@Z @ 0x1C0024EF4 (-CitpParametersCompute@@YAXPEAU_CIT_PARAMETERS@@@Z.c)
 *     ?CitpPostUpdateUseInfoLoad@@YAJPEAU_CIT_IMPACT_CONTEXT@@@Z @ 0x1C0024FA8 (-CitpPostUpdateUseInfoLoad@@YAJPEAU_CIT_IMPACT_CONTEXT@@@Z.c)
 *     ?CitpDPDataLoad@@YAJPEAU_CIT_IMPACT_CONTEXT@@@Z @ 0x1C0025334 (-CitpDPDataLoad@@YAJPEAU_CIT_IMPACT_CONTEXT@@@Z.c)
 *     Win32AllocPool @ 0x1C008D7C0 (Win32AllocPool.c)
 *     __security_check_cookie @ 0x1C00CC180 (__security_check_cookie.c)
 *     memmove @ 0x1C00D2F00 (memmove.c)
 *     ?CitpLogFailureWorker@@YAXJPEBDI@Z @ 0x1C01FF578 (-CitpLogFailureWorker@@YAXJPEBDI@Z.c)
 */

__int64 __fastcall CitpContextUserLogon(struct _CIT_IMPACT_CONTEXT *a1, const struct _LUID *a2)
{
  struct _KPROCESS *CurrentProcess; // rax
  PACCESS_TOKEN v5; // rax
  const char *v6; // rdx
  void *v7; // rdi
  NTSTATUS v8; // eax
  unsigned int v9; // ebx
  PSID v10; // r15
  ULONG v11; // r12d
  void *v12; // rax
  void *v13; // rbx
  struct _LUID v14; // rax
  unsigned int v16; // r8d
  int v17; // ecx
  ULONG ReturnLength; // [rsp+30h] [rbp-59h] BYREF
  struct _LUID AuthenticationId; // [rsp+38h] [rbp-51h] BYREF
  void *TokenHandle; // [rsp+40h] [rbp-49h] BYREF
  struct _CIT_IMPACT_CONTEXT *v21; // [rsp+48h] [rbp-41h] BYREF
  PSID TokenInformation[12]; // [rsp+50h] [rbp-39h] BYREF

  TokenHandle = 0LL;
  AuthenticationId = 0LL;
  CurrentProcess = (struct _KPROCESS *)PsGetCurrentProcess(a1, a2);
  v5 = PsReferencePrimaryToken(CurrentProcess);
  v7 = v5;
  if ( !v5 )
  {
    v9 = -1073741700;
    v16 = 747;
LABEL_17:
    v17 = v9;
LABEL_20:
    CitpLogFailureWorker(v17, v6, v16);
    goto LABEL_10;
  }
  v8 = SeQueryAuthenticationIdToken(v5, &AuthenticationId);
  v9 = v8;
  if ( v8 < 0 )
  {
    v16 = 754;
    goto LABEL_19;
  }
  if ( AuthenticationId.LowPart == a2->LowPart && AuthenticationId.HighPart == a2->HighPart )
  {
    CitpParametersCompute((struct _CIT_PARAMETERS *)&xmmword_1C0256404);
    if ( BYTE4(qword_1C0256424) )
    {
      v8 = ZwOpenProcessTokenEx((HANDLE)0xFFFFFFFFFFFFFFFFLL, 8u, 0x200u, &TokenHandle);
      v9 = v8;
      if ( v8 < 0 )
      {
        v16 = 785;
      }
      else
      {
        ReturnLength = 0;
        v8 = ZwQueryInformationToken(TokenHandle, TokenUser, TokenInformation, 0x58u, &ReturnLength);
        v9 = v8;
        if ( v8 >= 0 )
        {
          v10 = TokenInformation[0];
          v11 = RtlLengthSid(TokenInformation[0]);
          v12 = (void *)Win32AllocPool(v11, 1231254357LL);
          v13 = v12;
          if ( v12 )
          {
            memmove(v12, v10, v11);
            v14 = *a2;
            *((_QWORD *)a1 + 12) = v13;
            *((struct _LUID *)a1 + 13) = v14;
            CitpPostUpdateUseInfoLoad(a1);
            CitpDPDataLoad(a1);
            CitpUpdateBootStats(a1);
            v9 = 0;
            goto LABEL_10;
          }
          v9 = -1073741670;
          v16 = 815;
          goto LABEL_17;
        }
        v16 = 801;
      }
LABEL_19:
      v17 = v8;
      goto LABEL_20;
    }
    CitpCleanupGlobalImpactContext(&v21);
    v9 = -1073741637;
  }
  else
  {
    v9 = -1073741587;
  }
LABEL_10:
  if ( TokenHandle )
    ZwClose(TokenHandle);
  if ( v7 )
    PsDereferencePrimaryToken(v7);
  return v9;
}
