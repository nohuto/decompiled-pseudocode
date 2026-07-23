/*
 * XREFs of KeConfigureHeteroPolicy @ 0x1407BBEA0
 * Callers:
 *     PopConfigureHeteroPolicies @ 0x1407BB88C (PopConfigureHeteroPolicies.c)
 * Callees:
 *     <none>
 */

char __fastcall KeConfigureHeteroPolicy(_DWORD *a1)
{
  char v1; // r9
  __int64 v3; // r10
  int *v4; // rax
  __int64 v5; // rdx
  __int64 v6; // rcx
  int v7; // ecx
  _DWORD *v8; // rcx
  __int64 v9; // rdx
  int v10; // eax
  char result; // al

  v1 = 0;
  if ( *a1 >= 9u )
    *a1 = 0;
  v3 = 5LL;
  v4 = a1 + 1;
  v5 = 5LL;
  do
  {
    v6 = 2LL;
    do
    {
      if ( *v4 >= 5 )
        *v4 = 0;
      ++v4;
      --v6;
    }
    while ( v6 );
    --v5;
  }
  while ( v5 );
  v7 = a1[13];
  if ( (v7 & 0xFFFFFFC0) != 0 )
  {
    a1[13] = 0;
    v7 = 0;
  }
  if ( KiDesiredHeteroCpuPolicy != *a1
    || KiDynamicHeteroCpuPolicyMask != v7
    || KiDynamicHeteroCpuPolicyImportantPriority != a1[11]
    || KiDynamicHeteroCpuPolicyExpectedRuntime != a1[12] )
  {
    KiDesiredHeteroCpuPolicy = *a1;
    v1 = 1;
    KiDynamicHeteroCpuPolicyImportantPriority = a1[11];
    KiDynamicHeteroCpuPolicyMask = a1[13];
    KiDynamicHeteroCpuPolicyExpectedRuntime = a1[12];
    KiDynamicHeteroCpuPolicyExpectedCycles = KiDynamicHeteroCpuPolicyExpectedRuntime
                                           * *(_DWORD *)(KiProcessorBlock[0] + 68);
  }
  v8 = &KiDynamicHeteroCpuPolicy;
  do
  {
    v9 = 2LL;
    do
    {
      v10 = *(_DWORD *)((char *)v8 + (char *)a1 - (char *)&KiDynamicHeteroCpuPolicy + 4);
      if ( *v8 != v10 )
      {
        v1 = 1;
        *v8 = v10;
      }
      ++v8;
      --v9;
    }
    while ( v9 );
    --v3;
  }
  while ( v3 );
  result = v1;
  KiQosHysteresisTimerPeriod = a1[14];
  return result;
}
