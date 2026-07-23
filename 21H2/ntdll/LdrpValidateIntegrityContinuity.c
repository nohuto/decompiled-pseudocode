/*
 * XREFs of LdrpValidateIntegrityContinuity @ 0x180061B68
 * Callers:
 *     LdrpMapDllNtFileName @ 0x1800610D4 (LdrpMapDllNtFileName.c)
 * Callees:
 *     LdrpSetModuleSigningLevel @ 0x180089B58 (LdrpSetModuleSigningLevel.c)
 *     NtCompareSigningLevels @ 0x18009E970 (NtCompareSigningLevels.c)
 *     LdrpLogIntegrityContinuityTelemetry @ 0x1800CF790 (LdrpLogIntegrityContinuityTelemetry.c)
 */

__int64 __fastcall LdrpValidateIntegrityContinuity(__int64 a1, __int64 a2, char a3, __int64 a4)
{
  NTSTATUS v4; // esi
  __int64 v7; // rax
  int v9; // ebx
  bool v10; // cl
  int v11; // [rsp+40h] [rbp+8h] BYREF
  char v12; // [rsp+50h] [rbp+18h] BYREF

  v12 = a3;
  v4 = 0;
  v11 = 0;
  if ( (*(_DWORD *)(a1 + 32) & 0x400000) != 0
    || (v7 = *(_QWORD *)(a1 + 48)) != 0
    && ((*(_DWORD *)(v7 + 280) & 0x8000) != 0 || NtCompareSigningLevels(*(_BYTE *)(v7 + 284), 0xCu) >= 0) )
  {
    LOBYTE(a4) = 12;
    v9 = LdrpSetModuleSigningLevel(a2, *(_QWORD *)(a1 + 56), &v11, a4, &v12);
    if ( v9 < 0 )
    {
      v10 = 1;
      if ( v9 == -1073741701
        || v9 == -1073740760
        || v9 == -1073740285
        || v9 == -1058471934
        || LdrpEnforceIntegrityContinuity )
      {
        v4 = v9;
        *(_BYTE *)(*(_QWORD *)(a1 + 56) + 284LL) = 1;
      }
    }
    else
    {
      v4 = NtCompareSigningLevels(*(_BYTE *)(*(_QWORD *)(a1 + 56) + 284LL), 0xCu);
      v10 = v4 < 0;
    }
    if ( v10 )
      LdrpLogIntegrityContinuityTelemetry(a1, v9, v11, v4, v12);
  }
  return (unsigned int)v4;
}
