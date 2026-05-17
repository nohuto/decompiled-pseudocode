/*
 * XREFs of TpWaitForWork @ 0x18007F890
 * Callers:
 *     LdrpDetectDetour @ 0x1800634AC (LdrpDetectDetour.c)
 *     RtlpFcFreeChangeRegistration @ 0x18007F840 (RtlpFcFreeChangeRegistration.c)
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
