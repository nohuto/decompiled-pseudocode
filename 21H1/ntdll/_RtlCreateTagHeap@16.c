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

ULONG __cdecl RtlCreateTagHeap(PVOID HeapHandle, ULONG Flags, PWSTR TagPrefix, PWSTR TagNames)
{
  PRTL_CRITICAL_SECTION *v4; // ebx
  ULONG v6; // edx
  int v7; // edx
  WCHAR v8; // ax
  WCHAR *v9; // edi
  WCHAR *v10; // eax
  WCHAR v11; // cx
  int Tags; // ecx
  PWSTR v13; // edx
  unsigned int v15; // edx
  unsigned int v16; // eax
  PWSTR v17; // edx
  int v18; // ecx
  SIZE_T v20; // [esp-4h] [ebp-60h]
  WCHAR *i; // [esp+20h] [ebp-3Ch]
  int v22; // [esp+24h] [ebp-38h]
  int v23; // [esp+30h] [ebp-2Ch]
  PWSTR v24; // [esp+38h] [ebp-24h]
  unsigned int v25; // [esp+38h] [ebp-24h]
  int v26; // [esp+3Ch] [ebp-20h]
  char v27; // [esp+43h] [ebp-19h]

  v4 = (PRTL_CRITICAL_SECTION *)HeapHandle;
  v27 = 0;
  if ( (NtCurrentPeb()->NtGlobalFlag & 0x800) == 0 )
    return 0;
  if ( !RtlpGlobalTagHeap )
  {
    LODWORD(v20) = 600;
    RtlpGlobalTagHeap = (int)RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 8u, v20);
    if ( !RtlpGlobalTagHeap )
      return 0;
  }
  if ( HeapHandle && (*((_DWORD *)HeapHandle + 2) == -571548178 || (*((_DWORD *)HeapHandle + 17) & 0x1000000) != 0) )
    return 0;
  if ( !HeapHandle )
  {
LABEL_13:
    v7 = 0;
    v8 = 33;
    v9 = TagNames;
    if ( *TagNames == 33 )
    {
      v24 = TagNames + 1;
      while ( 1 )
      {
        TagNames = ++v9;
        if ( !v8 )
          break;
        v8 = *v9;
      }
    }
    else
    {
      v24 = 0;
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
    Tags = RtlpAllocateTags(HeapHandle);
    v26 = Tags;
    if ( !Tags )
      goto LABEL_47;
    v23 = 23;
    if ( *(_WORD *)(Tags + 12) )
    {
      if ( *(_WORD *)(Tags + 12) != 2048 )
        goto LABEL_32;
      RtlStringCbCopyW(Tags + 16, 0x2Eu, (int)L"GlobalTags");
    }
    else
    {
      if ( !v24 )
      {
LABEL_31:
        Tags += 64;
        v26 = Tags;
LABEL_32:
        v13 = TagPrefix;
        if ( !TagPrefix )
          goto LABEL_39;
        while ( *v13++ )
          ;
        v15 = v13 - (TagPrefix + 1);
        v25 = v15;
        if ( v15 )
        {
          if ( v15 < 0x13 )
          {
            v23 = 23 - v15;
            v16 = v15;
          }
          else
          {
            v16 = 0;
            v25 = 0;
          }
          v17 = v15 < 0x13 ? TagPrefix : 0;
        }
        else
        {
LABEL_39:
          v16 = 0;
          v17 = 0;
          v25 = 0;
        }
        for ( i = v17; ; v17 = i )
        {
          v4 = (PRTL_CRITICAL_SECTION *)HeapHandle;
          if ( !*v9 )
            break;
          v18 = Tags + 16;
          v22 = v18;
          if ( v17 )
          {
            RtlStringCbCopyW(v18, 2 * v23, (int)v17);
            v16 = v25;
            v18 = v22 + 2 * v25;
          }
          RtlStringCbCopyW(v18, 2 * (v23 - v16), (int)v9);
          while ( *v9++ )
            ;
          Tags = v26 + 64;
          v26 += 64;
          v16 = v25;
        }
        goto LABEL_47;
      }
      RtlStringCbCopyW(Tags + 16, 0x2Eu, (int)v24);
    }
    Tags = v26;
    goto LABEL_31;
  }
  v6 = *((_DWORD *)HeapHandle + 17) | Flags;
  if ( (v6 & 0x61000000) == 0 || (v6 & 0x10000000) != 0 )
  {
    if ( (v6 & 1) == 0 )
    {
      RtlEnterCriticalSection(*((PRTL_CRITICAL_SECTION *)HeapHandle + 50));
      v27 = 1;
    }
    goto LABEL_13;
  }
  RtlDebugCreateTagHeap(TagPrefix, TagNames);
LABEL_47:
  if ( v27 )
    RtlLeaveCriticalSection(v4[50]);
  return nullsub_6(HeapHandle, Flags, TagPrefix, TagNames);
}
