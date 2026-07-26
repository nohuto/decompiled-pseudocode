/*
 * XREFs of ?ndisOidPrePMParameters@@YAEPEAU_NDIS_REQ_TRACKER@@@Z @ 0x1C003B760
 * Callers:
 *     <none>
 * Callees:
 *     ?ndisPreSetPMParameters@@YAEPEAU_NDIS_REQ_TRACKER@@@Z @ 0x1C003B7E0 (-ndisPreSetPMParameters@@YAEPEAU_NDIS_REQ_TRACKER@@@Z.c)
 *     ?ndisPreQueryPMParameters@@YAEPEAU_NDIS_REQ_TRACKER@@@Z @ 0x1C00935BC (-ndisPreQueryPMParameters@@YAEPEAU_NDIS_REQ_TRACKER@@@Z.c)
 */

unsigned __int8 __fastcall ndisOidPrePMParameters(struct _NDIS_REQ_TRACKER *a1)
{
  __int64 v1; // rax
  char v2; // dl
  __int64 v3; // r9
  __int64 v4; // r8
  int v5; // eax
  __int64 v8; // r8
  __int64 v9; // rax

  v1 = *((_QWORD *)a1 + 3);
  v2 = 1;
  v3 = *((_QWORD *)a1 + 4);
  if ( (!v1
     || (v8 = *(_QWORD *)(v1 + 24), *(_BYTE *)(v8 + 56) > 6u)
     || *(_BYTE *)(v8 + 56) == 6 && *(_BYTE *)(v8 + 57) >= 0x14u)
    && ((v4 = *((_QWORD *)a1 + 1)) == 0
     || (*(_DWORD *)(v3 + 88) & 0x4000) != 0
     || (v9 = *(_QWORD *)(v4 + 16), *(_BYTE *)(v9 + 100) > 6u)
     || *(_BYTE *)(v9 + 100) == 6 && *(_BYTE *)(v9 + 101) >= 0x14u) )
  {
    v5 = *(_DWORD *)(v3 + 4);
    if ( (v5 & 0xFFFFFFFD) == 0 )
      return ndisPreQueryPMParameters(a1);
    if ( v5 != 1 )
    {
      *((_DWORD *)a1 + 10) = -1073676267;
      return v2;
    }
    return ndisPreSetPMParameters(a1);
  }
  else
  {
    *((_DWORD *)a1 + 10) = -1073741637;
  }
  return v2;
}
