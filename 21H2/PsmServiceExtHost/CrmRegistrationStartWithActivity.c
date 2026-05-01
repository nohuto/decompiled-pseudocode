/*
 * XREFs of CrmRegistrationStartWithActivity @ 0x180042220
 * Callers:
 *     CrmGlobalsStart @ 0x180042074 (CrmGlobalsStart.c)
 * Callees:
 *     CrmRegistrationCreateActivity @ 0x180030118 (CrmRegistrationCreateActivity.c)
 *     CrmRegistrationStart @ 0x1800342A4 (CrmRegistrationStart.c)
 */

__int64 __fastcall CrmRegistrationStartWithActivity(__int64 a1, unsigned int a2, __int64 a3, int a4)
{
  __int64 result; // rax

  result = CrmRegistrationStart(a1, 0LL, a4);
  if ( (int)result >= 0 )
  {
    result = CrmRegistrationCreateActivity(a1, a2, 0LL);
    if ( (int)result >= 0 )
      return 0LL;
  }
  return result;
}
