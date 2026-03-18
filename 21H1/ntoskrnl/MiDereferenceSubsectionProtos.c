/*
 * XREFs of MiDereferenceSubsectionProtos @ 0x1406E683C
 * Callers:
 *     MiDereferencePerSessionProtos @ 0x1406E678C (MiDereferencePerSessionProtos.c)
 *     MiCreatePerSessionProtos @ 0x1406E68A4 (MiCreatePerSessionProtos.c)
 * Callees:
 *     MiLocateSessionProtosInSubsection @ 0x14031F0E4 (MiLocateSessionProtosInSubsection.c)
 *     MiUpdatePerSessionProto @ 0x14031F110 (MiUpdatePerSessionProto.c)
 */

void __fastcall MiDereferenceSubsectionProtos(__int64 a1, unsigned int a2, __int64 *a3)
{
  __int64 *SessionProtosInSubsection; // rax
  __int64 *v6; // rcx
  __int64 *v7; // rbx

  if ( (*(_BYTE *)(a1 + 34) & 2) != 0 )
  {
    SessionProtosInSubsection = MiLocateSessionProtosInSubsection(a1, a2);
    v7 = SessionProtosInSubsection;
    if ( (*((_DWORD *)SessionProtosInSubsection + 20))-- == 1 )
    {
      MiUpdatePerSessionProto(*v6, a1, (__int64)SessionProtosInSubsection, 0);
      *((_DWORD *)v7 + 20) = *(_DWORD *)(a1 + 44);
      *v7 = *a3;
      v7[8] = a1;
      *a3 = (__int64)v7;
    }
  }
}
