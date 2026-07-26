/*
 * XREFs of ndisIfFindAvailableCompartmentId @ 0x1C00B27EC
 * Callers:
 *     ndisIfCreateCompartmentBlock @ 0x1C00345B0 (ndisIfCreateCompartmentBlock.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ndisIfFindAvailableCompartmentId(_QWORD *a1)
{
  struct _NDIS_IF_COMPARTMENT_BLOCK *v1; // r8
  unsigned int v2; // edx
  int v4; // r10d
  unsigned int v5; // r9d
  unsigned int v6; // ecx
  unsigned int v7; // eax
  __int64 v8; // rcx

  v1 = qword_1C00E49D8;
  v2 = 1;
  v4 = 1;
  v5 = 0;
  while ( v1 != (struct _NDIS_IF_COMPARTMENT_BLOCK *)&qword_1C00E49D8 )
  {
    if ( v4 == 1 )
    {
      v6 = *((_DWORD *)v1 + 4);
      v7 = v2 + 1;
      if ( v2 != v6 )
        v7 = v2;
      v2 = v7;
      if ( v7 < v6 )
        v4 = v7;
    }
    v8 = *((_QWORD *)v1 + 143) - *a1;
    if ( !v8 )
      v8 = *((_QWORD *)v1 + 144) - a1[1];
    if ( !v8 )
    {
      v4 = 0;
      break;
    }
    v1 = *(struct _NDIS_IF_COMPARTMENT_BLOCK **)v1;
  }
  if ( v1 != (struct _NDIS_IF_COMPARTMENT_BLOCK *)&qword_1C00E49D8 )
    v2 = v4;
  if ( v2 != -1 )
    return v2;
  return v5;
}
