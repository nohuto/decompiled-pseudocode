/*
 * XREFs of EtwTraceLpacAccessFailure @ 0x140940124
 * Callers:
 *     SepLogLpacAccessFailure @ 0x140596458 (SepLogLpacAccessFailure.c)
 * Callees:
 *     KeQuerySystemTimePrecise @ 0x140266EA0 (KeQuerySystemTimePrecise.c)
 *     EtwWrite @ 0x14027F7C0 (EtwWrite.c)
 *     __security_check_cookie @ 0x1403D05D0 (__security_check_cookie.c)
 */

NTSTATUS __fastcall EtwTraceLpacAccessFailure(int a1)
{
  NTSTATUS result; // eax
  LARGE_INTEGER v2; // [rsp+30h] [rbp-30h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+38h] [rbp-28h] BYREF
  int *v4; // [rsp+48h] [rbp-18h]
  int v5; // [rsp+50h] [rbp-10h]
  int v6; // [rsp+54h] [rbp-Ch]
  int v7; // [rsp+70h] [rbp+10h] BYREF

  v7 = a1;
  v2.QuadPart = 0LL;
  if ( EtwLpacProvRegHandle )
  {
    KeQuerySystemTimePrecise(&v2);
    UserData.Reserved = 0;
    v6 = 0;
    UserData.Ptr = (ULONGLONG)&v2;
    UserData.Size = 8;
    v4 = &v7;
    v5 = 4;
    return EtwWrite(EtwLpacProvRegHandle, &LpacAccessFailureLog, 0LL, 2u, &UserData);
  }
  return result;
}
