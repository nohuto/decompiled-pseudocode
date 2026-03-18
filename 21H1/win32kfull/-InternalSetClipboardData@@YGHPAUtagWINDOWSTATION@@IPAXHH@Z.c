/*
 * XREFs of ?InternalSetClipboardData@@YGHPAUtagWINDOWSTATION@@IPAXHH@Z @ 0x181B81
 * Callers:
 *     ?MungeClipData@@YGXPAUtagWINDOWSTATION@@@Z @ 0x181D0D (-MungeClipData@@YGXPAUtagWINDOWSTATION@@@Z.c)
 *     ?PasteScreenPalette@@YGXPAUtagWINDOWSTATION@@@Z @ 0x181F15 (-PasteScreenPalette@@YGXPAUtagWINDOWSTATION@@@Z.c)
 *     __SetClipboardData@16 @ 0x182F88 (__SetClipboardData@16.c)
 * Callees:
 *     ?FindClipFormat@@YGPAUtagCLIP@@PAUtagWINDOWSTATION@@IK@Z @ 0x115FE (-FindClipFormat@@YGPAUtagCLIP@@PAUtagWINDOWSTATION@@IK@Z.c)
 *     ?ULongAdd@@YGJKKPAK@Z @ 0x4591A (-ULongAdd@@YGJKKPAK@Z.c)
 *     _UserSetLastError@4 @ 0x81122 (_UserSetLastError@4.c)
 *     _ULongLongToULong@12 @ 0x9D96E (_ULongLongToULong@12.c)
 *     @__security_check_cookie@4 @ 0xED840 (@__security_check_cookie@4.c)
 *     ?UT_FreeCBFormat@@YGXPAUtagCLIP@@@Z @ 0x181FED (-UT_FreeCBFormat@@YGXPAUtagCLIP@@@Z.c)
 */

int __userpurge InternalSetClipboardData@<eax>(
        int a1@<edx>,
        _DWORD *a2@<ecx>,
        struct tagWINDOWSTATION *a3,
        unsigned int a4,
        void *a5,
        int a6,
        int a7)
{
  struct tagCLIP *ClipFormat; // ebx
  int v10; // ebx
  int v11; // eax
  unsigned int v12; // eax
  int v13; // ebx
  int v14; // ecx
  int v15; // ecx
  unsigned int v17; // [esp+0h] [ebp-218h]
  struct tagCLIP *v18; // [esp+0h] [ebp-218h]
  unsigned int v19; // [esp+0h] [ebp-218h]
  unsigned int v20; // [esp+4h] [ebp-214h]
  unsigned int *v21; // [esp+4h] [ebp-214h]
  unsigned int v22; // [esp+Ch] [ebp-20Ch] BYREF
  unsigned int v23; // [esp+10h] [ebp-208h]
  _BYTE v24[512]; // [esp+14h] [ebp-204h] BYREF

  if ( !a2[10] || !a1 )
  {
    UserSetLastError((struct _NT_TIB *)0x58A);
    return 0;
  }
  ClipFormat = FindClipFormat(a1, (int)a2, (struct tagWINDOWSTATION *)2, v17, v20);
  if ( ClipFormat )
  {
    UT_FreeCBFormat(v18);
    goto LABEL_15;
  }
  v10 = a2[16];
  if ( v10 )
  {
    v12 = a2[17];
    v23 = 0;
    v22 = 0;
    if ( ULongLongToULong(20LL * v12, (ULONG *)v18) < 0 || (ULongAdd(20, v23, (int *)&v22, v19, v21) & 0x80000000) != 0 )
    {
      v13 = 0;
      goto LABEL_12;
    }
    v11 = UserReAllocPool(v10, v23, v22, 1650684757);
  }
  else
  {
    v11 = Win32AllocPool(20, 1650684757);
  }
  v13 = v11;
LABEL_12:
  if ( !v13 )
    return 0;
  a2[16] = v13;
  if ( !UserGetAtomName(a1, v24, 256) )
    return 0;
  UserAddAtomEx(v24, 0, 2);
  v14 = a2[17];
  ClipFormat = (struct tagCLIP *)(20 * v14 + v13);
  a2[17] = v14 + 1;
  *(_DWORD *)ClipFormat = a1;
LABEL_15:
  *((_DWORD *)ClipFormat + 1) = a3;
  *((_DWORD *)ClipFormat + 2) = a4;
  *((_DWORD *)ClipFormat + 3) = *(_DWORD *)(PsGetCurrentProcessWin32Process() + 496);
  *((_DWORD *)ClipFormat + 4) = *(_DWORD *)(PsGetCurrentProcessWin32Process() + 500);
  if ( a5 )
  {
    a2[8] |= 0x40u;
    if ( (a2[8] & 0x80u) == 0 )
      ++a2[19];
  }
  v15 = a2[14];
  if ( !v15 || *(_DWORD *)(v15 + 8) != _gptiCurrent )
  {
    if ( a5 )
      ++a2[18];
  }
  return 1;
}
