/*
 * XREFs of EtwInitializeSiloState @ 0x1409DEF5C
 * Callers:
 *     PspInitializeServerSiloDeferred @ 0x1409AC180 (PspInitializeServerSiloDeferred.c)
 * Callees:
 *     PsGetServerSiloGlobals @ 0x140204738 (PsGetServerSiloGlobals.c)
 *     EtwpGetCurrentSiloMaxLoggers @ 0x1403DD97C (EtwpGetCurrentSiloMaxLoggers.c)
 *     EtwpPreInitializeSiloState @ 0x14084EB98 (EtwpPreInitializeSiloState.c)
 *     EtwpInitializeSiloState @ 0x140851114 (EtwpInitializeSiloState.c)
 *     EtwpCleanupSiloState @ 0x1409E026C (EtwpCleanupSiloState.c)
 */

__int64 __fastcall EtwInitializeSiloState(struct _LIST_ENTRY *a1)
{
  unsigned int CurrentSiloMaxLoggers; // eax
  int v3; // ebx
  PVOID *ServerSiloGlobals; // rax

  CurrentSiloMaxLoggers = EtwpGetCurrentSiloMaxLoggers();
  v3 = EtwpPreInitializeSiloState((__int64)a1, CurrentSiloMaxLoggers);
  if ( v3 < 0 || (v3 = EtwpInitializeSiloState(a1, 0LL), v3 < 0) )
  {
    ServerSiloGlobals = (PVOID *)PsGetServerSiloGlobals((__int64)a1);
    EtwpCleanupSiloState(ServerSiloGlobals[108]);
  }
  return (unsigned int)v3;
}
