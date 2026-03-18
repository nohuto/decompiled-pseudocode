/*
 * XREFs of CHidInput_CreateInstance @ 0x1C0007FF0
 * Callers:
 *     <none>
 * Callees:
 *     ??0CBaseInput@@IEAA@K@Z @ 0x1C0008258 (--0CBaseInput@@IEAA@K@Z.c)
 *     Win32AllocPool @ 0x1C0080DF0 (Win32AllocPool.c)
 */

CBaseInput *CHidInput_CreateInstance()
{
  CBaseInput *v0; // rax
  CBaseInput *v1; // rbx

  gpHidInput = 0LL;
  v0 = (CBaseInput *)Win32AllocPool(1376LL, 1885947971LL);
  v1 = v0;
  if ( v0 )
  {
    CBaseInput::CBaseInput(v0, 0x3Cu);
    *((_DWORD *)v1 + 320) = 0;
    *(_QWORD *)v1 = &CHidInput::`vftable';
  }
  else
  {
    v1 = 0LL;
  }
  if ( v1 )
    gpHidInput = v1;
  return v1;
}
