/*
 * XREFs of _LdrpCheckForRetryLoading@8 @ 0x4B2DE632
 * Callers:
 *     _LdrpMinimalMapModule@8 @ 0x4B2D110F (_LdrpMinimalMapModule@8.c)
 *     _LdrpMapDllNtFileName@8 @ 0x4B2DE4D7 (_LdrpMapDllNtFileName@8.c)
 * Callees:
 *     _RtlLeaveCriticalSection@4 @ 0x4B2BE700 (_RtlLeaveCriticalSection@4.c)
 *     _RtlEnterCriticalSection@4 @ 0x4B2BFE90 (_RtlEnterCriticalSection@4.c)
 *     _RtlRbInsertNodeEx@16 @ 0x4B2CEB50 (_RtlRbInsertNodeEx@16.c)
 *     _LdrpCompareModuleName@8 @ 0x4B2EE4A3 (_LdrpCompareModuleName@8.c)
 */

char __fastcall LdrpCheckForRetryLoading(_DWORD *a1, char a2)
{
  char v2; // bl
  _RTL_BALANCED_NODE *Root; // esi
  int v4; // ecx
  unsigned int v5; // edi
  int v6; // ebx
  int v7; // eax
  unsigned int v8; // eax
  _RTL_BALANCED_NODE *v10; // eax
  _DWORD *v11; // eax
  _DWORD *v12; // ecx
  BOOLEAN Right[4]; // [esp+10h] [ebp-10h]
  BOOLEAN Righta; // [esp+10h] [ebp-10h]
  int v16; // [esp+14h] [ebp-Ch]
  int v17; // [esp+18h] [ebp-8h]

  v2 = 0;
  if ( !a1[24] && (a1[4] & 0x4100000) == 0 )
  {
    v16 = a1[8];
    RtlEnterCriticalSection(&LdrpWorkQueueLock);
    Root = LdrpRetryingModuleIndex.Root;
    v4 = *(_BYTE *)&LdrpRetryingModuleIndex.0 & 1;
    *(_DWORD *)Right = v4;
    if ( (*(_BYTE *)&LdrpRetryingModuleIndex.0 & 1) != 0 )
    {
      if ( LdrpRetryingModuleIndex.Root )
        v5 = (unsigned int)&LdrpRetryingModuleIndex ^ (unsigned int)LdrpRetryingModuleIndex.Root;
      else
        v5 = 0;
    }
    else
    {
      v5 = (unsigned int)LdrpRetryingModuleIndex.Root;
    }
    v17 = *(_BYTE *)&LdrpRetryingModuleIndex.0 & 1;
    if ( v5 )
    {
      v6 = *(_BYTE *)&LdrpRetryingModuleIndex.0 & 1;
      do
      {
        v7 = LdrpCompareModuleName(v16, v5);
        if ( v7 >= 0 )
        {
          if ( v7 <= 0 )
            break;
          v8 = *(_DWORD *)(v5 + 4);
        }
        else
        {
          v8 = *(_DWORD *)v5;
        }
        if ( v6 && v8 )
          v5 ^= v8;
        else
          v5 = v8;
      }
      while ( v5 );
      Root = LdrpRetryingModuleIndex.Root;
      v2 = 0;
      if ( v5 )
        goto LABEL_39;
      v4 = *(_DWORD *)Right;
    }
    if ( !a2 )
    {
LABEL_15:
      RtlLeaveCriticalSection(&LdrpWorkQueueLock);
      return v2;
    }
    if ( v4 )
    {
      if ( Root )
        Root = (_RTL_BALANCED_NODE *)((unsigned int)&LdrpRetryingModuleIndex ^ (unsigned int)Root);
      else
        Root = 0;
    }
    Righta = 0;
    if ( Root )
    {
      while ( 1 )
      {
        if ( (int)LdrpCompareModuleName(v16, Root) < 0 )
        {
          v10 = Root->Children[0];
          if ( v17 )
          {
            if ( !v10 )
              goto LABEL_36;
            v10 = (_RTL_BALANCED_NODE *)((unsigned int)Root ^ (unsigned int)v10);
          }
          if ( !v10 )
          {
LABEL_36:
            RtlRbInsertNodeEx(&LdrpRetryingModuleIndex, Root, 0, (PRTL_BALANCED_NODE)(v16 + 116));
            goto LABEL_39;
          }
        }
        else
        {
          v10 = Root->Children[1];
          if ( v17 )
          {
            if ( !v10 )
              goto LABEL_37;
            v10 = (_RTL_BALANCED_NODE *)((unsigned int)Root ^ (unsigned int)v10);
          }
          if ( !v10 )
          {
LABEL_37:
            Righta = 1;
            break;
          }
        }
        Root = v10;
      }
    }
    RtlRbInsertNodeEx(&LdrpRetryingModuleIndex, Root, Righta, (PRTL_BALANCED_NODE)(v16 + 116));
LABEL_39:
    a1[4] |= 0x100000u;
    v11 = a1 + 9;
    v12 = (_DWORD *)dword_4B3A5CC4;
    if ( *(int **)dword_4B3A5CC4 != &LdrpRetryQueue )
      __fastfail(3u);
    *v11 = &LdrpRetryQueue;
    v2 = 1;
    a1[10] = v12;
    *v12 = v11;
    dword_4B3A5CC4 = (int)(a1 + 9);
    goto LABEL_15;
  }
  return v2;
}
