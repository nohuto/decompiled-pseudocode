/*
 * XREFs of _DestroyInputContext@4 @ 0x14F099
 * Callers:
 *     _NtUserDestroyInputContext@4 @ 0x160B48 (_NtUserDestroyInputContext@4.c)
 * Callees:
 *     _FreeHwndList@4 @ 0x2D2D0 (_FreeHwndList@4.c)
 *     _BuildHwndList@12 @ 0x2D340 (_BuildHwndList@12.c)
 *     @HMValidateHandleNoSecure@8 @ 0x3C46E (@HMValidateHandleNoSecure@8.c)
 *     _UserSetLastError@4 @ 0x81122 (_UserSetLastError@4.c)
 *     _AssociateInputContext@8 @ 0xAE6F0 (_AssociateInputContext@8.c)
 */

int __thiscall DestroyInputContext(_DWORD *this)
{
  int v2; // edi
  int v4; // eax
  unsigned int *v5; // ebx
  unsigned int v6; // ecx
  int v7; // eax
  int v8; // eax
  int v9; // [esp+8h] [ebp-4h]

  v2 = this[2];
  if ( v2 != _gptiCurrent )
  {
    UserSetLastError((struct _NT_TIB *)5);
    return 0;
  }
  if ( this == *(_DWORD **)(v2 + 440) )
  {
    UserSetLastError((struct _NT_TIB *)0x57);
    return 0;
  }
  v4 = BuildHwndList(*(_DWORD *)(*(_DWORD *)(*(_DWORD *)(*(_DWORD *)(v2 + 248) + 4) + 12) + 60), 3, this[2]);
  v9 = v4;
  if ( v4 )
  {
    v5 = (unsigned int *)(v4 + 16);
    v6 = *(_DWORD *)(v4 + 16);
    if ( v6 != 1 )
    {
      do
      {
        v7 = HMValidateHandleNoSecure(v6, 1);
        if ( v7 && *(_DWORD *)(*(_DWORD *)(v7 + 20) + 132) == *this )
          AssociateInputContext(v7, *(int **)(v2 + 440));
        v6 = *++v5;
      }
      while ( *v5 != 1 );
      v4 = v9;
    }
    FreeHwndList((struct tagBWL *)v4);
  }
  v8 = _HMPheFromObject(this);
  if ( (*(_BYTE *)(v8 + 13) & 1) == 0 )
    HMDestroyUnlockedObject(v8);
  return 1;
}
