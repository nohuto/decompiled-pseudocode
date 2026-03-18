/*
 * XREFs of CallDPDdiEscape @ 0x1C004E9B8
 * Callers:
 *     DisplayPortEscapeAuxIoTransmission @ 0x1C004EA54 (DisplayPortEscapeAuxIoTransmission.c)
 *     DisplayPortEscapeGetAddress @ 0x1C004EB44 (DisplayPortEscapeGetAddress.c)
 *     DisplayPortEscapeGetDaps @ 0x1C004EBF8 (DisplayPortEscapeGetDaps.c)
 *     DisplayPortEscapeI2cIoTransmission @ 0x1C004ECA4 (DisplayPortEscapeI2cIoTransmission.c)
 *     DisplayPortEscapeSbmTransmission @ 0x1C004EE20 (DisplayPortEscapeSbmTransmission.c)
 * Callees:
 *     ?IsVmProcessOrVmValidation@DXGPROCESS@@QEAAEPEAVDXGADAPTER@@@Z @ 0x1C0009868 (-IsVmProcessOrVmValidation@DXGPROCESS@@QEAAEPEAVDXGADAPTER@@@Z.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C0111EB0 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?DdiEscape@DXGADAPTER@@QEAAJPEBU_DXGKARG_ESCAPE@@@Z @ 0x1C0219D90 (-DdiEscape@DXGADAPTER@@QEAAJPEBU_DXGKARG_ESCAPE@@@Z.c)
 */

__int64 __fastcall CallDPDdiEscape(struct DXGADAPTER **a1, void *a2, UINT a3, void *a4)
{
  DXGPROCESS *Current; // rax
  struct DXGADAPTER *v9; // rdx
  char IsVmProcessOrVmValidation; // al
  DXGADAPTER *v11; // rcx
  _DXGKARG_ESCAPE v13; // [rsp+20h] [rbp-30h] BYREF

  v13.hDevice = 0LL;
  *(_QWORD *)&v13.Flags.0 = 0LL;
  *(_QWORD *)(&v13.PrivateDriverDataSize + 1) = 0LL;
  HIDWORD(v13.hContext) = 0;
  Current = DXGPROCESS::GetCurrent();
  v9 = *a1;
  *(_QWORD *)&v13.Flags.0 = 129LL;
  IsVmProcessOrVmValidation = DXGPROCESS::IsVmProcessOrVmValidation(Current, v9);
  v13.PrivateDriverDataSize = a3;
  v13.pPrivateDriverData = a4;
  v13.hKmdProcessHandle = a2;
  v11 = *a1;
  *(_QWORD *)&v13.Flags.0 = ((unsigned __int8)(32 * IsVmProcessOrVmValidation) ^ 0x81) & 0x20 ^ 0x81u;
  return DXGADAPTER::DdiEscape(v11, &v13);
}
