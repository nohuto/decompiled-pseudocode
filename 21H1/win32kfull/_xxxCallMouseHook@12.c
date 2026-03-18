/*
 * XREFs of _xxxCallMouseHook@12 @ 0x152C40
 * Callers:
 *     ?xxxScanSysQueue@@YG?AW4_SCANSYSQUEUERESULT@@PAUtagTHREADINFO@@PAUtagMSG@@PAUtagWND@@IIKKPAPAUtagQMSG@@@Z @ 0x38D60 (-xxxScanSysQueue@@YG-AW4_SCANSYSQUEUERESULT@@PAUtagTHREADINFO@@PAUtagMSG@@PAUtagWND@@IIKKPAPAUta.c)
 * Callees:
 *     _PhkFirstValid@8 @ 0x12974 (_PhkFirstValid@8.c)
 *     ?xxxCallHook2@@YGJPAUtagHOOK@@HIJPAH_N@Z @ 0x6A7C0 (-xxxCallHook2@@YGJPAUtagHOOK@@HIJPAH_N@Z.c)
 */

BOOL __fastcall xxxCallMouseHook(struct tagHOOK *a1, _DWORD *a2, int a3)
{
  unsigned int Valid; // eax
  int *v7; // [esp+0h] [ebp-8h]
  unsigned int v8; // [esp+4h] [ebp-4h] BYREF

  v8 = 0;
  Valid = PhkFirstValid(_gptiCurrent, 7);
  return xxxCallHook2(a3 != 0 ? 0 : 3, Valid, a1, a2, (int *)&v8, 0, v7, v8) != 0;
}
