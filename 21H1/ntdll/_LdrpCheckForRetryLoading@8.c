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
  unsigned int v3; // esi
  int v4; // ecx
  unsigned int v5; // edi
  int v6; // ebx
  int v7; // eax
  unsigned int v8; // eax
  unsigned int v10; // eax
  _DWORD *v11; // eax
  _DWORD *v12; // ecx
  int v14; // [esp+10h] [ebp-10h]
  bool v15; // [esp+10h] [ebp-10h]
  int v16; // [esp+14h] [ebp-Ch]
  int v17; // [esp+18h] [ebp-8h]

  v2 = 0;
  if ( !a1[24] && (a1[4] & 0x4100000) == 0 )
  {
    v16 = a1[8];
    RtlEnterCriticalSection((int)&LdrpWorkQueueLock);
    v3 = LdrpRetryingModuleIndex;
    v4 = dword_4B3A6708 & 1;
    v14 = v4;
    if ( (dword_4B3A6708 & 1) != 0 )
    {
      if ( LdrpRetryingModuleIndex )
        v5 = (unsigned int)&LdrpRetryingModuleIndex ^ LdrpRetryingModuleIndex;
      else
        v5 = 0;
    }
    else
    {
      v5 = LdrpRetryingModuleIndex;
    }
    v17 = dword_4B3A6708 & 1;
    if ( v5 )
    {
      v6 = dword_4B3A6708 & 1;
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
      v3 = LdrpRetryingModuleIndex;
      v2 = 0;
      if ( v5 )
        goto LABEL_39;
      v4 = v14;
    }
    if ( !a2 )
    {
LABEL_15:
      RtlLeaveCriticalSection((int)&LdrpWorkQueueLock);
      return v2;
    }
    if ( v4 )
    {
      if ( v3 )
        v3 ^= (unsigned int)&LdrpRetryingModuleIndex;
      else
        v3 = 0;
    }
    v15 = 0;
    if ( v3 )
    {
      while ( 1 )
      {
        if ( (int)LdrpCompareModuleName(v16, v3) < 0 )
        {
          v10 = *(_DWORD *)v3;
          if ( v17 )
          {
            if ( !v10 )
              goto LABEL_36;
            v10 ^= v3;
          }
          if ( !v10 )
          {
LABEL_36:
            RtlRbInsertNodeEx(&LdrpRetryingModuleIndex, v3, 0, v16 + 116);
            goto LABEL_39;
          }
        }
        else
        {
          v10 = *(_DWORD *)(v3 + 4);
          if ( v17 )
          {
            if ( !v10 )
              goto LABEL_37;
            v10 ^= v3;
          }
          if ( !v10 )
          {
LABEL_37:
            v15 = 1;
            break;
          }
        }
        v3 = v10;
      }
    }
    RtlRbInsertNodeEx(&LdrpRetryingModuleIndex, v3, v15, v16 + 116);
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
