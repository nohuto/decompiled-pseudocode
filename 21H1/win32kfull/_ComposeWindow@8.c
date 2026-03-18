/*
 * XREFs of _ComposeWindow@8 @ 0x1BF3E
 * Callers:
 *     _DecomposeWindowIfNeeded@4 @ 0x1B7B8 (_DecomposeWindowIfNeeded@4.c)
 *     _ComposeWindowIfNeeded@8 @ 0x1CD56 (_ComposeWindowIfNeeded@8.c)
 *     _UpdateWindowMonitor@8 @ 0x2A95A (_UpdateWindowMonitor@8.c)
 *     _xxxSwitchDesktop@16 @ 0xB0C6A (_xxxSwitchDesktop@16.c)
 *     _zzzDecomposeDesktop@8 @ 0xCF042 (_zzzDecomposeDesktop@8.c)
 *     _zzzComposeDesktop@4 @ 0xE0A14 (_zzzComposeDesktop@4.c)
 * Callees:
 *     _UnsetLayeredWindow@8 @ 0x1B80C (_UnsetLayeredWindow@8.c)
 *     _DwmAsyncChildStyleChange@16 @ 0x1BAD6 (_DwmAsyncChildStyleChange@16.c)
 *     _xxxSetLayeredWindow@12 @ 0x1F2B8 (_xxxSetLayeredWindow@12.c)
 *     __SetLayeredWindowAttributes@16 @ 0x1FB1E (__SetLayeredWindowAttributes@16.c)
 *     _UpdateWindowSpriteDPI@8 @ 0x23C14 (_UpdateWindowSpriteDPI@8.c)
 *     ??0UserAtomicCheck@@QAE@XZ @ 0x2C3CC (--0UserAtomicCheck@@QAE@XZ.c)
 *     ??1UserAtomicCheck@@QAE@XZ @ 0x2C40C (--1UserAtomicCheck@@QAE@XZ.c)
 *     _xxxInternalInvalidate@12 @ 0x3519E (_xxxInternalInvalidate@12.c)
 *     _IsDesktopWindow@4 @ 0x72F74 (_IsDesktopWindow@4.c)
 */

int __fastcall ComposeWindow(struct tagWND *a1, char a2)
{
  int v3; // esi
  int v5; // eax
  int v7; // eax
  void *v8; // eax
  int v9; // eax
  int v10; // [esp-4h] [ebp-1Ch]
  _BYTE v11[8]; // [esp+Ch] [ebp-Ch] BYREF
  int v12; // [esp+14h] [ebp-4h] BYREF

  v3 = 0;
  v12 = 0;
  if ( (a2 & 1) != 0 )
  {
    if ( !IsDesktopWindow() || *((_DWORD *)a1 + 3) == _grpdeskRitInput )
    {
      v7 = *((_DWORD *)a1 + 5);
      if ( (*(_BYTE *)(v7 + 23) & 0x10) != 0 || (a2 & 8) != 0 )
      {
        if ( (*(_BYTE *)(v7 + 18) & 8) != 0 )
        {
          v9 = ValidateHmonitorNoRip(*(_DWORD *)(v7 + 164));
          UpdateWindowSpriteDPI(a1, v9);
          if ( (*(_BYTE *)(*((_DWORD *)a1 + 5) + 19) & 0x20) == 0 )
          {
            UserAtomicCheck::UserAtomicCheck((UserAtomicCheck *)v11);
            xxxInternalInvalidate(a1, 1, 1157);
            UserAtomicCheck::~UserAtomicCheck((UserAtomicCheck *)v11);
          }
        }
        else
        {
          UserAtomicCheck::UserAtomicCheck((UserAtomicCheck *)v11);
          v3 = xxxSetLayeredWindow(a1, (int)&v12);
          UserAtomicCheck::~UserAtomicCheck((UserAtomicCheck *)v11);
          if ( v3 >= 0 )
          {
            v3 = _SetLayeredWindowAttributes(255, 4 * (a2 & 4 | 1));
            if ( v3 < 0 )
            {
              UnsetLayeredWindow(a1, 3);
            }
            else
            {
              *(_DWORD *)(*((_DWORD *)a1 + 5) + 144) |= 0x20u;
              v10 = *(_DWORD *)(*((_DWORD *)a1 + 5) + 144);
              v8 = (void *)ReferenceDwmApiPort();
              DwmAsyncChildStyleChange(v8, *(_DWORD *)a1, -268435456, v10);
            }
          }
        }
      }
      else
      {
        return (*(_BYTE *)(v7 + 18) & 8) != 0 ? 0 : 4063233;
      }
    }
  }
  else
  {
    v5 = *((_DWORD *)a1 + 5);
    if ( (*(_BYTE *)(v5 + 144) & 0x20) != 0 )
    {
      v3 = UnsetLayeredWindow(a1, (a2 & 0x10 | 8u) >> 3);
      v5 = *((_DWORD *)a1 + 5);
    }
    *(_DWORD *)(v5 + 144) &= ~0x40u;
  }
  return v3;
}
