/*
 * XREFs of MiImageProtoChargedCommit @ 0x14024B768
 * Callers:
 *     MiDeleteSystemPagableVm @ 0x14027E810 (MiDeleteSystemPagableVm.c)
 * Callees:
 *     MiGetSharedProtosAtDpcLevel @ 0x140256EAC (MiGetSharedProtosAtDpcLevel.c)
 *     MiGetSubsectionDriverProtos @ 0x14027B234 (MiGetSubsectionDriverProtos.c)
 *     MmGetSessionIdEx @ 0x140287F30 (MmGetSessionIdEx.c)
 */

_BOOL8 __fastcall MiImageProtoChargedCommit(__int64 a1, unsigned __int64 a2)
{
  unsigned int SessionId; // r14d
  __int64 i; // rbx
  unsigned __int64 v6; // rcx
  int v7; // edi
  __int64 SubsectionDriverProtos; // rax
  __int64 SharedProtosAtDpcLevel; // rax
  unsigned __int64 v11; // rcx
  unsigned __int64 v12; // rcx

  SessionId = MmGetSessionIdEx(KeGetCurrentThread()->ApcState.Process);
  for ( i = a1 + 128; ; i = *(_QWORD *)(i + 16) )
  {
    if ( !i )
      return 0LL;
    v6 = *(_QWORD *)(i + 8);
    v7 = *(unsigned __int16 *)(i + 32) >> 1;
    if ( a2 >= v6 && a2 < v6 + 8LL * *(unsigned int *)(i + 44) )
      break;
    if ( (*(_BYTE *)(i + 34) & 2) != 0 && (*(_DWORD *)(a1 + 56) & 0x8000000) != 0 )
    {
      SharedProtosAtDpcLevel = MiGetSharedProtosAtDpcLevel(a1, SessionId, i);
      if ( SharedProtosAtDpcLevel )
      {
        v11 = *(_QWORD *)(SharedProtosAtDpcLevel + 72);
        if ( a2 >= v11 && a2 < v11 + 8LL * *(unsigned int *)(i + 44) )
          break;
      }
    }
    else
    {
      SubsectionDriverProtos = MiGetSubsectionDriverProtos(i);
      if ( SubsectionDriverProtos )
      {
        v12 = *(_QWORD *)(SubsectionDriverProtos + 72);
        if ( a2 >= v12 && a2 < v12 + 8LL * *(unsigned int *)(i + 44) )
          return 1LL;
      }
    }
  }
  return (v7 & 0x1Fu) >= 4;
}
