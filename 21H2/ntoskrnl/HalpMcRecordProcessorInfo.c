/*
 * XREFs of HalpMcRecordProcessorInfo @ 0x1403A6704
 * Callers:
 *     HalpMcUpdateMicrocode @ 0x1403A6664 (HalpMcUpdateMicrocode.c)
 *     HalpMcInitializeMicrocodeInfo @ 0x140A3A5C8 (HalpMcInitializeMicrocodeInfo.c)
 * Callees:
 *     HalpMcSetUpdateInfoInvalid @ 0x1403A9164 (HalpMcSetUpdateInfoInvalid.c)
 *     ExAllocatePoolWithTag @ 0x1409B5160 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall HalpMcRecordProcessorInfo(__int64 a1)
{
  int v1; // eax
  PVOID *v3; // rax
  PVOID v4; // rcx
  _QWORD *PoolWithTag; // rax
  _QWORD *v7; // rcx
  _QWORD *v8; // rax

  v1 = *(_DWORD *)(a1 + 16);
  if ( v1 == -2 )
  {
    HalpMcSetUpdateInfoInvalid();
    HalpMcUpdateRecordingSupported = 0;
    return 0LL;
  }
  if ( !HalpMcUpdateInfoValid || v1 == -1 )
    return 0LL;
  v3 = (PVOID *)HalpMcUpdateInfoHead;
  if ( HalpMcUpdateInfoHead != &HalpMcUpdateInfoHead )
  {
    v4 = *(PVOID *)(a1 + 24);
    while ( v3[3] != v4 )
    {
      v3 = (PVOID *)*v3;
      if ( v3 == &HalpMcUpdateInfoHead )
        goto LABEL_8;
    }
    return 0LL;
  }
LABEL_8:
  PoolWithTag = ExAllocatePoolWithTag(PagedPool, 0x30uLL, 0x206C6148u);
  v7 = PoolWithTag;
  if ( PoolWithTag )
  {
    *(_OWORD *)PoolWithTag = 0LL;
    *((_OWORD *)PoolWithTag + 1) = 0LL;
    *((_OWORD *)PoolWithTag + 2) = 0LL;
    PoolWithTag[3] = *(_QWORD *)(a1 + 24);
    v8 = HalpMcUpdateInfoHead;
    if ( *((PVOID **)HalpMcUpdateInfoHead + 1) != &HalpMcUpdateInfoHead )
      __fastfail(3u);
    *v7 = HalpMcUpdateInfoHead;
    v7[1] = &HalpMcUpdateInfoHead;
    v8[1] = v7;
    HalpMcUpdateInfoHead = v7;
    return 0LL;
  }
  HalpMcSetUpdateInfoInvalid();
  return 3221225495LL;
}
