/*
 * XREFs of __SetClipboardData@16 @ 0x182F88
 * Callers:
 *     _NtUserSetClipboardData@12 @ 0x168BC2 (_NtUserSetClipboardData@12.c)
 *     _xxxSnapWindow@8 @ 0x1A20A2 (_xxxSnapWindow@8.c)
 * Callees:
 *     _UserSetLastError@4 @ 0x81122 (_UserSetLastError@4.c)
 *     ?CheckClipboardAccess@@YGPAUtagWINDOWSTATION@@XZ @ 0x91C96 (-CheckClipboardAccess@@YGPAUtagWINDOWSTATION@@XZ.c)
 *     ?InternalSetClipboardData@@YGHPAUtagWINDOWSTATION@@IPAXHH@Z @ 0x181B81 (-InternalSetClipboardData@@YGHPAUtagWINDOWSTATION@@IPAXHH@Z.c)
 */

int __userpurge _SetClipboardData@<eax>(
        struct tagWINDOWSTATION *a1@<edx>,
        int a2@<ecx>,
        int a3@<ebx>,
        unsigned int a4,
        void *a5)
{
  struct tagWINDOWSTATION *v7; // ecx
  int v9; // ebx
  int v10; // esi
  int v11; // [esp+0h] [ebp-8h]

  v7 = CheckClipboardAccess();
  if ( !v7 )
    return 0;
  if ( (unsigned int)a1 - 1 <= 3 )
  {
    UserSetLastError((struct _NT_TIB *)0x57);
    return 0;
  }
  v9 = InternalSetClipboardData(a2, v7, a1, a4, a5, a3, v11);
  if ( v9 )
  {
    v10 = a2 - 2;
    if ( v10 )
    {
      if ( v10 == 7 )
        GreSetPaletteOwner(a1, 0);
    }
    else
    {
      GreSetBitmapOwner(a1, 0);
    }
  }
  return v9;
}
