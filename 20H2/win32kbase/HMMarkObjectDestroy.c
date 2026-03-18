/*
 * XREFs of HMMarkObjectDestroy @ 0x1C00874E0
 * Callers:
 *     <none>
 * Callees:
 *     ?GetDomainLockRef@@YAAEAUtagDomLock@@W4DomainLockType@@@Z @ 0x1C0045F40 (-GetDomainLockRef@@YAAEAUtagDomLock@@W4DomainLockType@@@Z.c)
 */

__int64 __fastcall HMMarkObjectDestroy(_DWORD *a1, __int64 a2, __int64 a3, __int64 a4)
{
  unsigned int v5; // ecx
  char *v6; // r8
  char v7; // al

  GetDomainLockRef(14LL, a2, a3, a4);
  v5 = 0;
  v6 = (char *)qword_1C0248D48 + dword_1C0248D50 * (unsigned int)(unsigned __int16)*a1;
  v7 = v6[25] | 1;
  v6[25] = v7;
  if ( a1[2] )
    v6[25] = v7 & 0xFD;
  else
    return 1;
  return v5;
}
