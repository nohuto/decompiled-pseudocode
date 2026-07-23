/*
 * XREFs of RtlpUninitializeAssemblyStorageMap @ 0x1800826E4
 * Callers:
 *     RtlpGetActivationContextDataStorageMapAndRosterHeader @ 0x180071F94 (RtlpGetActivationContextDataStorageMapAndRosterHeader.c)
 *     RtlpFreeActivationContext @ 0x180082670 (RtlpFreeActivationContext.c)
 * Callees:
 *     RtlFreeHeap @ 0x180024760 (RtlFreeHeap.c)
 *     NtClose @ 0x18009CFF0 (NtClose.c)
 */

int __fastcall RtlpUninitializeAssemblyStorageMap(__int64 a1)
{
  _UNKNOWN **v1; // rax
  unsigned int i; // edi
  _QWORD *v4; // rsi
  void *v5; // rcx
  _UNKNOWN *retaddr; // [rsp+28h] [rbp+0h] BYREF

  if ( a1 )
  {
    v1 = &retaddr;
    for ( i = 0; i < *(_DWORD *)(a1 + 4); ++i )
    {
      v1 = *(_UNKNOWN ***)(a1 + 8);
      v4 = v1[i];
      if ( v4 )
      {
        v5 = (void *)v4[3];
        *((_DWORD *)v4 + 2) = 0;
        v4[2] = 0LL;
        if ( v5 )
        {
          NtClose(v5);
          v4[3] = 0LL;
        }
        *(_QWORD *)(*(_QWORD *)(a1 + 8) + 8LL * i) = 0LL;
        LODWORD(v1) = RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, v4);
      }
    }
    if ( (*(_BYTE *)a1 & 1) != 0 )
      LODWORD(v1) = RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, *(PVOID *)(a1 + 8));
    *(_QWORD *)(a1 + 8) = 0LL;
    *(_QWORD *)a1 = 0LL;
  }
  return (int)v1;
}
