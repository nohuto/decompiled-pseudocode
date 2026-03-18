/*
 * XREFs of xxxRemoveFullScreen @ 0x1C008EABC
 * Callers:
 *     xxxFreeWindow @ 0x1C008B600 (xxxFreeWindow.c)
 *     xxxCheckFullScreen @ 0x1C008E698 (xxxCheckFullScreen.c)
 * Callees:
 *     PushW32ThreadLock @ 0x1C001DE60 (PushW32ThreadLock.c)
 *     xxxSetTrayWindow @ 0x1C00338B4 (xxxSetTrayWindow.c)
 *     SetOrClrWF @ 0x1C00A2698 (SetOrClrWF.c)
 *     PopAndFreeW32ThreadLock @ 0x1C00B3C70 (PopAndFreeW32ThreadLock.c)
 */

__int64 __fastcall xxxRemoveFullScreen(__int64 a1)
{
  _QWORD *v1; // rdi
  unsigned int v2; // ebx
  __int16 v4; // dx
  __int128 v5; // [rsp+20h] [rbp-28h] BYREF
  __int64 v6; // [rsp+30h] [rbp-18h]

  v1 = *(_QWORD **)(a1 + 24);
  v2 = 0;
  if ( !v1 )
    return 0LL;
  if ( (*(_BYTE *)(*(_QWORD *)(a1 + 40) + 20LL) & 0x40) != 0
    && (*(_DWORD *)(gpsi + 2120LL) & 8) != 0
    && (((*(_DWORD *)(gptiCurrent + 672LL) | *(_DWORD *)(**(_QWORD **)(gptiCurrent + 456LL) + 16LL)) & 0x800) != 0
     || *(_QWORD *)(v1[1] + 192LL)) )
  {
    SetOrClrWF(0LL, a1, 1088LL, 1LL);
    v4 = *(_WORD *)(gpDispInfo + 160LL);
    *(_WORD *)(gpDispInfo + 160LL) = v4 - 1;
    if ( !v4 )
    {
      v6 = 0LL;
      v5 = 0LL;
      PushW32ThreadLock((__int64)v1, &v5, UserDereferenceObject);
      ObfReferenceObject(v1);
      xxxSetTrayWindow((__int64)v1, (unsigned __int64 *)1);
      PopAndFreeW32ThreadLock(&v5);
      return 1;
    }
  }
  return v2;
}
