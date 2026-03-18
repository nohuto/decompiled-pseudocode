/*
 * XREFs of MiUpdatePageFileBlockOwner @ 0x1405BC9E8
 * Callers:
 *     MiTransferPageFileOwnership @ 0x14026EDC4 (MiTransferPageFileOwnership.c)
 *     MiDemoteCombinedPte @ 0x1403336E0 (MiDemoteCombinedPte.c)
 *     MiBuildForkPte @ 0x1405B88D8 (MiBuildForkPte.c)
 * Callees:
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x14030F700 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     ExAcquireSpinLockExclusiveAtDpcLevel @ 0x1403105C0 (ExAcquireSpinLockExclusiveAtDpcLevel.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x140317A10 (MI_READ_PTE_LOCK_FREE.c)
 *     MiPageHashBugCheck @ 0x1405BC8C0 (MiPageHashBugCheck.c)
 *     MiRecomputePageHash @ 0x1405BC92C (MiRecomputePageHash.c)
 */

void __fastcall MiUpdatePageFileBlockOwner(__int64 a1, unsigned int a2, unsigned __int64 a3, __int64 a4)
{
  volatile LONG *v4; // rsi
  unsigned __int64 v8; // rdi
  __int64 v9; // rcx
  unsigned __int64 v10; // rbx
  __int64 v11; // rax
  _QWORD v12[3]; // [rsp+30h] [rbp-18h] BYREF

  v4 = (volatile LONG *)(a1 + 232);
  v12[0] = 0LL;
  v8 = a4 | 1;
  ExAcquireSpinLockExclusiveAtDpcLevel((PEX_SPIN_LOCK)(a1 + 232));
  v9 = *(_QWORD *)(a1 + 216);
  if ( v9 )
  {
    v10 = v9 + a2 * dword_140C531CC;
    if ( (MI_READ_PTE_LOCK_FREE(((v10 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL) & 1) != 0 )
    {
      if ( !dword_140C531D0 )
      {
LABEL_8:
        MiRecomputePageHash(v10, v8, a3);
        goto LABEL_9;
      }
      v11 = *(_QWORD *)(v10 + 8);
      if ( v11 )
      {
        if ( v11 != v8 )
        {
          ++dword_140C52ACC;
          if ( !dword_140C52AC0 )
          {
            LODWORD(v12[0]) = *(_DWORD *)v10;
            v12[1] = v8;
            MiPageHashBugCheck(0x3BuLL, a2, (unsigned int *)v10, (int *)v12, 1);
          }
        }
        goto LABEL_8;
      }
    }
  }
LABEL_9:
  ExReleaseSpinLockExclusiveFromDpcLevel(v4);
}
