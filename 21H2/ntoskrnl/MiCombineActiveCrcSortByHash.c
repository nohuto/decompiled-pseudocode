/*
 * XREFs of MiCombineActiveCrcSortByHash @ 0x14036BDB0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall MiCombineActiveCrcSortByHash(_QWORD **a1, _QWORD **a2)
{
  _QWORD *v2; // rax
  _QWORD *v3; // rcx
  unsigned __int64 v4; // rdx
  unsigned __int64 v5; // r8
  unsigned __int64 v6; // rdx
  __int64 result; // rax

  v2 = *a1;
  v3 = *a2;
  if ( *v2 < **a2 )
    return 0xFFFFFFFFLL;
  if ( *v2 > *v3 )
    return 1LL;
  v4 = v2[3];
  if ( v4 < v3[3] )
    return 0xFFFFFFFFLL;
  if ( v4 > v3[3] )
    return 1LL;
  v5 = v2[4];
  if ( v5 >= 0x100 )
    LODWORD(v5) = *(_DWORD *)(v5 + 40) & 0x1F;
  v6 = v3[4];
  if ( v6 >= 0x100 )
    LODWORD(v6) = *(_DWORD *)(v6 + 40) & 0x1F;
  if ( (unsigned int)v5 > (unsigned int)v6 )
    return 1LL;
  result = 0LL;
  if ( (unsigned int)v5 < (unsigned int)v6 )
    return 0xFFFFFFFFLL;
  return result;
}
