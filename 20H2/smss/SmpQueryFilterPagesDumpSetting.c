/*
 * XREFs of SmpQueryFilterPagesDumpSetting @ 0x1400069F0
 * Callers:
 *     SmpPagefileInitialize @ 0x1400067F8 (SmpPagefileInitialize.c)
 * Callees:
 *     SmpQueryDwordFromRegistry @ 0x140006A8C (SmpQueryDwordFromRegistry.c)
 */

bool __fastcall SmpQueryFilterPagesDumpSetting(__int64 a1)
{
  char v1; // bl
  int v3; // [rsp+20h] [rbp-18h] BYREF
  const wchar_t *v4; // [rsp+28h] [rbp-10h]
  int v5; // [rsp+40h] [rbp+8h] BYREF

  v3 = 1572886;
  v4 = L"FilterPages";
  v1 = 0;
  if ( (int)((__int64 (__fastcall *)(__int64, int *, _QWORD, int *))SmpQueryDwordFromRegistry)(a1, &v3, 0LL, &v5) >= 0 )
    return v5 != 0;
  return v1;
}
