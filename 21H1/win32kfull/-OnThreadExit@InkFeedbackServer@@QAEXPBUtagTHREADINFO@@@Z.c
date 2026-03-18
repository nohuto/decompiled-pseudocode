/*
 * XREFs of ?OnThreadExit@InkFeedbackServer@@QAEXPBUtagTHREADINFO@@@Z @ 0x99BA2
 * Callers:
 *     ?OnThreadExit@InkProcessor@@QAEXPBUtagTHREADINFO@@@Z @ 0x99B5E (-OnThreadExit@InkProcessor@@QAEXPBUtagTHREADINFO@@@Z.c)
 * Callees:
 *     <none>
 */

void __thiscall InkFeedbackServer::OnThreadExit(InkFeedbackServer **this, const struct tagTHREADINFO *a2)
{
  InkFeedbackServer *i; // esi

  for ( i = *this; i != (InkFeedbackServer *)this; i = *(InkFeedbackServer **)i )
    (*(void (__thiscall **)(int, _DWORD))(*((_DWORD *)i - 1) + 12))((int)i - 4, *(_DWORD *)a2);
}
