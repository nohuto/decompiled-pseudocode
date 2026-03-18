/*
 * XREFs of _UnionRect@12 @ 0x982E2
 * Callers:
 *     _xxxScrollWindowEx@32 @ 0x2B61E (_xxxScrollWindowEx@32.c)
 *     __ScrollDC@28 @ 0x3267A (__ScrollDC@28.c)
 *     ?zzzBltValidBits@@YG?AW4BltBitsResult@@PAUtagSMWP@@@Z @ 0x339E2 (-zzzBltValidBits@@YG-AW4BltBitsResult@@PAUtagSMWP@@@Z.c)
 *     _CalcWindowFullScreen@4 @ 0x34B60 (_CalcWindowFullScreen@4.c)
 *     ?IsCandidateTransformOwner@@YGHPAUtagWND@@0@Z @ 0x359D0 (-IsCandidateTransformOwner@@YGHPAUtagWND@@0@Z.c)
 *     ?InternalScrollDC@@YGHPAUtagWND@@PAUHDC__@@HHPAUtagRECT@@2PAUHRGN__@@32H@Z @ 0x35B68 (-InternalScrollDC@@YGHPAUtagWND@@PAUHDC__@@HHPAUtagRECT@@2PAUHRGN__@@32H@Z.c)
 *     _FlushWEFCOMPOSITEDDCEBounds@4 @ 0x15375C (_FlushWEFCOMPOSITEDDCEBounds@4.c)
 * Callees:
 *     <none>
 */

int __fastcall UnionRect(int *a1, int *a2, int *a3)
{
  int v3; // ebx
  int v4; // esi
  int v7; // eax
  int v8; // eax
  int v9; // eax
  int v10; // ecx
  _DWORD *v12; // edi
  _DWORD *v13; // edi
  _DWORD *v14; // edi
  int v15; // [esp+Ch] [ebp-4h]
  int v16; // [esp+18h] [ebp+8h]

  v3 = *a2;
  v4 = 0;
  if ( *a2 >= a2[2] || (v15 = 0, a2[1] >= a2[3]) )
    v15 = 1;
  v16 = *a3;
  if ( v16 >= a3[2] || a3[1] >= a3[3] )
    v4 = 1;
  if ( !v15 )
  {
    if ( v4 )
    {
      *a1 = *a2;
      v14 = a1 + 1;
      *v14++ = a2[1];
      *v14 = a2[2];
      v14[1] = a2[3];
    }
    else
    {
      if ( v3 >= v16 )
        v3 = v16;
      *a1 = v3;
      v7 = a2[1];
      if ( v7 >= a3[1] )
        v7 = a3[1];
      a1[1] = v7;
      v8 = a2[2];
      if ( v8 <= a3[2] )
        v8 = a3[2];
      a1[2] = v8;
      v9 = a2[3];
      v10 = a3[3];
      if ( v9 <= v10 )
        v9 = v10;
      a1[3] = v9;
    }
    return 1;
  }
  if ( !v4 )
  {
    *a1 = *a3;
    v12 = a1 + 1;
    *v12++ = a3[1];
    *v12 = a3[2];
    v12[1] = a3[3];
    return 1;
  }
  *a1 = 0;
  v13 = a1 + 1;
  *v13++ = 0;
  *v13 = 0;
  v13[1] = 0;
  return 0;
}
