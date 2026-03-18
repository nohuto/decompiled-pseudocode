/*
 * XREFs of IopIrpStackProfilerDpcRoutine @ 0x140328A20
 * Callers:
 *     <none>
 * Callees:
 *     KeGetPrcb @ 0x14021DBD0 (KeGetPrcb.c)
 *     IopProcessIrpStackProfiler @ 0x140328C6C (IopProcessIrpStackProfiler.c)
 *     __security_check_cookie @ 0x1403CCE60 (__security_check_cookie.c)
 *     _local_unwind @ 0x1403CE590 (_local_unwind.c)
 *     _guard_dispatch_icall @ 0x1403FFC70 (_guard_dispatch_icall.c)
 *     KiCustomAccessRoutine2 @ 0x140401330 (KiCustomAccessRoutine2.c)
 *     memset @ 0x14040A280 (memset.c)
 */

__int64 __fastcall IopIrpStackProfilerDpcRoutine(__int64 a1, __int64 a2, __int64 a3, unsigned __int64 a4)
{
  unsigned __int64 v8; // rdi
  unsigned int i; // ebx
  __int64 Prcb; // rax
  __int64 v11; // rdx
  _DWORD *v12; // r8
  int v13; // edx
  __int64 result; // rax
  __int64 v15; // rcx
  unsigned int v16; // ebx
  __int64 v17; // rax
  _DWORD v18[84]; // [rsp+0h] [rbp-228h] BYREF
  _DWORD *v19; // [rsp+150h] [rbp-D8h]
  _QWORD v20[20]; // [rsp+160h] [rbp-C8h] BYREF

  v19 = v18;
  memset(&v18[40], 0, 0x5BuLL);
  if ( a2 >> 47 != -1 && a2 >> 47 != 0 )
  {
    v18[12] = 0;
    *(_BYTE *)a1 = 0;
    *(_QWORD *)(a1 + 32) = a4 >> 8;
    *(_QWORD *)((char *)&v18[60] + 3) = a3;
    *(_QWORD *)((char *)&v18[44] + 3) = __ROL8__(a2, a3);
    *(_QWORD *)((char *)&v18[54] + 3) = __ROR8__(a1, a3);
    *(_QWORD *)(a1 + 40) ^= a4;
    *(_QWORD *)(a1 + 48) ^= a3;
    KiCustomAccessRoutine2(a2);
  }
  memset(v20, 0, sizeof(v20));
  v8 = 0LL;
  for ( i = 0; i < (unsigned int)KeNumberProcessors_0; ++i )
  {
    Prcb = KeGetPrcb(i);
    if ( Prcb )
    {
      v8 += (unsigned int)(*(_DWORD *)(Prcb + 34832) - *(_DWORD *)(Prcb + 34916));
      v11 = 0LL;
      v12 = (_DWORD *)(Prcb + 34752);
      do
      {
        v20[v11++] += (unsigned int)(*v12 - v12[21]);
        ++v12;
      }
      while ( v11 < 20 );
    }
  }
  v13 = 20;
  result = (unsigned int)IopIrpStackProfilerSampleSize;
  if ( v8 > (unsigned int)IopIrpStackProfilerSampleSize )
  {
    v13 = 0;
    v15 = 0LL;
    result = (unsigned int)IopIrpStackProfilerMinSizeThreshold;
    do
    {
      if ( v20[v15] > (unsigned __int64)(unsigned int)IopIrpStackProfilerMinSizeThreshold )
        break;
      ++v13;
      ++v15;
    }
    while ( v15 < 20 );
  }
  if ( v13 != 20 )
  {
    IopProcessIrpStackProfiler(v20);
    IopIrpStackProfilerMinSizeThreshold *= 2;
    if ( (unsigned int)IopIrpStackProfilerMinSizeThreshold > 0x1900 )
      IopIrpStackProfilerMinSizeThreshold = 6400;
    IopIrpStackProfilerSampleSize *= 2;
    if ( (unsigned int)IopIrpStackProfilerSampleSize > 0x7D00 )
      IopIrpStackProfilerSampleSize = 32000;
    v16 = 0;
    for ( result = (unsigned int)KeNumberProcessors_0;
          v16 < (unsigned int)KeNumberProcessors_0;
          result = (unsigned int)KeNumberProcessors_0 )
    {
      v17 = KeGetPrcb(v16);
      if ( v17 )
      {
        *(_OWORD *)(v17 + 34836) = *(_OWORD *)(v17 + 34752);
        *(_OWORD *)(v17 + 34852) = *(_OWORD *)(v17 + 34768);
        *(_OWORD *)(v17 + 34868) = *(_OWORD *)(v17 + 34784);
        *(_OWORD *)(v17 + 34884) = *(_OWORD *)(v17 + 34800);
        *(_OWORD *)(v17 + 34900) = *(_OWORD *)(v17 + 34816);
        *(_DWORD *)(v17 + 34916) = *(_DWORD *)(v17 + 34832);
      }
      ++v16;
    }
  }
  _InterlockedOr(&IopIrpStackProfilerFlags, 4u);
  return result;
}
