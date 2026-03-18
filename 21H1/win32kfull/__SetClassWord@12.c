/*
 * XREFs of __SetClassWord@12 @ 0x15472A
 * Callers:
 *     _NtUserSetClassWord@12 @ 0x168B81 (_NtUserSetClassWord@12.c)
 * Callees:
 *     ??1?$SmartObjStackRefBase@UtagCLS@@@@IAE@XZ @ 0x3F9D2 (--1-$SmartObjStackRefBase@UtagCLS@@@@IAE@XZ.c)
 *     ?ULongAdd@@YGJKKPAK@Z @ 0x4591A (-ULongAdd@@YGJKKPAK@Z.c)
 *     _UserSetLastError@4 @ 0x81122 (_UserSetLastError@4.c)
 *     ?Init@?$SmartObjStackRefBase@UtagCLS@@@@AAEXPAUtagCLS@@@Z @ 0x97FDC (-Init@-$SmartObjStackRefBase@UtagCLS@@@@AAEXPAUtagCLS@@@Z.c)
 *     ??4?$SmartObjStackRefBase@UtagCLS@@@@IAEAAV0@QAUtagCLS@@@Z @ 0x983B8 (--4-$SmartObjStackRefBase@UtagCLS@@@@IAEAAV0@QAUtagCLS@@@Z.c)
 */

__int16 __fastcall _SetClassWord(unsigned int a1, signed int a2, __int16 a3)
{
  __int16 v4; // bx
  int v6; // ecx
  int v7; // eax
  unsigned int v9; // [esp+0h] [ebp-1Ch]
  unsigned int *v10; // [esp+4h] [ebp-18h]
  _DWORD v11[2]; // [esp+Ch] [ebp-10h] BYREF
  int v12; // [esp+14h] [ebp-8h]
  unsigned int v13; // [esp+18h] [ebp-4h] BYREF

  v4 = 0;
  v13 = a1;
  SmartObjStackRefBase<tagCLS>::Init(v11, 0);
  if ( *(_DWORD *)(*(_DWORD *)(a1 + 8) + 232) != PsGetCurrentProcessWin32Process() )
  {
    v6 = 5;
LABEL_11:
    UserSetLastError((struct _NT_TIB *)v6);
    goto LABEL_12;
  }
  SmartObjStackRefBase<tagCLS>::operator=(v11, *(_DWORD *)(*(_DWORD *)(v13 + 76) + 32));
  if ( a2 < 0
    || (v13 = a2, (ULongAdd(2, a2, (int *)&v13, v9, v10) & 0x80000000) != 0)
    || v13 > *(_DWORD *)(*(_DWORD *)(*(_DWORD *)v11[0] + 4) + 12) )
  {
    v6 = 1413;
    goto LABEL_11;
  }
  v7 = *(_DWORD *)(*(_DWORD *)v11[0] + 4);
  v12 = *(unsigned __int16 *)(v7 + a2 + 56);
  *(_WORD *)(v7 + a2 + 56) = a3;
  SmartObjStackRefBase<tagCLS>::operator=(v11, *(_DWORD *)(*(_DWORD *)v11[0] + 36));
  while ( *(_DWORD *)v11[0] )
  {
    *(_WORD *)(*(_DWORD *)(*(_DWORD *)v11[0] + 4) + a2 + 56) = a3;
    SmartObjStackRefBase<tagCLS>::operator=(v11, **(_DWORD **)v11[0]);
  }
  v4 = v12;
LABEL_12:
  SmartObjStackRefBase<tagCLS>::~SmartObjStackRefBase<tagCLS>(v11);
  return v4;
}
