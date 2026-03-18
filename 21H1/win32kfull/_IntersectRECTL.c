/*
 * XREFs of _IntersectRECTL @ 0x1BB4FA
 * Callers:
 *     _ComputeAABBP @ 0x1C2ACA (_ComputeAABBP.c)
 *     _CheckBMPNeedFixup @ 0x1C43B3 (_CheckBMPNeedFixup.c)
 * Callees:
 *     <none>
 */

BOOL __fastcall IntersectRECTL(int *a1, int *a2)
{
  int v4; // edx
  int v5; // eax
  int v6; // ebx
  int v7; // ecx
  int v8; // esi
  _DWORD *v9; // edi
  int v11; // [esp+10h] [ebp-10h]
  int v12; // [esp+14h] [ebp-Ch]
  int v13; // [esp+18h] [ebp-8h]
  int v14; // [esp+1Ch] [ebp-4h]

  v4 = *a1;
  v11 = *a1;
  if ( *a1 < *a2 )
  {
    v4 = *a2;
    v11 = *a2;
  }
  v5 = a1[1];
  v12 = v5;
  if ( v5 < a2[1] )
  {
    v5 = a2[1];
    v12 = v5;
  }
  v6 = a1[2];
  v13 = v6;
  if ( v6 > a2[2] )
  {
    v6 = a2[2];
    v13 = v6;
  }
  v7 = a1[3];
  v8 = a2[3];
  v14 = v7;
  if ( v7 > v8 )
  {
    v7 = v8;
    v14 = v8;
  }
  *a1 = v11;
  v9 = a1 + 1;
  *v9++ = v12;
  *v9 = v13;
  v9[1] = v14;
  return v6 > v4 && v7 > v5;
}
