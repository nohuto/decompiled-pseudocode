/*
 * XREFs of _RtlpQueryExtendedInformationAllHeaps@4 @ 0x4B358DD6
 * Callers:
 *     _RtlpQueryExtendedHeapInformation@12 @ 0x4B3589F0 (_RtlpQueryExtendedHeapInformation@12.c)
 * Callees:
 *     _RtlpHpAppCompatDontChangePolicy@0 @ 0x4B2ED850 (_RtlpHpAppCompatDontChangePolicy@0.c)
 *     @__security_check_cookie@4 @ 0x4B2F4B20 (@__security_check_cookie@4.c)
 *     _memset @ 0x4B2F8F30 (_memset.c)
 *     _RtlpEnumProcessHeaps@12 @ 0x4B35791E (_RtlpEnumProcessHeaps@12.c)
 */

int __thiscall RtlpQueryExtendedInformationAllHeaps(_DWORD *this)
{
  int v2; // esi
  int (__thiscall *v3)(_DWORD, _DWORD *, int); // ecx
  size_t v5; // [esp-4h] [ebp-8Ch]
  int v6; // [esp-4h] [ebp-8Ch]
  _DWORD v7[26]; // [esp+10h] [ebp-78h] BYREF
  int v8; // [esp+78h] [ebp-10h] BYREF
  int v9; // [esp+7Ch] [ebp-Ch]
  int v10; // [esp+80h] [ebp-8h]

  if ( *this != 0x80000000 && (!*this || *this > 5u) )
    return -1073741811;
  RtlpEnumProcessHeaps(RtlpLockUlockAllHeapsCallback, 1, 1);
  if ( *this == 0x80000000 )
    goto LABEL_9;
  v8 = 0;
  v9 = 0;
  v10 = 0;
  v2 = RtlpEnumProcessHeaps((int (__stdcall *)(void *, int))RtlpHeapQueryTotalReserveSize, (int)&v8, 3);
  if ( v2 >= 0 )
  {
    LODWORD(v5) = 80;
    memset(&v7[5], 0, v5);
    v3 = (int (__thiscall *)(_DWORD, _DWORD *, int))this[1];
    v7[4] = v10;
    v6 = this[2];
    v7[2] = v8;
    v7[3] = v9;
    v7[0] = 1;
    v7[1] = 24;
    v2 = v3(v3, v7, v6);
    if ( v2 >= 0 && *this >= 2u )
LABEL_9:
      v2 = RtlpEnumProcessHeaps((int (__stdcall *)(void *, int))RtlpQueryExtendedInformationHeap, (int)this, 3);
  }
  RtlpEnumProcessHeaps(RtlpLockUlockAllHeapsCallback, 0, 1);
  return v2;
}
