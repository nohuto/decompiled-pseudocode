/*
 * XREFs of _xxxSetClassLong@16 @ 0xCBBE2
 * Callers:
 *     _NtUserSetClassLong@16 @ 0xCBA02 (_NtUserSetClassLong@16.c)
 * Callees:
 *     ??1?$SmartObjStackRefBase@UtagCLS@@@@IAE@XZ @ 0x3F9D2 (--1-$SmartObjStackRefBase@UtagCLS@@@@IAE@XZ.c)
 *     ?ULongAdd@@YGJKKPAK@Z @ 0x4591A (-ULongAdd@@YGJKKPAK@Z.c)
 *     _UserSetLastError@4 @ 0x81122 (_UserSetLastError@4.c)
 *     ?Init@?$SmartObjStackRefBase@UtagCLS@@@@AAEXPAUtagCLS@@@Z @ 0x97FDC (-Init@-$SmartObjStackRefBase@UtagCLS@@@@AAEXPAUtagCLS@@@Z.c)
 *     ??4?$SmartObjStackRefBase@UtagCLS@@@@IAEAAV0@QAUtagCLS@@@Z @ 0x983B8 (--4-$SmartObjStackRefBase@UtagCLS@@@@IAEAAV0@QAUtagCLS@@@Z.c)
 *     _xxxSetClassData@16 @ 0xCBC4C (_xxxSetClassData@16.c)
 */

int __fastcall xxxSetClassLong(unsigned int a1, signed int a2, struct tagCLS *a3, int a4)
{
  int v4; // edi
  int v6; // esi
  int v8; // ecx
  int v9; // eax
  int v10; // eax
  unsigned int v11; // [esp+0h] [ebp-20h]
  unsigned int *v12; // [esp+4h] [ebp-1Ch]
  unsigned int v13; // [esp+10h] [ebp-10h] BYREF
  int v14; // [esp+14h] [ebp-Ch]
  _DWORD v15[2]; // [esp+18h] [ebp-8h] BYREF

  v13 = a1;
  v4 = 0;
  SmartObjStackRefBase<tagCLS>::Init(v15, 0);
  if ( *(_DWORD *)(*(_DWORD *)(v13 + 8) + 232) != PsGetCurrentProcessWin32Process() )
  {
    v8 = 5;
LABEL_14:
    UserSetLastError((struct _NT_TIB *)v8);
    goto LABEL_4;
  }
  if ( a2 < 0 )
  {
    v4 = xxxSetClassData(a3, a4);
LABEL_4:
    v6 = v4;
    goto LABEL_5;
  }
  v9 = *(_DWORD *)(v13 + 76);
  v13 = 0;
  SmartObjStackRefBase<tagCLS>::operator=(v15, *(_DWORD *)(v9 + 32));
  if ( (ULongAdd(4, a2, (int *)&v13, v11, v12) & 0x80000000) != 0
    || v13 > *(_DWORD *)(*(_DWORD *)(*(_DWORD *)v15[0] + 4) + 12) )
  {
    v8 = 1413;
    goto LABEL_14;
  }
  v10 = *(_DWORD *)(*(_DWORD *)v15[0] + 4);
  v14 = *(_DWORD *)(v10 + a2 + 56);
  *(_DWORD *)(v10 + a2 + 56) = a3;
  SmartObjStackRefBase<tagCLS>::operator=(v15, *(_DWORD *)(*(_DWORD *)v15[0] + 36));
  while ( *(_DWORD *)v15[0] )
  {
    *(_DWORD *)(*(_DWORD *)(*(_DWORD *)v15[0] + 4) + a2 + 56) = a3;
    SmartObjStackRefBase<tagCLS>::operator=(v15, **(_DWORD **)v15[0]);
  }
  v6 = v14;
LABEL_5:
  SmartObjStackRefBase<tagCLS>::~SmartObjStackRefBase<tagCLS>(v15);
  return v6;
}
