/*
 * XREFs of ExUpdateOsPfnInRegistry @ 0x14094D5C0
 * Callers:
 *     <none>
 * Callees:
 *     PsGetCurrentServerSiloGlobals @ 0x1402F6FB0 (PsGetCurrentServerSiloGlobals.c)
 *     _guard_dispatch_icall @ 0x140408790 (_guard_dispatch_icall.c)
 */

__int64 __fastcall ExUpdateOsPfnInRegistry(__int64 a1, __int64 a2, unsigned int a3, __int64 a4)
{
  unsigned int v7; // r14d
  unsigned int v8; // ebx
  __int64 v9; // rcx

  v7 = a1;
  v8 = -1073741822;
  v9 = *((_QWORD *)PsGetCurrentServerSiloGlobals(a1, a2) + 113);
  if ( qword_140D2D4E8 )
    return (unsigned int)qword_140D2D4E8(v9, v7, a2, a3, a4);
  return v8;
}
