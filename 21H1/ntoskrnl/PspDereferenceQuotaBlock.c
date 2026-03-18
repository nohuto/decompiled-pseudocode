/*
 * XREFs of PspDereferenceQuotaBlock @ 0x140615568
 * Callers:
 *     ObpFreeObject @ 0x1405FB360 (ObpFreeObject.c)
 *     PsReturnSharedPoolQuota @ 0x14061551C (PsReturnSharedPoolQuota.c)
 *     PspProcessDelete @ 0x14065FD30 (PspProcessDelete.c)
 *     PspAssignProcessQuotaBlock @ 0x1406D9004 (PspAssignProcessQuotaBlock.c)
 * Callees:
 *     PspReturnResourceQuota @ 0x14030F328 (PspReturnResourceQuota.c)
 *     PspRemoveQuotaBlock @ 0x140902CF4 (PspRemoveQuotaBlock.c)
 *     ExFreePoolWithTag @ 0x1409B1010 (ExFreePoolWithTag.c)
 */

void __fastcall PspDereferenceQuotaBlock(volatile signed __int32 *P, __int64 a2, __int64 a3, _BOOL8 a4)
{
  signed int v5; // esi
  char *v6; // r14
  char *v7; // rdi
  __int64 v8; // r8

  if ( _InterlockedExchangeAdd(P + 128, 0xFFFFFFFF) == 1 )
  {
    v5 = 0;
    v6 = PspResourceFlags;
    v7 = (char *)(P + 18);
    do
    {
      if ( (*v6 & 3) == 1 )
      {
        a2 = *((_QWORD *)v7 + 1);
        a3 = *((_QWORD *)v7 - 1);
        a4 = a2 != 0;
        if ( a3 + *(_QWORD *)v7 )
        {
          if ( a2 )
          {
            v8 = _InterlockedExchange64((volatile __int64 *)v7, 0LL);
            a3 = _InterlockedExchange64((volatile __int64 *)v7 - 1, 0LL) + v8;
          }
        }
        else
        {
          a3 = 0LL;
        }
        if ( a3 || a2 )
          PspReturnResourceQuota(v5, (__int64)(v7 - 72), a3, a4);
      }
      ++v5;
      v7 += 128;
      v6 += 8;
    }
    while ( v5 < 4 );
    PspRemoveQuotaBlock(P, a2, a3, a4);
    ExFreePoolWithTag((PVOID)P, 0);
  }
}
