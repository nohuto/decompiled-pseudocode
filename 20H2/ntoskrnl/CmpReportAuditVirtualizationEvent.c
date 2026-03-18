/*
 * XREFs of CmpReportAuditVirtualizationEvent @ 0x14087454C
 * Callers:
 *     CmKeyBodyReplicateToVirtual @ 0x1406C4A0C (CmKeyBodyReplicateToVirtual.c)
 *     CmpVEExecuteCreateLogic @ 0x1406C4C5C (CmpVEExecuteCreateLogic.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x140210D50 (RtlInitUnicodeString.c)
 *     SeReportSecurityEventWithSubCategory @ 0x14023D670 (SeReportSecurityEventWithSubCategory.c)
 *     CmpFreeTransientPoolWithTag @ 0x140268308 (CmpFreeTransientPoolWithTag.c)
 *     SeSetAuditParameter @ 0x14030DE00 (SeSetAuditParameter.c)
 *     PsGetCurrentThreadProcess @ 0x14031C770 (PsGetCurrentThreadProcess.c)
 *     __security_check_cookie @ 0x1403CFAF0 (__security_check_cookie.c)
 *     memset @ 0x140411300 (memset.c)
 *     RtlFreeAnsiString @ 0x140632500 (RtlFreeAnsiString.c)
 *     PsGetAllocatedFullProcessImageNameEx @ 0x14064D5D8 (PsGetAllocatedFullProcessImageNameEx.c)
 *     CmpConstructNameWithStatus @ 0x140675D10 (CmpConstructNameWithStatus.c)
 *     CmRealKCBToVirtualPath @ 0x1406FC068 (CmRealKCBToVirtualPath.c)
 *     CmpEffectiveTokenForSubject @ 0x1406FDF40 (CmpEffectiveTokenForSubject.c)
 *     CmVirtualKCBToRealPath @ 0x1408722A8 (CmVirtualKCBToRealPath.c)
 *     ExFreePoolWithTag @ 0x1409B70B0 (ExFreePoolWithTag.c)
 */

__int64 __fastcall CmpReportAuditVirtualizationEvent(__int64 a1, __int64 a2)
{
  UNICODE_STRING *p_UnicodeString; // rsi
  UNICODE_STRING *v5; // rdi
  int AllocatedFullProcessImageName; // ebx
  ULONG v7; // r12d
  ULONG v8; // r8d
  ULONG v9; // r14d
  _KPROCESS *CurrentThreadProcess; // rax
  ULONG v11; // r8d
  NTSTATUS v12; // eax
  PVOID v14; // [rsp+30h] [rbp-D0h] BYREF
  UNICODE_STRING UnicodeString; // [rsp+38h] [rbp-C8h] BYREF
  PVOID P; // [rsp+48h] [rbp-B8h] BYREF
  __int64 Data; // [rsp+50h] [rbp-B0h] BYREF
  UNICODE_STRING v18; // [rsp+58h] [rbp-A8h] BYREF
  UNICODE_STRING DestinationString; // [rsp+68h] [rbp-98h] BYREF
  _SE_ADT_PARAMETER_ARRAY AuditParameters; // [rsp+80h] [rbp-80h] BYREF

  memset(&AuditParameters, 0, sizeof(AuditParameters));
  P = 0LL;
  DestinationString = 0LL;
  p_UnicodeString = 0LL;
  v5 = 0LL;
  v18 = 0LL;
  UnicodeString = 0LL;
  RtlInitUnicodeString(&DestinationString, L"Security");
  AuditParameters.AuditId = 5039;
  AuditParameters.Type = 8;
  AuditParameters.CategoryId = 3;
  AuditParameters.ParameterCount = 0;
  Data = *(_QWORD *)(CmpEffectiveTokenForSubject((__int64 *)a2, 0LL) + 24);
  AllocatedFullProcessImageName = SeSetAuditParameter(&AuditParameters, SeAdtParmTypeLogonId, 0, &Data);
  v7 = ++AuditParameters.ParameterCount;
  if ( AllocatedFullProcessImageName < 0 )
    goto LABEL_18;
  if ( CmpVEEnabled && (*(_DWORD *)(a1 + 184) & 0x1000000) != 0 )
  {
    v14 = 0LL;
    CmpConstructNameWithStatus(a1, &v14);
    v5 = (UNICODE_STRING *)v14;
    if ( !v14 )
    {
LABEL_5:
      AllocatedFullProcessImageName = -1073741670;
      goto LABEL_18;
    }
    AllocatedFullProcessImageName = CmVirtualKCBToRealPath(a1, &UnicodeString);
    if ( AllocatedFullProcessImageName >= 0 )
    {
      p_UnicodeString = &UnicodeString;
LABEL_11:
      AllocatedFullProcessImageName = SeSetAuditParameter(&AuditParameters, SeAdtParmTypeString, v7, p_UnicodeString);
      v8 = ++AuditParameters.ParameterCount;
      if ( AllocatedFullProcessImageName >= 0 )
      {
        AllocatedFullProcessImageName = SeSetAuditParameter(&AuditParameters, SeAdtParmTypeString, v8, v5);
        v9 = ++AuditParameters.ParameterCount;
        if ( AllocatedFullProcessImageName >= 0 )
        {
          CurrentThreadProcess = PsGetCurrentThreadProcess();
          AllocatedFullProcessImageName = PsGetAllocatedFullProcessImageNameEx(
                                            (__int64)CurrentThreadProcess,
                                            (__int64)&P);
          if ( AllocatedFullProcessImageName >= 0 )
          {
            AllocatedFullProcessImageName = SeSetAuditParameter(
                                              &AuditParameters,
                                              SeAdtParmTypePtr,
                                              v9,
                                              *(PVOID *)(a2 + 24));
            v11 = ++AuditParameters.ParameterCount;
            if ( AllocatedFullProcessImageName >= 0 )
            {
              v12 = SeSetAuditParameter(&AuditParameters, SeAdtParmTypeFileSpec, v11, P);
              ++AuditParameters.ParameterCount;
              AllocatedFullProcessImageName = v12;
              if ( v12 >= 0 )
              {
                AllocatedFullProcessImageName = SeReportSecurityEventWithSubCategory(
                                                  0,
                                                  &DestinationString,
                                                  0LL,
                                                  &AuditParameters,
                                                  0x75u);
                if ( AllocatedFullProcessImageName >= 0 )
                  AllocatedFullProcessImageName = 0;
              }
            }
          }
        }
      }
    }
  }
  else
  {
    v14 = 0LL;
    CmpConstructNameWithStatus(a1, &v14);
    p_UnicodeString = (UNICODE_STRING *)v14;
    if ( !v14 )
      goto LABEL_5;
    RtlInitUnicodeString(&v18, 0LL);
    AllocatedFullProcessImageName = CmRealKCBToVirtualPath(a1, (__m128i *)&v18, a2, &UnicodeString);
    if ( AllocatedFullProcessImageName >= 0 )
    {
      v5 = &UnicodeString;
      goto LABEL_11;
    }
  }
LABEL_18:
  if ( P )
    ExFreePoolWithTag(P, 0x61506553u);
  if ( p_UnicodeString == &UnicodeString )
  {
    RtlFreeAnsiString(&UnicodeString);
  }
  else if ( p_UnicodeString )
  {
    CmpFreeTransientPoolWithTag(p_UnicodeString, 0x624E4D43u);
  }
  if ( v5 == &UnicodeString )
  {
    RtlFreeAnsiString(&UnicodeString);
  }
  else if ( v5 )
  {
    CmpFreeTransientPoolWithTag(v5, 0x624E4D43u);
  }
  return (unsigned int)AllocatedFullProcessImageName;
}
