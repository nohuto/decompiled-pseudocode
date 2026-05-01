/*
 * XREFs of ?SetFocusState@ViewWrapperBase@@UEAAXW4FocusState@@@Z @ 0x1802AF710
 * Callers:
 *     <none>
 * Callees:
 *     ?CommitImportanceVector@ViewWrapperBase@@IEBAXXZ @ 0x1802ACE3C (-CommitImportanceVector@ViewWrapperBase@@IEBAXXZ.c)
 */

void __fastcall ViewWrapperBase::SetFocusState(__int64 a1, int a2)
{
  __int16 v3; // ax

  if ( a2 == 1 )
    *(_DWORD *)(a1 + 88) |= 0x100u;
  else
    *(_DWORD *)(a1 + 88) &= ~0x100u;
  if ( (*(_DWORD *)(a1 + 88) & 0x40) != 0 )
  {
    if ( a2 )
      return;
    *(_WORD *)(a1 + 348) &= ~0x80u;
    ViewWrapperBase::CommitImportanceVector((ViewWrapperBase *)(a1 - 8));
    v3 = 128;
  }
  else
  {
    *(_WORD *)(a1 + 348) &= ~0x40u;
    v3 = 0;
    if ( a2 == 1 )
      v3 = 64;
  }
  *(_WORD *)(a1 + 348) |= v3;
  ViewWrapperBase::CommitImportanceVector((ViewWrapperBase *)(a1 - 8));
}
