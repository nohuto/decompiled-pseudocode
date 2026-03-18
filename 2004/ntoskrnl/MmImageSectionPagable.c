/*
 * XREFs of MmImageSectionPagable @ 0x1406A87EC
 * Callers:
 *     MmResetDriverPaging @ 0x1406A8720 (MmResetDriverPaging.c)
 *     MiSnapDriverRange @ 0x1407494A8 (MiSnapDriverRange.c)
 *     sub_140A18FE4 @ 0x140A18FE4 (sub_140A18FE4.c)
 *     sub_140A19EE4 @ 0x140A19EE4 (sub_140A19EE4.c)
 *     MiLockPagableSections @ 0x140A52934 (MiLockPagableSections.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MmImageSectionPagable(__int64 a1)
{
  __int64 result; // rax
  char v2; // dl

  result = 0LL;
  if ( *(_DWORD *)a1 == 1633969454 )
    return 1LL;
  if ( *(_DWORD *)a1 == 1162297680 )
  {
    v2 = *(_BYTE *)(a1 + 4);
    result = 1LL;
    if ( v2 == 75 )
    {
      if ( *(_BYTE *)(a1 + 5) == 68 )
        return (unsigned __int8)KdPageDebuggerSection;
    }
    else if ( v2 == 86 && *(_BYTE *)(a1 + 5) == 82 && *(_BYTE *)(a1 + 6) == 70 )
    {
      return (MiFlags & 1) == 0;
    }
  }
  return result;
}
