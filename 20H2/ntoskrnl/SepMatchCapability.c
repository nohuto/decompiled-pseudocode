/*
 * XREFs of SepMatchCapability @ 0x14020569C
 * Callers:
 *     SepMaximumAccessCheck @ 0x140204FB0 (SepMaximumAccessCheck.c)
 *     SepNormalAccessCheck @ 0x140226B20 (SepNormalAccessCheck.c)
 *     SepMaximumAccessCheckEx @ 0x140373854 (SepMaximumAccessCheckEx.c)
 *     SepNormalAccessCheckEx @ 0x14037397C (SepNormalAccessCheckEx.c)
 * Callees:
 *     SepSidInTokenSidHash @ 0x1402057EC (SepSidInTokenSidHash.c)
 */

_BYTE *__fastcall SepMatchCapability(__int64 a1, int a2, __int64 a3, int a4, _BYTE *a5, _DWORD *a6)
{
  _BYTE *result; // rax
  char v9; // [rsp+20h] [rbp-28h]
  char v10; // [rsp+28h] [rbp-20h]
  char v11; // [rsp+30h] [rbp-18h]

  v11 = 0;
  v10 = 0;
  v9 = 1;
  result = (_BYTE *)SepSidInTokenSidHash(a1 + 808, 0LL, a3, 0LL, v9, v10, v11);
  if ( (_BYTE)result )
  {
    *a6 |= a4 & a2;
    result = a5;
    *a5 = 1;
  }
  return result;
}
