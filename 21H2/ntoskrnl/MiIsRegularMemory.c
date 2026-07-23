/*
 * XREFs of MiIsRegularMemory @ 0x140A58070
 * Callers:
 *     MxMovePageTables @ 0x140A579B4 (MxMovePageTables.c)
 *     MxCreatePfns @ 0x140A57C60 (MxCreatePfns.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MiIsRegularMemory(__int64 a1, unsigned __int64 a2)
{
  __int64 v2; // r11
  __int64 v3; // r8
  unsigned __int64 v4; // rcx
  unsigned __int64 v6; // r10
  unsigned __int64 v7; // rcx
  unsigned __int64 v8; // rax
  __int64 v9; // rcx

  v2 = a1 + 32;
  v3 = *(_QWORD *)(a1 + 32);
  if ( MxPfnMemoryDescriptorCache )
  {
    v4 = *(_QWORD *)(MxPfnMemoryDescriptorCache + 24);
    if ( a2 >= v4 )
    {
      if ( a2 < *(_QWORD *)(MxPfnMemoryDescriptorCache + 32) + v4 )
        return 1LL;
      v3 = *(_QWORD *)MxPfnMemoryDescriptorCache;
    }
  }
  if ( !MxNonPfnMemoryDescriptorCache )
    goto LABEL_14;
  v6 = *(_QWORD *)(MxNonPfnMemoryDescriptorCache + 24);
  if ( a2 < v6 )
    goto LABEL_14;
  if ( a2 >= v6 + *(_QWORD *)(MxNonPfnMemoryDescriptorCache + 32) )
  {
    if ( v6 > *(_QWORD *)(v3 + 24) )
      v3 = *(_QWORD *)MxNonPfnMemoryDescriptorCache;
LABEL_14:
    while ( v3 != v2 )
    {
      v7 = *(_QWORD *)(v3 + 24);
      if ( a2 < v7 )
        break;
      if ( a2 < *(_QWORD *)(v3 + 32) + v7 )
      {
        v8 = *(_DWORD *)(v3 + 16) & 0x3FFFFFFF;
        if ( (unsigned int)v8 > 0x28 || (v9 = 0x1C5C0C00048LL, !_bittest64(&v9, v8)) )
        {
          MxPfnMemoryDescriptorCache = v3;
          return 1LL;
        }
        MxNonPfnMemoryDescriptorCache = v3;
        return 0LL;
      }
      v3 = *(_QWORD *)v3;
    }
  }
  return 0LL;
}
