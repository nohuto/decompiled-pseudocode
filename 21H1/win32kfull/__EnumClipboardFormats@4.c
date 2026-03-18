/*
 * XREFs of __EnumClipboardFormats@4 @ 0x182E64
 * Callers:
 *     _NtUserCallOneParam@8 @ 0x6E730 (_NtUserCallOneParam@8.c)
 * Callees:
 *     ?FindClipFormat@@YGPAUtagCLIP@@PAUtagWINDOWSTATION@@IK@Z @ 0x115FE (-FindClipFormat@@YGPAUtagCLIP@@PAUtagWINDOWSTATION@@IK@Z.c)
 *     _UserSetLastError@4 @ 0x81122 (_UserSetLastError@4.c)
 *     ?CheckClipboardAccess@@YGPAUtagWINDOWSTATION@@XZ @ 0x91C96 (-CheckClipboardAccess@@YGPAUtagWINDOWSTATION@@XZ.c)
 */

int __userpurge _EnumClipboardFormats@<eax>(unsigned int a1@<edi>, int a2)
{
  struct tagWINDOWSTATION *v2; // esi
  unsigned int v4; // ecx
  int v5; // edi
  struct tagCLIP *ClipFormat; // eax
  unsigned int v8; // [esp+0h] [ebp-4h]

  v2 = CheckClipboardAccess();
  if ( !v2 )
    return 0;
  if ( *((_DWORD *)v2 + 10) != _gptiCurrent )
  {
    UserSetLastError((struct _NT_TIB *)0x58A);
    return 0;
  }
  v4 = *((_DWORD *)v2 + 16);
  v5 = 0;
  if ( v4 )
  {
    if ( !a2 )
      goto LABEL_9;
    ClipFormat = FindClipFormat(a2, (int)v2, (struct tagWINDOWSTATION *)1, a1, v8);
    if ( ClipFormat )
    {
      v4 = (unsigned int)ClipFormat + 20;
LABEL_9:
      if ( v4 )
      {
        if ( v4 < *((_DWORD *)v2 + 16) + 20 * *((_DWORD *)v2 + 17) )
          return *(_DWORD *)v4;
      }
    }
  }
  return v5;
}
