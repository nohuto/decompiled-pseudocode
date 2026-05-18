/*
 * XREFs of sub_180118140 @ 0x180118140
 * Callers:
 *     sub_180117688 @ 0x180117688 (sub_180117688.c)
 * Callees:
 *     sub_1801172EC @ 0x1801172EC (sub_1801172EC.c)
 *     sub_180117330 @ 0x180117330 (sub_180117330.c)
 *     sub_18011806C @ 0x18011806C (sub_18011806C.c)
 *     sub_18011BCAC @ 0x18011BCAC (sub_18011BCAC.c)
 *     __security_check_cookie @ 0x180123FC0 (__security_check_cookie.c)
 */

_QWORD *__fastcall sub_180118140(_QWORD *a1)
{
  GUID rguid; // [rsp+20h] [rbp-58h] BYREF
  __int128 v4; // [rsp+30h] [rbp-48h]
  __int128 v5; // [rsp+40h] [rbp-38h]
  __int64 v6; // [rsp+50h] [rbp-28h]
  GUID pguid; // [rsp+58h] [rbp-20h] BYREF

  *(_QWORD *)&pguid.Data1 = a1;
  if ( CoCreateGuid(&pguid) )
  {
    sub_18011BCAC(&unk_180214B70, 4LL, "Unable to generate a valid, globally unique, GUID");
    sub_1801172EC(a1);
  }
  else
  {
    v6 = 0LL;
    rguid = pguid;
    v4 = 0LL;
    v5 = 0LL;
    sub_18011806C(&rguid);
    sub_180117330(a1, (__int64)&rguid);
  }
  return a1;
}
