/*
 * XREFs of MmAreMdlPagesLocked @ 0x1409C6CD0
 * Callers:
 *     VERIFY_BUFFER_LOCKED @ 0x1409CB060 (VERIFY_BUFFER_LOCKED.c)
 *     VerifierMmBuildMdlForNonPagedPool @ 0x1409E7620 (VerifierMmBuildMdlForNonPagedPool.c)
 * Callees:
 *     MiUnlockPage @ 0x14022D6AC (MiUnlockPage.c)
 *     MiIsPfn @ 0x140353EA0 (MiIsPfn.c)
 *     MiIsPfnLocked @ 0x140380DF8 (MiIsPfnLocked.c)
 *     MiLockPage @ 0x14054FB44 (MiLockPage.c)
 */

__int64 __fastcall MmAreMdlPagesLocked(_DWORD *a1)
{
  unsigned __int64 *v1; // r14
  unsigned __int64 v2; // rsi
  unsigned __int64 v3; // rbx
  __int64 v4; // rdx
  __int64 v5; // r8
  _DWORD *v6; // r9
  __int64 v7; // rbx
  unsigned __int8 v8; // di
  int IsPfnLocked; // ebp

  v1 = (unsigned __int64 *)(a1 + 12);
  v2 = (((a1[8] + a1[11]) & 0xFFF) + (unsigned __int64)(unsigned int)a1[10] + 4095) >> 12;
  while ( 1 )
  {
    v3 = *v1;
    if ( (unsigned int)MiIsPfn(*v1) )
    {
      v7 = 48 * v3 - 0x58000000000LL;
      v8 = dword_140C4E70C == 2 ? 17 : MiLockPage(v7, v4, v5, v6);
      IsPfnLocked = MiIsPfnLocked(v7);
      if ( v8 != 17 )
        MiUnlockPage(v7, v8);
      if ( !IsPfnLocked )
        break;
    }
    ++v1;
    if ( !--v2 )
      return 1LL;
  }
  return 0LL;
}
