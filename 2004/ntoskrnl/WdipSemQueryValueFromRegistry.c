/*
 * XREFs of WdipSemQueryValueFromRegistry @ 0x14079B7E0
 * Callers:
 *     WdipSemLoadGroupPolicy @ 0x14079A76C (WdipSemLoadGroupPolicy.c)
 *     WdipSemLoadConfigInfo @ 0x14079A7C4 (WdipSemLoadConfigInfo.c)
 *     WdipSemLoadNextEndEvent @ 0x14079A970 (WdipSemLoadNextEndEvent.c)
 *     WdipSemLoadNextContextProvider @ 0x14079AC74 (WdipSemLoadNextContextProvider.c)
 *     WdipSemLoadScenarioTable @ 0x14079AEF4 (WdipSemLoadScenarioTable.c)
 *     WdipSemLoadNextScenario @ 0x14079B300 (WdipSemLoadNextScenario.c)
 *     WdipSemLoadLocalGroupPolicy @ 0x14092CCB0 (WdipSemLoadLocalGroupPolicy.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x140298F60 (RtlInitUnicodeString.c)
 *     __security_check_cookie @ 0x1403CCE60 (__security_check_cookie.c)
 *     ZwQueryValueKey @ 0x1403F38A0 (ZwQueryValueKey.c)
 *     memmove @ 0x140409FC0 (memmove.c)
 *     memset @ 0x14040A280 (memset.c)
 */

__int64 __fastcall WdipSemQueryValueFromRegistry(
        HANDLE KeyHandle,
        const WCHAR *a2,
        int a3,
        unsigned int a4,
        void *a5,
        unsigned int *a6)
{
  NTSTATUS v9; // ebx
  unsigned int v10; // edi
  ULONG ResultLength; // [rsp+30h] [rbp-D8h] BYREF
  UNICODE_STRING DestinationString; // [rsp+38h] [rbp-D0h] BYREF
  _BYTE KeyValueInformation[4]; // [rsp+48h] [rbp-C0h] BYREF
  int v15; // [rsp+4Ch] [rbp-BCh]
  unsigned int Src; // [rsp+50h] [rbp-B8h]
  int Src_4; // [rsp+54h] [rbp-B4h] BYREF

  ResultLength = 0;
  DestinationString = 0LL;
  if ( KeyHandle && a2 && a5 && a6 )
  {
    RtlInitUnicodeString(&DestinationString, a2);
    v9 = ZwQueryValueKey(
           KeyHandle,
           &DestinationString,
           KeyValuePartialInformation,
           KeyValueInformation,
           0x90u,
           &ResultLength);
    if ( v9 >= 0 )
    {
      v10 = Src;
      if ( Src <= a4 && v15 == a3 )
      {
        memset(a5, 0, a4);
        memmove(a5, &Src_4, v10);
        *a6 = v10;
      }
      else
      {
        return (unsigned int)-1073741823;
      }
    }
  }
  else
  {
    return (unsigned int)-1073741811;
  }
  return (unsigned int)v9;
}
