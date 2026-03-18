/*
 * XREFs of BgLibraryEnable @ 0x14038AF4C
 * Callers:
 *     BgkNotifyDisplayOwnershipChange @ 0x140398DB0 (BgkNotifyDisplayOwnershipChange.c)
 *     BgkAcquireDisplayOwnership @ 0x1404FA200 (BgkAcquireDisplayOwnership.c)
 * Callees:
 *     BgpFwReleaseLock @ 0x140399518 (BgpFwReleaseLock.c)
 *     BgpFwAcquireLock @ 0x140399568 (BgpFwAcquireLock.c)
 *     BgpFwLibraryEnable @ 0x140399AF8 (BgpFwLibraryEnable.c)
 */

__int64 __fastcall BgLibraryEnable(__int64 a1, char a2)
{
  unsigned int v3; // ebx

  if ( a2 )
    dword_140C13310 |= 0xC00u;
  if ( !a1 )
    return (dword_140C13310 & 2) == 0 ? 0xC00000EF : 0;
  if ( !a2 && KeGetCurrentIrql() )
    return 3221225473LL;
  BgpFwAcquireLock();
  if ( (dword_140C13310 & 1) != 0 )
    v3 = BgpFwLibraryEnable(a1);
  else
    v3 = -1073741637;
  BgpFwReleaseLock();
  return v3;
}
