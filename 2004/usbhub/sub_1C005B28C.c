/*
 * XREFs of sub_1C005B28C @ 0x1C005B28C
 * Callers:
 *     sub_1C005B388 @ 0x1C005B388 (sub_1C005B388.c)
 * Callees:
 *     sub_1C000F050 @ 0x1C000F050 (sub_1C000F050.c)
 *     __security_check_cookie @ 0x1C001CF60 (__security_check_cookie.c)
 *     sub_1C00447AC @ 0x1C00447AC (sub_1C00447AC.c)
 *     sub_1C005B184 @ 0x1C005B184 (sub_1C005B184.c)
 */

__int64 __fastcall sub_1C005B28C(__int64 a1, void *a2)
{
  __int64 result; // rax
  unsigned int v5; // ebx
  unsigned int i; // edi
  PCWSTR Path; // [rsp+30h] [rbp-48h] BYREF
  WCHAR ValueName[16]; // [rsp+38h] [rbp-40h] BYREF

  Path = 0LL;
  wcscpy(ValueName, L"uxd_port_nnn");
  result = sub_1C005B184(a1, (void **)&Path);
  v5 = result;
  if ( (int)result >= 0 )
  {
    for ( i = 1; i <= *((unsigned __int8 *)sub_1C000F050(a1) + 2938); ++i )
    {
      sub_1C00447AC(ValueName, 0x1AuLL, L"uxd_port_%3.3d", i);
      v5 = RtlWriteRegistryValue(0x40000000u, Path, ValueName, 3u, a2, 0x44u);
    }
    ZwClose((HANDLE)Path);
    return v5;
  }
  return result;
}
