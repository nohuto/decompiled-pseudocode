/*
 * XREFs of ViPostPoolAllocation @ 0x1409D24BC
 * Callers:
 *     VeAllocatePoolWithTagPriority @ 0x1409D15B0 (VeAllocatePoolWithTagPriority.c)
 * Callees:
 *     ExpSizeHeapPool @ 0x1405B4678 (ExpSizeHeapPool.c)
 */

unsigned __int64 __fastcall ViPostPoolAllocation(unsigned __int64 *a1, char a2)
{
  unsigned __int64 v2; // rdi
  unsigned __int64 v5; // rbp
  __int64 v6; // rbx
  unsigned __int64 v7; // rdx
  unsigned __int64 v8; // rax
  _QWORD *v9; // r8
  _DWORD *v10; // rcx
  unsigned __int64 v11; // rax
  unsigned __int32 v12; // eax
  unsigned __int64 v13; // rax
  unsigned int v14; // eax
  unsigned __int64 v15; // rax
  unsigned __int32 v16; // eax
  unsigned __int64 v17; // rcx
  unsigned int v18; // ecx
  unsigned __int64 result; // rax

  v2 = *a1;
  VerifierIsTrackingPool = 1;
  v5 = v2 & 1;
  v6 = *(_QWORD *)(((unsigned __int64)a1 & 0xFFFFFFFFFFFFF000uLL) + 8);
  v7 = ExpSizeHeapPool(v2);
  v8 = a1[2];
  if ( (v2 & 1) != 0 )
  {
    v2 &= ~1uLL;
    v7 = a1[2];
    *a1 = v2;
  }
  else
  {
    if ( v8 > 0xFE0 )
    {
LABEL_12:
      v9 = (_QWORD *)(v2 + v7 - 8);
      goto LABEL_13;
    }
    v7 -= 16LL;
  }
  if ( !v5 )
    goto LABEL_12;
  v7 = v8;
  if ( (v2 & 0xFFF) != 0 )
    v9 = (_QWORD *)((v2 & 0xFFFFFFFFFFFFF000uLL) + 16);
  else
    v9 = (_QWORD *)(v2 + 4064);
  v10 = (_DWORD *)(v2 & 0xFFFFFFFFFFFFF000uLL);
  if ( (v2 & 0xFFF) == 0 )
    v10 = (_DWORD *)(v2 + 4080);
  *v10 |= 0x4000u;
LABEL_13:
  *a1 = v2;
  a1[2] = v7;
  if ( (a2 & 1) != 0 )
  {
    v11 = v7 + _InterlockedExchangeAdd64((volatile signed __int64 *)(v6 + 120), v7);
    if ( v11 > *(_QWORD *)(v6 + 136) )
      *(_QWORD *)(v6 + 136) = v11;
    v12 = _InterlockedIncrement((volatile signed __int32 *)(v6 + 104));
    if ( v12 > *(_DWORD *)(v6 + 112) )
      *(_DWORD *)(v6 + 112) = v12;
    v13 = v7 + _InterlockedExchangeAdd64(&qword_140C2A850, v7);
    if ( v13 > qword_140C2A860 )
      qword_140C2A860 = v13;
    v14 = _InterlockedIncrement(&dword_140C2A840);
    if ( v14 > dword_140C2A848 )
      dword_140C2A848 = v14;
  }
  else
  {
    v15 = v7 + _InterlockedExchangeAdd64((volatile signed __int64 *)(v6 + 128), v7);
    if ( v15 > *(_QWORD *)(v6 + 144) )
      *(_QWORD *)(v6 + 144) = v15;
    v16 = _InterlockedIncrement((volatile signed __int32 *)(v6 + 108));
    if ( v16 > *(_DWORD *)(v6 + 116) )
      *(_DWORD *)(v6 + 116) = v16;
    v17 = v7 + _InterlockedExchangeAdd64(&qword_140C2A858, v7);
    if ( v17 > qword_140C2A868 )
      qword_140C2A868 = v17;
    v18 = _InterlockedIncrement(&dword_140C2A844);
    if ( v18 > dword_140C2A84C )
      dword_140C2A84C = v18;
  }
  result = v2;
  *v9 = a1;
  return result;
}
