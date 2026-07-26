/*
 * XREFs of ?ndisOidPreMacOptions@@YAEPEAU_NDIS_REQ_TRACKER@@@Z @ 0x1C009C920
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

unsigned __int8 __fastcall ndisOidPreMacOptions(struct _NDIS_REQ_TRACKER *a1)
{
  __int64 v1; // r10
  char v2; // dl
  __int64 v3; // r9
  __int64 v4; // r10

  v1 = *((_QWORD *)a1 + 2);
  v2 = 0;
  v3 = *((_QWORD *)a1 + 4);
  if ( v1 )
  {
    v4 = *(_QWORD *)(v1 + 32);
  }
  else
  {
    v4 = 0LL;
    if ( *(_QWORD *)a1 )
      v4 = *(_QWORD *)a1;
  }
  if ( (*(_DWORD *)(v3 + 4) & 0xFFFFFFFD) == 0 )
  {
    *((_DWORD *)a1 + 10) = 0;
    if ( *(_DWORD *)(v3 + 48) >= 4u )
    {
      **(_DWORD **)(v3 + 40) = *(_DWORD *)(v4 + 3044);
      *(_DWORD *)(v3 + 52) = 4;
      *((_DWORD *)a1 + 10) = 0;
    }
    else
    {
      *(_DWORD *)(v3 + 56) = 4;
      *((_DWORD *)a1 + 10) = -1073676268;
    }
    return 1;
  }
  return v2;
}
