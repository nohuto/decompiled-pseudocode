/*
 * XREFs of HMMarkObjectDestroy @ 0x1C0023EF0
 * Callers:
 *     <none>
 * Callees:
 *     ?GetDomainLockRef@@YAAEAUtagDomLock@@W4DomainLockType@@@Z @ 0x1C008BA00 (-GetDomainLockRef@@YAAEAUtagDomLock@@W4DomainLockType@@@Z.c)
 */

__int64 __fastcall HMMarkObjectDestroy(_DWORD *a1)
{
  unsigned int v2; // ecx
  char *v3; // r8
  char v4; // al

  GetDomainLockRef(14LL);
  v2 = 0;
  v3 = (char *)qword_1C024AD48 + dword_1C024AD50 * (unsigned int)(unsigned __int16)*a1;
  v4 = v3[25] | 1;
  v3[25] = v4;
  if ( a1[2] )
    v3[25] = v4 & 0xFD;
  else
    return 1;
  return v2;
}
