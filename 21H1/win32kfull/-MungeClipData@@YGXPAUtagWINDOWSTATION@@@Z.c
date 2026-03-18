/*
 * XREFs of ?MungeClipData@@YGXPAUtagWINDOWSTATION@@@Z @ 0x181D0D
 * Callers:
 *     _xxxCloseClipboard@4 @ 0x11D76 (_xxxCloseClipboard@4.c)
 *     ?xxxDisownClipboard@@YGXPAUtagWND@@@Z @ 0x18244D (-xxxDisownClipboard@@YGXPAUtagWND@@@Z.c)
 * Callees:
 *     ?FindClipFormat@@YGPAUtagCLIP@@PAUtagWINDOWSTATION@@IK@Z @ 0x115FE (-FindClipFormat@@YGPAUtagCLIP@@PAUtagWINDOWSTATION@@IK@Z.c)
 *     @HMValidateHandleNoRip@8 @ 0x16F4A (@HMValidateHandleNoRip@8.c)
 *     ?InternalSetClipboardData@@YGHPAUtagWINDOWSTATION@@IPAXHH@Z @ 0x181B81 (-InternalSetClipboardData@@YGHPAUtagWINDOWSTATION@@IPAXHH@Z.c)
 *     ?PasteScreenPalette@@YGXPAUtagWINDOWSTATION@@@Z @ 0x181F15 (-PasteScreenPalette@@YGXPAUtagWINDOWSTATION@@@Z.c)
 *     __ConvertMemHandle@8 @ 0x182DD4 (__ConvertMemHandle@8.c)
 */

void __thiscall MungeClipData(_DWORD *this)
{
  struct tagCLIP *v2; // esi
  struct tagCLIP *v3; // eax
  struct tagCLIP *v4; // ebx
  int v5; // eax
  struct tagWINDOWSTATION *v6; // eax
  int v7; // esi
  int v8; // eax
  struct tagCLIP *v9; // eax
  struct tagCLIP *v10; // eax
  struct tagCLIP *v11; // esi
  struct tagCLIP *v12; // eax
  bool v13; // zf
  struct tagCLIP *v14; // ebx
  unsigned int v15; // esi
  unsigned int v16; // [esp+0h] [ebp-18h]
  unsigned int v17; // [esp+0h] [ebp-18h]
  unsigned int v18; // [esp+0h] [ebp-18h]
  unsigned int v19; // [esp+0h] [ebp-18h]
  unsigned int v20; // [esp+0h] [ebp-18h]
  unsigned int v21; // [esp+0h] [ebp-18h]
  unsigned int v22; // [esp+0h] [ebp-18h]
  unsigned int v23; // [esp+0h] [ebp-18h]
  unsigned int v24; // [esp+0h] [ebp-18h]
  struct tagWINDOWSTATION *v25; // [esp+0h] [ebp-18h]
  unsigned int v26; // [esp+4h] [ebp-14h]
  unsigned int v27; // [esp+4h] [ebp-14h]
  unsigned int v28; // [esp+4h] [ebp-14h]
  unsigned int v29; // [esp+4h] [ebp-14h]
  unsigned int v30; // [esp+4h] [ebp-14h]
  unsigned int v31; // [esp+4h] [ebp-14h]
  unsigned int v32; // [esp+4h] [ebp-14h]
  unsigned int v33; // [esp+4h] [ebp-14h]
  unsigned int v34; // [esp+4h] [ebp-14h]
  int v35; // [esp+4h] [ebp-14h]
  int v36; // [esp+Ch] [ebp-Ch] BYREF
  unsigned int ClipFormat; // [esp+10h] [ebp-8h]
  struct tagCLIP *v38; // [esp+14h] [ebp-4h]

  ClipFormat = (unsigned int)FindClipFormat(1, (int)this, (struct tagWINDOWSTATION *)1, v16, v26);
  v2 = FindClipFormat(7, (int)this, (struct tagWINDOWSTATION *)1, v17, v27);
  v38 = v2;
  v3 = FindClipFormat(13, (int)this, (struct tagWINDOWSTATION *)1, v18, v28);
  v4 = v3;
  if ( ClipFormat || v2 || v3 )
  {
    if ( !FindClipFormat(16, (int)this, (struct tagWINDOWSTATION *)1, v19, v29) )
    {
      v5 = *(_DWORD *)(_gptiCurrent + 240);
      if ( v5 )
      {
        v36 = *(unsigned __int16 *)(v5 + 20);
        v6 = (struct tagWINDOWSTATION *)_ConvertMemHandle(&v36, 4);
        v7 = (int)v6;
        if ( v6 )
        {
          if ( !InternalSetClipboardData(16, this, v6, 0, (void *)1, v19, v29) )
          {
            v8 = HMValidateHandleNoRip(v7, 6);
            if ( v8 )
              HMUnlockDestroyObject(v8);
          }
        }
        v2 = v38;
      }
    }
    if ( !ClipFormat )
      InternalSetClipboardData(1, this, (struct tagWINDOWSTATION *)1, 0, (void *)1, v19, v29);
    if ( !v2 )
      InternalSetClipboardData(7, this, (struct tagWINDOWSTATION *)1, 0, (void *)1, v19, v29);
    if ( !v4 )
      InternalSetClipboardData(13, this, (struct tagWINDOWSTATION *)1, 0, (void *)1, v19, v29);
  }
  if ( FindClipFormat(3, (int)this, (struct tagWINDOWSTATION *)1, v19, v29)
    || (v9 = FindClipFormat(14, (int)this, (struct tagWINDOWSTATION *)1, v20, v30)) == 0 )
  {
    if ( !FindClipFormat(14, (int)this, (struct tagWINDOWSTATION *)1, v20, v30) )
    {
      v10 = FindClipFormat(3, (int)this, (struct tagWINDOWSTATION *)1, v21, v31);
      if ( v10 )
        InternalSetClipboardData(
          14,
          this,
          (struct tagWINDOWSTATION *)((*((_DWORD *)v10 + 1) != 0) + 3),
          0,
          (void *)1,
          v21,
          v31);
    }
  }
  else
  {
    InternalSetClipboardData(
      3,
      this,
      (struct tagWINDOWSTATION *)((*((_DWORD *)v9 + 1) != 0) + 3),
      0,
      (void *)1,
      v20,
      v30);
  }
  v11 = FindClipFormat(2, (int)this, (struct tagWINDOWSTATION *)1, v21, v31);
  ClipFormat = (unsigned int)FindClipFormat(8, (int)this, (struct tagWINDOWSTATION *)1, v22, v32);
  v12 = FindClipFormat(17, (int)this, (struct tagWINDOWSTATION *)1, v23, v33);
  v13 = v11 == 0;
  v14 = v12;
  v15 = ClipFormat;
  if ( v13 )
  {
    if ( !ClipFormat && !v12 )
      return;
    InternalSetClipboardData(2, this, (struct tagWINDOWSTATION *)2, 0, (void *)1, v24, v34);
  }
  if ( !v15 )
    InternalSetClipboardData(8, this, (struct tagWINDOWSTATION *)2, 0, (void *)1, v24, v34);
  if ( !v14 )
    InternalSetClipboardData(17, this, (struct tagWINDOWSTATION *)2, 0, (void *)1, v24, v34);
  if ( (*(_BYTE *)(_gpsi + 6248) & 1) != 0 && !FindClipFormat(9, (int)this, (struct tagWINDOWSTATION *)1, v24, v34) )
  {
    if ( v15 || v14 )
      InternalSetClipboardData(9, this, (struct tagWINDOWSTATION *)2, 0, (void *)1, (int)v25, v35);
    else
      PasteScreenPalette(v25);
  }
}
