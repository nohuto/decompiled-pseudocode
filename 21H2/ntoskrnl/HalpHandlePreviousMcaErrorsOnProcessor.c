/*
 * XREFs of HalpHandlePreviousMcaErrorsOnProcessor @ 0x140A61564
 * Callers:
 *     HalpInitializeMce @ 0x140A5A6CC (HalpInitializeMce.c)
 *     HalpHandlePreviousMcaErrors @ 0x140A61424 (HalpHandlePreviousMcaErrors.c)
 * Callees:
 *     HalpMcaReadErrorPresence @ 0x1403AACB4 (HalpMcaReadErrorPresence.c)
 *     HalpMcaClearError @ 0x140506CA4 (HalpMcaClearError.c)
 *     HalpMcaReadError @ 0x1405071C4 (HalpMcaReadError.c)
 *     HalpMcaReportError @ 0x14050745C (HalpMcaReportError.c)
 *     HalpMceInitializeErrorPacketContents @ 0x140A5A9F8 (HalpMceInitializeErrorPacketContents.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 *     ExAllocatePool2 @ 0x140A6E430 (ExAllocatePool2.c)
 */

void __fastcall HalpHandlePreviousMcaErrorsOnProcessor(__int64 a1, GUID *a2, __int64 a3)
{
  char v5; // r14
  GUID *v6; // rdi
  GUID *Pool2; // rax
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
      Pool2 = (GUID *)ExAllocatePool2(64LL, 372LL, 1466720584LL);
      v6 = Pool2;
      if ( !Pool2 )
        return;
      HalpMceInitializeErrorPacketContents(Pool2);
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
      ExFreePoolWithTag(v6, 0x576C6148u);
  }
}
