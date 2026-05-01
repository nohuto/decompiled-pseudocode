/*
 * XREFs of pfnwk @ 0x18003CA00
 * Callers:
 *     <none>
 * Callees:
 *     sub_180012300 @ 0x180012300 (sub_180012300.c)
 *     sub_18003CC28 @ 0x18003CC28 (sub_18003CC28.c)
 */

void __fastcall pfnwk(PTP_CALLBACK_INSTANCE Instance, PVOID Context, PTP_WORK Work)
{
  int v3; // eax
  __int64 retaddr; // [rsp+28h] [rbp+0h]

  v3 = sub_18003CC28(xmmword_18005AF18, Context, Work);
  if ( v3 >= 0 )
    SetEvent(hHandle);
  else
    sub_180012300(retaddr, 110, (__int64)"onecoreuap\\xbox\\windows.gaming.preview\\dll\\kgldefaults.cpp", v3);
  EnterCriticalSection(&stru_18005AF28);
  CloseThreadpoolWork(pwk);
  pwk = 0LL;
  LeaveCriticalSection(&stru_18005AF28);
}
