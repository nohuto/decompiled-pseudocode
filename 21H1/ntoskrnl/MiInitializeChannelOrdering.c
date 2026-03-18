/*
 * XREFs of MiInitializeChannelOrdering @ 0x1407845F0
 * Callers:
 *     MiInitializeNuma @ 0x1403AD7D4 (MiInitializeNuma.c)
 * Callees:
 *     MiInitializeSystemChannelOrdering @ 0x140A904C8 (MiInitializeSystemChannelOrdering.c)
 */

__int64 __fastcall MiInitializeChannelOrdering(ULONG_PTR *a1, __int64 a2)
{
  ULONG_PTR v2; // r9
  __int64 v3; // r8
  __int64 result; // rax
  __int64 v5; // rcx

  if ( qword_140C4DE10 )
  {
    v2 = a1[2];
    v3 = 4544LL * (unsigned int)a2;
    if ( (unsigned int)MmNumberOfChannels > 1 )
      *(_DWORD *)(v3 + v2 + 4280) |= 1u;
    if ( a1 == &MiSystemPartition )
    {
      return MiInitializeSystemChannelOrdering(a1, a2, v3, v2);
    }
    else
    {
      v5 = qword_140C50C90;
      *(_DWORD *)(v3 + v2 + 4321) = *(_DWORD *)(v3 + qword_140C50C90 + 4321);
      *(_DWORD *)(v3 + v2 + 4313) = *(_DWORD *)(v3 + v5 + 4313);
      result = *(unsigned int *)(v3 + v5 + 4317);
      *(_DWORD *)(v3 + v2 + 4317) = result;
    }
  }
  return result;
}
