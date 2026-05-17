/*
 * XREFs of _RtlpRemoveHeapFromUnprotectedList@4 @ 0x4B2AFAAC
 * Callers:
 *     _RtlProtectHeap@8 @ 0x4B2A9010 (_RtlProtectHeap@8.c)
 *     _RtlpMoveHeapBetweenLists@16 @ 0x4B2A914A (_RtlpMoveHeapBetweenLists@16.c)
 *     _RtlDestroyHeap@4 @ 0x4B2AF870 (_RtlDestroyHeap@4.c)
 * Callees:
 *     _RtlpUpdateHeapListIndex@8 @ 0x4B2AA905 (_RtlpUpdateHeapListIndex@8.c)
 */

unsigned int __thiscall RtlpRemoveHeapFromUnprotectedList(int this)
{
  int v1; // esi
  struct _PEB *v2; // edi
  unsigned __int16 v3; // cx
  unsigned int result; // eax
  int v5; // edx
  void **ProcessHeaps; // ecx
  void **v7; // ebx
  unsigned int v8; // eax
  int v9; // esi
  void **v10; // edi
  __int64 v11; // rax
  int v12; // ecx
  int updated; // eax
  struct _PEB *v15; // [esp+Ch] [ebp-Ch]

  v1 = this;
  v2 = NtCurrentPeb();
  v15 = v2;
  if ( *(_DWORD *)(this + 8) == -571548178 )
    v3 = *(_WORD *)(this + 20);
  else
    v3 = *(_WORD *)(this + 124);
  result = v2->NumberOfHeaps;
  if ( result )
  {
    if ( v3 )
    {
      v5 = v3;
      if ( v3 <= result )
      {
        ProcessHeaps = v2->ProcessHeaps;
        v7 = &ProcessHeaps[v5 - 1];
        if ( result != v5 )
        {
          v9 = result - v5;
          v10 = &ProcessHeaps[v5];
          do
          {
            LODWORD(v11) = *v10++;
            *v7 = (void *)v11;
            if ( *(_DWORD *)(v11 + 8) == -571548178 )
              v12 = *(unsigned __int16 *)(v11 + 20);
            else
              v12 = *(unsigned __int16 *)(v11 + 124);
            HIDWORD(v11) = v12 - 1;
            updated = RtlpUpdateHeapListIndex(v11, v12);
            if ( *(_DWORD *)(updated + 8) == -571548178 )
              --*(_WORD *)(updated + 20);
            else
              --*(_WORD *)(updated + 124);
            ++v7;
            --v9;
          }
          while ( v9 );
          v2 = v15;
          v1 = this;
          result = v15->NumberOfHeaps;
          ProcessHeaps = v15->ProcessHeaps;
        }
        v8 = result - 1;
        v2->NumberOfHeaps = v8;
        ProcessHeaps[v8] = 0;
        if ( *(_DWORD *)(v1 + 8) == -571548178 )
        {
          result = 0;
          *(_WORD *)(v1 + 20) = 0;
        }
        else
        {
          result = 0;
          *(_WORD *)(v1 + 124) = 0;
        }
      }
    }
  }
  return result;
}
