/*
 * XREFs of PnpDiagnosticTraceElamDecision @ 0x1403B83AC
 * Callers:
 *     PnpDoPolicyCheck @ 0x140A5FB20 (PnpDoPolicyCheck.c)
 * Callees:
 *     EtwWriteEx @ 0x14027F840 (EtwWriteEx.c)
 *     EtwEventEnabled @ 0x1402C0830 (EtwEventEnabled.c)
 *     __security_check_cookie @ 0x1403D05D0 (__security_check_cookie.c)
 */

__int64 __fastcall PnpDiagnosticTraceElamDecision(__int64 a1, int a2, int a3, int a4)
{
  REGHANDLE v4; // rdi
  unsigned int v5; // ebx
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+40h] [rbp-40h] BYREF
  int *v8; // [rsp+50h] [rbp-30h]
  __int64 v9; // [rsp+58h] [rbp-28h]
  int *v10; // [rsp+60h] [rbp-20h]
  __int64 v11; // [rsp+68h] [rbp-18h]
  int v12; // [rsp+A8h] [rbp+28h] BYREF
  int v13; // [rsp+B0h] [rbp+30h] BYREF
  int v14; // [rsp+B8h] [rbp+38h] BYREF

  v14 = a4;
  v13 = a3;
  v12 = a2;
  v4 = PnpEtwHandle;
  v5 = 0;
  if ( PnpEtwHandle && EtwEventEnabled(PnpEtwHandle, &KMPnPEvt_EarlyLaunch_PolicyCheck) )
  {
    *(_QWORD *)&UserData.Size = 4LL;
    UserData.Ptr = (ULONGLONG)&v12;
    v9 = 4LL;
    v8 = &v13;
    v11 = 4LL;
    v10 = &v14;
    return (unsigned int)EtwWriteEx(v4, &KMPnPEvt_EarlyLaunch_PolicyCheck, 0LL, 0, 0LL, 0LL, 3u, &UserData);
  }
  return v5;
}
