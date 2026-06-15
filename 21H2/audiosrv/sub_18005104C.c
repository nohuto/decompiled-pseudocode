/*
 * XREFs of sub_18005104C @ 0x18005104C
 * Callers:
 *     sub_180050904 @ 0x180050904 (sub_180050904.c)
 *     sub_180050FD0 @ 0x180050FD0 (sub_180050FD0.c)
 * Callees:
 *     sub_1800B8610 @ 0x1800B8610 (sub_1800B8610.c)
 */

__int64 __fastcall sub_18005104C(SAFEARRAY **a1, LONG a2)
{
  SAFEARRAY *v2; // rcx
  HRESULT UBound; // eax
  LONG plUbound; // [rsp+38h] [rbp+10h] BYREF

  plUbound = a2;
  v2 = *a1;
  plUbound = 0;
  UBound = SafeArrayGetUBound(v2, 1u, &plUbound);
  if ( UBound < 0 )
    sub_1800B8610((unsigned int)UBound);
  return (unsigned int)plUbound;
}
