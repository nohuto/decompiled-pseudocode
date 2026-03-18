/*
 * XREFs of MiInitializeChannelOrdering @ 0x14081DB30
 * Callers:
 *     MiInitializeNuma @ 0x1403B7358 (MiInitializeNuma.c)
 * Callees:
 *     MiInitializeSystemChannelOrdering @ 0x140B52168 (MiInitializeSystemChannelOrdering.c)
 */

__int64 __fastcall MiInitializeChannelOrdering(ULONG_PTR *a1, __int64 a2)
{
  ULONG_PTR v2; // r9
  __int64 v3; // r8
  __int64 result; // rax
  __int64 v5; // rcx

  if ( qword_140C50710 )
  {
    v2 = a1[2];
    v3 = 24512LL * (unsigned int)a2;
    if ( (unsigned int)MmNumberOfChannels > 1 )
      *(_DWORD *)(v3 + v2 + 22784) |= 1u;
    if ( a1 == &MiSystemPartition )
    {
      return MiInitializeSystemChannelOrdering(a1, a2, v3, v2);
    }
    else
    {
      v5 = qword_140C54F90;
      *(_DWORD *)(v3 + v2 + 22825) = *(_DWORD *)(v3 + qword_140C54F90 + 22825);
      *(_DWORD *)(v3 + v2 + 22817) = *(_DWORD *)(v3 + v5 + 22817);
      result = *(unsigned int *)(v3 + v5 + 22821);
      *(_DWORD *)(v3 + v2 + 22821) = result;
    }
  }
  return result;
}
