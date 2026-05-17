/*
 * XREFs of _RtlLengthSecurityDescriptor@4 @ 0x4B2E86D0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

unsigned int __stdcall RtlLengthSecurityDescriptor(int a1)
{
  __int16 v1; // bx
  int v2; // edx
  unsigned int v3; // esi
  int v4; // edx
  int v5; // edx
  int v7; // edx

  v1 = *(_WORD *)(a1 + 2);
  v2 = *(_DWORD *)(a1 + 4);
  if ( v1 < 0 )
    v2 = v2 != 0 ? v2 + a1 : 0;
  v3 = 20;
  if ( v2 )
    v3 = ((4 * *(unsigned __int8 *)(v2 + 1) + 11) & 0xFFFFFFFC) + 20;
  v4 = *(_DWORD *)(a1 + 8);
  if ( v1 < 0 )
    v4 = v4 != 0 ? v4 + a1 : 0;
  if ( v4 )
    v3 += (4 * *(unsigned __int8 *)(v4 + 1) + 11) & 0xFFFFFFFC;
  if ( (v1 & 4) != 0 )
  {
    v5 = *(_DWORD *)(a1 + 16);
    if ( v1 < 0 )
      v5 = v5 != 0 ? v5 + a1 : 0;
    if ( v5 )
      v3 += (*(unsigned __int16 *)(v5 + 2) + 3) & 0xFFFFFFFC;
  }
  if ( (v1 & 0x10) != 0 )
  {
    v7 = *(_DWORD *)(a1 + 12);
    if ( v1 < 0 )
      v7 = v7 != 0 ? v7 + a1 : 0;
    if ( v7 )
      v3 += (*(unsigned __int16 *)(v7 + 2) + 3) & 0xFFFFFFFC;
  }
  return v3;
}
