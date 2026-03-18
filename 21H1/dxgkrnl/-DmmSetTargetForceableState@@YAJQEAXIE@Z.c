/*
 * XREFs of ?DmmSetTargetForceableState@@YAJQEAXIE@Z @ 0x1C02DA5CC
 * Callers:
 *     DpiFdoHandleDisplayDetectControl @ 0x1C001FE48 (DpiFdoHandleDisplayDetectControl.c)
 * Callees:
 *     DmmDoForSpecifiedTarget__lambda_e0e259c51a0d5b694a557ab2d652315a___ @ 0x1C02D5BD0 (DmmDoForSpecifiedTarget__lambda_e0e259c51a0d5b694a557ab2d652315a___.c)
 */

__int64 __fastcall DmmSetTargetForceableState(DXGADAPTER *a1, __int64 a2, char a3)
{
  char v4; // [rsp+40h] [rbp+18h] BYREF

  v4 = a3;
  return DmmDoForSpecifiedTarget__lambda_e0e259c51a0d5b694a557ab2d652315a_(a1, a2, &v4);
}
