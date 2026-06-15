/*
 * XREFs of sub_180036308 @ 0x180036308
 * Callers:
 *     sub_1800331AC @ 0x1800331AC (sub_1800331AC.c)
 *     sub_180033B5C @ 0x180033B5C (sub_180033B5C.c)
 *     sub_180034A74 @ 0x180034A74 (sub_180034A74.c)
 *     sub_180034D90 @ 0x180034D90 (sub_180034D90.c)
 *     sub_180034E90 @ 0x180034E90 (sub_180034E90.c)
 * Callees:
 *     sub_18000A174 @ 0x18000A174 (sub_18000A174.c)
 */

void __noreturn sub_180036308()
{
  signed int LastError; // eax
  unsigned int v1; // ecx

  LastError = GetLastError();
  v1 = (unsigned __int16)LastError | 0x80070000;
  if ( LastError <= 0 )
    v1 = LastError;
  sub_18000A174(v1);
}
