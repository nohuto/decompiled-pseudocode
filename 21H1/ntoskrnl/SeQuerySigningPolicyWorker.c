/*
 * XREFs of SeQuerySigningPolicyWorker @ 0x14066ED48
 * Callers:
 *     SeQuerySigningPolicy @ 0x14066E920 (SeQuerySigningPolicy.c)
 * Callees:
 *     AppModelPolicy_GetPolicy_Internal @ 0x1402D72CC (AppModelPolicy_GetPolicy_Internal.c)
 *     CmIsStateSeparationEnabled @ 0x14031A8A0 (CmIsStateSeparationEnabled.c)
 *     wil_details_FeatureReporting_ReportUsageToService @ 0x14033A8A0 (wil_details_FeatureReporting_ReportUsageToService.c)
 *     SeQueryInformationToken @ 0x1405E9F20 (SeQueryInformationToken.c)
 *     SepIsNgenImage @ 0x14066EF0C (SepIsNgenImage.c)
 *     SepIsLockedDown @ 0x14091791C (SepIsLockedDown.c)
 */

__int64 __fastcall SeQuerySigningPolicyWorker(
        PACCESS_TOKEN Token,
        __int64 a2,
        char a3,
        unsigned __int8 a4,
        unsigned __int8 a5,
        unsigned __int8 *a6,
        unsigned __int8 *a7,
        unsigned __int8 *a8)
{
  __int64 v12; // rcx
  int v13; // edi
  unsigned __int8 v14; // cl
  __int64 *v16; // rax
  unsigned int v17; // edx
  void *v18; // rcx
  unsigned __int8 v19; // al
  unsigned __int8 v20; // dl
  unsigned __int8 v21; // dl
  NTSTATUS v22; // eax
  int v23; // [rsp+30h] [rbp-40h]
  char v24[4]; // [rsp+40h] [rbp-30h] BYREF
  PVOID TokenInformation; // [rsp+44h] [rbp-2Ch] BYREF
  _PS_PKG_CLAIM v26; // [rsp+50h] [rbp-20h] BYREF
  unsigned __int64 v27[3]; // [rsp+58h] [rbp-18h] BYREF

  v24[0] = 0;
  v26 = 0LL;
  HIDWORD(TokenInformation) = 0;
  v27[0] = 0LL;
  v27[1] = 0LL;
  LODWORD(v12) = AppModelPolicy_GetPolicy_Internal(Token, a2, (int *)&TokenInformation + 1, &v26, v27);
  if ( (int)v12 >= 0 )
  {
    v13 = HIDWORD(TokenInformation);
    if ( (unsigned int)(HIDWORD(TokenInformation) - 3014657) <= 1 )
    {
      if ( CmIsStateSeparationEnabled() )
      {
        v16 = (__int64 *)&Feature_LogErrorRecords_logged_traits;
        v17 = 17895887;
        v18 = &Feature_WCOSDeveloperMode__private_reporting;
      }
      else
      {
        v16 = &Feature_SchedulerAssistHRTimer_logged_traits;
        v17 = 15816256;
        v18 = &Feature_WldpDeveloperMode__private_reporting;
      }
      wil_details_FeatureReporting_ReportUsageToService((int)v18, v17, 0, 0, (__int64)v16, 1u, v23);
      if ( v13 != 3014658 || (unsigned int)LOBYTE(v26.Origin) - 4 <= 1 )
      {
        if ( (a3 & 1) == 0 )
        {
          if ( LOBYTE(v26.Origin) <= 1u )
          {
            v14 = a5;
          }
          else
          {
            if ( LOBYTE(v26.Origin) == 2 )
            {
              *a6 = 8;
              *a7 = a5;
              goto LABEL_8;
            }
            if ( LOBYTE(v26.Origin) == 3 )
            {
              v14 = 6;
            }
            else
            {
              if ( LOBYTE(v26.Origin) <= 3u )
                goto LABEL_9;
              if ( LOBYTE(v26.Origin) <= 5u )
              {
                v21 = a5 != 0 ? 3 : 0;
                *a6 = v21;
                *a7 = v21;
                goto LABEL_8;
              }
              if ( LOBYTE(v26.Origin) != 6 )
                goto LABEL_9;
              v14 = a5 != 2 ? 0 : 2;
            }
          }
          *a6 = v14;
          goto LABEL_7;
        }
        if ( !a4 )
        {
          *a6 = 4;
          *a7 = 4;
          *a8 = 18;
          goto LABEL_9;
        }
      }
    }
    if ( a2 && (unsigned __int8)SepIsNgenImage(a2) )
    {
      LODWORD(TokenInformation) = 0;
      v22 = SeQueryInformationToken(Token, TokenIsAppContainer, &TokenInformation);
      v12 = (unsigned int)v22;
      if ( v22 < 0 )
        return (unsigned int)v12;
      *a6 = 11;
      if ( (a3 & 1) == 0 )
      {
        LOBYTE(v12) = a5;
        if ( !(_DWORD)TokenInformation )
        {
          *a7 = a5;
          *a8 = a5 >= 2u ? 0x21 : 0;
          goto LABEL_9;
        }
        LODWORD(v12) = SepIsLockedDown(v12, v24);
        if ( (int)v12 < 0 )
          return (unsigned int)v12;
        if ( v24[0] )
          v14 = 6;
        else
          v14 = a5 != 2 ? 0 : 2;
        goto LABEL_7;
      }
      if ( !a4 )
      {
        *a7 = (_DWORD)TokenInformation != 0 ? 6 : 8;
        *a8 = 33;
        goto LABEL_9;
      }
    }
    if ( (a3 & 1) != 0 )
    {
      v19 = a4;
      if ( !a4 )
        v19 = 18;
      *a8 = v19;
      *a6 = *((_BYTE *)&SeProtectedMapping + 2 * ((unsigned __int64)v19 >> 4));
      v20 = *((_BYTE *)&SeProtectedMapping + 2 * ((unsigned __int64)*a8 >> 4) + 1);
      *a7 = v20;
      if ( a5 > *a6 )
      {
        *a6 = a5;
        v20 = *a7;
      }
      if ( a5 > v20 )
        *a7 = a5;
      goto LABEL_9;
    }
    v14 = a5;
    *a6 = a5;
LABEL_7:
    *a7 = v14;
LABEL_8:
    *a8 = 0;
LABEL_9:
    LODWORD(v12) = 0;
  }
  return (unsigned int)v12;
}
