/*
 * XREFs of ValidateHmonitorNoRip @ 0x1C0016AE0
 * Callers:
 *     <none>
 * Callees:
 *     ?GetDomainLockRef@@YAAEAUtagDomLock@@W4DomainLockType@@@Z @ 0x1C0084930 (-GetDomainLockRef@@YAAEAUtagDomLock@@W4DomainLockType@@@Z.c)
 */

__int64 __fastcall ValidateHmonitorNoRip(unsigned __int64 a1)
{
  __int64 v2; // rbx
  char *v3; // rsi
  __int64 v4; // rcx
  _QWORD *v5; // r14
  unsigned __int64 v6; // rdi
  __int64 v7; // rbp

  v2 = 0LL;
  if ( (unsigned __int64)(unsigned __int16)a1 < *((_QWORD *)gpsi + 1) )
  {
    v3 = (char *)qword_1C0250D48 + (unsigned int)(unsigned __int16)a1 * dword_1C0250D50;
    GetDomainLockRef(14LL);
    v5 = gpKernelHandleTable;
    v6 = a1 >> 16;
    v7 = 3LL * (unsigned int)((v3 - (char *)qword_1C0250D48) >> 5);
    if ( ((_WORD)v6 == *((_WORD *)v3 + 13) || (_WORD)v6 == 0xFFFF || !(_WORD)v6 && PsGetCurrentProcessWow64Process(v4))
      && (v3[25] & 1) == 0
      && v3[24] == 12 )
    {
      return v5[v7];
    }
  }
  return v2;
}
