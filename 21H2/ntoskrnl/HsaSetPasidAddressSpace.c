/*
 * XREFs of HsaSetPasidAddressSpace @ 0x1404E45B0
 * Callers:
 *     <none>
 * Callees:
 *     KeBugCheckEx @ 0x1403FE0D0 (KeBugCheckEx.c)
 *     HsaEnsureNoPendingFaults @ 0x1404E2D48 (HsaEnsureNoPendingFaults.c)
 */

__int64 __fastcall HsaSetPasidAddressSpace(__int64 *a1, __int64 a2, unsigned int a3, __int64 a4)
{
  __int64 v4; // r10
  ULONG_PTR *v5; // rax

  v4 = a4 & 0xFFFFFFFFFF000LL;
  if ( a4 )
    v4 = a4 & 0xFFFFFFFFFF000LL | 1;
  *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a2 + 40) + 8 * ((unsigned __int64)a3 >> 9) + 4096) + 8LL * (a3 & 0x1FF)) = v4;
  if ( !a4 )
  {
    v5 = (ULONG_PTR *)HsaEnsureNoPendingFaults(a1, a3);
    if ( v5 )
      KeBugCheckEx(0x159u, 0x2000uLL, (ULONG_PTR)v5, *v5, v5[1]);
  }
  return 0LL;
}
