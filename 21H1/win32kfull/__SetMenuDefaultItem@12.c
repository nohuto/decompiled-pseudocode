/*
 * XREFs of __SetMenuDefaultItem@12 @ 0xC68A6
 * Callers:
 *     _xxxRealDefWindowProc@16 @ 0x3D3F2 (_xxxRealDefWindowProc@16.c)
 *     _xxxSetSysMenu@4 @ 0xB9E58 (_xxxSetSysMenu@4.c)
 *     ?_SetCloseDefault@@YGXABV?$SmartObjStackRef@UtagMENU@@@@@Z @ 0xBA25A (-_SetCloseDefault@@YGXABV-$SmartObjStackRef@UtagMENU@@@@@Z.c)
 *     _NtUserSetMenuDefaultItem@12 @ 0xE9248 (_NtUserSetMenuDefaultItem@12.c)
 * Callees:
 *     _MNLookUpItem@16 @ 0x32010 (_MNLookUpItem@16.c)
 *     ??1?$SmartObjStackRefBase@UtagCLS@@@@IAE@XZ @ 0x3F9D2 (--1-$SmartObjStackRefBase@UtagCLS@@@@IAE@XZ.c)
 *     ??8?$SmartObjStackRef@UtagMENU@@@@QBE_NQAUtagMENU@@@Z @ 0x8EDE4 (--8-$SmartObjStackRef@UtagMENU@@@@QBE_NQAUtagMENU@@@Z.c)
 *     ?Init@?$SmartObjStackRefBase@UtagMENU@@@@AAEXPAUtagMENU@@@Z @ 0x94832 (-Init@-$SmartObjStackRefBase@UtagMENU@@@@AAEXPAUtagMENU@@@Z.c)
 *     ??4?$SmartObjStackRefBase@UtagMENU@@@@IAEAAV0@QAUtagMENU@@@Z @ 0x94D5C (--4-$SmartObjStackRefBase@UtagMENU@@@@IAEAAV0@QAUtagMENU@@@Z.c)
 */

int __fastcall _SetMenuDefaultItem(int *a1, unsigned int a2, int a3)
{
  int *v3; // ebx
  int v5; // esi
  _DWORD *v6; // edi
  _DWORD *v7; // ecx
  int v8; // edx
  int v9; // eax
  int v10; // eax
  int *v12[3]; // [esp+Ch] [ebp-18h] BYREF
  unsigned int v13; // [esp+18h] [ebp-Ch]
  int *v14; // [esp+1Ch] [ebp-8h]
  int v15; // [esp+20h] [ebp-4h] BYREF

  v3 = a1;
  v5 = 0;
  v13 = a2;
  v14 = a1;
  SmartObjStackRefBase<tagMENU>::Init(v12, 0);
  v12[2] = 0;
  v15 = 0;
  if ( a2 == -1 )
  {
    v6 = 0;
  }
  else
  {
    v15 = *v12[0];
    v6 = MNLookUpItem((int)v3, a2, a3, &v15);
    SmartObjStackRefBase<tagMENU>::operator=(v12, v15);
    if ( !v6 || !SmartObjStackRef<tagMENU>::operator==(v12, v3) || (*(_DWORD *)*v6 & 0x800) != 0 )
      goto LABEL_13;
  }
  v7 = (_DWORD *)v3[14];
  v8 = *(_DWORD *)(v3[5] + 24);
  if ( v8 )
  {
    do
    {
      v9 = *(_DWORD *)(*v7 + 4);
      if ( (v9 & 0x1000) != 0 && v7 != v6 )
      {
        *(_DWORD *)(*v7 + 4) = v9 & 0xFFFFEFFF;
        *(_DWORD *)(*v7 + 56) = 0x7FFFFFFF;
        *(_DWORD *)(*v7 + 60) = 0;
      }
      v7 += 20;
      --v8;
    }
    while ( v8 );
    v3 = v14;
  }
  if ( v13 != -1 )
  {
    v10 = *(_DWORD *)(*v6 + 4);
    if ( (v10 & 0x1000) == 0 )
    {
      *(_DWORD *)(*v6 + 4) = v10 | 0x1000;
      *(_DWORD *)(*v6 + 56) = 0x7FFFFFFF;
      *(_DWORD *)(*v6 + 60) = 0;
      *(_DWORD *)(v3[5] + 20) |= 0x400u;
    }
  }
  v5 = 1;
LABEL_13:
  SmartObjStackRefBase<tagCLS>::~SmartObjStackRefBase<tagCLS>(v12);
  return v5;
}
