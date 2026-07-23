/*
 * XREFs of HalpBuildScatterGatherListThin @ 0x1404CB86C
 * Callers:
 *     HalBuildScatterGatherListThin @ 0x1404CADF0 (HalBuildScatterGatherListThin.c)
 *     HalBuildScatterGatherListThinEx @ 0x1404CAE70 (HalBuildScatterGatherListThinEx.c)
 *     HalGetScatterGatherListThin @ 0x1404CB3C0 (HalGetScatterGatherListThin.c)
 *     HalGetScatterGatherListThinEx @ 0x1404CB430 (HalGetScatterGatherListThinEx.c)
 * Callees:
 *     HalpConstructScatterGatherListThin @ 0x1404CBA58 (HalpConstructScatterGatherListThin.c)
 *     ExFreePoolWithTag @ 0x1409B5010 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1409B5160 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall HalpBuildScatterGatherListThin(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 *a4,
        unsigned __int64 a5,
        unsigned int a6,
        char a7,
        __int64 a8,
        __int64 a9,
        int a10,
        char *P,
        unsigned int a12,
        _QWORD *a13)
{
  char v13; // r12
  __int64 *v14; // rbx
  __int64 v16; // r11
  int v17; // ebx
  unsigned __int64 v19; // rax
  unsigned int v20; // r9d
  unsigned int v21; // edx
  int v22; // r10d
  __int64 *i; // r8
  int v24; // ecx
  unsigned int v25; // eax
  unsigned int v26; // ecx
  __int64 v27; // rax
  __int64 v28; // rdi
  SIZE_T v29; // rdx
  char *PoolWithTag; // rsi
  char *v31; // rdi
  __int64 v32; // rax

  v13 = 0;
  v14 = a4;
  v16 = a2;
  if ( !a4 )
    return (unsigned int)-1073741811;
  if ( a13 )
    *a13 = 0LL;
  do
  {
    v19 = *((unsigned int *)v14 + 10);
    if ( a5 < v19 )
      break;
    v14 = (__int64 *)*v14;
    a5 -= v19;
  }
  while ( v14 );
  if ( !v14 )
    return (unsigned int)-1073741811;
  v20 = 0;
  v21 = a6;
  v22 = a5;
  for ( i = v14; v21; v21 -= v25 )
  {
    if ( !i )
      break;
    v24 = *((_DWORD *)i + 10);
    v25 = v21;
    i = (__int64 *)*i;
    v26 = v24 - v22;
    if ( v26 <= v21 )
      v25 = v26;
    ++v20;
    v22 = 0;
  }
  v27 = 0LL;
  if ( !v21 )
    v27 = v20;
  if ( !(_DWORD)v27 )
    return (unsigned int)-1073741811;
  v28 = 3 * v27;
  v29 = 24 * v27 + 120;
  if ( P )
  {
    if ( a12 < v29 )
      return (unsigned int)-1073741789;
    PoolWithTag = P;
  }
  else
  {
    PoolWithTag = (char *)ExAllocatePoolWithTag(NonPagedPoolNx, v29, 0x206C6148u);
    if ( !PoolWithTag )
      return (unsigned int)-1073741670;
    v16 = a2;
  }
  v31 = &PoolWithTag[8 * v28 + 16];
  v31[97] = P == 0LL;
  *((_QWORD *)v31 + 3) = a1;
  *((_QWORD *)v31 + 4) = v16;
  v32 = *(_QWORD *)(v16 + 32);
  *((_QWORD *)v31 + 11) = 0LL;
  *((_QWORD *)v31 + 5) = v32;
  *((_QWORD *)v31 + 8) = a8;
  *((_QWORD *)v31 + 9) = a9;
  *((_DWORD *)v31 + 14) = a6;
  *((_QWORD *)v31 + 6) = v14;
  *((_DWORD *)v31 + 15) = a5;
  *((_QWORD *)v31 + 10) = PoolWithTag;
  v31[96] = a7 & 1;
  *((_DWORD *)v31 + 4) = 1;
  v31[98] = 0;
  if ( a3 )
  {
    *(_QWORD *)(a3 + 88) = v31;
    *((_QWORD *)v31 + 11) = a3 + 8;
    _m_prefetchw((const void *)(a3 + 8));
    v13 = _InterlockedOr((volatile signed __int32 *)(a3 + 8), 4u);
  }
  if ( (v13 & 2) != 0 )
  {
    v17 = -1073741536;
    goto LABEL_27;
  }
  v17 = HalpConstructScatterGatherListThin(v31);
  if ( v17 < 0 )
  {
LABEL_27:
    if ( v31[97] )
      ExFreePoolWithTag(PoolWithTag, 0);
    return (unsigned int)v17;
  }
  if ( a13 )
    *a13 = PoolWithTag;
  return (unsigned int)v17;
}
