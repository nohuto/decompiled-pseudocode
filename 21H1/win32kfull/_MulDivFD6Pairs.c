/*
 * XREFs of _MulDivFD6Pairs @ 0xED94C
 * Callers:
 *     _HT_CreateDeviceHalftoneInfo@8 @ 0x96E72 (_HT_CreateDeviceHalftoneInfo@8.c)
 *     _ComputeBGRMappingTable @ 0x1BCF91 (_ComputeBGRMappingTable.c)
 *     _ComputeColorSpaceXForm @ 0x1BDAAF (_ComputeColorSpaceXForm.c)
 * Callees:
 *     <none>
 */

__int64 __cdecl MulDivFD6Pairs(int a1)
{
  unsigned int v1; // eax
  unsigned int v2; // ecx
  int *v3; // esi
  __int64 v4; // kr00_8
  int v5; // eax
  int *v6; // esi
  int v7; // edx
  int v8; // eax
  int v9; // ebx
  __int64 v10; // rax
  unsigned __int64 v11; // rax
  unsigned int v12; // edi
  unsigned int v13; // eax
  __int64 result; // rax
  unsigned int v15; // [esp-4h] [ebp-10h]

  HIWORD(v1) = 0;
  if ( *(_WORD *)a1 )
  {
    LOWORD(v1) = *(_WORD *)a1;
    v2 = v1;
    LOWORD(v1) = *(_WORD *)(a1 + 2);
    if ( (_WORD)v1 )
      v1 = *(_DWORD *)(a1 + 4);
    v15 = v1;
    v3 = (int *)(a1 + 8);
    v4 = 0LL;
    do
    {
      v5 = *v3;
      v6 = v3 + 1;
      v7 = v5;
      v8 = *v6;
      v3 = v6 + 1;
      if ( v8 && v7 )
        v4 += v7 * (__int64)v8;
      --v2;
    }
    while ( v2 );
    v9 = -__CFSHL__(HIDWORD(v4), 1);
    LODWORD(v10) = v9 ^ v4;
    HIDWORD(v10) = v9 ^ HIDWORD(v4);
    v11 = v10 - __PAIR64__(v9, v9);
    v12 = (unsigned int)&loc_F423E + 2;
    if ( v15 && (_UNKNOWN *)v15 != (_UNKNOWN *)((char *)&loc_F423E + 2) )
    {
      v12 = (-__CFSHL__(v15, 1) ^ v15) + __CFSHL__(v15, 1);
      v9 ^= -__CFSHL__(v15, 1);
    }
    if ( HIDWORD(v11) >= v12 )
      v13 = 0x7FFFFFFF;
    else
      v13 = (v11 % v12 >= v12 >> 1) + (unsigned int)(v11 / v12);
    LODWORD(result) = (v9 ^ v13) - v9;
  }
  else
  {
    LODWORD(result) = 0;
  }
  return (int)result;
}
