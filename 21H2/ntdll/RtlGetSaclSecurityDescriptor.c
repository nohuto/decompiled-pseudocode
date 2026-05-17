/*
 * XREFs of RtlGetSaclSecurityDescriptor @ 0x180076C50
 * Callers:
 *     RtlReplaceSidInSd @ 0x1800E6CF0 (RtlReplaceSidInSd.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RtlGetSaclSecurityDescriptor(__int64 a1, bool *a2, _QWORD *a3, bool *a4)
{
  __int16 v5; // cx
  __int64 v6; // rax

  if ( *(_BYTE *)a1 != 1 )
    return 3221225560LL;
  v5 = *(_WORD *)(a1 + 2) & 0x10;
  *a2 = v5 != 0;
  v6 = 0LL;
  if ( v5 )
  {
    if ( (*(_BYTE *)(a1 + 2) & 0x10) != 0 )
    {
      if ( *(__int16 *)(a1 + 2) >= 0 )
      {
        v6 = *(_QWORD *)(a1 + 24);
      }
      else if ( *(_DWORD *)(a1 + 12) )
      {
        v6 = a1 + *(unsigned int *)(a1 + 12);
      }
    }
    *a3 = v6;
    *a4 = (*(_BYTE *)(a1 + 2) & 0x20) != 0;
  }
  return 0LL;
}
