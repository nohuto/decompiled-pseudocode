/*
 * XREFs of MiEliminateStaleExtents @ 0x14053B3F8
 * Callers:
 *     MiAllocateFileExtents @ 0x1408CBF10 (MiAllocateFileExtents.c)
 * Callees:
 *     MiLockProtoPoolPage @ 0x140229D70 (MiLockProtoPoolPage.c)
 *     MiUnlockProtoPoolPage @ 0x14022A960 (MiUnlockProtoPoolPage.c)
 *     MmAccessFault @ 0x14029F070 (MmAccessFault.c)
 *     MiLockLeafPage @ 0x1402F6AF0 (MiLockLeafPage.c)
 */

void __fastcall MiEliminateStaleExtents(ULONG_PTR BugCheckParameter1, __int64 a2, unsigned __int64 a3)
{
  unsigned int v3; // esi
  __int64 v4; // rdi
  __int64 v8; // rdx
  __int64 v9; // r8
  __int64 v10; // r9
  __int64 v11; // r15
  __int64 v12; // rbp
  __int64 v13; // rax
  unsigned __int8 v14; // [rsp+60h] [rbp+18h] BYREF

  if ( a3 )
  {
    v3 = 0;
    v14 = 17;
    v4 = 0LL;
    do
    {
      while ( 1 )
      {
        v11 = MiLockProtoPoolPage(BugCheckParameter1, &v14);
        if ( v11 )
          break;
        MmAccessFault(2uLL, BugCheckParameter1, 0, 0LL);
      }
      do
      {
        v12 = *(_QWORD *)(a2 + 8 * v4);
        if ( v12 != 0x8000000000000000uLL )
        {
          v13 = MiLockLeafPage((__int64 *)BugCheckParameter1, 0, v9, v10);
          if ( v13 )
          {
            _InterlockedAnd64((volatile signed __int64 *)(v13 + 24), 0x7FFFFFFFFFFFFFFFuLL);
            *(_QWORD *)(a2 + 8 * v4) = v12 | 0x4000000000000000LL;
          }
        }
        ++v3;
        BugCheckParameter1 += 8LL;
        v4 = v3;
      }
      while ( v3 < a3 && (BugCheckParameter1 & 0xFFF) != 0 );
      LOBYTE(v8) = v14;
      MiUnlockProtoPoolPage(v11, v8);
    }
    while ( v3 < a3 );
  }
}
