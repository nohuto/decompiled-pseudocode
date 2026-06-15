/*
 * XREFs of sub_180051090 @ 0x180051090
 * Callers:
 *     sub_180050904 @ 0x180050904 (sub_180050904.c)
 *     sub_180050FD0 @ 0x180050FD0 (sub_180050FD0.c)
 * Callees:
 *     sub_1800B8610 @ 0x1800B8610 (sub_1800B8610.c)
 */

__int64 __fastcall sub_180051090(SAFEARRAY **a1, LONG a2)
{
  SAFEARRAY *v2; // rcx
  HRESULT LBound; // eax
  LONG plLbound; // [rsp+38h] [rbp+10h] BYREF

  plLbound = a2;
  v2 = *a1;
  plLbound = 0;
  LBound = SafeArrayGetLBound(v2, 1u, &plLbound);
  if ( LBound < 0 )
    sub_1800B8610((unsigned int)LBound);
  return (unsigned int)plLbound;
}
