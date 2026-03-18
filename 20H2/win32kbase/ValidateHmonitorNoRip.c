/*
 * XREFs of ValidateHmonitorNoRip @ 0x1C0090040
 * Callers:
 *     <none>
 * Callees:
 *     ?GetDomainLockRef@@YAAEAUtagDomLock@@W4DomainLockType@@@Z @ 0x1C0045F40 (-GetDomainLockRef@@YAAEAUtagDomLock@@W4DomainLockType@@@Z.c)
 */

__int64 __fastcall ValidateHmonitorNoRip(unsigned __int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v5; // rbx
  char *v6; // rsi
  __int64 v7; // rcx
  _QWORD *v8; // r14
  unsigned __int64 v9; // rdi
  __int64 v10; // rbp

  v5 = 0LL;
  if ( (unsigned __int64)(unsigned __int16)a1 < *((_QWORD *)gpsi + 1) )
  {
    v6 = (char *)qword_1C0248D48 + (unsigned int)(unsigned __int16)a1 * dword_1C0248D50;
    GetDomainLockRef(14LL, a2, a3, a4);
    v8 = gpKernelHandleTable;
    v9 = a1 >> 16;
    v10 = 3LL * (unsigned int)((v6 - (char *)qword_1C0248D48) >> 5);
    if ( ((_WORD)v9 == *((_WORD *)v6 + 13) || (_WORD)v9 == 0xFFFF || !(_WORD)v9 && PsGetCurrentProcessWow64Process(v7))
      && (v6[25] & 1) == 0
      && v6[24] == 12 )
    {
      return v8[v10];
    }
  }
  return v5;
}
