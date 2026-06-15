/*
 * XREFs of sub_180010090 @ 0x180010090
 * Callers:
 *     <none>
 * Callees:
 *     sub_180011D1C @ 0x180011D1C (sub_180011D1C.c)
 *     sub_180012B64 @ 0x180012B64 (sub_180012B64.c)
 *     sub_180017F24 @ 0x180017F24 (sub_180017F24.c)
 *     sub_1800188DC @ 0x1800188DC (sub_1800188DC.c)
 *     sub_180039D98 @ 0x180039D98 (sub_180039D98.c)
 */

// Hidden C++ exception states: #wind=2
char *__fastcall sub_180010090(char *a1, char a2)
{
  struct _TP_TIMER *v4; // rcx
  void *v5; // rcx

  *(_QWORD *)a1 = off_18003F240;
  v4 = (struct _TP_TIMER *)*((_QWORD *)a1 + 33);
  if ( v4 )
  {
    WaitForThreadpoolTimerCallbacks(v4, 1);
    CloseThreadpoolTimer(*((PTP_TIMER *)a1 + 33));
  }
  sub_180012B64(a1);
  sub_180011D1C(a1);
  sub_1800188DC(a1 + 648, a1 + 648, *(_QWORD *)(*((_QWORD *)a1 + 81) + 8LL));
  sub_180039D98(*((void **)a1 + 81));
  DeleteCriticalSection((LPCRITICAL_SECTION)(a1 + 496));
  DeleteCriticalSection((LPCRITICAL_SECTION)a1 + 11);
  DeleteCriticalSection((LPCRITICAL_SECTION)(a1 + 384));
  DeleteCriticalSection((LPCRITICAL_SECTION)(a1 + 336));
  DeleteCriticalSection((LPCRITICAL_SECTION)a1 + 7);
  DeleteCriticalSection((LPCRITICAL_SECTION)(a1 + 224));
  DeleteCriticalSection((LPCRITICAL_SECTION)(a1 + 168));
  sub_180017F24(a1 + 120);
  sub_180017F24(a1 + 72);
  DeleteCriticalSection((LPCRITICAL_SECTION)(a1 + 32));
  v5 = (void *)*((_QWORD *)a1 + 3);
  if ( v5 )
    CoTaskMemFree(v5);
  *(_QWORD *)a1 = &off_18003F260;
  if ( (a2 & 1) != 0 )
    sub_180039D98(a1);
  return a1;
}
