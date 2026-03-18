/*
 * XREFs of MiFreeLargePageView @ 0x1408DCB50
 * Callers:
 *     MiReleaseVadEventBlocks @ 0x140624980 (MiReleaseVadEventBlocks.c)
 *     MiDeletePartialCloneVads @ 0x1408DBD68 (MiDeletePartialCloneVads.c)
 * Callees:
 *     UNLOCK_ADDRESS_SPACE_SHARED @ 0x14021E7C0 (UNLOCK_ADDRESS_SPACE_SHARED.c)
 *     ObfDereferenceObjectWithTag @ 0x140221210 (ObfDereferenceObjectWithTag.c)
 *     LOCK_ADDRESS_SPACE_SHARED @ 0x14022C03C (LOCK_ADDRESS_SPACE_SHARED.c)
 *     MiReturnFullProcessCommitment @ 0x14062645C (MiReturnFullProcessCommitment.c)
 */

int __fastcall MiFreeLargePageView(__int64 a1, __int64 a2, __int64 a3, char a4)
{
  __int64 v4; // rax
  unsigned __int64 v6; // rsi
  struct _KTHREAD *CurrentThread; // r14
  int v9; // ebp
  void *v10; // rcx

  v4 = *(unsigned int *)(a2 + 52);
  LODWORD(v4) = v4 & 0x7FFFFFFF;
  v6 = v4 | ((unsigned __int64)*(unsigned __int8 *)(a2 + 34) << 31);
  if ( v6 )
  {
    CurrentThread = KeGetCurrentThread();
    LODWORD(v4) = _InterlockedExchangeAdd64((volatile signed __int64 *)(a1 + 2032), -(__int64)v6);
    if ( !a3 || !*(_QWORD *)(a3 + 24) )
    {
      v9 = a4 & 1;
      if ( (a4 & 1) == 0 )
        LOCK_ADDRESS_SPACE_SHARED((__int64)CurrentThread, a1);
      LODWORD(v4) = MiReturnFullProcessCommitment(a1, v6);
      if ( !v9 )
        LODWORD(v4) = UNLOCK_ADDRESS_SPACE_SHARED((__int64)CurrentThread, a1);
    }
  }
  if ( a3 )
  {
    v10 = *(void **)(a3 + 24);
    if ( v10 )
      LODWORD(v4) = ObfDereferenceObjectWithTag(v10, 0x746C6644u);
  }
  return v4;
}
