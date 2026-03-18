/*
 * XREFs of _FreeSMS@8 @ 0x181299
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

int __stdcall FreeSMS(int a1, int a2)
{
  return Win32FreeToPagedLookasideList(SMSLookaside, a1);
}
