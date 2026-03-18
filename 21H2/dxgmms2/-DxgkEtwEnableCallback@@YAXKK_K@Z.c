/*
 * XREFs of ?DxgkEtwEnableCallback@@YAXKK_K@Z @ 0x1C00B867C
 * Callers:
 *     McGenControlCallbackV2 @ 0x1C001CB10 (McGenControlCallbackV2.c)
 * Callees:
 *     <none>
 */

void __fastcall DxgkEtwEnableCallback()
{
  bool v0; // al

  v0 = (qword_1C006E010 & 0x461C8ED7) != 0 && (qword_1C006E018 & 0xFFFFFFFFB9E37128uLL) == 0;
  bTracingEnabled = v0;
}
