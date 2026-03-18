/*
 * XREFs of ComposeWindow @ 0x1C004E8F0
 * Callers:
 *     zzzDecomposeDesktop @ 0x1C000EF2C (zzzDecomposeDesktop.c)
 *     ComposeWindowIfNeeded @ 0x1C0020B9C (ComposeWindowIfNeeded.c)
 *     zzzComposeDesktop @ 0x1C004AD48 (zzzComposeDesktop.c)
 *     xxxSwitchDesktop @ 0x1C004CE38 (xxxSwitchDesktop.c)
 *     DecomposeWindowIfNeeded @ 0x1C004E868 (DecomposeWindowIfNeeded.c)
 *     UpdateWindowMonitor @ 0x1C006F040 (UpdateWindowMonitor.c)
 * Callees:
 *     _SetLayeredWindowAttributes @ 0x1C001EDB4 (_SetLayeredWindowAttributes.c)
 *     UpdateWindowSpriteDPI @ 0x1C001F1A4 (UpdateWindowSpriteDPI.c)
 *     IsDesktopWindow @ 0x1C0020E80 (IsDesktopWindow.c)
 *     xxxSetLayeredWindow @ 0x1C0028B2C (xxxSetLayeredWindow.c)
 *     UnsetLayeredWindow @ 0x1C004EA28 (UnsetLayeredWindow.c)
 *     ??1UserAtomicCheck@@QEAA@XZ @ 0x1C0069000 (--1UserAtomicCheck@@QEAA@XZ.c)
 *     ??0UserAtomicCheck@@QEAA@XZ @ 0x1C0069054 (--0UserAtomicCheck@@QEAA@XZ.c)
 *     xxxInternalInvalidate @ 0x1C00717E0 (xxxInternalInvalidate.c)
 *     DwmAsyncChildStyleChange @ 0x1C00A27E0 (DwmAsyncChildStyleChange.c)
 */

__int64 __fastcall ComposeWindow(struct tagWND *a1, char a2)
{
  __int64 v4; // rcx
  int v5; // edi
  int v7; // eax
  __int64 v8; // rcx
  __int64 v9; // rcx
  void *v10; // rax
  int v11; // eax
  __int64 v12; // rax
  __int64 v13; // [rsp+40h] [rbp+18h] BYREF
  char v14; // [rsp+48h] [rbp+20h] BYREF

  v13 = 0LL;
  if ( (a2 & 1) == 0 )
  {
    v4 = *((_QWORD *)a1 + 5);
    if ( (*(_DWORD *)(v4 + 232) & 0x20) != 0 )
    {
      v11 = UnsetLayeredWindow(a1);
      v4 = *((_QWORD *)a1 + 5);
      v5 = v11;
    }
    else
    {
      v5 = 0;
    }
    *(_DWORD *)(v4 + 232) &= ~0x40u;
    return (unsigned int)v5;
  }
  LOBYTE(v7) = IsDesktopWindow((__int64)a1);
  if ( v7 && *((_QWORD *)a1 + 3) != grpdeskRitInput )
    return 0;
  v8 = *((_QWORD *)a1 + 5);
  if ( (*(_BYTE *)(v8 + 31) & 0x10) == 0 && (a2 & 8) == 0 )
    return (*(_BYTE *)(v8 + 26) & 8) == 0 ? 0x3E0001u : 0;
  if ( (*(_BYTE *)(v8 + 26) & 8) != 0 )
  {
    v12 = ValidateHmonitorNoRip(*(_QWORD *)(v8 + 256));
    UpdateWindowSpriteDPI(a1, v12);
    if ( (*(_BYTE *)(*((_QWORD *)a1 + 5) + 27LL) & 0x20) == 0 )
    {
      UserAtomicCheck::UserAtomicCheck((UserAtomicCheck *)&v13);
      xxxInternalInvalidate(a1, (HRGN)1, 0x485u);
      UserAtomicCheck::~UserAtomicCheck((UserAtomicCheck *)&v13);
    }
    return 0;
  }
  UserAtomicCheck::UserAtomicCheck((UserAtomicCheck *)&v14);
  v5 = xxxSetLayeredWindow(a1, 0, &v13);
  UserAtomicCheck::~UserAtomicCheck((UserAtomicCheck *)&v14);
  if ( v5 >= 0 )
  {
    v5 = SetLayeredWindowAttributes(a1, 0, 255, 4 * (a2 & 4 | 1u));
    if ( v5 < 0 )
    {
      UnsetLayeredWindow(a1);
    }
    else
    {
      *(_DWORD *)(*((_QWORD *)a1 + 5) + 232LL) |= 0x20u;
      v10 = (void *)ReferenceDwmApiPort(v9);
      DwmAsyncChildStyleChange(v10);
    }
  }
  return (unsigned int)v5;
}
