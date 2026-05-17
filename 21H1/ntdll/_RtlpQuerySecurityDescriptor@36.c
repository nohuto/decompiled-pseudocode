/*
 * XREFs of _RtlpQuerySecurityDescriptor@36 @ 0x4B2E6B3E
 * Callers:
 *     _RtlMakeSelfRelativeSD@12 @ 0x4B2E6A30 (_RtlMakeSelfRelativeSD@12.c)
 *     _RtlCopySecurityDescriptor@8 @ 0x4B335BC0 (_RtlCopySecurityDescriptor@8.c)
 *     _RtlSelfRelativeToAbsoluteSD2@8 @ 0x4B345B10 (_RtlSelfRelativeToAbsoluteSD2@8.c)
 *     _RtlSelfRelativeToAbsoluteSD@44 @ 0x4B345BB0 (_RtlSelfRelativeToAbsoluteSD@44.c)
 * Callees:
 *     <none>
 */

unsigned int *__fastcall RtlpQuerySecurityDescriptor(
        int a1,
        int *a2,
        unsigned int *a3,
        int *a4,
        unsigned int *a5,
        int *a6,
        unsigned int *a7,
        int *a8,
        unsigned int *a9)
{
  unsigned int v9; // esi
  int v10; // edi
  unsigned int v11; // edx
  __int16 v12; // ax
  int v13; // edx
  unsigned int v14; // edx
  int v15; // edx
  unsigned int v16; // edx
  __int16 v17; // ax
  int v18; // edx
  unsigned int *result; // eax

  v9 = 0;
  v10 = *(_DWORD *)(a1 + 4);
  if ( *(__int16 *)(a1 + 2) < 0 )
    v10 = v10 != 0 ? v10 + a1 : 0;
  *a2 = v10;
  if ( v10 )
    v11 = (4 * *(unsigned __int8 *)(v10 + 1) + 11) & 0xFFFFFFFC;
  else
    v11 = 0;
  *a3 = v11;
  v12 = *(_WORD *)(a1 + 2);
  if ( (v12 & 4) != 0 )
  {
    v13 = *(_DWORD *)(a1 + 16);
    if ( v12 < 0 )
      v13 = v13 != 0 ? v13 + a1 : 0;
  }
  else
  {
    v13 = 0;
  }
  *a6 = v13;
  if ( v13 )
    v14 = (*(unsigned __int16 *)(v13 + 2) + 3) & 0xFFFFFFFC;
  else
    v14 = 0;
  *a7 = v14;
  v15 = *(_DWORD *)(a1 + 8);
  if ( *(__int16 *)(a1 + 2) < 0 )
    v15 = v15 != 0 ? v15 + a1 : 0;
  *a4 = v15;
  if ( v15 )
    v16 = (4 * *(unsigned __int8 *)(v15 + 1) + 11) & 0xFFFFFFFC;
  else
    v16 = 0;
  *a5 = v16;
  v17 = *(_WORD *)(a1 + 2);
  if ( (v17 & 0x10) != 0 )
  {
    v18 = *(_DWORD *)(a1 + 12);
    if ( v17 < 0 )
      v18 = v18 != 0 ? v18 + a1 : 0;
  }
  else
  {
    v18 = 0;
  }
  *a8 = v18;
  if ( v18 )
    v9 = (*(unsigned __int16 *)(v18 + 2) + 3) & 0xFFFFFFFC;
  result = a9;
  *a9 = v9;
  return result;
}
