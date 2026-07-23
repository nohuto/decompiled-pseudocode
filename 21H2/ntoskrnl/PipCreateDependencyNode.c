/*
 * XREFs of PipCreateDependencyNode @ 0x1407B65BC
 * Callers:
 *     IoResolveDependency @ 0x1403BF8D0 (IoResolveDependency.c)
 *     IoDuplicateDependency @ 0x14089D7D0 (IoDuplicateDependency.c)
 *     PipSetDependency @ 0x14089E154 (PipSetDependency.c)
 * Callees:
 *     PipAddBindingId @ 0x1407B6498 (PipAddBindingId.c)
 *     PipDeleteDependencyNode @ 0x1407CD820 (PipDeleteDependencyNode.c)
 *     ExAllocatePoolWithTag @ 0x1409B5160 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall PipCreateDependencyNode(__int64 a1)
{
  char *PoolWithTag; // rax
  __int64 v3; // rbx
  _QWORD *v4; // rax
  __int64 *v5; // rax
  __int64 v6; // rax

  PoolWithTag = (char *)ExAllocatePoolWithTag(NonPagedPoolNx, 0x60uLL, 0x53706E50u);
  v3 = (__int64)PoolWithTag;
  if ( PoolWithTag )
  {
    *((_DWORD *)PoolWithTag + 23) = 0;
    v4 = PoolWithTag + 56;
    v4[1] = v4;
    *v4 = v4;
    *(_QWORD *)(v3 + 40) = v3 + 32;
    *(_QWORD *)(v3 + 32) = v3 + 32;
    *(_QWORD *)(v3 + 24) = v3 + 16;
    *(_QWORD *)(v3 + 16) = v3 + 16;
    *(_QWORD *)(v3 + 80) = v3 + 72;
    *(_QWORD *)(v3 + 72) = v3 + 72;
    *(_DWORD *)(v3 + 88) = 0;
    *(_QWORD *)(v3 + 48) = 0LL;
    v5 = (__int64 *)qword_140C456C8;
    if ( *(__int64 **)qword_140C456C8 != &PiDependencyNodeListHead )
      __fastfail(3u);
    *(_QWORD *)v3 = &PiDependencyNodeListHead;
    *(_QWORD *)(v3 + 8) = v5;
    *v5 = v3;
    qword_140C456C8 = v3;
    if ( *(_DWORD *)a1 == 1 )
    {
      if ( PipAddBindingId(v3, *(const UNICODE_STRING **)(a1 + 8)) < 0 )
      {
        PipDeleteDependencyNode((PVOID)v3);
        return 0LL;
      }
    }
    else if ( !*(_DWORD *)a1 )
    {
      v6 = *(_QWORD *)(a1 + 8);
      ++*(_DWORD *)(v3 + 88);
      *(_QWORD *)(v3 + 48) = v6;
      *(_QWORD *)(*(_QWORD *)(v6 + 312) + 80LL) = v3;
    }
    ++*(_DWORD *)(v3 + 88);
  }
  return v3;
}
