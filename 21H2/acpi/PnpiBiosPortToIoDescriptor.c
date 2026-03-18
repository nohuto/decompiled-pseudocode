/*
 * XREFs of PnpiBiosPortToIoDescriptor @ 0x1C0098AA8
 * Callers:
 *     PnpBiosResourcesToNtResources @ 0x1C009832C (PnpBiosResourcesToNtResources.c)
 * Callees:
 *     PnpiUpdateResourceList @ 0x1C0098B40 (PnpiUpdateResourceList.c)
 */

__int64 __fastcall PnpiBiosPortToIoDescriptor(__int64 a1, __int64 a2, unsigned int a3, char a4)
{
  __int64 result; // rax
  __int64 v6; // rdx
  __int64 v7; // [rsp+30h] [rbp+8h] BYREF

  v7 = 0LL;
  if ( (a4 & 1) == 0 && *(_BYTE *)(a1 + 7) )
  {
    result = PnpiUpdateResourceList(a2 + 8LL * a3, &v7);
    if ( (int)result < 0 )
      return result;
    v6 = v7;
    *(_WORD *)(v7 + 1) = 257;
    *(_WORD *)(v6 + 4) = 1;
    *(_DWORD *)(v6 + 8) = *(unsigned __int8 *)(a1 + 7);
    *(_DWORD *)(v6 + 16) = *(unsigned __int16 *)(a1 + 2);
    *(_DWORD *)(v6 + 24) = *(unsigned __int8 *)(a1 + 7) - 1 + *(unsigned __int16 *)(a1 + 4);
    *(_DWORD *)(v6 + 12) = *(unsigned __int8 *)(a1 + 6);
    *(_WORD *)(v6 + 4) |= (*(_BYTE *)(a1 + 1) & 1) != 0 ? 16 : 4;
  }
  return 0LL;
}
