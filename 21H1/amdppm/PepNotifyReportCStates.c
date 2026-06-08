/*
 * XREFs of PepNotifyReportCStates @ 0x1C00324B8
 * Callers:
 *     AcpiCStateNotifyWorker @ 0x1C00233D0 (AcpiCStateNotifyWorker.c)
 *     InitPepIdleStates @ 0x1C00312EC (InitPepIdleStates.c)
 * Callees:
 *     WPP_RECORDER_SF_D @ 0x1C0003AB4 (WPP_RECORDER_SF_D.c)
 *     memset @ 0x1C000ED80 (memset.c)
 *     PepTranslateCstState @ 0x1C0032950 (PepTranslateCstState.c)
 */

__int64 __fastcall PepNotifyReportCStates(__int64 a1)
{
  unsigned int *v1; // rax
  unsigned int v3; // edx
  char v4; // r14
  __int64 v5; // rax
  size_t v6; // rdi
  char *PoolWithTag; // rax
  char *v8; // rbx
  int v9; // ebx
  unsigned int *v10; // rdx
  unsigned int i; // r10d
  int v12; // r10d
  PVOID v13; // rdi
  __int64 v15; // [rsp+30h] [rbp-30h] BYREF
  PVOID P; // [rsp+38h] [rbp-28h]
  __int128 v17; // [rsp+40h] [rbp-20h] BYREF
  int v18; // [rsp+50h] [rbp-10h]

  v1 = *(unsigned int **)(a1 + 512);
  v3 = *v1;
  v4 = *((_BYTE *)v1 + 16);
  v5 = *v1 + 1;
  if ( v4 == 1 )
    v5 = v3;
  v15 = (unsigned int)v5;
  v6 = 24 * v5;
  PoolWithTag = (char *)ExAllocatePoolWithTag(NonPagedPoolNx, 24 * v5, 0x72637250u);
  v8 = PoolWithTag;
  if ( PoolWithTag )
  {
    memset(PoolWithTag, 0, v6);
    P = v8;
    if ( v4 != 1 )
    {
      v18 = 0;
      v17 = 0LL;
      LOBYTE(v17) = 127;
      BYTE12(v17) = 1;
      HIWORD(v17) = 0;
      PepTranslateCstState(&v17, v8);
      v8 += 24;
    }
    v10 = *(unsigned int **)(a1 + 512);
    for ( i = 0; i < *v10; i = v12 + 1 )
    {
      PepTranslateCstState(&v10[4 * i + 1 + i], v8);
      v10 = *(unsigned int **)(a1 + 512);
      v8 += 24;
    }
    v13 = P;
    v9 = PoFxProcessorNotification(*(_QWORD *)(a1 + 1104), 15LL, &v15);
    if ( v9 < 0 )
    {
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        WPP_RECORDER_SF_D(
          (__int64)WPP_GLOBAL_Control->DeviceExtension,
          4u,
          2u,
          0x23u,
          (__int64)&WPP_30f3a4644f7d37ea99a2cc96fc5420f3_Traceguids,
          v9,
          v15);
      v9 = 0;
    }
    if ( v13 )
      ExFreePoolWithTag(v13, 0x72637250u);
  }
  else
  {
    return (unsigned int)-1073741670;
  }
  return (unsigned int)v9;
}
