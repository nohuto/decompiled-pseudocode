/*
 * XREFs of ACPIBuildProcessPowerResourcePhaseDep @ 0x1C0030510
 * Callers:
 *     <none>
 * Callees:
 *     AMLIDereferenceHandleEx @ 0x1C000B8AC (AMLIDereferenceHandleEx.c)
 *     AMLIAsyncEvalObject @ 0x1C001441C (AMLIAsyncEvalObject.c)
 *     ACPIBuildCompleteMustSucceed @ 0x1C0015B20 (ACPIBuildCompleteMustSucceed.c)
 *     AMLIGetNamedChild @ 0x1C0020AF0 (AMLIGetNamedChild.c)
 */

__int64 __fastcall ACPIBuildProcessPowerResourcePhaseDep(__int64 a1)
{
  __int64 v2; // rcx
  unsigned int v3; // esi
  __int64 *v4; // rbx
  __int64 v6; // rcx
  char v7; // al

  v2 = *(_QWORD *)(a1 + 40);
  v3 = 0;
  *(_DWORD *)(a1 + 32) = 5;
  *(_OWORD *)(a1 + 80) = 0LL;
  *(_OWORD *)(a1 + 96) = 0LL;
  *(_QWORD *)(a1 + 112) = 0LL;
  v4 = AMLIGetNamedChild(*(__int64 **)(v2 + 32), 1346716767);
  if ( !v4 )
    goto LABEL_2;
  v6 = *(_QWORD *)(a1 + 56);
  if ( v6 )
    AMLIDereferenceHandleEx(v6);
  v7 = gdwfAMLI;
  *(_QWORD *)(a1 + 56) = v4;
  dword_1C0082908 = 0;
  pszDest = 0;
  if ( (v7 & 4) != 0 )
    _InterlockedIncrement((volatile signed __int32 *)v4 + 2);
  v3 = AMLIAsyncEvalObject(v4, a1 + 80, 0, 0LL, ACPIBuildCompleteMustSucceed, a1);
  if ( v3 != 259 )
LABEL_2:
    ACPIBuildCompleteMustSucceed((ULONG_PTR)v4, v3, a1 + 80, a1);
  if ( v4 )
    AMLIDereferenceHandleEx((__int64)v4);
  return v3;
}
