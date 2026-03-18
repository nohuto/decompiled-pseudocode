/*
 * XREFs of ??0CSpatialProcessor@@QEAA@XZ @ 0x1C000ADFC
 * Callers:
 *     ??0CMouseProcessor@@IEAA@XZ @ 0x1C0007B28 (--0CMouseProcessor@@IEAA@XZ.c)
 *     ??0CTouchProcessor@@QEAA@XZ @ 0x1C000AEDC (--0CTouchProcessor@@QEAA@XZ.c)
 * Callees:
 *     ApiSetEditionGetExecutionEvironment @ 0x1C005B23C (ApiSetEditionGetExecutionEvironment.c)
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
