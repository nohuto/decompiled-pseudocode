/*
 * XREFs of EtwpProcessorRundown @ 0x14093B28C
 * Callers:
 *     EtwpKernelTraceRundown @ 0x14077F77C (EtwpKernelTraceRundown.c)
 * Callees:
 *     KeQueryGroupAffinity @ 0x14027B860 (KeQueryGroupAffinity.c)
 *     EtwpLogKernelEvent @ 0x14029B0C0 (EtwpLogKernelEvent.c)
 *     KeQueryHighestNodeNumber @ 0x1402DE420 (KeQueryHighestNodeNumber.c)
 *     KeQueryNodeActiveAffinity @ 0x1402DE440 (KeQueryNodeActiveAffinity.c)
 *     KeQueryActiveProcessorCountEx @ 0x1402DE560 (KeQueryActiveProcessorCountEx.c)
 *     KeGetProcessorNumberFromIndex @ 0x1402FDDF0 (KeGetProcessorNumberFromIndex.c)
 *     KeQueryActiveGroupCount @ 0x14030B900 (KeQueryActiveGroupCount.c)
 *     __security_check_cookie @ 0x1403CCE60 (__security_check_cookie.c)
 *     memset @ 0x14040A280 (memset.c)
 *     ExFreePoolWithTag @ 0x1409B1140 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1409B1160 (ExAllocatePoolWithTag.c)
 */

void __fastcall EtwpProcessorRundown(__int64 a1)
{
  _PROCESSOR_NUMBER *PoolWithTag; // rsi
  ULONG ActiveProcessorCount; // eax
  unsigned int v4; // ebx
  ULONG v5; // edi
  unsigned int v6; // r8d
  __int64 v7; // rdx
  USHORT ActiveGroupCount; // ax
  unsigned int v9; // esi
  unsigned int v10; // edi
  KAFFINITY *v11; // r14
  KAFFINITY GroupAffinity; // rax
  unsigned int v13; // r8d
  __int64 v14; // rdx
  USHORT HighestNodeNumber; // ax
  bool v16; // zf
  int v17; // eax
  unsigned int v18; // r8d
  __int64 v19; // rdx
  ULONG v20; // [rsp+38h] [rbp-D0h] BYREF
  unsigned int v21; // [rsp+3Ch] [rbp-CCh] BYREF
  int v22; // [rsp+40h] [rbp-C8h] BYREF
  _OWORD P[64]; // [rsp+48h] [rbp-C0h] BYREF
  unsigned int *v24; // [rsp+448h] [rbp+340h] BYREF
  __int64 v25; // [rsp+450h] [rbp+348h]
  _PROCESSOR_NUMBER *v26; // [rsp+458h] [rbp+350h]
  int v27; // [rsp+460h] [rbp+358h]
  int v28; // [rsp+464h] [rbp+35Ch]

  memset(P, 0, sizeof(P));
  PoolWithTag = (_PROCESSOR_NUMBER *)P;
  ActiveProcessorCount = KeQueryActiveProcessorCountEx(0xFFFFu);
  v4 = 0;
  v20 = ActiveProcessorCount;
  if ( ActiveProcessorCount > 0x20 )
  {
    PoolWithTag = (_PROCESSOR_NUMBER *)ExAllocatePoolWithTag(PagedPool, 4LL * ActiveProcessorCount, 0x74777445u);
    if ( !PoolWithTag )
      goto LABEL_8;
    ActiveProcessorCount = v20;
  }
  v5 = 0;
  if ( ActiveProcessorCount )
  {
    do
    {
      KeGetProcessorNumberFromIndex(v5, &PoolWithTag[v5]);
      ActiveProcessorCount = v20;
      ++v5;
    }
    while ( v5 < v20 );
  }
  v6 = *(_DWORD *)a1;
  v7 = *(_QWORD *)(a1 + 1112);
  v27 = 4 * ActiveProcessorCount;
  v24 = &v20;
  v25 = 4LL;
  v26 = PoolWithTag;
  v28 = 0;
  EtwpLogKernelEvent((__int64)&v24, v7, v6, 2u, 0xB1Bu, 0x401802u);
  if ( PoolWithTag != (_PROCESSOR_NUMBER *)P )
    ExFreePoolWithTag(PoolWithTag, 0);
LABEL_8:
  ActiveGroupCount = KeQueryActiveGroupCount();
  v9 = ActiveGroupCount;
  v10 = 0;
  v22 = ActiveGroupCount;
  if ( ActiveGroupCount )
  {
    v11 = (KAFFINITY *)P;
    do
    {
      GroupAffinity = KeQueryGroupAffinity(v10++);
      *v11++ = GroupAffinity;
    }
    while ( v10 < v9 );
  }
  v13 = *(_DWORD *)a1;
  v14 = *(_QWORD *)(a1 + 1112);
  v24 = (unsigned int *)&v22;
  v26 = (_PROCESSOR_NUMBER *)P;
  v27 = 8 * v9;
  v25 = 4LL;
  v28 = 0;
  EtwpLogKernelEvent((__int64)&v24, v14, v13, 2u, 0xB1Au, 0x401802u);
  HighestNodeNumber = KeQueryHighestNodeNumber();
  v16 = HighestNodeNumber == -1;
  v17 = HighestNodeNumber + 1;
  v21 = v17;
  if ( !v16 )
  {
    do
    {
      KeQueryNodeActiveAffinity(v4, (PGROUP_AFFINITY)&P[v4], 0LL);
      v17 = v21;
      ++v4;
    }
    while ( v4 < v21 );
  }
  v18 = *(_DWORD *)a1;
  v19 = *(_QWORD *)(a1 + 1112);
  v27 = 16 * v17;
  v24 = &v21;
  EtwpLogKernelEvent((__int64)&v24, v19, v18, 2u, 0xB18u, 0x401802u);
}
