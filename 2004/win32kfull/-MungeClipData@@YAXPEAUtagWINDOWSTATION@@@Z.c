/*
 * XREFs of ?MungeClipData@@YAXPEAUtagWINDOWSTATION@@@Z @ 0x1C00598C8
 * Callers:
 *     ?xxxDisownClipboard@@YAXPEAUtagWND@@@Z @ 0x1C0056400 (-xxxDisownClipboard@@YAXPEAUtagWND@@@Z.c)
 *     xxxCloseClipboard @ 0x1C0059F90 (xxxCloseClipboard.c)
 * Callees:
 *     HMValidateHandleNoRip @ 0x1C003109C (HMValidateHandleNoRip.c)
 *     _ConvertMemHandle @ 0x1C00565D0 (_ConvertMemHandle.c)
 *     ?InternalSetClipboardData@@YAHPEAUtagWINDOWSTATION@@IPEAXHH@Z @ 0x1C00596E8 (-InternalSetClipboardData@@YAHPEAUtagWINDOWSTATION@@IPEAXHH@Z.c)
 *     ?FindClipFormat@@YAPEAUtagCLIP@@PEAUtagWINDOWSTATION@@IK@Z @ 0x1C0059B50 (-FindClipFormat@@YAPEAUtagCLIP@@PEAUtagWINDOWSTATION@@IK@Z.c)
 *     ?PasteScreenPalette@@YAXPEAUtagWINDOWSTATION@@@Z @ 0x1C021F820 (-PasteScreenPalette@@YAXPEAUtagWINDOWSTATION@@@Z.c)
 */

void __fastcall MungeClipData(struct tagWINDOWSTATION *a1)
{
  struct tagCLIP *ClipFormat; // r14
  struct tagCLIP *v3; // rsi
  struct tagCLIP *v4; // rax
  struct tagCLIP *v5; // rbp
  struct tagCLIP *v6; // rax
  struct tagCLIP *v7; // rbx
  struct tagCLIP *v8; // rbp
  struct tagCLIP *v9; // rax
  struct tagCLIP *v10; // rsi
  __int64 v11; // r8
  __int64 v12; // rax
  void *v13; // rax
  __int64 v14; // rbx
  unsigned int v15; // edx
  __int64 v16; // rax
  int Src; // [rsp+58h] [rbp+10h] BYREF

  ClipFormat = FindClipFormat(a1, 1u, 1u);
  v3 = FindClipFormat(a1, 7u, 1u);
  v4 = FindClipFormat(a1, 0xDu, 1u);
  v5 = v4;
  if ( ClipFormat || v3 || v4 )
  {
    if ( !FindClipFormat(a1, 0x10u, 1u) )
    {
      v12 = *(_QWORD *)(gptiCurrent + 432LL);
      if ( v12 )
      {
        Src = *(unsigned __int16 *)(v12 + 40);
        v13 = (void *)ConvertMemHandle(&Src, 4uLL, v11);
        v14 = (__int64)v13;
        if ( v13 )
        {
          if ( !(unsigned int)InternalSetClipboardData(a1, 0x10u, v13, 0, 1) )
          {
            v16 = HMValidateHandleNoRip(v14, 6);
            if ( v16 )
              HMUnlockDestroyObject(v16);
          }
        }
      }
    }
    if ( !ClipFormat )
      InternalSetClipboardData(a1, 1u, (void *)1, 0, 1);
    if ( !v3 )
      InternalSetClipboardData(a1, 7u, (void *)1, 0, 1);
    if ( !v5 )
      InternalSetClipboardData(a1, 0xDu, (void *)1, 0, 1);
  }
  if ( !FindClipFormat(a1, 3u, 1u) )
  {
    v6 = FindClipFormat(a1, 0xEu, 1u);
    if ( v6 )
    {
      v15 = 3;
LABEL_30:
      InternalSetClipboardData(a1, v15, (void *)((*((_QWORD *)v6 + 1) != 0LL) + 3LL), 0, 1);
      goto LABEL_8;
    }
  }
  if ( !FindClipFormat(a1, 0xEu, 1u) )
  {
    v6 = FindClipFormat(a1, 3u, 1u);
    if ( v6 )
    {
      v15 = 14;
      goto LABEL_30;
    }
  }
LABEL_8:
  v7 = FindClipFormat(a1, 2u, 1u);
  v8 = FindClipFormat(a1, 8u, 1u);
  v9 = FindClipFormat(a1, 0x11u, 1u);
  v10 = v9;
  if ( !v7 )
  {
    if ( !v8 && !v9 )
      return;
    InternalSetClipboardData(a1, 2u, (void *)2, 0, 1);
  }
  if ( !v8 )
    InternalSetClipboardData(a1, 8u, (void *)2, 0, 1);
  if ( !v10 )
    InternalSetClipboardData(a1, 0x11u, (void *)2, 0, 1);
  if ( (*(_DWORD *)(gpsi + 7004LL) & 1) != 0 && !FindClipFormat(a1, 9u, 1u) )
  {
    if ( v8 || v10 )
      InternalSetClipboardData(a1, 9u, (void *)2, 0, 1);
    else
      PasteScreenPalette(a1);
  }
}
