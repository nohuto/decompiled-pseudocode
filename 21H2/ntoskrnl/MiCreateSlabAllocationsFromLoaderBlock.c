/*
 * XREFs of MiCreateSlabAllocationsFromLoaderBlock @ 0x140A574C0
 * Callers:
 *     MiInitSystem @ 0x140A54E5C (MiInitSystem.c)
 * Callees:
 *     VslpEnterIumSecureMode @ 0x1402840D0 (VslpEnterIumSecureMode.c)
 *     MiGetSlabAllocator @ 0x14029959C (MiGetSlabAllocator.c)
 *     __security_check_cookie @ 0x1403D05D0 (__security_check_cookie.c)
 *     KeBugCheckEx @ 0x1403FE0D0 (KeBugCheckEx.c)
 *     memset @ 0x140414300 (memset.c)
 *     MiCreateBootSlabEntries @ 0x140A508C0 (MiCreateBootSlabEntries.c)
 */

__int64 __fastcall MiCreateSlabAllocationsFromLoaderBlock(__int64 a1)
{
  int BootSlabEntries; // ecx
  __int64 **v3; // rdi
  __int64 SlabAllocator; // rsi
  __int64 *i; // rbx
  int v6; // ecx
  ULONG_PTR v7; // rdx
  ULONG_PTR v8; // rcx
  _QWORD v9[14]; // [rsp+30h] [rbp-88h] BYREF

  if ( (dword_140C50DC4 & 8) != 0 )
  {
    v3 = (__int64 **)(a1 + 32);
    SlabAllocator = MiGetSlabAllocator((__int64)&MiSystemPartition, 0, 24);
    for ( i = *v3; i != (__int64 *)v3; i = (__int64 *)*i )
    {
      v6 = *((_DWORD *)i + 4);
      if ( v6 == 29 || v6 == 36 )
      {
        v7 = i[4];
        v8 = i[3];
        if ( ((v8 | v7) & 0x1FF) != 0 || !v8 || !v7 || v7 + v8 < v8 || v7 + v8 - 1 > 0xFFFFFFFFFLL )
          KeBugCheckEx(0x1Au, 0x3030310uLL, v8, v7, 0LL);
        BootSlabEntries = MiCreateBootSlabEntries(SlabAllocator, i[3], i[4], 0);
        if ( BootSlabEntries < 0 )
          return (unsigned int)BootSlabEntries;
      }
    }
  }
  BootSlabEntries = 0;
  if ( (MiFlags & 0x8000) != 0 )
  {
    memset(v9, 0, 0x68uLL);
    v9[1] = ((unsigned int)dword_140C50DC4 >> 3) & 1;
    return (unsigned int)VslpEnterIumSecureMode(2u, 219, 0, (__int64)v9);
  }
  return (unsigned int)BootSlabEntries;
}
