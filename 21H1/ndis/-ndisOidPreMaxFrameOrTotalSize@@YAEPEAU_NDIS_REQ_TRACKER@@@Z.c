/*
 * XREFs of ?ndisOidPreMaxFrameOrTotalSize@@YAEPEAU_NDIS_REQ_TRACKER@@@Z @ 0x1C0039770
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

unsigned __int8 __fastcall ndisOidPreMaxFrameOrTotalSize(struct _NDIS_REQ_TRACKER *a1)
{
  __int64 v1; // r9
  unsigned __int8 result; // al
  __int64 v3; // r8

  v1 = *(_QWORD *)a1;
  result = 0;
  v3 = *((_QWORD *)a1 + 4);
  if ( *(_QWORD *)a1 )
  {
    if ( (*(_DWORD *)(v3 + 4) & 0xFFFFFFFD) != 0 )
    {
      *((_DWORD *)a1 + 10) = -1073741637;
    }
    else
    {
      *((_DWORD *)a1 + 10) = 0;
      if ( *(_DWORD *)(v3 + 48) < 4u )
      {
        *(_DWORD *)(v3 + 56) = 4;
        *((_DWORD *)a1 + 10) = -1073676268;
      }
      else
      {
        if ( *(_DWORD *)(v3 + 32) != 65798 )
          return result;
        **(_DWORD **)(v3 + 40) = *(_DWORD *)(v1 + 3020);
        *(_DWORD *)(v3 + 52) = 4;
        *((_DWORD *)a1 + 10) = 0;
      }
    }
    return 1;
  }
  return result;
}
