/*
 * XREFs of PspInitializeServerSiloDeferred @ 0x1409030A0
 * Callers:
 *     PspQueueDeferredWorkAndWait @ 0x1409031B4 (PspQueueDeferredWorkAndWait.c)
 * Callees:
 *     PsGetServerSiloGlobals @ 0x14026D714 (PsGetServerSiloGlobals.c)
 *     sub_1405AD8E8 @ 0x1405AD8E8 (sub_1405AD8E8.c)
 *     ExpTimeZoneInitSiloState @ 0x1405C9844 (ExpTimeZoneInitSiloState.c)
 *     CmInitServerSiloState @ 0x14078ECB8 (CmInitServerSiloState.c)
 *     EtwInitializeSiloState @ 0x14079C174 (EtwInitializeSiloState.c)
 *     PspInitializeProtectedProcessParameters @ 0x1407B234C (PspInitializeProtectedProcessParameters.c)
 *     ObInitServerSilo @ 0x1407B65F0 (ObInitServerSilo.c)
 *     DbgkInitializeServerSilo @ 0x140881298 (DbgkInitializeServerSilo.c)
 *     PsTerminateServerSilo @ 0x140902940 (PsTerminateServerSilo.c)
 *     PspDeleteExternalServerSiloState @ 0x140902E78 (PspDeleteExternalServerSiloState.c)
 *     PspSiloInitializeIsMultiSessionSku @ 0x1409035A8 (PspSiloInitializeIsMultiSessionSku.c)
 *     PspSiloInitializeSystemRootSymlink @ 0x1409036F0 (PspSiloInitializeSystemRootSymlink.c)
 *     PspSiloInitializeUserSharedData @ 0x14090381C (PspSiloInitializeUserSharedData.c)
 *     PspSiloLoadApiSets @ 0x140903944 (PspSiloLoadApiSets.c)
 *     PspNotifyServerSiloCreation @ 0x14090840C (PspNotifyServerSiloCreation.c)
 *     SeInitServerSilo @ 0x140918CC4 (SeInitServerSilo.c)
 */

__int64 __fastcall PspInitializeServerSiloDeferred(struct _LIST_ENTRY *a1)
{
  _DWORD *ServerSiloGlobals; // rsi
  struct _LIST_ENTRY *v3; // rcx
  __int64 result; // rax
  int inited; // edi

  ServerSiloGlobals = PsGetServerSiloGlobals((__int64)a1);
  result = sub_1405AD8E8(v3);
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
                ServerSiloGlobals[276] = 4;
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
