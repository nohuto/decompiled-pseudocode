/*
 * XREFs of KiIntSteerCalculateDistribution @ 0x1402CE6B0
 * Callers:
 *     KeIntSteerPeriodic @ 0x1402CDD80 (KeIntSteerPeriodic.c)
 * Callees:
 *     __security_check_cookie @ 0x1403D05D0 (__security_check_cookie.c)
 *     qsort @ 0x1403D2C30 (qsort.c)
 *     _alloca_probe @ 0x140408680 (_alloca_probe.c)
 *     KiIntSteerComputeCpuSet @ 0x1405229E0 (KiIntSteerComputeCpuSet.c)
 */

__int64 __fastcall KiIntSteerCalculateDistribution(unsigned __int16 *a1, unsigned int a2)
{
  unsigned __int64 v3; // rax
  __int64 v5; // r8
  void *v6; // rsp
  unsigned __int64 v7; // r9
  void *v8; // rsp
  unsigned int v9; // edi
  unsigned int v10; // r10d
  unsigned __int64 v11; // r8
  unsigned int v12; // ecx
  unsigned __int64 v13; // rdx
  __int64 v14; // rax
  unsigned __int64 v15; // rax
  __int64 v16; // rcx
  unsigned __int64 v17; // rcx
  void *v18; // rsp
  __int64 *v19; // rax
  void *v20; // rsp
  unsigned int v21; // r8d
  __int64 i; // rdx
  int v23; // r15d
  int v24; // r12d
  __int64 v25; // rbx
  __int64 v26; // rax
  __int64 v27; // rcx
  __int64 v28; // rdx
  __int64 v30; // rcx
  unsigned int v31; // edx
  unsigned int v32; // eax
  _DWORD Base[2]; // [rsp+20h] [rbp+0h] BYREF
  _DWORD *v34; // [rsp+28h] [rbp+8h]

  v3 = 4LL * a2;
  v5 = v3 + 15;
  if ( v3 + 15 < v3 )
    v5 = 0xFFFFFFFFFFFFFF0LL;
  v11 = v5 & 0xFFFFFFFFFFFFFFF0uLL;
  v6 = alloca(v11);
  v7 = *((_QWORD *)a1 + 1);
  v8 = alloca(v11);
  v9 = 0;
  v10 = 0;
  LOWORD(v11) = 0;
  v34 = Base;
  while ( 1 )
  {
    v12 = a1 ? *a1 : (unsigned __int16)v11 + 1;
    if ( !v7 )
      break;
LABEL_7:
    _BitScanForward64(&v13, v7);
    v7 &= ~(1LL << v13);
    v14 = v10++;
    Base[v14] = KiProcessorNumberToIndexMappingTable[64 * (unsigned __int16)v11 + (unsigned __int8)v13];
  }
  while ( 1 )
  {
    v11 = (unsigned __int16)(v11 + 1);
    if ( (unsigned int)v11 >= v12 )
      break;
    v7 = *(_QWORD *)&a1[4 * v11 + 4];
    if ( v7 )
      goto LABEL_7;
  }
  v15 = 8LL * (unsigned int)KiIntTrackRootCount;
  v16 = v15 + 15;
  if ( v15 + 15 < v15 )
    v16 = 0xFFFFFFFFFFFFFF0LL;
  v17 = v16 & 0xFFFFFFFFFFFFFFF0uLL;
  v18 = alloca(v17);
  v19 = (__int64 *)KiIntTrackRootList;
  v20 = alloca(v17);
  v21 = 0;
  for ( i = (unsigned int)(KiIntTrackRootCount - 1); v19 != &KiIntTrackRootList; v19 = (__int64 *)*v19 )
  {
    if ( v19[24] )
    {
      v30 = v21++;
      *(_QWORD *)&Base[2 * v30] = v19;
    }
    else
    {
      *(_QWORD *)&Base[2 * i] = v19;
      i = (unsigned int)(i - 1);
    }
  }
  qsort(Base, v21, 8uLL, (int (__cdecl *)(const void *, const void *))KiIntSteerLoadCompare);
  v23 = 0;
  v24 = 1;
  if ( KiIntTrackRootCount )
  {
    do
    {
      v25 = *(_QWORD *)&Base[2 * v9];
      if ( *(_BYTE *)(v25 + 132)
        && (!*(_QWORD *)(v25 + 136) || (int)KiIntSteerComputeCpuSet(*(_QWORD *)&Base[2 * v9]) < 0) )
      {
        if ( *(_QWORD *)(v25 + 192)
          || ((v26 = *(unsigned __int16 *)(v25 + 168), v27 = *(_QWORD *)(v25 + 160), *a1 <= (unsigned __int16)v26)
            ? (v28 = 0LL)
            : (v28 = v27 & *(_QWORD *)&a1[4 * v26 + 4]),
              v28 != v27) )
        {
          v31 = KiProcessorIndexToNumberMappingTable[v34[v23]];
          *(_DWORD *)(v25 + 186) = 0;
          *(_WORD *)(v25 + 190) = 0;
          *(_WORD *)(v25 + 184) = v31 >> 6;
          *(_QWORD *)(v25 + 176) = 1LL << (v31 & 0x3F);
          v32 = v23 + v24;
          if ( v23 + v24 >= a2 )
            v24 = -1;
          v23 = a2 - 1;
          if ( v32 < a2 )
            v23 = v32;
          if ( v23 < 0 )
          {
            v24 = 1;
            v23 = 0;
          }
        }
        else
        {
          *(_QWORD *)(v25 + 176) = v27;
        }
      }
      ++v9;
    }
    while ( v9 < KiIntTrackRootCount );
  }
  return 0LL;
}
