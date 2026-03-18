/*
 * XREFs of ??0CMonitorAPI@@QAE@PAJ@Z @ 0xEBE20
 * Callers:
 *     _DDCCIInitialize@0 @ 0xEBDD6 (_DDCCIInitialize@0.c)
 * Callees:
 *     <none>
 */

CMonitorAPI *__thiscall CMonitorAPI::CMonitorAPI(CMonitorAPI *this, int *a2)
{
  OPM::CMutex::CMutex(this, a2);
  *((_DWORD *)this + 4) = -1071774324;
  *((_DWORD *)this + 1) = 0;
  *((_DWORD *)this + 2) = 0;
  *((_DWORD *)this + 3) = 0;
  OPM::CMutex::CMutex((CMonitorAPI *)((char *)this + 20), a2);
  return this;
}
