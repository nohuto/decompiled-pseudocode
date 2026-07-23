/*
 * XREFs of PnpLogDeviceConflictingResource @ 0x1407D0934
 * Callers:
 *     IopTestConfiguration @ 0x140752A14 (IopTestConfiguration.c)
 * Callees:
 *     memset @ 0x140414300 (memset.c)
 *     ExAllocatePoolWithTag @ 0x1409B5160 (ExAllocatePoolWithTag.c)
 */

void __fastcall PnpLogDeviceConflictingResource(__int64 a1, __int64 a2)
{
  __int64 v2; // rdi
  __int64 v5; // rax
  __int64 v6; // rbx
  __int64 v7; // rcx
  PVOID PoolWithTag; // rax

  v2 = *(_QWORD *)(a1 + 40);
  if ( v2 )
  {
    v5 = *(_QWORD *)(v2 + 32);
    if ( v5 )
      v6 = *(_QWORD *)(*(_QWORD *)(v5 + 312) + 40LL);
    else
      v6 = 0LL;
    if ( v6 )
    {
      v7 = *(_QWORD *)(v6 + 712);
      if ( v7
        || (PoolWithTag = ExAllocatePoolWithTag(PagedPool, 0x70uLL, 0x62655250u),
            (*(_QWORD *)(v6 + 712) = PoolWithTag) != 0LL)
        && (memset(PoolWithTag, 0, 0x70uLL), (v7 = *(_QWORD *)(v6 + 712)) != 0) )
      {
        if ( !*(_QWORD *)(v7 + 96) )
        {
          *(_BYTE *)(v7 + 88) = *(_BYTE *)(a1 + 16);
          *(_DWORD *)(v7 + 92) = *(_DWORD *)(v2 + 16);
          *(_QWORD *)(v7 + 96) = *(_QWORD *)(v2 + 24);
          *(_QWORD *)(v7 + 104) = a2;
        }
      }
    }
  }
}
