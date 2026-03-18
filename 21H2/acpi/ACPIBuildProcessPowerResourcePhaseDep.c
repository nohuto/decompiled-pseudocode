/*
 * XREFs of ACPIBuildProcessPowerResourcePhaseDep @ 0x1C002BF20
 * Callers:
 *     <none>
 * Callees:
 *     ACPIBuildCompleteMustSucceed @ 0x1C000A4C0 (ACPIBuildCompleteMustSucceed.c)
 *     AMLIGetNamedChild @ 0x1C000B060 (AMLIGetNamedChild.c)
 *     AMLIDereferenceHandleEx @ 0x1C000B860 (AMLIDereferenceHandleEx.c)
 *     AMLIAsyncEvalObject @ 0x1C0019E08 (AMLIAsyncEvalObject.c)
 */

__int64 __fastcall ACPIBuildProcessPowerResourcePhaseDep(__int64 a1)
{
  __int64 v2; // rcx
  unsigned int v3; // esi
  __int64 *v4; // rbx
  volatile signed __int32 *v6; // rcx
  char v7; // al

  v2 = *(_QWORD *)(a1 + 40);
  v3 = 0;
  *(_DWORD *)(a1 + 32) = 5;
  *(_OWORD *)(a1 + 80) = 0LL;
  *(_OWORD *)(a1 + 96) = 0LL;
  *(_QWORD *)(a1 + 112) = 0LL;
  v4 = AMLIGetNamedChild(*(__int64 **)(v2 + 32), 1346716767);
  if ( v4 )
  {
    v6 = *(volatile signed __int32 **)(a1 + 56);
    if ( v6 )
      AMLIDereferenceHandleEx(v6);
    v7 = gdwfAMLI;
    *(_QWORD *)(a1 + 56) = v4;
    dword_1C0081AC8 = 0;
    byte_1C0081ACC = 0;
    if ( (v7 & 4) != 0 )
      _InterlockedIncrement((volatile signed __int32 *)v4 + 2);
    v3 = AMLIAsyncEvalObject(v4, a1 + 80, 0, 0LL, ACPIBuildCompleteMustSucceed, a1);
    if ( v3 == 259 )
      goto LABEL_9;
  }
  ACPIBuildCompleteMustSucceed((ULONG_PTR)v4, v3, a1 + 80, a1);
  if ( v4 )
LABEL_9:
    AMLIDereferenceHandleEx((volatile signed __int32 *)v4);
  return v3;
}
