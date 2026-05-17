/*
 * XREFs of _RtlpValidateHeapEntry@12 @ 0x4B2A74FF
 * Callers:
 *     _RtlValidateHeap@12 @ 0x4B2A7420 (_RtlValidateHeap@12.c)
 *     _RtlDebugFreeHeap@12 @ 0x4B35F758 (_RtlDebugFreeHeap@12.c)
 *     _RtlDebugGetUserInfoHeap@20 @ 0x4B35FA2C (_RtlDebugGetUserInfoHeap@20.c)
 *     _RtlDebugReAllocateHeap@16 @ 0x4B35FC56 (_RtlDebugReAllocateHeap@16.c)
 *     _RtlDebugSetUserFlagsHeap@20 @ 0x4B36015A (_RtlDebugSetUserFlagsHeap@20.c)
 *     _RtlDebugSetUserValueHeap@16 @ 0x4B3602B5 (_RtlDebugSetUserValueHeap@16.c)
 *     _RtlDebugSizeHeap@12 @ 0x4B3603F5 (_RtlDebugSizeHeap@12.c)
 * Callees:
 *     _DbgPrint @ 0x4B2AB8D0 (_DbgPrint.c)
 *     _RtlpCheckBusyBlockTail@8 @ 0x4B35D48C (_RtlpCheckBusyBlockTail@8.c)
 */

char __fastcall RtlpValidateHeapEntry(unsigned int a1, unsigned int a2, const char *a3)
{
  _DWORD *v4; // esi
  char v5; // al
  unsigned __int8 v6; // al
  unsigned int v7; // eax
  unsigned int v8; // eax
  _DWORD *i; // eax
  int v11; // ecx

  v4 = (_DWORD *)a1;
  if ( a2 )
  {
    if ( (a2 & 7) == 0 )
    {
      v5 = *(_BYTE *)(a2 + 7);
      if ( (v5 & 0x3F) != 0 )
      {
        if ( v5 < 0 )
        {
          if ( *(_BYTE *)(a1 + 234) == 2 )
            v11 = *(_DWORD *)(a1 + 228);
          else
            v11 = 0;
          if ( v11 )
            return 1;
        }
        else if ( !*(_DWORD *)(a1 + 76)
               || (unsigned int)(*(_DWORD *)a2 ^ *(_DWORD *)(a1 + 80)) >> 24 == ((unsigned __int8)(*(_BYTE *)a2 ^ *(_BYTE *)(a1 + 80)) ^ (unsigned __int8)(((unsigned __int16)(*(_WORD *)a2 ^ *(_WORD *)(a1 + 80)) >> 8) ^ ((unsigned int)(*(_DWORD *)a2 ^ *(_DWORD *)(a1 + 80)) >> 16))) )
        {
          if ( *(_BYTE *)(a2 + 7) != 4 )
          {
            v6 = *(_BYTE *)(a2 + 6);
            if ( v6 )
              a1 = (a2 & 0xFFFF0000) - (v6 << 16) + 0x10000;
            if ( !a1 || *(_DWORD **)(a1 + 24) != v4 || a2 < *(_DWORD *)(a1 + 36) || a2 >= *(_DWORD *)(a1 + 40) )
              goto LABEL_36;
            goto LABEL_14;
          }
          if ( (a2 & 0xFFF) == 0x18 )
          {
LABEL_14:
            if ( v4[19] )
            {
              v7 = *(_DWORD *)a2;
              if ( (*(_DWORD *)a2 & v4[19]) != 0 )
                v7 ^= v4[20];
              v8 = HIWORD(v7);
            }
            else
            {
              LOBYTE(v8) = *(_BYTE *)(a2 + 2);
            }
            if ( (v8 & 4) != 0 && !(unsigned __int8)RtlpCheckBusyBlockTail(v4, a2) )
              goto LABEL_36;
            if ( *(_BYTE *)(a2 + 7) != 4 )
            {
              for ( i = (_DWORD *)v4[41]; i != v4 + 41; i = (_DWORD *)*i )
              {
                if ( a2 >= i[5] && a2 < i[6] )
                  return 1;
              }
              goto LABEL_36;
            }
            return 1;
          }
        }
      }
    }
  }
LABEL_36:
  if ( NtCurrentPeb()->Ldr )
    DbgPrint("HEAP[%wZ]: ", &NtCurrentPeb()->Ldr->InLoadOrderModuleList.Flink[5].Blink);
  else
    DbgPrint("HEAP: ");
  DbgPrint("Invalid address specified to %s( %p, %p )\n", a3, v4, (const void *)(a2 + 8));
  if ( NtCurrentPeb()->BeingDebugged )
  {
    __debugbreak();
    RtlpHeapInvalidBreakPoint = 0;
  }
  return 0;
}
