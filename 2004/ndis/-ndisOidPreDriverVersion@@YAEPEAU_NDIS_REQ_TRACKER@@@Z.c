/*
 * XREFs of ?ndisOidPreDriverVersion@@YAEPEAU_NDIS_REQ_TRACKER@@@Z @ 0x1C0038A70
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

unsigned __int8 __fastcall ndisOidPreDriverVersion(struct _NDIS_REQ_TRACKER *a1)
{
  __int64 v1; // r9
  char v2; // r8
  __int64 v3; // rdx
  __int64 v5; // r8
  unsigned __int16 v6; // cx

  v1 = *(_QWORD *)a1;
  v2 = 0;
  v3 = *((_QWORD *)a1 + 4);
  if ( *(_QWORD *)a1 && (*(_DWORD *)(v3 + 4) & 0xFFFFFFFD) == 0 )
  {
    *((_DWORD *)a1 + 10) = 0;
    if ( *(_DWORD *)(v3 + 48) < 2u )
    {
      *(_DWORD *)(v3 + 56) = 2;
      *((_DWORD *)a1 + 10) = -1073676268;
    }
    else
    {
      v5 = 2LL;
      v6 = _byteswap_ushort(*(_WORD *)(*(_QWORD *)(v1 + 3760) + 24LL));
      do
      {
        **(_WORD **)(v3 + 40) = v6;
        --v5;
      }
      while ( v5 );
      *(_DWORD *)(v3 + 52) = 2;
    }
    return 1;
  }
  return v2;
}
