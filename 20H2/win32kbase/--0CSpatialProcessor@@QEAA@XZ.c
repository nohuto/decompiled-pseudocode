/*
 * XREFs of ??0CSpatialProcessor@@QEAA@XZ @ 0x1C0009CEC
 * Callers:
 *     ??0CMouseProcessor@@IEAA@XZ @ 0x1C00081B0 (--0CMouseProcessor@@IEAA@XZ.c)
 *     ??0CTouchProcessor@@QEAA@XZ @ 0x1C0008DFC (--0CTouchProcessor@@QEAA@XZ.c)
 * Callees:
 *     ApiSetEditionGetExecutionEvironment @ 0x1C00BB2E4 (ApiSetEditionGetExecutionEvironment.c)
 */

CSpatialProcessor *__fastcall CSpatialProcessor::CSpatialProcessor(CSpatialProcessor *this)
{
  *((_DWORD *)this + 2) = 0;
  *(_QWORD *)this = &CBaseProcessor::`vftable';
  *((_DWORD *)this + 3) = 1;
  *((_DWORD *)this + 2) = ApiSetEditionGetExecutionEvironment();
  *(_QWORD *)this = &CBaseProcessor::`vftable';
  *((_QWORD *)this + 2) = 0LL;
  return this;
}
