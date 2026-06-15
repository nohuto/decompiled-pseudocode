/*
 * XREFs of sub_1800C5D20 @ 0x1800C5D20
 * Callers:
 *     ??$_Unchecked@V?$_Vector_val@U?$_Simple_types@PEAX@std@@@std@@@std@@YAPEBQEAXV?$_Vector_const_iterator@V?$_Vector_val@U?$_Simple_types@PEAX@std@@@std@@@0@@Z @ 0x1800C5D00 (--$_Unchecked@V-$_Vector_val@U-$_Simple_types@PEAX@std@@@std@@@std@@YAPEBQEAXV-$_Vector_const_it.c)
 * Callees:
 *     sub_180008448 @ 0x180008448 (sub_180008448.c)
 *     sub_1800085F0 @ 0x1800085F0 (sub_1800085F0.c)
 *     sub_18000F690 @ 0x18000F690 (sub_18000F690.c)
 *     sub_18006A148 @ 0x18006A148 (sub_18006A148.c)
 *     sub_1800C5A78 @ 0x1800C5A78 (sub_1800C5A78.c)
 */

char __fastcall sub_1800C5D20(_QWORD **a1)
{
  _QWORD *v1; // rdi
  _QWORD *v3; // rsi
  __int64 *v4; // rax
  __int64 v5; // r8
  __int64 v6; // rcx
  __int64 v7; // rdx
  unsigned __int64 v8; // r8
  struct _TP_TIMER *pv[8]; // [rsp+30h] [rbp-48h] BYREF

  v1 = *a1;
  v3 = (_QWORD *)**a1;
  v4 = sub_180008448((__int64)a1, sub_1800B6240);
  sub_1800085F0(pv, (struct _TP_TIMER *)v4[1], v5, (struct _TP_TIMER *)L"s_afxCloseAudioEffectsWatcher");
  if ( CoInitializeEx(0LL, 0) >= 0 )
  {
    sub_1800C5A78(v6, v3);
    CoUninitialize();
  }
  sub_18006A148(v1);
  *a1 = 0LL;
  return sub_18000F690((__int64)pv, v7, v8);
}
