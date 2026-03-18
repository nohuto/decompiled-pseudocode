/*
 * XREFs of PspInitializeServerSiloDeferred @ 0x140908CC0
 * Callers:
 *     PspQueueDeferredWorkAndWait @ 0x140908DD4 (PspQueueDeferredWorkAndWait.c)
 * Callees:
 *     PsGetServerSiloGlobals @ 0x140245E34 (PsGetServerSiloGlobals.c)
 *     sub_1405B1448 @ 0x1405B1448 (sub_1405B1448.c)
 *     ExpTimeZoneInitSiloState @ 0x1405CF840 (ExpTimeZoneInitSiloState.c)
 *     CmInitServerSiloState @ 0x14079B670 (CmInitServerSiloState.c)
 *     EtwInitializeSiloState @ 0x1407AB4A4 (EtwInitializeSiloState.c)
 *     PspInitializeProtectedProcessParameters @ 0x1407C0294 (PspInitializeProtectedProcessParameters.c)
 *     ObInitServerSilo @ 0x1407C4E20 (ObInitServerSilo.c)
 *     DbgkInitializeServerSilo @ 0x140886DE8 (DbgkInitializeServerSilo.c)
 *     PsTerminateServerSilo @ 0x140908550 (PsTerminateServerSilo.c)
 *     PspDeleteExternalServerSiloState @ 0x140908A88 (PspDeleteExternalServerSiloState.c)
 *     PspSiloInitializeIsMultiSessionSku @ 0x1409091C8 (PspSiloInitializeIsMultiSessionSku.c)
 *     PspSiloInitializeSystemRootSymlink @ 0x140909310 (PspSiloInitializeSystemRootSymlink.c)
 *     PspSiloInitializeUserSharedData @ 0x14090943C (PspSiloInitializeUserSharedData.c)
 *     PspSiloLoadApiSets @ 0x140909564 (PspSiloLoadApiSets.c)
 *     PspNotifyServerSiloCreation @ 0x14090E02C (PspNotifyServerSiloCreation.c)
 *     SeInitServerSilo @ 0x14091E8F4 (SeInitServerSilo.c)
 */

__int64 __fastcall PspInitializeServerSiloDeferred(struct _LIST_ENTRY *a1)
{
  _DWORD *ServerSiloGlobals; // rsi
  struct _LIST_ENTRY *v3; // rcx
  __int64 result; // rax
  int inited; // edi

  ServerSiloGlobals = PsGetServerSiloGlobals((__int64)a1);
  result = sub_1405B1448(v3);
  if ( (int)result >= 0 )
  {
    result = PspSiloInitializeUserSharedData(a1);
    if ( (int)result >= 0 )
    {
      result = PspSiloInitializeSystemRootSymlink(a1);
      if ( (int)result >= 0 )
      {
        result = PspInitializeProtectedProcessParameters((__int64)ServerSiloGlobals);
        if ( (int)result >= 0 )
        {
          result = PspSiloLoadApiSets(a1);
          if ( (int)result >= 0 )
          {
            result = PspSiloInitializeIsMultiSessionSku(a1);
            if ( (int)result >= 0 )
            {
              inited = ObInitServerSilo((__int64)a1);
              if ( inited < 0 )
                goto LABEL_16;
              result = ExpTimeZoneInitSiloState((__int64)a1);
              if ( (int)result < 0 )
                return result;
              inited = SeInitServerSilo(a1);
              if ( inited < 0
                || (inited = CmInitServerSiloState((__int64)a1), inited < 0)
                || (inited = EtwInitializeSiloState(a1), inited < 0)
                || (inited = DbgkInitializeServerSilo(a1), inited < 0) )
              {
LABEL_16:
                ServerSiloGlobals[278] = 4;
                PspDeleteExternalServerSiloState((__int64)a1);
              }
              else
              {
                inited = PspNotifyServerSiloCreation(a1);
                if ( inited >= 0 )
                  return 0LL;
                PsTerminateServerSilo((__int64)a1);
              }
              return (unsigned int)inited;
            }
          }
        }
      }
    }
  }
  return result;
}
