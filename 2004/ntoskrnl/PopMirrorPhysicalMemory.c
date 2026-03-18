/*
 * XREFs of PopMirrorPhysicalMemory @ 0x140993020
 * Callers:
 *     <none>
 * Callees:
 *     RtlClearBits @ 0x140281070 (RtlClearBits.c)
 */

__int64 __fastcall PopMirrorPhysicalMemory(unsigned __int64 a1, __int64 a2)
{
  unsigned int v2; // ebx
  unsigned __int64 v3; // rdx

  v2 = 0;
  if ( qword_140C22E80 )
  {
    v3 = (unsigned __int64)(a2 + 4095) >> 12;
    if ( !v3 )
      LODWORD(v3) = 1;
    RtlClearBits((PRTL_BITMAP)(qword_140C22E80 + 48), a1 >> 12, v3);
  }
  else
  {
    return (unsigned int)-1073741670;
  }
  return v2;
}
