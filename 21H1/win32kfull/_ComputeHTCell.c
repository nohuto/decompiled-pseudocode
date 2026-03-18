/*
 * XREFs of _ComputeHTCell @ 0x97406
 * Callers:
 *     _HT_CreateDeviceHalftoneInfo@8 @ 0x96E72 (_HT_CreateDeviceHalftoneInfo@8.c)
 * Callees:
 *     _ComputeChecksum @ 0xED870 (_ComputeChecksum.c)
 *     _GenerateWORDPat @ 0x1BC0A9 (_GenerateWORDPat.c)
 */

int __fastcall ComputeHTCell(unsigned __int16 a1, int a2, int a3)
{
  int v3; // ebx
  int v4; // edi
  int result; // eax
  int v6; // ecx
  int v7; // ecx
  int v8; // edi
  int v9; // esi
  int v10; // eax
  int v11; // eax
  int v12; // eax
  int v13; // esi
  int v14; // eax
  PVOID v15; // ecx
  _DWORD v17[6]; // [esp+Ch] [ebp-38h] BYREF
  int v18; // [esp+24h] [ebp-20h]
  unsigned int v19; // [esp+28h] [ebp-1Ch]
  int v20; // [esp+2Ch] [ebp-18h]
  int v21; // [esp+30h] [ebp-14h]
  int v22; // [esp+34h] [ebp-10h]
  int v23; // [esp+38h] [ebp-Ch]
  _WORD v24[4]; // [esp+3Ch] [ebp-8h] BYREF

  v23 = 0;
  v24[0] = a1;
  memset(v17, 0, sizeof(v17));
  v3 = 0;
  v19 = 0;
  if ( a1 > 0x12u )
    return -14;
  BYTE1(v17[1]) = v24[0];
  if ( a3 )
    v19 = *(_DWORD *)(a3 + 164) & 0xFFFFFF8F;
  if ( v24[0] != 18 )
  {
    v4 = ComputeChecksum(v24, 1213485891, 2);
    LOBYTE(v17[1]) = 1;
    v24[0] >>= 1;
    LOWORD(v17[2]) = (unsigned __int8)DefStdHTPat[8 * v24[0]];
    HIWORD(v17[3]) = (unsigned __int8)byte_24C4D1[8 * v24[0]];
    goto LABEL_6;
  }
  if ( !a2 )
    return -15;
  if ( *(_WORD *)a2 != 20 )
    return -15;
  v7 = *(unsigned __int16 *)(a2 + 4);
  v8 = *(_DWORD *)(a2 + 12);
  v3 = *(_DWORD *)(a2 + 16);
  v23 = *(_DWORD *)(a2 + 8);
  HIWORD(v17[3]) = *(_WORD *)(a2 + 6);
  v21 = v8;
  LOWORD(v17[2]) = v7;
  v20 = v7 * HIWORD(v17[3]);
  v9 = v23;
  if ( !v23 )
  {
    v9 = v8;
    if ( !v8 )
    {
      v9 = v3;
      if ( !v3 )
        return -15;
    }
  }
  if ( v23 && v8 && v3 )
  {
    if ( v23 == v8 && v23 == v3 )
      v10 = 1433629234;
    else
      v10 = 1433629235;
  }
  else
  {
    v3 = v9;
    v21 = v9;
    v8 = v9;
    v23 = v9;
    v10 = 1433629233;
  }
  v22 = v10;
  v11 = ComputeChecksum(v24, v10, 2);
  v12 = ComputeChecksum(v9, v11, v20);
  v18 = v12;
  if ( v22 == 1433629235 )
  {
    v13 = v20;
    v14 = ComputeChecksum(v8, v12, v20);
    v4 = ComputeChecksum(v3, v14, v13);
  }
  else
  {
    v4 = v18;
  }
LABEL_6:
  HIWORD(v17[2]) = LOWORD(v17[2]) * (7u / LOWORD(v17[2]) + 1);
  LOWORD(v17[3]) = HIWORD(v17[2]) + 7;
  result = 6 * HIWORD(v17[3]) * (unsigned __int16)(HIWORD(v17[2]) + 7);
  v6 = a3;
  v17[4] = result;
  if ( a3 )
  {
    if ( (v17[1] & 1) != 0 )
    {
      v17[5] = 0;
LABEL_9:
      *(_DWORD *)(v6 + 164) = v19;
      qmemcpy((void *)(v6 + 144), &v17[1], 0x14u);
      return result;
    }
    v15 = EngAllocMem(0, 6 * HIWORD(v17[3]) * (unsigned __int16)(HIWORD(v17[2]) + 7), 0x33345448u);
    v17[5] = v15;
    if ( v15 )
    {
      if ( GenerateWORDPat(v3, (int)v15, LOWORD(v17[2]), (void *)LOWORD(v17[3]), HIWORD(v17[3])) )
      {
        result = v17[4];
        v6 = a3;
        goto LABEL_9;
      }
      EngFreeMem((PVOID)v17[5]);
    }
    return -2;
  }
  return ComputeChecksum(v17, v4, 24);
}
