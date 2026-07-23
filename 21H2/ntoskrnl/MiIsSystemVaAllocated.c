/*
 * XREFs of MiIsSystemVaAllocated @ 0x14053DB54
 * Callers:
 *     MmAllocateSecurePoolMemory @ 0x140545000 (MmAllocateSecurePoolMemory.c)
 *     MmFreeSecurePoolMemory @ 0x140545148 (MmFreeSecurePoolMemory.c)
 * Callees:
 *     MiSystemVaToDynamicBitmap @ 0x14023222C (MiSystemVaToDynamicBitmap.c)
 */

__int64 MiIsSystemVaAllocated()
{
  unsigned __int64 v0; // rdx
  __int64 v1; // r8
  __int64 *v2; // r10
  unsigned __int64 v3; // r9
  unsigned __int64 v4; // rcx
  __int64 result; // rax
  __int64 v6; // rdx
  __int64 *v7; // r8
  __int64 v8; // r10
  __int64 *v9; // r11
  bool v10; // zf

  v2 = MiSystemVaToDynamicBitmap(15);
  v3 = (v0 - v2[4]) >> 21;
  v4 = ((__int64)((((v0 + v1 - 1) >> 18) & 0x3FFFFFF8) - ((v0 >> 18) & 0x3FFFFFF8)) >> 3) + 1;
  if ( v3 >= *v2 )
    goto LABEL_2;
  if ( v4 > 1 )
  {
    if ( *v2 - v3 >= v4 )
    {
      v6 = v2[1];
      v7 = (__int64 *)(v6 + 8 * (v3 >> 6));
      v8 = *v7;
      v9 = (__int64 *)(v6 + 8 * ((v4 + v3 - 1) >> 6));
      if ( v7 == v9 )
      {
        v10 = ((0xFFFFFFFFFFFFFFFFuLL >> (64 - (unsigned __int8)v4) << v3) & v8) == 0xFFFFFFFFFFFFFFFFuLL >> (64 - (unsigned __int8)v4) << v3;
      }
      else
      {
        if ( ((-1LL << v3) & v8) != -1LL << v3 )
          goto LABEL_2;
        while ( ++v7 != v9 )
        {
          if ( *v7 != -1 )
            goto LABEL_2;
        }
        v10 = ((0xFFFFFFFFFFFFFFFFuLL >> ~((unsigned __int8)v4 + (unsigned __int8)v3 - 1)) & *v7) == 0xFFFFFFFFFFFFFFFFuLL >> ~((unsigned __int8)v4 + (unsigned __int8)v3 - 1);
      }
      LOBYTE(result) = v10;
      return (unsigned __int8)result;
    }
  }
  else if ( !((__int64)((((v0 + v1 - 1) >> 18) & 0x3FFFFFF8) - ((v0 >> 18) & 0x3FFFFFF8)) >> 3) )
  {
    LOBYTE(result) = _bittest64((const signed __int64 *)v2[1], v3);
    return (unsigned __int8)result;
  }
LABEL_2:
  LOBYTE(result) = 0;
  return (unsigned __int8)result;
}
