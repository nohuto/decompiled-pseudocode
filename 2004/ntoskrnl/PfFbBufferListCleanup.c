/*
 * XREFs of PfFbBufferListCleanup @ 0x1408DD7FC
 * Callers:
 *     PfTCleanup @ 0x1408DCDBC (PfTCleanup.c)
 * Callees:
 *     RtlpInterlockedPopEntrySList @ 0x1403FEFF0 (RtlpInterlockedPopEntrySList.c)
 *     ExFreePoolWithTag @ 0x1409B1140 (ExFreePoolWithTag.c)
 */

PSLIST_ENTRY __fastcall PfFbBufferListCleanup(__int64 a1)
{
  _SLIST_HEADER *i; // rcx
  ULONG v3; // edx
  PSLIST_ENTRY v4; // rax
  ULONG v5; // edx
  PSLIST_ENTRY v6; // rax
  PSLIST_ENTRY result; // rax

  for ( i = (_SLIST_HEADER *)(a1 + 32); ; i = (_SLIST_HEADER *)(a1 + 32) )
  {
    v4 = RtlpInterlockedPopEntrySList(i);
    if ( !v4 )
      break;
    if ( (*((_DWORD *)&v4[2].Next + 3) & 1) != 0 )
    {
      v3 = *(_DWORD *)(a1 + 68);
      *(_DWORD *)(a1 + 104) += (_DWORD)v4 - LODWORD(v4[2].Next);
      ExFreePoolWithTag(v4, v3);
    }
  }
  while ( 1 )
  {
    v6 = RtlpInterlockedPopEntrySList((PSLIST_HEADER)(a1 + 16));
    if ( !v6 )
      break;
    if ( (*((_DWORD *)&v6[2].Next + 3) & 1) != 0 )
    {
      v5 = *(_DWORD *)(a1 + 68);
      *(_DWORD *)(a1 + 104) += (_DWORD)v6 - LODWORD(v6[2].Next);
      ExFreePoolWithTag(v6, v5);
    }
  }
  while ( 1 )
  {
    result = RtlpInterlockedPopEntrySList((PSLIST_HEADER)(a1 + 48));
    if ( !result )
      break;
    *(_DWORD *)(a1 + 104) -= *((_DWORD *)&result[1].Next + 2);
    ExFreePoolWithTag(result, *(_DWORD *)(a1 + 68));
  }
  return result;
}
