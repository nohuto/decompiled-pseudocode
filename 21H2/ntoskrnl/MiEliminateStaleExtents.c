/*
 * XREFs of MiEliminateStaleExtents @ 0x140540B08
 * Callers:
 *     MiAllocateFileExtents @ 0x1408CF670 (MiAllocateFileExtents.c)
 * Callees:
 *     MiLockLeafPage @ 0x140257C70 (MiLockLeafPage.c)
 *     MmAccessFault @ 0x1402B1990 (MmAccessFault.c)
 *     MiUnlockProtoPoolPage @ 0x1402DE040 (MiUnlockProtoPoolPage.c)
 *     MiLockProtoPoolPage @ 0x140324E50 (MiLockProtoPoolPage.c)
 */

void __fastcall MiEliminateStaleExtents(ULONG_PTR BugCheckParameter1, __int64 a2, unsigned __int64 a3)
{
  unsigned int v3; // esi
  __int64 v4; // rdi
  __int64 v8; // r15
  __int64 v9; // rbp
  __int64 v10; // rax
  unsigned __int8 v11; // [rsp+60h] [rbp+18h] BYREF

  if ( a3 )
  {
    v3 = 0;
    v11 = 17;
    v4 = 0LL;
    do
    {
      while ( 1 )
      {
        v8 = MiLockProtoPoolPage(BugCheckParameter1, &v11);
        if ( v8 )
          break;
        MmAccessFault(2uLL, BugCheckParameter1, 0, 0LL);
      }
      do
      {
        v9 = *(_QWORD *)(a2 + 8 * v4);
        if ( v9 != 0x8000000000000000uLL )
        {
          v10 = MiLockLeafPage((unsigned __int64 *)BugCheckParameter1, 0LL);
          if ( v10 )
          {
            _InterlockedAnd64((volatile signed __int64 *)(v10 + 24), 0x7FFFFFFFFFFFFFFFuLL);
            *(_QWORD *)(a2 + 8 * v4) = v9 | 0x4000000000000000LL;
          }
        }
        ++v3;
        BugCheckParameter1 += 8LL;
        v4 = v3;
      }
      while ( v3 < a3 && (BugCheckParameter1 & 0xFFF) != 0 );
      MiUnlockProtoPoolPage(v8, v11);
    }
    while ( v3 < a3 );
  }
}
