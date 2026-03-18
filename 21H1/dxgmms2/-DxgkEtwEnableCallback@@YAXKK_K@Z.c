/*
 * XREFs of ?DxgkEtwEnableCallback@@YAXKK_K@Z @ 0x1C0087A9C
 * Callers:
 *     McGenControlCallbackV2 @ 0x1C0013F00 (McGenControlCallbackV2.c)
 * Callees:
 *     <none>
 */

void __fastcall DxgkEtwEnableCallback()
{
  bool v0; // al

  v0 = (qword_1C0051010 & 0x61C8ED7) != 0 && (qword_1C0051018 & 0xFFFFFFFFF9E37128uLL) == 0;
  bTracingEnabled = v0;
}
