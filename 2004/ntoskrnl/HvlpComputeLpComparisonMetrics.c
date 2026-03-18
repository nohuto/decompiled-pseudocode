/*
 * XREFs of HvlpComputeLpComparisonMetrics @ 0x1404ED650
 * Callers:
 *     HvlpSelectLpSet @ 0x1404EE114 (HvlpSelectLpSet.c)
 *     HvlpSelectVpSet @ 0x1404EE580 (HvlpSelectVpSet.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x1403FFC70 (_guard_dispatch_icall.c)
 */

__int64 __fastcall HvlpComputeLpComparisonMetrics(unsigned int a1, __int64 a2, unsigned int a3)
{
  unsigned int v4; // r9d
  unsigned int v6; // ebp
  __int64 v7; // rdi
  unsigned int v8; // r13d
  __int64 result; // rax
  int v10; // r12d
  int v11; // edx
  int v12; // r10d
  int v13; // r15d
  int v14; // r13d
  unsigned int v15; // r8d
  int *v16; // rsi
  unsigned int v17; // ecx
  __int64 v18; // rdx
  __int64 v19; // rcx
  unsigned int v21; // [rsp+78h] [rbp+10h] BYREF
  int v22; // [rsp+80h] [rbp+18h]
  int v23; // [rsp+88h] [rbp+20h]

  v21 = 0;
  v4 = a1;
  v6 = 0;
  v7 = 5LL * a3;
  *(_DWORD *)(a2 + 8 * v7 + 20) = -1;
  *(_DWORD *)(a2 + 8 * v7 + 16) = 0;
  *(_QWORD *)(a2 + 8 * v7 + 24) = 0LL;
  *(_QWORD *)(a2 + 8 * v7 + 32) = 0LL;
  v8 = *(_DWORD *)(a2 + 40LL * a3 + 4);
  result = v8 >> 4;
  v10 = ~(KeGetCurrentPrcb()->LogicalProcessorsPerCore - 1);
  v11 = v10 & v8;
  v12 = (unsigned __int16)result;
  v13 = ~(KeGetCurrentPrcb()->LogicalProcessorsPerCore * KeGetCurrentPrcb()->CoresPerPhysicalProcessor - 1);
  v22 = v10 & v8;
  v14 = v13 & v8;
  v23 = (unsigned __int16)result;
  if ( a1 )
  {
    v15 = v21;
    v16 = (int *)(a2 + 4);
    do
    {
      if ( v6 != a3 )
      {
        result = *(unsigned __int16 *)(a2 + 8 * v7 + 8);
        if ( *((_WORD *)v16 + 2) == (_WORD)result && v6 < a3 )
          ++*(_DWORD *)(a2 + 8 * v7 + 36);
        if ( *((_BYTE *)v16 - 3) )
        {
          if ( *((_WORD *)v16 + 4) == *(_WORD *)(a2 + 8 * v7 + 12) )
            ++*(_DWORD *)(a2 + 8 * v7 + 16);
          v17 = *v16;
          if ( (v13 & *v16) == v14 )
          {
            ++*(_DWORD *)(a2 + 8 * v7 + 24);
            v17 = *v16;
          }
          if ( (v10 & v17) == v11 )
          {
            ++*(_DWORD *)(a2 + 8 * v7 + 28);
            v17 = *v16;
          }
          result = (unsigned __int16)(v17 >> 4);
          if ( (_DWORD)result == v12 )
            ++*(_DWORD *)(a2 + 8 * v7 + 32);
          v18 = *((unsigned __int16 *)v16 + 3);
          v19 = *(unsigned __int16 *)(a2 + 8 * v7 + 10);
          if ( (_WORD)v18 == (_WORD)v19
            || (!HvlpQueryNodeDistance
              ? (result = 3221226021LL)
              : (result = HvlpQueryNodeDistance(v19, v18, &v21), v15 = v21, v4 = a1, v12 = v23),
                (int)result < 0) )
          {
            v11 = v22;
          }
          else
          {
            v11 = v22;
            if ( v15 < *(_DWORD *)(a2 + 8 * v7 + 20) )
              *(_DWORD *)(a2 + 8 * v7 + 20) = v15;
          }
        }
      }
      ++v6;
      v16 += 10;
    }
    while ( v6 < v4 );
  }
  return result;
}
