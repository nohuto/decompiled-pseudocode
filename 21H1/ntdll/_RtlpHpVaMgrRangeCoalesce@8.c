/*
 * XREFs of _RtlpHpVaMgrRangeCoalesce@8 @ 0x4B37AF85
 * Callers:
 *     _RtlpHpVaMgrFree@8 @ 0x4B37AE7C (_RtlpHpVaMgrFree@8.c)
 * Callees:
 *     _RtlRbRemoveNode@8 @ 0x4B2D9B10 (_RtlRbRemoveNode@8.c)
 */

unsigned int __fastcall RtlpHpVaMgrRangeCoalesce(int a1, unsigned int a2)
{
  int v2; // edi
  unsigned int v3; // esi
  int v5; // eax
  unsigned int v6; // edx
  unsigned int v7; // ebx
  int v8; // eax
  unsigned __int16 v9; // cx
  unsigned int v10; // ebx
  unsigned int v11; // eax
  unsigned __int16 v13; // [esp+Ch] [ebp-Ch]
  unsigned int v14; // [esp+10h] [ebp-8h]

  v2 = a1;
  v3 = a2;
  v5 = *(unsigned __int16 *)(a1 + 20);
  *(_BYTE *)a2 &= ~1u;
  v6 = 16 * v5 + (a2 & (-16 * v5));
  v13 = *(_WORD *)(a2 + 12);
  v7 = a2 - 16 * *(unsigned __int16 *)(a2 + 14);
  v14 = v6;
  if ( v7 < v3 && (*(_BYTE *)v7 & 1) == 0 )
  {
    RtlRbRemoveNode((PRTL_RB_TREE)(a1 + 4), (PRTL_BALANCED_NODE)v7);
    *(_WORD *)(v7 + 12) += *(_WORD *)(v3 + 12);
    v6 = v14;
    *(_DWORD *)v3 = 0;
    *(_DWORD *)(v3 + 4) = 0;
    *(_DWORD *)(v3 + 8) = 0;
    v2 = a1;
    *(_BYTE *)v3 = 2;
    *(_BYTE *)(v3 + 1) = *(_BYTE *)(a1 + 24);
    *(_DWORD *)(v3 + 12) = -1985229329;
    v3 = v7;
  }
  v8 = *(unsigned __int16 *)(v3 + 12);
  v9 = *(_WORD *)(v3 + 12);
  v10 = v3 + 16 * v8;
  if ( v10 < v6 && (*(_BYTE *)v10 & 1) == 0 )
  {
    RtlRbRemoveNode((PRTL_RB_TREE)(v2 + 4), (PRTL_BALANCED_NODE)(v3 + 16 * v8));
    *(_WORD *)(v3 + 12) += *(_WORD *)(v10 + 12);
    v6 = v14;
    *(_DWORD *)v10 = 0;
    *(_DWORD *)(v10 + 4) = 0;
    *(_DWORD *)(v10 + 8) = 0;
    *(_BYTE *)v10 = 2;
    *(_BYTE *)(v10 + 1) = *(_BYTE *)(a1 + 24);
    *(_DWORD *)(v10 + 12) = -1985229329;
    v9 = *(_WORD *)(v3 + 12);
  }
  v11 = v3 + 16 * v9;
  if ( v9 > v13 && v11 < v6 )
    *(_WORD *)(v11 + 14) = v9;
  return v3;
}
