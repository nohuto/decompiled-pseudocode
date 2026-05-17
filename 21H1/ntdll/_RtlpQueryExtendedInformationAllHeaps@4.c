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
  int v5; // [esp-4h] [ebp-8Ch]
  _DWORD v6[26]; // [esp+10h] [ebp-78h] BYREF
  int v7; // [esp+78h] [ebp-10h] BYREF
  int v8; // [esp+7Ch] [ebp-Ch]
  int v9; // [esp+80h] [ebp-8h]

  if ( *this != 0x80000000 && (!*this || *this > 5u) )
    return -1073741811;
  RtlpEnumProcessHeaps((int (__stdcall *)(void *, int))RtlpLockUlockAllHeapsCallback, 1, 1);
  if ( *this == 0x80000000 )
    goto LABEL_9;
  v7 = 0;
  v8 = 0;
  v9 = 0;
  v2 = RtlpEnumProcessHeaps((int (__stdcall *)(void *, int))RtlpHeapQueryTotalReserveSize, (int)&v7, 3);
  if ( v2 >= 0 )
  {
    memset(&v6[5], 0, 0x50u);
    v3 = (int (__thiscall *)(_DWORD, _DWORD *, int))this[1];
    v6[4] = v9;
    v5 = this[2];
    v6[2] = v7;
    v6[3] = v8;
    v6[0] = 1;
    v6[1] = 24;
    v2 = v3(v3, v6, v5);
    if ( v2 >= 0 && *this >= 2u )
LABEL_9:
      v2 = RtlpEnumProcessHeaps((int (__stdcall *)(void *, int))RtlpQueryExtendedInformationHeap, (int)this, 3);
  }
  RtlpEnumProcessHeaps((int (__stdcall *)(void *, int))RtlpLockUlockAllHeapsCallback, 0, 1);
  return v2;
}
