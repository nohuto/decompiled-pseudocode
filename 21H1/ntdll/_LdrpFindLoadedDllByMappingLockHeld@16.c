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

int __userpurge LdrpFindLoadedDllByMappingLockHeld@<eax>(
        const void *a1@<edx>,
        void *a2@<ecx>,
        int a3@<edi>,
        _RTL_BALANCED_NODE **a4,
        _RTL_BALANCED_NODE ***a5)
{
  _RTL_BALANCED_NODE *Root; // eax
  _RTL_BALANCED_NODE *v6; // esi
  _RTL_BALANCED_NODE *v7; // edi
  _RTL_BALANCED_NODE *v8; // ecx
  _RTL_BALANCED_NODE *v9; // ecx
  _RTL_BALANCED_NODE **v11; // edi
  _RTL_BALANCED_NODE *v12; // eax
  _RTL_BALANCED_NODE *v13; // eax
  _RTL_BALANCED_NODE *v14; // ecx
  _RTL_BALANCED_NODE *i; // ecx
  _RTL_BALANCED_NODE *v16; // eax
  _RTL_BALANCED_NODE *v17; // eax
  size_t v18; // [esp-10h] [ebp-1Ch]
  PIMAGE_NT_HEADERS OutHeaders; // [esp+8h] [ebp-4h] BYREF

  Root = LdrpMappingInfoIndex.Root;
  if ( (*(_BYTE *)&LdrpMappingInfoIndex.0 & 1) != 0 && LdrpMappingInfoIndex.Root )
    Root = (_RTL_BALANCED_NODE *)((unsigned int)&LdrpMappingInfoIndex ^ (unsigned int)LdrpMappingInfoIndex.Root);
  v6 = 0;
  HIDWORD(v18) = a3;
  if ( Root )
  {
    v7 = *a4;
    while ( 1 )
    {
      if ( v7 < Root[-4].Children[0] )
        goto LABEL_11;
      if ( v7 <= Root[-4].Children[0] )
      {
        v8 = Root[-7].Children[0];
        if ( a4[1] < v8 )
          goto LABEL_11;
        if ( a4[1] <= v8 )
          break;
      }
      v9 = Root->Children[1];
LABEL_12:
      if ( (*(_BYTE *)&LdrpMappingInfoIndex.0 & 1) != 0 && v9 )
        Root = (_RTL_BALANCED_NODE *)((unsigned int)v9 ^ (unsigned int)Root);
      else
        Root = v9;
      if ( !Root )
        goto LABEL_15;
    }
    v6 = Root;
LABEL_11:
    v9 = Root->Children[0];
    goto LABEL_12;
  }
LABEL_15:
  while ( v6 )
  {
    v11 = &v6[-10].Children[1];
    if ( RtlImageNtHeaderEx(3u, v6[-8].Children[1], 0LL, &OutHeaders) >= 0 )
    {
      LODWORD(v18) = 52;
      if ( !memcmp(a1, OutHeaders, v18) && ZwAreMappedFilesTheSame(v11[6], a2) >= 0 )
      {
        v12 = v11[20];
        if ( v12[1].Children[0] != (_RTL_BALANCED_NODE *)-1 && ((int)v12->Children[0][-3].Right & 0x20) == 0 )
          _InterlockedIncrement((volatile signed __int32 *)v11 + 39);
        *a5 = v11;
        return v6 != 0 ? 0 : -1073741515;
      }
    }
    v13 = v6->Children[1];
    v14 = v6;
    if ( v13 )
    {
      v6 = v6->Children[1];
      for ( i = v13->Children[0]; i; i = i->Children[0] )
        v6 = i;
    }
    else
    {
      while ( 1 )
      {
        v6 = (_RTL_BALANCED_NODE *)(v6->ParentValue & 0xFFFFFFFC);
        if ( !v6 || v6->Children[0] == v14 )
          break;
        v14 = v6;
      }
    }
    if ( !v6 )
      return v6 != 0 ? 0 : -1073741515;
    v16 = v6[-4].Children[0];
    if ( *a4 >= v16 && *a4 <= v16 )
    {
      v17 = v6[-7].Children[0];
      if ( a4[1] >= v17 && a4[1] <= v17 )
        continue;
    }
    v6 = 0;
  }
  return v6 != 0 ? 0 : -1073741515;
}
