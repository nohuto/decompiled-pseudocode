/*
 * XREFs of ExUpdateOsPfnInRegistry @ 0x14094FC20
 * Callers:
 *     <none>
 * Callees:
 *     PsGetCurrentServerSiloGlobals @ 0x14023CD40 (PsGetCurrentServerSiloGlobals.c)
 *     _guard_dispatch_icall @ 0x140405F40 (_guard_dispatch_icall.c)
 */

__int64 __fastcall ExUpdateOsPfnInRegistry(unsigned int a1, __int64 a2, unsigned int a3, __int64 a4)
{
  unsigned int v8; // ebx
  __int64 v9; // rcx

  v8 = -1073741822;
  v9 = *((_QWORD *)PsGetCurrentServerSiloGlobals() + 113);
  if ( qword_140D2D508 )
    return (unsigned int)qword_140D2D508(v9, a1, a2, a3, a4);
  return v8;
}
