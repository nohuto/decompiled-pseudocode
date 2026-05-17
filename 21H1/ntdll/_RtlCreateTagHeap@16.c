/*
 * XREFs of _RtlCreateTagHeap@16 @ 0x4B2EA550
 * Callers:
 *     _TpInitializePackage@0 @ 0x4B2EA4C0 (_TpInitializePackage@0.c)
 *     _LdrpInitializeProcess@8 @ 0x4B32A2D0 (_LdrpInitializeProcess@8.c)
 *     _RtlDebugCreateTagHeap@16 @ 0x4B35F5CA (_RtlDebugCreateTagHeap@16.c)
 * Callees:
 *     _RtlLeaveCriticalSection@4 @ 0x4B2BE700 (_RtlLeaveCriticalSection@4.c)
 *     _RtlEnterCriticalSection@4 @ 0x4B2BFE90 (_RtlEnterCriticalSection@4.c)
 *     _RtlAllocateHeap@12 @ 0x4B2C5D40 (_RtlAllocateHeap@12.c)
 *     _RtlStringCbCopyW@12 @ 0x4B2D5C0F (_RtlStringCbCopyW@12.c)
 *     _RtlCreateTagHeap@16 @ 0x4B2EA550 (_RtlCreateTagHeap@16.c)
 *     __SEH_prolog4 @ 0x4B307AC4 (__SEH_prolog4.c)
 *     _RtlpAllocateTags@8 @ 0x4B3575E6 (_RtlpAllocateTags@8.c)
 *     _RtlDebugCreateTagHeap@16 @ 0x4B35F5CA (_RtlDebugCreateTagHeap@16.c)
 */

int __stdcall RtlCreateTagHeap(_DWORD *a1, int a2, _WORD *a3, __int16 *a4)
{
  _DWORD *v4; // ebx
  int v6; // edx
  int v7; // edx
  __int16 v8; // ax
  __int16 *v9; // edi
  __int16 *v10; // eax
  __int16 v11; // cx
  int Tags; // ecx
  _WORD *v13; // edx
  unsigned int v15; // edx
  unsigned int v16; // eax
  int v17; // edx
  int v18; // ecx
  int i; // [esp+20h] [ebp-3Ch]
  int v21; // [esp+24h] [ebp-38h]
  int v22; // [esp+30h] [ebp-2Ch]
  int v23; // [esp+38h] [ebp-24h]
  unsigned int v24; // [esp+38h] [ebp-24h]
  int v25; // [esp+3Ch] [ebp-20h]
  char v26; // [esp+43h] [ebp-19h]

  v4 = a1;
  v26 = 0;
  if ( (NtCurrentPeb()->NtGlobalFlag & 0x800) == 0 )
    return 0;
  if ( !RtlpGlobalTagHeap )
  {
    RtlpGlobalTagHeap = RtlAllocateHeap((int)NtCurrentPeb()->ProcessHeap, 8, 600);
    if ( !RtlpGlobalTagHeap )
      return 0;
  }
  if ( a1 && (a1[2] == -571548178 || (a1[17] & 0x1000000) != 0) )
    return 0;
  if ( !a1 )
  {
LABEL_13:
    v7 = 0;
    v8 = 33;
    v9 = a4;
    if ( *a4 == 33 )
    {
      v23 = (int)(a4 + 1);
      while ( 1 )
      {
        a4 = ++v9;
        if ( !v8 )
          break;
        v8 = *v9;
      }
    }
    else
    {
      v23 = 0;
    }
    v10 = v9;
    while ( 1 )
    {
      v11 = *v10;
      if ( !*v10 )
        break;
      while ( 1 )
      {
        ++v10;
        if ( !v11 )
          break;
        v11 = *v10;
      }
      ++v7;
    }
    if ( !v7 )
      goto LABEL_47;
    Tags = RtlpAllocateTags(a1);
    v25 = Tags;
    if ( !Tags )
      goto LABEL_47;
    v22 = 23;
    if ( *(_WORD *)(Tags + 12) )
    {
      if ( *(_WORD *)(Tags + 12) != 2048 )
        goto LABEL_32;
      RtlStringCbCopyW(Tags + 16, 0x2Eu, (int)L"GlobalTags");
    }
    else
    {
      if ( !v23 )
      {
LABEL_31:
        Tags += 64;
        v25 = Tags;
LABEL_32:
        v13 = a3;
        if ( !a3 )
          goto LABEL_39;
        while ( *v13++ )
          ;
        v15 = v13 - (a3 + 1);
        v24 = v15;
        if ( v15 )
        {
          if ( v15 < 0x13 )
          {
            v22 = 23 - v15;
            v16 = v15;
          }
          else
          {
            v16 = 0;
            v24 = 0;
          }
          v17 = v15 < 0x13 ? (unsigned int)a3 : 0;
        }
        else
        {
LABEL_39:
          v16 = 0;
          v17 = 0;
          v24 = 0;
        }
        for ( i = v17; ; v17 = i )
        {
          v4 = a1;
          if ( !*v9 )
            break;
          v18 = Tags + 16;
          v21 = v18;
          if ( v17 )
          {
            RtlStringCbCopyW(v18, 2 * v22, v17);
            v16 = v24;
            v18 = v21 + 2 * v24;
          }
          RtlStringCbCopyW(v18, 2 * (v22 - v16), (int)v9);
          while ( *v9++ )
            ;
          Tags = v25 + 64;
          v25 += 64;
          v16 = v24;
        }
        goto LABEL_47;
      }
      RtlStringCbCopyW(Tags + 16, 0x2Eu, v23);
    }
    Tags = v25;
    goto LABEL_31;
  }
  v6 = a1[17] | a2;
  if ( (v6 & 0x61000000) == 0 || (v6 & 0x10000000) != 0 )
  {
    if ( (v6 & 1) == 0 )
    {
      RtlEnterCriticalSection(a1[50]);
      v26 = 1;
    }
    goto LABEL_13;
  }
  RtlDebugCreateTagHeap(a3, a4);
LABEL_47:
  if ( v26 )
    RtlLeaveCriticalSection(v4[50]);
  return nullsub_6(a1, a2, a3, a4);
}
