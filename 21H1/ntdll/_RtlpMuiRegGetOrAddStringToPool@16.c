/*
 * XREFs of _RtlpMuiRegGetOrAddStringToPool@16 @ 0x4B2D4807
 * Callers:
 *     _RtlpMuiRegGetOrAddString@16 @ 0x4B2AD813 (_RtlpMuiRegGetOrAddString@16.c)
 *     _RtlpMuiRegGetInstalledLanguageIndexByName@16 @ 0x4B2D4753 (_RtlpMuiRegGetInstalledLanguageIndexByName@16.c)
 * Callees:
 *     _RtlpMuiRegGetStringIndexInPool@8 @ 0x4B2D48D8 (_RtlpMuiRegGetStringIndexInPool@8.c)
 *     _RtlULongLongToUInt@12 @ 0x4B2E4CC8 (_RtlULongLongToUInt@12.c)
 *     _memcpy @ 0x4B2F88B0 (_memcpy.c)
 */

int __fastcall RtlpMuiRegGetOrAddStringToPool(int a1, const unsigned __int16 *a2, char a3, unsigned int *a4)
{
  int StringIndexInPool; // ebx
  unsigned int v6; // kr00_4
  unsigned int v7; // edx
  int v9; // esi
  __int16 v10; // si
  size_t v11; // [esp-4h] [ebp-1Ch]
  int Size; // [esp+10h] [ebp-8h]

  StringIndexInPool = RtlpMuiRegGetStringIndexInPool();
  if ( a4 )
    *a4 = 0;
  if ( StringIndexInPool >= 0 )
    return StringIndexInPool;
  if ( !a1 || !a2 )
    return -1;
  v6 = wcslen(a2);
  v7 = v6 + 1;
  if ( v6 + 1 + *(unsigned __int16 *)(a1 + 10) > *(unsigned __int16 *)(a1 + 8) )
  {
    if ( a4 )
      *a4 = v7;
    return -1;
  }
  if ( !a3 )
    return -1;
  v9 = *(unsigned __int16 *)(a1 + 6);
  if ( (unsigned __int16)v9 >= *(_WORD *)(a1 + 4) || (int)RtlULongLongToUInt(2 * v7, (unsigned __int64)v7 >> 31) < 0 )
    return -1;
  LODWORD(v11) = Size;
  StringIndexInPool = v9;
  *(_WORD *)(a1 + 6) = v9 + 1;
  v10 = *(_WORD *)(a1 + 10);
  *(_WORD *)(a1 + 10) = v10 + 1;
  memcpy((void *)(*(_DWORD *)(a1 + 16) + 2 * v10), a2, v11);
  *(_WORD *)(a1 + 10) += v6 + 1;
  *(_WORD *)(*(_DWORD *)(a1 + 12) + 2 * StringIndexInPool) = v10;
  return StringIndexInPool;
}
