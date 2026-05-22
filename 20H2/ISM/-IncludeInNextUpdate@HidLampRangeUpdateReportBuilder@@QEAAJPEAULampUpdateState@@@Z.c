/*
 * XREFs of ?IncludeInNextUpdate@HidLampRangeUpdateReportBuilder@@QEAAJPEAULampUpdateState@@@Z @ 0x1800A9154
 * Callers:
 *     ?ProcessLampState@LampArrayDevice@@AEAAJPEAUViewClientListEntry@1@PEA_N@Z @ 0x1800A11C8 (-ProcessLampState@LampArrayDevice@@AEAAJPEAUViewClientListEntry@1@PEA_N@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall HidLampRangeUpdateReportBuilder::IncludeInNextUpdate(
        HidLampRangeUpdateReportBuilder *this,
        struct LampUpdateState *a2)
{
  if ( *((_BYTE *)this + 16) )
  {
    ++*((_DWORD *)this + 7);
  }
  else
  {
    *((_BYTE *)this + 32) = *((_BYTE *)a2 + 4);
    *((_BYTE *)this + 33) = *((_BYTE *)a2 + 5);
    *((_BYTE *)this + 34) = *((_BYTE *)a2 + 6);
    *((_BYTE *)this + 35) = *((_BYTE *)a2 + 7);
    *((_DWORD *)this + 6) = *(_DWORD *)a2;
    *((_DWORD *)this + 7) = *(_DWORD *)a2;
    *((_BYTE *)this + 16) = 1;
  }
  return 0LL;
}
