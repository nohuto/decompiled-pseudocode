/*
 * XREFs of _LdrpInsertModuleToIndexLockHeld@8 @ 0x4B2CC82C
 * Callers:
 *     _LdrpMapDllWithSectionHandle@8 @ 0x4B2D1302 (_LdrpMapDllWithSectionHandle@8.c)
 *     _LdrpInsertModuleToIndex@8 @ 0x4B2EBA2D (_LdrpInsertModuleToIndex@8.c)
 * Callees:
 *     _RtlRbInsertNodeEx@16 @ 0x4B2CEB50 (_RtlRbInsertNodeEx@16.c)
 */

int __fastcall LdrpInsertModuleToIndexLockHeld(_DWORD *a1, int a2)
{
  unsigned int v3; // edi
  unsigned int v4; // ebx
  unsigned int v5; // ecx
  unsigned int v6; // eax
  unsigned int v7; // ecx
  unsigned int v8; // eax
  int result; // eax
  char v10; // [esp+Ch] [ebp-4h]
  char v11; // [esp+Ch] [ebp-4h]

  v3 = *(_DWORD *)(a2 + 8);
  a1[17] = v3;
  v4 = *(_DWORD *)(a2 + 80);
  a1[8] = v4;
  v5 = LdrpMappingInfoIndex;
  if ( (dword_4B3A67B0 & 1) != 0 && LdrpMappingInfoIndex )
    v5 = (unsigned int)&LdrpMappingInfoIndex ^ LdrpMappingInfoIndex;
  v10 = 0;
  if ( !v5 )
    goto LABEL_19;
  while ( v3 < *(_DWORD *)(v5 - 48) || v3 <= *(_DWORD *)(v5 - 48) && v4 < *(_DWORD *)(v5 - 84) )
  {
    v6 = *(_DWORD *)v5;
    if ( (dword_4B3A67B0 & 1) != 0 )
    {
      if ( !v6 )
        goto LABEL_17;
      v6 ^= v5;
    }
    if ( !v6 )
    {
LABEL_17:
      RtlRbInsertNodeEx(&LdrpMappingInfoIndex, v5, 0, a1 + 29);
      goto LABEL_20;
    }
LABEL_12:
    v5 = v6;
  }
  v6 = *(_DWORD *)(v5 + 4);
  if ( (dword_4B3A67B0 & 1) != 0 )
  {
    if ( !v6 )
      goto LABEL_18;
    v6 ^= v5;
  }
  if ( v6 )
    goto LABEL_12;
LABEL_18:
  v10 = 1;
LABEL_19:
  RtlRbInsertNodeEx(&LdrpMappingInfoIndex, v5, v10, a1 + 29);
LABEL_20:
  v7 = LdrpModuleBaseAddressIndex;
  if ( (dword_4B3A67A8 & 1) != 0 )
  {
    if ( LdrpModuleBaseAddressIndex )
      v7 = (unsigned int)&LdrpModuleBaseAddressIndex ^ LdrpModuleBaseAddressIndex;
    else
      v7 = 0;
  }
  v11 = 0;
  if ( !v7 )
    goto LABEL_34;
  while ( 2 )
  {
    if ( a1[6] < *(_DWORD *)(v7 - 80) )
    {
      v8 = *(_DWORD *)v7;
      if ( (dword_4B3A67A8 & 1) != 0 )
      {
        if ( !v8 )
          goto LABEL_32;
        v8 ^= v7;
      }
      if ( !v8 )
      {
LABEL_32:
        result = RtlRbInsertNodeEx(&LdrpModuleBaseAddressIndex, v7, 0, a1 + 26);
        goto LABEL_35;
      }
      goto LABEL_27;
    }
    v8 = *(_DWORD *)(v7 + 4);
    if ( (dword_4B3A67A8 & 1) != 0 )
    {
      if ( !v8 )
        break;
      v8 ^= v7;
    }
    if ( v8 )
    {
LABEL_27:
      v7 = v8;
      continue;
    }
    break;
  }
  v11 = 1;
LABEL_34:
  result = RtlRbInsertNodeEx(&LdrpModuleBaseAddressIndex, v7, v11, a1 + 26);
LABEL_35:
  a1[13] |= 0x80u;
  return result;
}
