/*
 * XREFs of _AllocGestureInfo@16 @ 0x188710
 * Callers:
 *     _NtUserInjectGesture@20 @ 0x16561B (_NtUserInjectGesture@20.c)
 *     _SendGestureMessage@28 @ 0x188A6B (_SendGestureMessage@28.c)
 * Callees:
 *     ?ULongAdd@@YGJKKPAK@Z @ 0x4591A (-ULongAdd@@YGJKKPAK@Z.c)
 *     _UserSetLastError@4 @ 0x81122 (_UserSetLastError@4.c)
 *     __SEH_prolog4 @ 0xF9120 (__SEH_prolog4.c)
 *     _memcpy @ 0xF929B (_memcpy.c)
 */

int __fastcall AllocGestureInfo(int a1, int a2, size_t *a3, void *Src)
{
  int v5; // esi
  unsigned int v6; // ecx
  _DWORD *v7; // eax
  _DWORD *v8; // ebx
  unsigned int v10; // [esp+0h] [ebp-38h]
  unsigned int *v11; // [esp+4h] [ebp-34h]
  unsigned int v12; // [esp+1Ch] [ebp-1Ch] BYREF
  CPPEH_RECORD ms_exc; // [esp+20h] [ebp-18h]

  v5 = *(_DWORD *)(a1 + 8);
  v6 = a3[10];
  v12 = 0;
  if ( (ULongAdd(72, v6, (int *)&v12, v10, v11) & 0x80000000) != 0 )
  {
    UserSetLastError((struct _NT_TIB *)0x216);
    return 0;
  }
  if ( !v12 )
    return 0;
  v7 = (_DWORD *)HMAllocObject(v5, 0, 21, v12);
  v8 = v7;
  if ( !v7 )
    return 0;
  v7[3] = a2;
  qmemcpy(v7 + 4, a3, 0x30u);
  ms_exc.registration.TryLevel = 0;
  if ( Src )
    memcpy(v7 + 16, Src, a3[10]);
  ms_exc.registration.TryLevel = -2;
  return *v8;
}
