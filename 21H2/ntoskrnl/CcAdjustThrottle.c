/*
 * XREFs of CcAdjustThrottle @ 0x14023A24C
 * Callers:
 *     CcLazyWriteScan @ 0x1403005E4 (CcLazyWriteScan.c)
 * Callees:
 *     CcAdjustCurrentThresholdWrtTop @ 0x14023A414 (CcAdjustCurrentThresholdWrtTop.c)
 */

unsigned __int64 __fastcall CcAdjustThrottle(_QWORD *a1, __int64 *a2, __int64 a3, __int64 a4)
{
  unsigned __int64 v4; // r10
  __int64 v6; // r15
  unsigned __int64 v8; // rdi
  unsigned __int64 v9; // r14
  unsigned __int64 v10; // rcx
  unsigned int v11; // r8d
  unsigned __int64 v12; // r11
  unsigned __int64 v13; // rbp
  unsigned int v14; // edx
  unsigned __int64 v15; // rdx
  unsigned __int64 v16; // rcx
  int v17; // ecx
  unsigned __int64 v18; // rdx
  unsigned __int64 result; // rax
  unsigned __int64 v20; // rax
  unsigned __int64 v21; // rcx
  unsigned __int64 v22; // [rsp+50h] [rbp+8h] BYREF

  v4 = *(_QWORD *)a3;
  v6 = *(unsigned int *)(a3 + 24);
  v8 = *(_QWORD *)(a3 + 8);
  v9 = *(_QWORD *)(a3 + 16);
  v10 = a1[94];
  v11 = *((_DWORD *)a2 + 4) - a4;
  v12 = *a2;
  v13 = a2[1];
  v22 = v4;
  if ( v10 )
  {
    if ( v10 > 0xFFFFFFFF || v11 <= v10 )
      v11 = 0;
    else
      v11 -= v10;
    a1[94] = 0LL;
  }
  v14 = v11;
  if ( v11 < 0x200 )
    v14 = 512;
  v15 = v14 >> 2;
  if ( (unsigned int)v15 > v4 )
    v15 = (unsigned int)v4;
  if ( v12 >= v6 + ((3 * (v4 - v6)) >> 2) )
  {
    v4 -= (unsigned int)v15;
    if ( v4 <= v9 )
      v4 = v9;
  }
  else
  {
    if ( v8 < v4 )
    {
      LOBYTE(a4) = v11 < 0x200;
      CcAdjustCurrentThresholdWrtTop(&v22, v8, (unsigned int)v15, a4);
      v4 = v22;
      goto LABEL_9;
    }
    if ( v12 < v4 - v15 && v13 <= v4 )
    {
      v20 = v8 - v4;
      v21 = (v4 - v12) >> 3;
      if ( v21 <= v15 )
      {
        if ( v20 <= v15 )
          goto LABEL_23;
        v4 += v15;
      }
      else
      {
        if ( v20 <= v21 )
        {
LABEL_23:
          v4 = v8;
          goto LABEL_9;
        }
        v4 += v21;
      }
    }
  }
LABEL_9:
  *(_QWORD *)(a3 + 8) = v8;
  v16 = (v4 >> 1) + (v4 >> 2);
  *(_QWORD *)(a3 + 16) = v9;
  *(_QWORD *)a3 = v4;
  if ( v16 > 0xFFFFFFFF )
    LODWORD(v16) = -1;
  *(_DWORD *)(a3 + 24) = v16;
  v17 = (unsigned __int8)dword_140CFB19C;
  v18 = (a1[93] + a1[92]) >> 1;
  *(_QWORD *)(a3 + 8) = v18;
  result = v18 >> 2;
  *(_QWORD *)(a3 + 16) = v18 >> 2;
  if ( v18 >> 2 < 0x200 )
  {
    *(_QWORD *)(a3 + 16) = 512LL;
    result = 512LL;
  }
  if ( v18 >= result && v17 || (*(_QWORD *)(a3 + 8) = result, v17) )
  {
    if ( (unsigned int)CcAzure_TopBottomDPTEqual <= 1 )
    {
      result = (a1[93] + a1[92]) >> 1;
      *(_QWORD *)(a3 + 16) = result;
      *(_QWORD *)(a3 + 8) = result;
    }
  }
  return result;
}
