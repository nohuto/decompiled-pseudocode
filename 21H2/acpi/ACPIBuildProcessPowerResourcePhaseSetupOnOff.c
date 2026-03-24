/*
 * XREFs of ACPIBuildProcessPowerResourcePhaseSetupOnOff @ 0x1C00120A0
 * Callers:
 *     <none>
 * Callees:
 *     AMLIDereferenceHandleEx @ 0x1C000BC6C (AMLIDereferenceHandleEx.c)
 *     AMLIAsyncEvalObject @ 0x1C001467C (AMLIAsyncEvalObject.c)
 *     ACPIBuildCompleteCommon @ 0x1C001A6D0 (ACPIBuildCompleteCommon.c)
 *     AMLIGetNamedChild @ 0x1C0020D50 (AMLIGetNamedChild.c)
 *     ACPIVerifyAndCopyFirmwareDependencies @ 0x1C002EB38 (ACPIVerifyAndCopyFirmwareDependencies.c)
 */

__int64 __fastcall ACPIBuildProcessPowerResourcePhaseSetupOnOff(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v4; // rbx
  __int64 v5; // rsi
  __int64 v7; // rax
  __int64 v8; // r8
  __int64 v9; // r9
  __int64 v10; // rcx
  __int64 v11; // rax
  __int64 v12; // r8
  __int64 v13; // r9
  __int64 v14; // rcx
  __int64 v15; // rax
  __int64 v16; // rcx
  __int64 v17; // r8
  __int64 v18; // r9
  __int64 v19; // rbp
  __int64 v20; // rcx
  char v21; // al
  int v22; // ebx
  __int64 v24; // rdx

  v4 = *(_QWORD *)(a1 + 40);
  v5 = a1 + 80;
  *(_DWORD *)(a1 + 32) = 6;
  if ( *(_WORD *)(a1 + 82) )
  {
    ACPIVerifyAndCopyFirmwareDependencies(*(_QWORD *)(v4 + 32));
    _InterlockedOr64((volatile signed __int64 *)(v4 + 16), 0x1000uLL);
  }
  *(_OWORD *)v5 = 0LL;
  *(_OWORD *)(v5 + 16) = 0LL;
  *(_QWORD *)(v5 + 32) = 0LL;
  v7 = AMLIGetNamedChild(*(_QWORD *)(v4 + 32), 1179012959LL, a3, a4);
  if ( !v7 )
    KeBugCheckEx(0xA5u, 0xEuLL, *(_QWORD *)(v4 + 32), 0x46464F5FuLL, 0LL);
  v10 = *(_QWORD *)(v4 + 32);
  *(_QWORD *)(v4 + 80) = v7;
  v11 = AMLIGetNamedChild(v10, 1598967647LL, v8, v9);
  if ( !v11 )
    KeBugCheckEx(0xA5u, 0xEuLL, *(_QWORD *)(v4 + 32), 0x5F4E4F5FuLL, 0LL);
  v14 = *(_QWORD *)(v4 + 32);
  *(_QWORD *)(v4 + 72) = v11;
  v15 = AMLIGetNamedChild(v14, 1414746719LL, v12, v13);
  v16 = *(_QWORD *)(v4 + 32);
  *(_QWORD *)(v4 + 88) = v15;
  v19 = AMLIGetNamedChild(v16, 1096045407LL, v17, v18);
  if ( !v19 )
    KeBugCheckEx(0xA5u, 0xEuLL, *(_QWORD *)(v4 + 32), 0x4154535FuLL, 0LL);
  *(_OWORD *)v5 = 0LL;
  *(_OWORD *)(v5 + 16) = 0LL;
  *(_QWORD *)(v5 + 32) = 0LL;
  if ( (*(_DWORD *)(v4 + 16) & 0x1000LL) != 0 )
  {
    v22 = 0;
LABEL_17:
    v24 = *(unsigned int *)(a1 + 32);
    if ( v22 < 0 )
      *(_DWORD *)(a1 + 48) = v22;
    *(_DWORD *)(a1 + 32) = 2;
    ACPIBuildCompleteCommon(a1 + 24, v24);
    goto LABEL_12;
  }
  v20 = *(_QWORD *)(a1 + 56);
  if ( v20 )
    AMLIDereferenceHandleEx(v20);
  v21 = gdwfAMLI;
  *(_QWORD *)(a1 + 56) = v19;
  dword_1C0082908 = 0;
  pszDest = 0;
  if ( (v21 & 4) != 0 )
    _InterlockedIncrement((volatile signed __int32 *)(v19 + 8));
  v22 = AMLIAsyncEvalObject(v19, v5, 0, 0, (__int64)ACPIBuildCompleteGeneric, a1);
  if ( v22 != 259 )
    goto LABEL_17;
LABEL_12:
  AMLIDereferenceHandleEx(v19);
  return (unsigned int)v22;
}
