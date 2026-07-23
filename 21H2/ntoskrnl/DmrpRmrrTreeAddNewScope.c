/*
 * XREFs of DmrpRmrrTreeAddNewScope @ 0x1404E8B78
 * Callers:
 *     DmrEnumerateRmrrDomains @ 0x1404E89B0 (DmrEnumerateRmrrDomains.c)
 * Callees:
 *     memmove @ 0x140414040 (memmove.c)
 *     ExtEnvAllocateMemory @ 0x1404D5330 (ExtEnvAllocateMemory.c)
 */

__int64 __fastcall DmrpRmrrTreeAddNewScope(__int64 a1, __int16 a2, unsigned __int8 *a3)
{
  __int64 v6; // rbx
  __int64 *v7; // rcx
  __int64 v9; // [rsp+40h] [rbp+18h] BYREF

  v9 = 0LL;
  ExtEnvAllocateMemory(a1, a3[1] + 34, &v9);
  v6 = v9;
  if ( v9 )
  {
    *(_QWORD *)(v9 + 24) = v9 + 16;
    *(_QWORD *)(v6 + 16) = v6 + 16;
    memmove((void *)(v6 + 34), a3, a3[1]);
    *(_WORD *)(v6 + 32) = a2;
    v7 = *(__int64 **)(a1 + 16);
    if ( *v7 != a1 + 8 )
      __fastfail(3u);
    *(_QWORD *)v6 = a1 + 8;
    *(_QWORD *)(v6 + 8) = v7;
    *v7 = v6;
    *(_QWORD *)(a1 + 16) = v6;
    ++*(_DWORD *)a1;
  }
  return v6;
}
