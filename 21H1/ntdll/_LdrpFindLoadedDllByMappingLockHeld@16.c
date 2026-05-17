/*
 * XREFs of _LdrpFindLoadedDllByMappingLockHeld@16 @ 0x4B2CD468
 * Callers:
 *     _LdrpMapDllWithSectionHandle@8 @ 0x4B2D1302 (_LdrpMapDllWithSectionHandle@8.c)
 *     _LdrpFindLoadedDllByMapping@16 @ 0x4B2E5872 (_LdrpFindLoadedDllByMapping@16.c)
 * Callees:
 *     _RtlImageNtHeaderEx@20 @ 0x4B2BE540 (_RtlImageNtHeaderEx@20.c)
 *     _ZwAreMappedFilesTheSame@8 @ 0x4B2F3260 (_ZwAreMappedFilesTheSame@8.c)
 *     _memcmp @ 0x4B2F8860 (_memcmp.c)
 */

int __fastcall LdrpFindLoadedDllByMappingLockHeld(int a1, const void *a2, unsigned int *a3, _DWORD *a4)
{
  unsigned int v4; // eax
  _DWORD *v5; // esi
  unsigned int v6; // edi
  unsigned int v7; // ecx
  unsigned int v8; // ecx
  _DWORD *v10; // edi
  _DWORD *v11; // eax
  _DWORD **v12; // eax
  _DWORD *v13; // ecx
  _DWORD *i; // ecx
  unsigned int v15; // eax
  unsigned int v16; // eax
  void *Buf2; // [esp+8h] [ebp-4h] BYREF

  v4 = LdrpMappingInfoIndex;
  if ( (dword_4B3A67B0 & 1) != 0 && LdrpMappingInfoIndex )
    v4 = (unsigned int)&LdrpMappingInfoIndex ^ LdrpMappingInfoIndex;
  v5 = 0;
  if ( v4 )
  {
    v6 = *a3;
    while ( 1 )
    {
      if ( v6 < *(_DWORD *)(v4 - 48) )
        goto LABEL_11;
      if ( v6 <= *(_DWORD *)(v4 - 48) )
      {
        v7 = *(_DWORD *)(v4 - 84);
        if ( a3[1] < v7 )
          goto LABEL_11;
        if ( a3[1] <= v7 )
          break;
      }
      v8 = *(_DWORD *)(v4 + 4);
LABEL_12:
      if ( (dword_4B3A67B0 & 1) != 0 && v8 )
        v4 ^= v8;
      else
        v4 = v8;
      if ( !v4 )
        goto LABEL_15;
    }
    v5 = (_DWORD *)v4;
LABEL_11:
    v8 = *(_DWORD *)v4;
    goto LABEL_12;
  }
LABEL_15:
  while ( v5 )
  {
    v10 = v5 - 29;
    if ( RtlImageNtHeaderEx(3, *(v5 - 23), 0, 0, &Buf2) >= 0
      && !memcmp(a2, Buf2, 0x34u)
      && (int)ZwAreMappedFilesTheSame(v10[6], a1) >= 0 )
    {
      v11 = (_DWORD *)v10[20];
      if ( v11[3] != -1 && (*(_BYTE *)(*v11 - 32) & 0x20) == 0 )
        _InterlockedIncrement(v10 + 39);
      *a4 = v10;
      return v5 != 0 ? 0 : -1073741515;
    }
    v12 = (_DWORD **)v5[1];
    v13 = v5;
    if ( v12 )
    {
      v5 = (_DWORD *)v5[1];
      for ( i = *v12; i; i = (_DWORD *)*i )
        v5 = i;
    }
    else
    {
      while ( 1 )
      {
        v5 = (_DWORD *)(v5[2] & 0xFFFFFFFC);
        if ( !v5 || (_DWORD *)*v5 == v13 )
          break;
        v13 = v5;
      }
    }
    if ( !v5 )
      return v5 != 0 ? 0 : -1073741515;
    v15 = *(v5 - 12);
    if ( *a3 >= v15 && *a3 <= v15 )
    {
      v16 = *(v5 - 21);
      if ( a3[1] >= v16 && a3[1] <= v16 )
        continue;
    }
    v5 = 0;
  }
  return v5 != 0 ? 0 : -1073741515;
}
