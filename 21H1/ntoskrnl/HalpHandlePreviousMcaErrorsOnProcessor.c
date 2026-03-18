/*
 * XREFs of HalpHandlePreviousMcaErrorsOnProcessor @ 0x1409A3188
 * Callers:
 *     HalpInitializeMce @ 0x14099BD5C (HalpInitializeMce.c)
 *     HalpHandlePreviousMcaErrors @ 0x1409A3048 (HalpHandlePreviousMcaErrors.c)
 * Callees:
 *     HalpMcaReadErrorPresence @ 0x14039D878 (HalpMcaReadErrorPresence.c)
 *     HalpMcaClearError @ 0x1404B4D28 (HalpMcaClearError.c)
 *     HalpMcaReadError @ 0x1404B5250 (HalpMcaReadError.c)
 *     HalpMcaReportError @ 0x1404B54D0 (HalpMcaReportError.c)
 *     HalpMceInitializeErrorPacketContents @ 0x14099C08C (HalpMceInitializeErrorPacketContents.c)
 *     ExFreePoolWithTag @ 0x1409B1010 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1409B1030 (ExAllocatePoolWithTag.c)
 */

void __fastcall HalpHandlePreviousMcaErrorsOnProcessor(__int64 a1, GUID *a2, __int64 a3)
{
  char v5; // r14
  GUID *v6; // rdi
  GUID *PoolWithTag; // rax
  int v8; // [rsp+68h] [rbp+20h] BYREF

  v8 = 0;
  v5 = a1;
  if ( (int)HalpMcaReadErrorPresence(a1, a3) >= 0 )
  {
    if ( a2 )
    {
      v6 = a2;
    }
    else
    {
      PoolWithTag = (GUID *)ExAllocatePoolWithTag(NonPagedPoolNx, 0x160uLL, 0x206C6148u);
      v6 = PoolWithTag;
      if ( !PoolWithTag )
        return;
      HalpMceInitializeErrorPacketContents(PoolWithTag);
    }
    while ( (int)HalpMcaReadError(17, (__int64)&v6[5], &v8, 0LL, a3) >= 0 )
    {
      if ( v5 )
      {
        *(_DWORD *)&v6[1].Data2 = v8;
        *(_DWORD *)&v6->Data4[4] = 1;
        HalpMcaReportError((__int64)v6, (__int64)&v6[5], a3);
      }
      HalpMcaClearError((__int64)&v6[5], a3);
    }
    if ( !a2 )
      ExFreePoolWithTag(v6, 0x206C6148u);
  }
}
