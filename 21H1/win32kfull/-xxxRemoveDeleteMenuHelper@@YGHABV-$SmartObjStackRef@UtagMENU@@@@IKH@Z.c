/*
 * XREFs of ?xxxRemoveDeleteMenuHelper@@YGHABV?$SmartObjStackRef@UtagMENU@@@@IKH@Z @ 0x1DF66
 * Callers:
 *     _NtUserDeleteMenu@12 @ 0x9CA78 (_NtUserDeleteMenu@12.c)
 *     _NtUserRemoveMenu@12 @ 0xE70C0 (_NtUserRemoveMenu@12.c)
 *     _xxxDeleteMenu@12 @ 0x1A729B (_xxxDeleteMenu@12.c)
 * Callees:
 *     _DwmAsyncChildStyleChange@16 @ 0x1BAD6 (_DwmAsyncChildStyleChange@16.c)
 *     ?MNAllocMenuItems@@YGHABV?$SmartObjStackRef@UtagMENU@@@@_N@Z @ 0x1DDEC (-MNAllocMenuItems@@YGHABV-$SmartObjStackRef@UtagMENU@@@@_N@Z.c)
 *     ??4?$SharedMixedObjectPointerFieldrgItems@UtagITEM@@@tagMENU@@QAEPAUtagITEM@@PAU2@@Z @ 0x1DF42 (--4-$SharedMixedObjectPointerFieldrgItems@UtagITEM@@@tagMENU@@QAEPAUtagITEM@@PAU2@@Z.c)
 *     _MNFreeItem@12 @ 0x1EA10 (_MNFreeItem@12.c)
 *     _MNGetPopupFromMenu@8 @ 0x1EC0C (_MNGetPopupFromMenu@8.c)
 *     ??0?$SmartObjStackRef@UtagMENU@@@@QAE@ABV0@@Z @ 0x2A41E (--0-$SmartObjStackRef@UtagMENU@@@@QAE@ABV0@@Z.c)
 *     _MNLookUpItem@16 @ 0x32010 (_MNLookUpItem@16.c)
 *     ??1?$SmartObjStackRefBase@UtagCLS@@@@IAE@XZ @ 0x3F9D2 (--1-$SmartObjStackRefBase@UtagCLS@@@@IAE@XZ.c)
 *     ??1?$SmartObjStackRef@UtagPOPUPMENU@@@@QAE@XZ @ 0x411E4 (--1-$SmartObjStackRef@UtagPOPUPMENU@@@@QAE@XZ.c)
 *     ?Init@?$SmartObjStackRefBase@UtagMENU@@@@AAEXPAUtagMENU@@@Z @ 0x94832 (-Init@-$SmartObjStackRefBase@UtagMENU@@@@AAEXPAUtagMENU@@@Z.c)
 *     ??4?$SmartObjStackRefBase@UtagMENU@@@@IAEAAV0@QAUtagMENU@@@Z @ 0x94D5C (--4-$SmartObjStackRefBase@UtagMENU@@@@IAEAAV0@QAUtagMENU@@@Z.c)
 *     _MNGetpItemIndex@8 @ 0x99EF2 (_MNGetpItemIndex@8.c)
 *     ??4?$SmartObjStackRefBase@UtagPOPUPMENU@@@@IAEAAV0@QAUtagPOPUPMENU@@@Z @ 0x9D1EE (--4-$SmartObjStackRefBase@UtagPOPUPMENU@@@@IAEAAV0@QAUtagPOPUPMENU@@@Z.c)
 *     ?Init@?$SmartObjStackRefBase@UtagPOPUPMENU@@@@AAEXPAUtagPOPUPMENU@@@Z @ 0x9DD52 (-Init@-$SmartObjStackRefBase@UtagPOPUPMENU@@@@AAEXPAUtagPOPUPMENU@@@Z.c)
 *     _DwmGetClassStyle@4 @ 0xA4714 (_DwmGetClassStyle@4.c)
 *     _DirtyVisRgnTrackers@4 @ 0xF4CDE (_DirtyVisRgnTrackers@4.c)
 *     _memmove @ 0xF92A1 (_memmove.c)
 *     ?MNDeleteAdjustIndexes@@YGXPAUtagMENUSTATE@@V?$SmartObjStackRef@UtagPOPUPMENU@@@@I@Z @ 0x1A7228 (-MNDeleteAdjustIndexes@@YGXPAUtagMENUSTATE@@V-$SmartObjStackRef@UtagPOPUPMENU@@@@I@Z.c)
 *     _xxxMNUpdateShownMenu@12 @ 0x1A72AE (_xxxMNUpdateShownMenu@12.c)
 */

int __fastcall xxxRemoveDeleteMenuHelper(int a1, unsigned int a2, __int16 a3, int a4)
{
  int v4; // edi
  int v5; // eax
  int v6; // eax
  int v7; // ebx
  int v8; // eax
  int v9; // eax
  _DWORD *v10; // ecx
  bool v11; // zf
  int v12; // ecx
  int v13; // eax
  int v14; // eax
  int v15; // ecx
  int v16; // esi
  unsigned int v17; // ebx
  int v18; // edi
  size_t v19; // edx
  int v20; // ecx
  int v21; // eax
  int v22; // esi
  void *v23; // eax
  int v25; // [esp-8h] [ebp-48h]
  int v26; // [esp-4h] [ebp-44h]
  int ClassStyle; // [esp-4h] [ebp-44h]
  int v28; // [esp+Ch] [ebp-34h] BYREF
  int v29; // [esp+10h] [ebp-30h] BYREF
  size_t Size; // [esp+14h] [ebp-2Ch]
  unsigned int v31; // [esp+18h] [ebp-28h]
  int v32; // [esp+1Ch] [ebp-24h]
  _DWORD *v33; // [esp+20h] [ebp-20h] BYREF
  _DWORD v34[2]; // [esp+28h] [ebp-18h] BYREF
  int v35; // [esp+30h] [ebp-10h]
  _DWORD *v36; // [esp+34h] [ebp-Ch] BYREF
  int v37; // [esp+3Ch] [ebp-4h]

  v31 = a2;
  SmartObjStackRef<tagMENU>::SmartObjStackRef<tagMENU>(a1);
  v4 = 0;
  SmartObjStackRefBase<tagMENU>::Init(0);
  v29 = 0;
  SmartObjStackRefBase<tagPOPUPMENU>::Init(0);
  v37 = v35;
  v32 = 0;
  SmartObjStackRefBase<tagMENU>::operator=(*(_DWORD *)v34[0]);
  if ( v35 )
    v5 = v35;
  else
    v5 = *(_DWORD *)v34[0];
  v28 = v5;
  v6 = MNLookUpItem(a3 & 0x400, &v28);
  v35 = 0;
  v7 = v6;
  SmartObjStackRefBase<tagMENU>::operator=(v28);
  if ( v7 )
    goto LABEL_11;
  if ( v31 >= 0xFFFFF000 && (a3 & 0x400) == 0 )
  {
    v35 = v37;
    SmartObjStackRefBase<tagMENU>::operator=(*v36);
    v8 = v35 ? v35 : *(_DWORD *)v34[0];
    v28 = v8;
    v9 = MNLookUpItem(0, &v28);
    v35 = 0;
    v7 = v9;
    SmartObjStackRefBase<tagMENU>::operator=(v28);
    if ( v7 )
    {
LABEL_11:
      v10 = *(_DWORD **)v7;
      if ( (*(_DWORD *)(*(_DWORD *)(*(_DWORD *)v34[0] + 20) + 20) & 0x100) == 0
        || (v11 = v10[2] == 61536, v31 = 1, !v11) )
      {
        v31 = 0;
      }
      if ( (v10[1] & 0x1000) != 0 )
        *(_DWORD *)(*(_DWORD *)(*(_DWORD *)v34[0] + 20) + 20) &= ~0x400u;
      v12 = v35;
      if ( !v35 )
        v12 = *(_DWORD *)v34[0];
      v13 = MNGetPopupFromMenu(v12, &v29);
      SmartObjStackRefBase<tagPOPUPMENU>::operator=(v13);
      if ( *v33 )
      {
        v14 = MNGetpItemIndex();
        v26 = v15;
        v25 = v15;
        v16 = v14;
        v32 = v14;
        SmartObjStackRefBase<tagPOPUPMENU>::Init(*v33);
        MNDeleteAdjustIndexes(v29, v16, v25, v26);
      }
      MNFreeItem(a4);
      *(_DWORD *)(*(_DWORD *)v34[0] + 36) = 0;
      *(_DWORD *)(*(_DWORD *)v34[0] + 40) = 0;
      if ( *(_DWORD *)(*(_DWORD *)(*(_DWORD *)v34[0] + 20) + 24) == 1 )
      {
        RtlFreeHeap(*(PVOID *)(*(_DWORD *)(*(_DWORD *)v34[0] + 12) + 64), 0, *(PVOID *)(*(_DWORD *)v34[0] + 60));
        Win32FreePool(*(_DWORD *)(*(_DWORD *)v34[0] + 56));
        *(_DWORD *)(*(_DWORD *)v34[0] + 32) = 0;
        tagMENU::SharedMixedObjectPointerFieldrgItems<tagITEM>::operator=((_DWORD *)(*(_DWORD *)v34[0] + 56), 0);
      }
      else
      {
        Size = 80 * *(_DWORD *)(*(_DWORD *)(*(_DWORD *)v34[0] + 20) + 24)
             + *(_DWORD *)(*(_DWORD *)v34[0] + 56)
             - v7
             - 80;
        if ( Size )
        {
          memmove(
            *(void **)v7,
            *(const void **)(v7 + 80),
            76 * *(_DWORD *)(*(_DWORD *)(*(_DWORD *)v34[0] + 20) + 24)
          + **(_DWORD **)(*(_DWORD *)v34[0] + 56)
          - *(_DWORD *)(v7 + 80));
          memmove((void *)v7, (const void *)(v7 + 80), Size);
          v17 = (v7 - *(_DWORD *)(*(_DWORD *)v34[0] + 56)) / 80;
          if ( v17 < *(_DWORD *)(*(_DWORD *)(*(_DWORD *)v34[0] + 20) + 24) - 1 )
          {
            v18 = 80 * v17;
            v19 = 76 * v17;
            Size = 76 * v17;
            do
            {
              *(_DWORD *)(v18 + *(_DWORD *)(*(_DWORD *)v34[0] + 56)) = v19 + *(_DWORD *)(*(_DWORD *)v34[0] + 60);
              v20 = *(_DWORD *)(*(_DWORD *)(*(_DWORD *)v34[0] + 56) + v18)
                  - *(_DWORD *)(*(_DWORD *)(*(_DWORD *)v34[0] + 12) + 8);
              ++v17;
              v21 = *(_DWORD *)(*(_DWORD *)v34[0] + 56);
              v19 = Size + 76;
              Size += 76;
              *(_DWORD *)(v21 + v18 + 4) = v20;
              v18 += 80;
            }
            while ( v17 < *(_DWORD *)(*(_DWORD *)(*(_DWORD *)v34[0] + 20) + 24) - 1 );
          }
        }
        if ( (unsigned int)(*(_DWORD *)(*(_DWORD *)v34[0] + 32) - *(_DWORD *)(*(_DWORD *)(*(_DWORD *)v34[0] + 20) + 24)) >= 9 )
          MNAllocMenuItems((int)v34, 1u);
      }
      --*(_DWORD *)(*(_DWORD *)(*(_DWORD *)v34[0] + 20) + 24);
      if ( v31 && *(_DWORD *)(*(_DWORD *)v34[0] + 52) && IsWindowDesktopComposed(*(_DWORD *)(*(_DWORD *)v34[0] + 52)) )
      {
        DirtyVisRgnTrackers(*(_DWORD *)(*(_DWORD *)v34[0] + 52));
        if ( *(_DWORD *)(*(_DWORD *)v34[0] + 52) )
          v22 = **(_DWORD **)(*(_DWORD *)v34[0] + 52);
        else
          v22 = 0;
        ClassStyle = DwmGetClassStyle(*(_DWORD *)(*(_DWORD *)v34[0] + 52));
        v23 = (void *)ReferenceDwmApiPort();
        DwmAsyncChildStyleChange(v23, v22, -26, ClassStyle);
      }
      if ( *v33 )
        xxxMNUpdateShownMenu(2);
      v4 = 1;
    }
  }
  SmartObjStackRef<tagPOPUPMENU>::~SmartObjStackRef<tagPOPUPMENU>(&v33);
  SmartObjStackRefBase<tagCLS>::~SmartObjStackRefBase<tagCLS>(&v36);
  SmartObjStackRefBase<tagCLS>::~SmartObjStackRefBase<tagCLS>(v34);
  return v4;
}
