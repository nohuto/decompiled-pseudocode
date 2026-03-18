/*
 * XREFs of PspDereferenceQuotaBlock @ 0x1405F7148
 * Callers:
 *     PsReturnSharedPoolQuota @ 0x1405F70FC (PsReturnSharedPoolQuota.c)
 *     ObpFreeObject @ 0x140611220 (ObpFreeObject.c)
 *     PspProcessDelete @ 0x140660C40 (PspProcessDelete.c)
 *     PspAssignProcessQuotaBlock @ 0x1406CF394 (PspAssignProcessQuotaBlock.c)
 * Callees:
 *     PspReturnResourceQuota @ 0x14031D758 (PspReturnResourceQuota.c)
 *     PspRemoveQuotaBlock @ 0x140909BF8 (PspRemoveQuotaBlock.c)
 *     ExFreePoolWithTag @ 0x1409B70B0 (ExFreePoolWithTag.c)
 */

void __fastcall PspDereferenceQuotaBlock(volatile signed __int32 *P)
{
  signed int v2; // esi
  char *v3; // r14
  char *v4; // rdi
  __int64 v5; // rdx
  __int64 v6; // r8
  __int64 v7; // r8

  if ( _InterlockedExchangeAdd(P + 128, 0xFFFFFFFF) == 1 )
  {
    v2 = 0;
    v3 = PspResourceFlags;
    v4 = (char *)(P + 18);
    do
    {
      if ( (*v3 & 3) == 1 )
      {
        v5 = *((_QWORD *)v4 + 1);
        v6 = *((_QWORD *)v4 - 1);
        if ( v6 + *(_QWORD *)v4 )
        {
          if ( v5 )
          {
            v7 = _InterlockedExchange64((volatile __int64 *)v4, 0LL);
            v6 = _InterlockedExchange64((volatile __int64 *)v4 - 1, 0LL) + v7;
          }
        }
        else
        {
          v6 = 0LL;
        }
        if ( v6 || v5 )
          PspReturnResourceQuota(v2, (__int64)(v4 - 72), v6, v5 != 0);
      }
      ++v2;
      v4 += 128;
      v3 += 8;
    }
    while ( v2 < 4 );
    PspRemoveQuotaBlock(P);
    ExFreePoolWithTag((PVOID)P, 0);
  }
}
