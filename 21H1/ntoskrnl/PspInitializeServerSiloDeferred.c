/*
 * XREFs of PspInitializeServerSiloDeferred @ 0x1409022A0
 * Callers:
 *     PspQueueDeferredWorkAndWait @ 0x1409023A4 (PspQueueDeferredWorkAndWait.c)
 * Callees:
 *     PsGetServerSiloGlobals @ 0x1402D70B4 (PsGetServerSiloGlobals.c)
 *     sub_1405AD1C8 @ 0x1405AD1C8 (sub_1405AD1C8.c)
 *     CmInitServerSiloState @ 0x14078CDE8 (CmInitServerSiloState.c)
 *     EtwInitializeSiloState @ 0x14079FC30 (EtwInitializeSiloState.c)
 *     PspInitializeProtectedProcessParameters @ 0x1407AF278 (PspInitializeProtectedProcessParameters.c)
 *     ObInitServerSilo @ 0x1407B3480 (ObInitServerSilo.c)
 *     DbgkInitializeServerSilo @ 0x14087FF78 (DbgkInitializeServerSilo.c)
 *     PsTerminateServerSilo @ 0x140901AE0 (PsTerminateServerSilo.c)
 *     PspDeleteExternalServerSiloState @ 0x140902018 (PspDeleteExternalServerSiloState.c)
 *     PspSiloInitializeIsMultiSessionSku @ 0x140902798 (PspSiloInitializeIsMultiSessionSku.c)
 *     PspSiloInitializeSystemRootSymlink @ 0x1409028E0 (PspSiloInitializeSystemRootSymlink.c)
 *     PspSiloInitializeUserSharedData @ 0x140902A0C (PspSiloInitializeUserSharedData.c)
 *     PspSiloLoadApiSets @ 0x140902B34 (PspSiloLoadApiSets.c)
 *     PspNotifyServerSiloCreation @ 0x14090715C (PspNotifyServerSiloCreation.c)
 *     SeInitServerSilo @ 0x140917A10 (SeInitServerSilo.c)
 */

__int64 __fastcall PspInitializeServerSiloDeferred(struct _LIST_ENTRY *a1)
{
  _DWORD *ServerSiloGlobals; // rsi
  struct _LIST_ENTRY *v3; // rcx
  __int64 result; // rax
  int inited; // edi

  ServerSiloGlobals = PsGetServerSiloGlobals((__int64)a1);
  result = sub_1405AD1C8(v3);
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
              if ( inited < 0
                || (inited = SeInitServerSilo(a1), inited < 0)
                || (inited = CmInitServerSiloState((__int64)a1), inited < 0)
                || (inited = EtwInitializeSiloState(a1), inited < 0)
                || (inited = DbgkInitializeServerSilo(a1), inited < 0) )
              {
                ServerSiloGlobals[274] = 4;
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
