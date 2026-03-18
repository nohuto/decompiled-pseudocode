/*
 * XREFs of WheapAddErrorSource @ 0x1403B7B84
 * Callers:
 *     WheaAddErrorSource @ 0x1407971E0 (WheaAddErrorSource.c)
 *     WheapInitializeErrorSourceTable @ 0x140A5AE0C (WheapInitializeErrorSourceTable.c)
 * Callees:
 *     KeWaitForSingleObject @ 0x14020B3A0 (KeWaitForSingleObject.c)
 *     KeSetEvent @ 0x140286AD0 (KeSetEvent.c)
 */

LONG __fastcall WheapAddErrorSource(__int64 a1, __int64 a2)
{
  __int64 *v3; // rax

  KeWaitForSingleObject(&stru_140CDAF38, Executive, 0, 0, 0LL);
  *(_DWORD *)(a2 + 124) = dword_140CDAF20;
  v3 = (__int64 *)qword_140CDAF30;
  if ( *(__int64 **)qword_140CDAF30 != &qword_140CDAF28 )
    __fastfail(3u);
  *(_QWORD *)a2 = &qword_140CDAF28;
  *(_QWORD *)(a2 + 8) = v3;
  *v3 = a2;
  qword_140CDAF30 = a2;
  _InterlockedIncrement(&dword_140CDAF1C);
  _InterlockedIncrement(&dword_140CDAF20);
  return KeSetEvent(&stru_140CDAF38, 0, 0);
}
