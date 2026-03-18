/*
 * XREFs of ParseLoad @ 0x1C0023210
 * Callers:
 *     <none>
 * Callees:
 *     HeapFree @ 0x1C0001F3C (HeapFree.c)
 *     PushCall @ 0x1C002176C (PushCall.c)
 *     PushScope @ 0x1C00227D8 (PushScope.c)
 *     NewObjOwner @ 0x1C00233C8 (NewObjOwner.c)
 *     AMLIApplyNamespaceOverride @ 0x1C00234A0 (AMLIApplyNamespaceOverride.c)
 *     _guard_dispatch_icall_nop @ 0x1C0031E80 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall ParseLoad(__int64 a1, __int64 a2, int a3)
{
  int v4; // ecx
  unsigned int v5; // edi
  __int64 v7; // rcx
  _QWORD *v8; // rcx
  int v10; // eax

  v4 = *(_DWORD *)(a2 + 16);
  v5 = a3;
  if ( (v4 & 0xF) != 0 )
  {
    if ( (*(_DWORD *)(a2 + 16) & 0xF) != 1 )
    {
      if ( (*(_DWORD *)(a2 + 16) & 0xF) != 2 )
      {
        if ( (*(_DWORD *)(a2 + 16) & 0xF) != 3 )
        {
          if ( (*(_DWORD *)(a2 + 16) & 0xF) != 4 )
            return v5;
          goto LABEL_9;
        }
LABEL_7:
        ++*(_DWORD *)(a2 + 16);
        v7 = *(_QWORD *)(a2 + 48);
        if ( (*(_DWORD *)(a2 + 16) & 0x10000) != 0 )
        {
          *(_WORD *)(v7 + 2) = 1;
          *(_QWORD *)(*(_QWORD *)(a2 + 48) + 16LL) = 0LL;
        }
        else
        {
          *(_WORD *)(v7 + 2) = 15;
          *(_QWORD *)(*(_QWORD *)(a2 + 48) + 16LL) = *(_QWORD *)(a2 + 40);
        }
LABEL_9:
        ++*(_DWORD *)(a2 + 16);
        v8 = *(_QWORD **)(a1 + 416);
        *(_QWORD *)(a1 + 416) = v8[1];
        HeapFree(v8);
        return v5;
      }
      *(_DWORD *)(a2 + 16) = v4 + 1;
      if ( a3 < 0 )
        *(_DWORD *)(a2 + 16) = (v4 + 1) | 0x10000;
      else
        AMLIApplyNamespaceOverride();
      v5 = ((__int64 (__fastcall *)(__int64, __int64, __int64))ghLoadTable)(18LL, 2LL, a1);
      if ( v5 != 259 )
        goto LABEL_7;
      return 32772;
    }
  }
  else
  {
    *(_DWORD *)(a2 + 16) = v4 + 1;
    v5 = NewObjOwner(gpheapGlobal, a2 + 40);
    if ( v5 )
    {
      v10 = *(_DWORD *)(a2 + 16);
      *(_QWORD *)(a2 + 40) = 0LL;
      *(_DWORD *)(a2 + 16) = (v10 | 0x10000) + 2;
      return v5;
    }
    v5 = ((__int64 (__fastcall *)(__int64, __int64, __int64))ghLoadTable)(18LL, 1LL, a1);
    if ( v5 == 259 )
      return 32772;
  }
  ++*(_DWORD *)(a2 + 16);
  if ( !*(_QWORD *)(a1 + 96) )
    v5 = PushCall((struct _SLIST_ENTRY *)a1, 0LL, a1 + 128);
  if ( !v5 )
  {
    qword_1C0082820 = *(_QWORD *)(a2 + 56) + 36LL;
    qword_1C0082828 = *(_QWORD *)(a2 + 56) + *(unsigned int *)(*(_QWORD *)(a2 + 56) + 4LL);
    return (unsigned int)PushScope(
                           a1,
                           *(_QWORD *)(a2 + 56) + 36LL,
                           *(_QWORD *)(a2 + 56) + *(unsigned int *)(*(_QWORD *)(a2 + 56) + 4LL),
                           *(_QWORD *)(a1 + 120),
                           *(_QWORD *)(a2 + 32),
                           *(_QWORD *)(a2 + 40),
                           gpheapGlobal,
                           a1 + 128);
  }
  return v5;
}
