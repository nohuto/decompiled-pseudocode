/*
 * XREFs of _xxxRemoveFullScreen@4 @ 0x7202E
 * Callers:
 *     _xxxFreeWindow@8 @ 0x70780 (_xxxFreeWindow@8.c)
 *     _xxxCheckFullScreen@8 @ 0x71BE6 (_xxxCheckFullScreen@8.c)
 * Callees:
 *     _xxxSetTrayWindow@8 @ 0x13758 (_xxxSetTrayWindow@8.c)
 *     _SetOrClrWF@16 @ 0x1B9C0 (_SetOrClrWF@16.c)
 *     _PopAndFreeW32ThreadLock@4 @ 0x3C354 (_PopAndFreeW32ThreadLock@4.c)
 *     _PushW32ThreadLock@12 @ 0x6F9A0 (_PushW32ThreadLock@12.c)
 */

int __thiscall xxxRemoveFullScreen(_DWORD *this)
{
  _DWORD *v1; // esi
  int v2; // edi
  __int16 v4; // cx
  _DWORD v5[3]; // [esp+Ch] [ebp-Ch] BYREF

  v1 = (_DWORD *)this[3];
  if ( !v1 )
    return 0;
  v2 = 0;
  if ( (*(_BYTE *)(this[5] + 12) & 0x40) != 0
    && (*(_BYTE *)(_gpsi + 1720) & 8) != 0
    && (((*(_DWORD *)(_gptiCurrent + 372) | *(_DWORD *)(**(_DWORD **)(_gptiCurrent + 252) + 8)) & 0x800) != 0
     || *(_DWORD *)(v1[1] + 96)) )
  {
    SetOrClrWF(0, (int)this, 0x440u, 1);
    v4 = *(_WORD *)(_gpDispInfo + 88);
    *(_WORD *)(_gpDispInfo + 88) = v4 - 1;
    if ( !v4 )
    {
      memset(v5, 0, sizeof(v5));
      PushW32ThreadLock((int)v1, v5, (int)UserDereferenceObject);
      ObfReferenceObject(v1);
      xxxSetTrayWindow((int)v1, (int *)1);
      PopAndFreeW32ThreadLock((int)v5);
      return 1;
    }
  }
  return v2;
}
