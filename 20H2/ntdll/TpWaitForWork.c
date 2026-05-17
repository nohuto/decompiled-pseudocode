/*
 * XREFs of TpWaitForWork @ 0x18007EF70
 * Callers:
 *     LdrpDetectDetour @ 0x180061FBC (LdrpDetectDetour.c)
 *     RtlpFcFreeChangeRegistration @ 0x18007EF20 (RtlpFcFreeChangeRegistration.c)
 * Callees:
 *     TppWorkpValidateWork @ 0x18000F214 (TppWorkpValidateWork.c)
 *     TppWorkWait @ 0x180013D78 (TppWorkWait.c)
 */

struct _PEB *__fastcall TpWaitForWork(_PEB_LDR_DATA *a1, int a2)
{
  struct _PEB *result; // rax

  result = (struct _PEB *)TppWorkpValidateWork(a1, 0LL, 0LL);
  if ( (_DWORD)result )
    return TppWorkWait(a1, a2);
  return result;
}
