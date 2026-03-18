/*
 * XREFs of _FreeWindowGCData@4 @ 0x717D2
 * Callers:
 *     _xxxFreeWindow@8 @ 0x70780 (_xxxFreeWindow@8.c)
 *     _SetGestureConfigSettings@20 @ 0xE3454 (_SetGestureConfigSettings@20.c)
 * Callees:
 *     ?VWPLRemoveBase@@YGHPAPAUtagVWPL@@KPAUtagWND@@HPAK@Z @ 0x6FCFE (-VWPLRemoveBase@@YGHPAPAUtagVWPL@@KPAUtagWND@@HPAK@Z.c)
 *     ?FreeWindowGCList@@YGXPAPAUtagGESTURECONFIGLIST@@@Z @ 0xD2CFC (-FreeWindowGCList@@YGXPAPAUtagGESTURECONFIGLIST@@@Z.c)
 */

int __usercall FreeWindowGCData@<eax>(
        struct tagVWPL **a1@<ecx>,
        unsigned int *a2@<ebx>,
        struct tagGESTURECONFIGLIST **a3@<edi>)
{
  int result; // eax
  _DWORD *v4; // esi
  int v5; // ebx
  unsigned int v6; // ecx
  int v7; // [esp-Ch] [ebp-14h]
  _DWORD **v8; // [esp-8h] [ebp-10h]
  struct tagVWPL **v10; // [esp+0h] [ebp-8h]
  _DWORD *v11; // [esp+4h] [ebp-4h] BYREF

  v11 = 0;
  v8 = (_DWORD **)(*((_DWORD *)a1[2] + 58) + 492);
  result = VWPLRemoveBase(v8, a1, (unsigned int)v8, (struct tagWND *)&v11, (int)a1, 0);
  if ( result )
  {
    v4 = v11;
    if ( v11 )
    {
      v7 = (int)a3;
      if ( *v11 )
      {
        Win32FreePool(*v11);
        *v4 = 0;
      }
      v5 = v4[3];
      if ( v5 )
      {
        FreeWindowGCList(a3);
        Win32FreePool(v5);
        v4[3] = 0;
      }
      Win32FreePool(v4);
      return VWPLRemoveBase((_DWORD **)(*((_DWORD *)v10[2] + 58) + 492), v10, v6, 0, v7, a2);
    }
  }
  return result;
}
