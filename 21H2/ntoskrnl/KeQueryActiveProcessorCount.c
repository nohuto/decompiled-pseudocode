/*
 * XREFs of KeQueryActiveProcessorCount @ 0x140515700
 * Callers:
 *     <none>
 * Callees:
 *     KeQueryActiveProcessorCountEx @ 0x1402695B0 (KeQueryActiveProcessorCountEx.c)
 */

ULONG __stdcall KeQueryActiveProcessorCount(PKAFFINITY ActiveProcessors)
{
  unsigned __int64 v1; // rdx
  __int64 v2; // rcx

  if ( ActiveProcessors )
  {
    v1 = qword_140CFC848[0];
    *ActiveProcessors = qword_140CFC848[0];
    return (0x101010101010101LL
          * ((((v1 - ((v1 >> 1) & 0x5555555555555555LL)) & 0x3333333333333333LL)
            + (((v1 - ((v1 >> 1) & 0x5555555555555555LL)) >> 2) & 0x3333333333333333LL)
            + ((((v1 - ((v1 >> 1) & 0x5555555555555555LL)) & 0x3333333333333333LL)
              + (((v1 - ((v1 >> 1) & 0x5555555555555555LL)) >> 2) & 0x3333333333333333LL)) >> 4)) & 0xF0F0F0F0F0F0F0FLL)) >> 56;
  }
  else
  {
    LODWORD(v2) = KeQueryActiveProcessorCountEx(0);
  }
  return v2;
}
