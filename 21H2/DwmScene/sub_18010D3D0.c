/*
 * XREFs of sub_18010D3D0 @ 0x18010D3D0
 * Callers:
 *     sub_18012FD32 @ 0x18012FD32 (sub_18012FD32.c)
 * Callees:
 *     sub_1800AB1D8 @ 0x1800AB1D8 (sub_1800AB1D8.c)
 */

__int64 __fastcall sub_18010D3D0(__int64 ***a1)
{
  __int64 **v1; // rcx
  __int64 result; // rax

  v1 = *a1;
  if ( v1 )
    return sub_1800AB1D8(v1);
  return result;
}
