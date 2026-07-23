/*
 * XREFs of _LdrpInsertModuleToIndexLockHeld@8 @ 0x4B2CC82C
 * Callers:
 *     _LdrpMapDllWithSectionHandle@8 @ 0x4B2D1302 (_LdrpMapDllWithSectionHandle@8.c)
 *     _LdrpInsertModuleToIndex@8 @ 0x4B2EBA2D (_LdrpInsertModuleToIndex@8.c)
 * Callees:
 *     _RtlRbInsertNodeEx@16 @ 0x4B2CEB50 (_RtlRbInsertNodeEx@16.c)
 */

BOOLEAN __fastcall LdrpInsertModuleToIndexLockHeld(int a1, int a2)
{
  _RTL_BALANCED_NODE *v3; // edi
  _RTL_BALANCED_NODE *v4; // ebx
  _RTL_BALANCED_NODE *Root; // ecx
  _RTL_BALANCED_NODE *v6; // eax
  _RTL_BALANCED_NODE *v7; // ecx
  _RTL_BALANCED_NODE *v8; // eax
  BOOLEAN result; // al
  BOOLEAN Right; // [esp+Ch] [ebp-4h]
  BOOLEAN Righta; // [esp+Ch] [ebp-4h]

  v3 = *(_RTL_BALANCED_NODE **)(a2 + 8);
  *(_DWORD *)(a1 + 68) = v3;
  v4 = *(_RTL_BALANCED_NODE **)(a2 + 80);
  *(_DWORD *)(a1 + 32) = v4;
  Root = LdrpMappingInfoIndex.Root;
  if ( (*(_BYTE *)&LdrpMappingInfoIndex.0 & 1) != 0 && LdrpMappingInfoIndex.Root )
    Root = (_RTL_BALANCED_NODE *)((unsigned int)&LdrpMappingInfoIndex ^ (unsigned int)LdrpMappingInfoIndex.Root);
  Right = 0;
  if ( !Root )
    goto LABEL_19;
  while ( v3 < Root[-4].Children[0] || v3 <= Root[-4].Children[0] && v4 < Root[-7].Children[0] )
  {
    v6 = Root->Children[0];
    if ( (*(_BYTE *)&LdrpMappingInfoIndex.0 & 1) != 0 )
    {
      if ( !v6 )
        goto LABEL_17;
      v6 = (_RTL_BALANCED_NODE *)((unsigned int)Root ^ (unsigned int)v6);
    }
    if ( !v6 )
    {
LABEL_17:
      RtlRbInsertNodeEx(&LdrpMappingInfoIndex, Root, 0, (PRTL_BALANCED_NODE)(a1 + 116));
      goto LABEL_20;
    }
LABEL_12:
    Root = v6;
  }
  v6 = Root->Children[1];
  if ( (*(_BYTE *)&LdrpMappingInfoIndex.0 & 1) != 0 )
  {
    if ( !v6 )
      goto LABEL_18;
    v6 = (_RTL_BALANCED_NODE *)((unsigned int)Root ^ (unsigned int)v6);
  }
  if ( v6 )
    goto LABEL_12;
LABEL_18:
  Right = 1;
LABEL_19:
  RtlRbInsertNodeEx(&LdrpMappingInfoIndex, Root, Right, (PRTL_BALANCED_NODE)(a1 + 116));
LABEL_20:
  v7 = LdrpModuleBaseAddressIndex.Root;
  if ( (*(_BYTE *)&LdrpModuleBaseAddressIndex.0 & 1) != 0 )
  {
    if ( LdrpModuleBaseAddressIndex.Root )
      v7 = (_RTL_BALANCED_NODE *)((unsigned int)&LdrpModuleBaseAddressIndex ^ (unsigned int)LdrpModuleBaseAddressIndex.Root);
    else
      v7 = 0;
  }
  Righta = 0;
  if ( !v7 )
    goto LABEL_34;
  while ( 2 )
  {
    if ( (_RTL_BALANCED_NODE *)*(_DWORD *)(a1 + 24) < v7[-7].Children[1] )
    {
      v8 = v7->Children[0];
      if ( (*(_BYTE *)&LdrpModuleBaseAddressIndex.0 & 1) != 0 )
      {
        if ( !v8 )
          goto LABEL_32;
        v8 = (_RTL_BALANCED_NODE *)((unsigned int)v7 ^ (unsigned int)v8);
      }
      if ( !v8 )
      {
LABEL_32:
        result = RtlRbInsertNodeEx(&LdrpModuleBaseAddressIndex, v7, 0, (PRTL_BALANCED_NODE)(a1 + 104));
        goto LABEL_35;
      }
      goto LABEL_27;
    }
    v8 = v7->Children[1];
    if ( (*(_BYTE *)&LdrpModuleBaseAddressIndex.0 & 1) != 0 )
    {
      if ( !v8 )
        break;
      v8 = (_RTL_BALANCED_NODE *)((unsigned int)v7 ^ (unsigned int)v8);
    }
    if ( v8 )
    {
LABEL_27:
      v7 = v8;
      continue;
    }
    break;
  }
  Righta = 1;
LABEL_34:
  result = RtlRbInsertNodeEx(&LdrpModuleBaseAddressIndex, v7, Righta, (PRTL_BALANCED_NODE)(a1 + 104));
LABEL_35:
  *(_DWORD *)(a1 + 52) |= 0x80u;
  return result;
}
