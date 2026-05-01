/*
 * XREFs of ??$ShellFeedsExperienceManagerImpl_CanPrelaunchOnMouseMove@AEA_NAEA_NAEAHAEB_JAEBH@ShellFeedsTelemetry@@SAXAEA_N0AEAHAEB_JAEBH@Z @ 0x18009845C
 * Callers:
 *     ?CanPokeNow@ShellFeedsExperienceManagerImpl@@AEAA?B_NXZ @ 0x180099474 (-CanPokeNow@ShellFeedsExperienceManagerImpl@@AEAA-B_NXZ.c)
 * Callees:
 *     _tlgWriteTransfer_EventWriteTransfer @ 0x18001D4A4 (_tlgWriteTransfer_EventWriteTransfer.c)
 *     _tlgKeywordOn @ 0x1800238E4 (_tlgKeywordOn.c)
 *     __security_check_cookie @ 0x18008CFC0 (__security_check_cookie.c)
 *     ?Provider@FeedsMicrosoftTelemetryProvider@@SAQEBU_tlgProvider_t@@XZ @ 0x18009BC68 (-Provider@FeedsMicrosoftTelemetryProvider@@SAQEBU_tlgProvider_t@@XZ.c)
 */

char __fastcall ShellFeedsTelemetry::ShellFeedsExperienceManagerImpl_CanPrelaunchOnMouseMove<bool &,bool &,int &,__int64 const &,int const &>(
        char *a1,
        char *a2,
        int *a3,
        int *a4,
        int *a5)
{
  const struct _tlgProvider_t *v9; // rax
  __int64 v10; // r10
  char v12; // [rsp+38h] [rbp-61h] BYREF
  char v13; // [rsp+39h] [rbp-60h] BYREF
  int v14; // [rsp+3Ch] [rbp-5Dh] BYREF
  int v15; // [rsp+40h] [rbp-59h] BYREF
  int v16; // [rsp+44h] [rbp-55h] BYREF
  __int64 v17; // [rsp+48h] [rbp-51h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v18; // [rsp+58h] [rbp-41h] BYREF
  char *v19; // [rsp+78h] [rbp-21h]
  __int64 v20; // [rsp+80h] [rbp-19h]
  char *v21; // [rsp+88h] [rbp-11h]
  __int64 v22; // [rsp+90h] [rbp-9h]
  int *v23; // [rsp+98h] [rbp-1h]
  __int64 v24; // [rsp+A0h] [rbp+7h]
  int *v25; // [rsp+A8h] [rbp+Fh]
  __int64 v26; // [rsp+B0h] [rbp+17h]
  int *v27; // [rsp+B8h] [rbp+1Fh]
  __int64 v28; // [rsp+C0h] [rbp+27h]
  __int64 *v29; // [rsp+C8h] [rbp+2Fh]
  __int64 v30; // [rsp+D0h] [rbp+37h]

  v9 = FeedsMicrosoftTelemetryProvider::Provider();
  if ( *(_DWORD *)v9 > 5u )
  {
    LOBYTE(v9) = tlgKeywordOn((__int64)v9, 0x400000000000LL);
    if ( (_BYTE)v9 )
    {
      v30 = 8LL;
      v17 = 0x1000000LL;
      v28 = 4LL;
      v14 = *a5;
      v15 = *a4;
      v16 = *a3;
      v12 = *a2;
      v13 = *a1;
      v29 = &v17;
      v27 = &v14;
      v25 = &v15;
      v23 = &v16;
      v21 = &v12;
      v19 = &v13;
      v26 = 4LL;
      v24 = 4LL;
      v22 = 1LL;
      v20 = 1LL;
      LOBYTE(v9) = tlgWriteTransfer_EventWriteTransfer(v10, (unsigned __int8 *)dword_180505A08, 0LL, 0LL, 8u, &v18);
    }
  }
  return (char)v9;
}
