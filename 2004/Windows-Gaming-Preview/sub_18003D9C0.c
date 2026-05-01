/*
 * XREFs of sub_18003D9C0 @ 0x18003D9C0
 * Callers:
 *     <none>
 * Callees:
 *     sub_180012300 @ 0x180012300 (sub_180012300.c)
 *     sub_18003DA50 @ 0x18003DA50 (sub_18003DA50.c)
 */

void __fastcall sub_18003D9C0(PTP_CALLBACK_INSTANCE Instance, PVOID Context, PTP_WORK Work)
{
  int v3; // eax
  __int64 retaddr; // [rsp+28h] [rbp+0h]

  v3 = sub_18003DA50(xmmword_18005AF50, Context, Work);
  if ( v3 >= 0 )
    SetEvent(hEvent);
  else
    sub_180012300(retaddr, 118, (__int64)"onecoreuap\\xbox\\windows.gaming.preview\\dll\\systemdefaults.cpp", v3);
  EnterCriticalSection(&stru_18005AF60);
  CloseThreadpoolWork(qword_18005AE00);
  qword_18005AE00 = 0LL;
  LeaveCriticalSection(&stru_18005AF60);
}
