/*
 * XREFs of ?GetMiniportFromReqTracker@@YAPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_REQ_TRACKER@@@Z @ 0x1C003B794
 * Callers:
 *     ?ndisPreSetPMParameters@@YAEPEAU_NDIS_REQ_TRACKER@@@Z @ 0x1C003B480 (-ndisPreSetPMParameters@@YAEPEAU_NDIS_REQ_TRACKER@@@Z.c)
 *     ?ndisOidPreAddPMProtocolOffload@@YAEPEAU_NDIS_REQ_TRACKER@@@Z @ 0x1C0091510 (-ndisOidPreAddPMProtocolOffload@@YAEPEAU_NDIS_REQ_TRACKER@@@Z.c)
 *     ?ndisOidPrePMHaltOnSuspend@@YAEPEAU_NDIS_REQ_TRACKER@@@Z @ 0x1C0091A90 (-ndisOidPrePMHaltOnSuspend@@YAEPEAU_NDIS_REQ_TRACKER@@@Z.c)
 *     ?ndisPreQueryPMParameters@@YAEPEAU_NDIS_REQ_TRACKER@@@Z @ 0x1C009343C (-ndisPreQueryPMParameters@@YAEPEAU_NDIS_REQ_TRACKER@@@Z.c)
 *     ?ndisOidPreProtocolOptions@@YAEPEAU_NDIS_REQ_TRACKER@@@Z @ 0x1C009D220 (-ndisOidPreProtocolOptions@@YAEPEAU_NDIS_REQ_TRACKER@@@Z.c)
 * Callees:
 *     <none>
 */

struct _NDIS_MINIPORT_BLOCK *__fastcall GetMiniportFromReqTracker(struct _NDIS_REQ_TRACKER *a1)
{
  struct _NDIS_MINIPORT_BLOCK *result; // rax
  __int64 v2; // rax

  result = *(struct _NDIS_MINIPORT_BLOCK **)a1;
  if ( !*(_QWORD *)a1 )
  {
    v2 = *((_QWORD *)a1 + 3);
    if ( v2 )
    {
      return *(struct _NDIS_MINIPORT_BLOCK **)(v2 + 16);
    }
    else
    {
      result = (struct _NDIS_MINIPORT_BLOCK *)*((_QWORD *)a1 + 1);
      if ( result )
        return *(struct _NDIS_MINIPORT_BLOCK **)&result->Reserved4.Length;
      result = (struct _NDIS_MINIPORT_BLOCK *)*((_QWORD *)a1 + 2);
      if ( result )
        return *(struct _NDIS_MINIPORT_BLOCK **)&result->Reserved4.Length;
    }
  }
  return result;
}
