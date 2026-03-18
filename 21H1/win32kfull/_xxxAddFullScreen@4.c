/*
 * XREFs of _xxxAddFullScreen@4 @ 0x12380
 * Callers:
 *     _xxxAddFullScreen@4 @ 0x12380 (_xxxAddFullScreen@4.c)
 *     _xxxCheckFullScreen@8 @ 0x71BE6 (_xxxCheckFullScreen@8.c)
 * Callees:
 *     _xxxAddFullScreen@4 @ 0x12380 (_xxxAddFullScreen@4.c)
 *     _xxxSetTrayWindow@8 @ 0x13758 (_xxxSetTrayWindow@8.c)
 *     _SetOrClrWF@16 @ 0x1B9C0 (_SetOrClrWF@16.c)
 *     _PopAndFreeW32ThreadLock@4 @ 0x3C354 (_PopAndFreeW32ThreadLock@4.c)
 *     _W32GetThreadWin32Thread@4 @ 0x3FA3E (_W32GetThreadWin32Thread@4.c)
 *     _PushW32ThreadLock@12 @ 0x6F9A0 (_PushW32ThreadLock@12.c)
 */

int __thiscall xxxAddFullScreen(_DWORD *this)
{
  _DWORD *v2; // ebx
  int v3; // edi
  int v4; // esi
  int v6; // eax
  char v7; // cl
  PKTHREAD CurrentThread; // eax
  int ThreadWin32Thread; // eax
  int v10; // [esp+Ch] [ebp-Ch] BYREF
  int v11; // [esp+10h] [ebp-8h]
  int v12; // [esp+14h] [ebp-4h]

  v2 = (_DWORD *)this[3];
  if ( !v2 )
    return 0;
  v3 = 0;
  if ( (*(_BYTE *)(this[5] + 12) & 0x40) == 0
    && (*(_BYTE *)(_gpsi + 1720) & 8) != 0
    && (((*(_DWORD *)(_gptiCurrent + 372) | *(_DWORD *)(**(_DWORD **)(_gptiCurrent + 252) + 8)) & 0x800) != 0
     || *(_DWORD *)(v2[1] + 96)) )
  {
    SetOrClrWF(1088, 1);
    if ( ++*(_WORD *)(_gpDispInfo + 88) == 1 )
    {
      v10 = 0;
      v11 = 0;
      v12 = 0;
      PushW32ThreadLock(v2, &v10, UserDereferenceObject);
      ObfReferenceObject(v2);
      xxxSetTrayWindow(v2, 1);
      PopAndFreeW32ThreadLock(&v10);
      v3 = 1;
    }
    v4 = this[16];
    if ( v4 )
    {
      v6 = *(_DWORD *)(v4 + 20);
      v7 = *(_BYTE *)(v6 + 23);
      if ( (v7 & 0x40) == 0 && !*(_DWORD *)(v6 + 60) && !*(_DWORD *)(v6 + 52) && (v7 & 0x10) == 0 )
      {
        v12 = 0;
        CurrentThread = KeGetCurrentThread();
        ThreadWin32Thread = W32GetThreadWin32Thread(CurrentThread);
        v10 = *(_DWORD *)(ThreadWin32Thread + 228);
        *(_DWORD *)(ThreadWin32Thread + 228) = &v10;
        v11 = v4;
        HMLockObject(v4);
        if ( xxxAddFullScreen(v4) )
          v3 = 1;
        ThreadUnlock1();
      }
    }
  }
  return v3;
}
