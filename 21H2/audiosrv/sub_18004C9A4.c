/*
 * XREFs of sub_18004C9A4 @ 0x18004C9A4
 * Callers:
 *     sub_18004C944 @ 0x18004C944 (sub_18004C944.c)
 * Callees:
 *     sub_18004BD84 @ 0x18004BD84 (sub_18004BD84.c)
 *     sub_1800CA660 @ 0x1800CA660 (sub_1800CA660.c)
 */

__int64 __fastcall sub_18004C9A4(__int64 a1)
{
  int Pointer; // eax
  unsigned int v2; // ebx
  _UNKNOWN *retaddr; // [rsp+28h] [rbp+0h]

  Pointer = (unsigned int)NdrClientCall3((MIDL_STUBLESS_PROXY_INFO *)&pProxyInfo, 0, 0LL, a1).Pointer;
  v2 = Pointer;
  if ( Pointer >= 0 )
    return 0LL;
  sub_18004BD84((int)retaddr, 210, (int)"avcore\\audiocore\\server\\lib\\audioengineutil\\adgprocess.cpp", Pointer);
  return v2;
}
