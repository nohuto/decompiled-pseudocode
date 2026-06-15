/*
 * XREFs of sub_1800362DC @ 0x1800362DC
 * Callers:
 *     sub_1800331AC @ 0x1800331AC (sub_1800331AC.c)
 *     sub_180033438 @ 0x180033438 (sub_180033438.c)
 *     sub_180033580 @ 0x180033580 (sub_180033580.c)
 *     sub_180034200 @ 0x180034200 (sub_180034200.c)
 *     sub_180034970 @ 0x180034970 (sub_180034970.c)
 *     sub_180034A74 @ 0x180034A74 (sub_180034A74.c)
 *     sub_180034D90 @ 0x180034D90 (sub_180034D90.c)
 *     sub_180034E90 @ 0x180034E90 (sub_180034E90.c)
 * Callees:
 *     <none>
 */

__int64 sub_1800362DC()
{
  signed int LastError; // ecx
  __int64 result; // rax

  LastError = GetLastError();
  result = (unsigned __int16)LastError | 0x80070000;
  if ( LastError <= 0 )
    return (unsigned int)LastError;
  return result;
}
