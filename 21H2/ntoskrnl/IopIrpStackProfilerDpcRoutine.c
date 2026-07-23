/*
 * XREFs of IopIrpStackProfilerDpcRoutine @ 0x1402A49B0
 * Callers:
 *     <none>
 * Callees:
 *     IopProcessIrpStackProfiler @ 0x1402A4BFC (IopProcessIrpStackProfiler.c)
 *     KeGetPrcb @ 0x1402CD730 (KeGetPrcb.c)
 *     __security_check_cookie @ 0x1403D05D0 (__security_check_cookie.c)
 *     _local_unwind @ 0x1403D1D00 (_local_unwind.c)
 *     _guard_dispatch_icall @ 0x140408790 (_guard_dispatch_icall.c)
 *     KiCustomAccessRoutine2 @ 0x140409FB0 (KiCustomAccessRoutine2.c)
 *     memset @ 0x140414300 (memset.c)
 */

void __fastcall IopIrpStackProfilerDpcRoutine(
        struct _KDPC *Dpc,
        __int64 DeferredContext,
        unsigned __int64 SystemArgument1,
        unsigned __int64 SystemArgument2)
{
  unsigned __int64 v8; // rdi
  unsigned int i; // ebx
  __int64 Prcb; // rax
  __int64 v11; // rdx
  _DWORD *v12; // r8
  int v13; // edx
  __int64 j; // rcx
  unsigned int k; // ebx
  __int64 v16; // rax
  _DWORD v17[84]; // [rsp+0h] [rbp-228h] BYREF
  _DWORD *v18; // [rsp+150h] [rbp-D8h]
  _QWORD v19[20]; // [rsp+160h] [rbp-C8h] BYREF

  v18 = v17;
  memset(&v17[40], 0, 0x5BuLL);
  if ( DeferredContext >> 47 != -1 && DeferredContext >> 47 != 0 )
  {
    v17[12] = 0;
    Dpc->Type = 0;
    Dpc->DeferredContext = (PVOID)(SystemArgument2 >> 8);
    *(_QWORD *)((char *)&v17[60] + 3) = SystemArgument1;
    *(_QWORD *)((char *)&v17[44] + 3) = __ROL8__(DeferredContext, SystemArgument1);
    *(_QWORD *)((char *)&v17[54] + 3) = __ROR8__(Dpc, SystemArgument1);
    Dpc->SystemArgument1 = (PVOID)((unsigned __int64)Dpc->SystemArgument1 ^ SystemArgument2);
    Dpc->SystemArgument2 = (PVOID)((unsigned __int64)Dpc->SystemArgument2 ^ SystemArgument1);
    KiCustomAccessRoutine2(DeferredContext);
  }
  memset(v19, 0, sizeof(v19));
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
        v19[v11++] += (unsigned int)(*v12 - v12[21]);
        ++v12;
      }
      while ( v11 < 20 );
    }
  }
  v13 = 20;
  if ( v8 > (unsigned int)IopIrpStackProfilerSampleSize )
  {
    v13 = 0;
    for ( j = 0LL; j < 20; ++j )
    {
      if ( v19[j] > (unsigned __int64)(unsigned int)IopIrpStackProfilerMinSizeThreshold )
        break;
      ++v13;
    }
  }
  if ( v13 != 20 )
  {
    IopProcessIrpStackProfiler(v19);
    IopIrpStackProfilerMinSizeThreshold *= 2;
    if ( (unsigned int)IopIrpStackProfilerMinSizeThreshold > 0x1900 )
      IopIrpStackProfilerMinSizeThreshold = 6400;
    IopIrpStackProfilerSampleSize *= 2;
    if ( (unsigned int)IopIrpStackProfilerSampleSize > 0x7D00 )
      IopIrpStackProfilerSampleSize = 32000;
    for ( k = 0; k < (unsigned int)KeNumberProcessors_0; ++k )
    {
      v16 = KeGetPrcb(k);
      if ( v16 )
      {
        *(_OWORD *)(v16 + 34836) = *(_OWORD *)(v16 + 34752);
        *(_OWORD *)(v16 + 34852) = *(_OWORD *)(v16 + 34768);
        *(_OWORD *)(v16 + 34868) = *(_OWORD *)(v16 + 34784);
        *(_OWORD *)(v16 + 34884) = *(_OWORD *)(v16 + 34800);
        *(_OWORD *)(v16 + 34900) = *(_OWORD *)(v16 + 34816);
        *(_DWORD *)(v16 + 34916) = *(_DWORD *)(v16 + 34832);
      }
    }
  }
  _InterlockedOr(&IopIrpStackProfilerFlags, 4u);
}
