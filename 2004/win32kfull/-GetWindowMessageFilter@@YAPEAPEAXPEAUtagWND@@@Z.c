/*
 * XREFs of ?GetWindowMessageFilter@@YAPEAPEAXPEAUtagWND@@@Z @ 0x1C0037A58
 * Callers:
 *     _ChangeWindowMessageFilterEx @ 0x1C0037408 (_ChangeWindowMessageFilterEx.c)
 *     ?IsMessageAllowedAcrossILByReceiver@@YAHPEAUtagPROCESSINFO@@0PEAUtagWND@@I_K_JH@Z @ 0x1C003797C (-IsMessageAllowedAcrossILByReceiver@@YAHPEAUtagPROCESSINFO@@0PEAUtagWND@@I_K_JH@Z.c)
 * Callees:
 *     VWPLGetData @ 0x1C0037A98 (VWPLGetData.c)
 */

void **__fastcall GetWindowMessageFilter(struct tagWND *a1)
{
  __int64 v1; // rax
  int v2; // eax
  __int64 v4; // [rsp+30h] [rbp+8h] BYREF

  v1 = *((_QWORD *)a1 + 2);
  v4 = 0LL;
  v2 = VWPLGetData(*(_QWORD *)(*(_QWORD *)(v1 + 416) + 856LL), a1, &v4);
  return (void **)(v4 & -(__int64)(v2 != 0));
}
