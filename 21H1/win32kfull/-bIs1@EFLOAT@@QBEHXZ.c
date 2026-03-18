/*
 * XREFs of ?bIs1@EFLOAT@@QBEHXZ @ 0x247A19
 * Callers:
 *     ?bGetNtoW_Win31@@YGHPAVMATRIX@@PAUtagLOGFONTW@@AAVIFIOBJ@@PAVDCOBJ@@KH@Z @ 0x6769C (-bGetNtoW_Win31@@YGHPAVMATRIX@@PAUtagLOGFONTW@@AAVIFIOBJ@@PAVDCOBJ@@KH@Z.c)
 * Callees:
 *     <none>
 */

BOOL __thiscall EFLOAT::bIs1(EFLOAT *this)
{
  return *(_DWORD *)this == 0x40000000 && *((_DWORD *)this + 1) == 2;
}
