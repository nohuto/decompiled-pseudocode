/*
 * XREFs of ACPIBuildProcessPowerResourcePhaseSetupOnOff @ 0x1C002B0D0
 * Callers:
 *     <none>
 * Callees:
 *     ACPIBuildCompleteCommon @ 0x1C00095D8 (ACPIBuildCompleteCommon.c)
 *     AMLIGetNamedChild @ 0x1C000B060 (AMLIGetNamedChild.c)
 *     AMLIDereferenceHandleEx @ 0x1C000B860 (AMLIDereferenceHandleEx.c)
 *     AMLIAsyncEvalObject @ 0x1C0019E08 (AMLIAsyncEvalObject.c)
 *     ACPIVerifyAndCopyFirmwareDependencies @ 0x1C002A488 (ACPIVerifyAndCopyFirmwareDependencies.c)
 */

__int64 __fastcall ACPIBuildProcessPowerResourcePhaseSetupOnOff(__int64 a1)
{
  __int64 v1; // rdi
  __int64 v2; // rsi
  __int64 *v4; // rax
  __int64 *v5; // rcx
  __int64 *v6; // rax
  __int64 *v7; // rcx
  __int64 *v8; // rax
  __int64 *v9; // rcx
  __int64 *v10; // rbp
  volatile signed __int32 *v11; // rcx
  char v12; // al
  int v13; // eax
  unsigned int v14; // edi
  signed __int32 v16; // edx

  v1 = *(_QWORD *)(a1 + 40);
  v2 = a1 + 80;
  *(_DWORD *)(a1 + 32) = 6;
  if ( *(_WORD *)(a1 + 82) )
  {
    ACPIVerifyAndCopyFirmwareDependencies(*(__int64 **)(v1 + 32), v2, (__int64 *)(v1 + 96));
    _InterlockedOr64((volatile signed __int64 *)(v1 + 16), 0x1000uLL);
  }
  *(_OWORD *)v2 = 0LL;
  *(_OWORD *)(v2 + 16) = 0LL;
  *(_QWORD *)(v2 + 32) = 0LL;
  v4 = AMLIGetNamedChild(*(__int64 **)(v1 + 32), 1179012959);
  if ( !v4 )
    KeBugCheckEx(0xA5u, 0xEuLL, *(_QWORD *)(v1 + 32), 0x46464F5FuLL, 0LL);
  v5 = *(__int64 **)(v1 + 32);
  *(_QWORD *)(v1 + 80) = v4;
  v6 = AMLIGetNamedChild(v5, 1598967647);
  if ( !v6 )
    KeBugCheckEx(0xA5u, 0xEuLL, *(_QWORD *)(v1 + 32), 0x5F4E4F5FuLL, 0LL);
  v7 = *(__int64 **)(v1 + 32);
  *(_QWORD *)(v1 + 72) = v6;
  v8 = AMLIGetNamedChild(v7, 1414746719);
  v9 = *(__int64 **)(v1 + 32);
  *(_QWORD *)(v1 + 88) = v8;
  v10 = AMLIGetNamedChild(v9, 1096045407);
  if ( !v10 )
    KeBugCheckEx(0xA5u, 0xEuLL, *(_QWORD *)(v1 + 32), 0x4154535FuLL, 0LL);
  *(_OWORD *)v2 = 0LL;
  *(_OWORD *)(v2 + 16) = 0LL;
  *(_QWORD *)(v2 + 32) = 0LL;
  if ( (*(_DWORD *)(v1 + 16) & 0x1000LL) != 0 )
  {
    v16 = *(_DWORD *)(a1 + 32);
    v14 = 0;
LABEL_19:
    *(_DWORD *)(a1 + 32) = 2;
    ACPIBuildCompleteCommon((volatile signed __int32 *)(a1 + 24), v16);
    goto LABEL_12;
  }
  v11 = *(volatile signed __int32 **)(a1 + 56);
  if ( v11 )
    AMLIDereferenceHandleEx(v11);
  v12 = gdwfAMLI;
  *(_QWORD *)(a1 + 56) = v10;
  dword_1C0081AC8 = 0;
  byte_1C0081ACC = 0;
  if ( (v12 & 4) != 0 )
    _InterlockedIncrement((volatile signed __int32 *)v10 + 2);
  v13 = AMLIAsyncEvalObject(v10, v2, 0, 0LL, ACPIBuildCompleteGeneric, a1);
  v14 = v13;
  if ( v13 != 259 )
  {
    v16 = *(_DWORD *)(a1 + 32);
    if ( v13 < 0 )
      *(_DWORD *)(a1 + 48) = v13;
    goto LABEL_19;
  }
LABEL_12:
  AMLIDereferenceHandleEx((volatile signed __int32 *)v10);
  return v14;
}
