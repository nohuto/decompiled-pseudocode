/*
 * XREFs of ?SetLPITEMInfoNoRedraw@@YGHABV?$SmartObjStackRef@UtagMENU@@@@PAUtagITEM@@PAUtagMENUITEMINFOW@@PAU_UNICODE_STRING@@PAH@Z @ 0x1E646
 * Callers:
 *     _xxxSetMenuItemInfo@20 @ 0x1DCEA (_xxxSetMenuItemInfo@20.c)
 *     _xxxInsertMenuItem@20 @ 0x42D14 (_xxxInsertMenuItem@20.c)
 * Callees:
 *     ??8?$SmartObjStackRef@UtagMENU@@@@QBE_NABV0@@Z @ 0x1C032 (--8-$SmartObjStackRef@UtagMENU@@@@QBE_NABV0@@Z.c)
 *     ?GetMenuDepth@@YGIABV?$SmartObjStackRef@UtagMENU@@@@I@Z @ 0x1C058 (-GetMenuDepth@@YGIABV-$SmartObjStackRef@UtagMENU@@@@I@Z.c)
 *     ?GetMenuAncestors@@YGIABV?$SmartObjStackRef@UtagMENU@@@@@Z @ 0x1C0D8 (-GetMenuAncestors@@YGIABV-$SmartObjStackRef@UtagMENU@@@@@Z.c)
 *     ?RemoveParentMenu@@YGXABV?$SmartObjStackRef@UtagMENU@@@@PAUtagITEM@@@Z @ 0x1CE5E (-RemoveParentMenu@@YGXABV-$SmartObjStackRef@UtagMENU@@@@PAUtagITEM@@@Z.c)
 *     __DestroyMenu@4 @ 0x1E38A (__DestroyMenu@4.c)
 *     _MNIsUAHMenu@4 @ 0x1E9CA (_MNIsUAHMenu@4.c)
 *     ??4?$SharedPointerFieldlpstr@G@tagITEM@@QAEPAGPAG@Z @ 0x1E9E6 (--4-$SharedPointerFieldlpstr@G@tagITEM@@QAEPAGPAG@Z.c)
 *     ?UnlockSubMenu@@YGPAUtagMENU@@ABV?$SmartObjStackRef@UtagMENU@@@@PAUtagITEM@@@Z @ 0x1EA7C (-UnlockSubMenu@@YGPAUtagMENU@@ABV-$SmartObjStackRef@UtagMENU@@@@PAUtagITEM@@@Z.c)
 *     ?FreeItemString@@YGXABV?$SmartObjStackRef@UtagMENU@@@@PAUtagITEM@@@Z @ 0x1EAA0 (-FreeItemString@@YGXABV-$SmartObjStackRef@UtagMENU@@@@PAUtagITEM@@@Z.c)
 *     _DesktopAlloc@12 @ 0x1EAD0 (_DesktopAlloc@12.c)
 *     ??8?$SmartObjStackRef@UtagMENU@@@@QBE_NH@Z @ 0x2D4BC (--8-$SmartObjStackRef@UtagMENU@@@@QBE_NH@Z.c)
 *     ??0?$SmartObjStackRef@UtagMENU@@@@QAE@XZ @ 0x3EE60 (--0-$SmartObjStackRef@UtagMENU@@@@QAE@XZ.c)
 *     ??1?$SmartObjStackRefBase@UtagCLS@@@@IAE@XZ @ 0x3F9D2 (--1-$SmartObjStackRefBase@UtagCLS@@@@IAE@XZ.c)
 *     _UserSetLastError@4 @ 0x81122 (_UserSetLastError@4.c)
 *     ??B?$SmartObjStackRef@UtagMENU@@@@QBE_NXZ @ 0x8F1E2 (--B-$SmartObjStackRef@UtagMENU@@@@QBE_NXZ.c)
 *     ??4?$SmartObjStackRefBase@UtagMENU@@@@IAEAAV0@QAUtagMENU@@@Z @ 0x94D5C (--4-$SmartObjStackRefBase@UtagMENU@@@@IAEAAV0@QAUtagMENU@@@Z.c)
 *     ?InternalCreateMenu@@YGPAUtagMENU@@H@Z @ 0xA713E (-InternalCreateMenu@@YGPAUtagMENU@@H@Z.c)
 *     ??0?$SmartObjStackRef@UtagMENU@@@@QAE@H@Z @ 0xF17DA (--0-$SmartObjStackRef@UtagMENU@@@@QAE@H@Z.c)
 *     __SEH_prolog4 @ 0xF9120 (__SEH_prolog4.c)
 *     _memcpy @ 0xF929B (_memcpy.c)
 */

int __fastcall SetLPITEMInfoNoRedraw(int **a1, int a2, char *a3, unsigned __int16 *a4, _DWORD *a5)
{
  int *v7; // ecx
  int v9; // eax
  int v10; // ecx
  int v11; // eax
  void *v12; // edx
  int v13; // eax
  _DWORD *v14; // eax
  int v16; // ecx
  unsigned int v17; // ecx
  int v18; // eax
  int *v19; // esi
  int v20; // ecx
  _DWORD *v21; // ecx
  int v22; // eax
  int v23; // ecx
  int v24; // edx
  int MenuDepth; // esi
  _DWORD *v26; // ecx
  int *v27; // eax
  struct tagMENU *Menu; // eax
  int v29; // eax
  int v30; // [esp+0h] [ebp-50h]
  _BYTE v31[12]; // [esp+10h] [ebp-40h] BYREF
  _DWORD v32[2]; // [esp+1Ch] [ebp-34h] BYREF
  int v33; // [esp+24h] [ebp-2Ch]
  int **v34; // [esp+2Ch] [ebp-24h]
  PVOID BaseAddress; // [esp+30h] [ebp-20h]
  int v36; // [esp+34h] [ebp-1Ch]
  CPPEH_RECORD ms_exc; // [esp+38h] [ebp-18h]
  void *v38; // [esp+58h] [ebp+8h]
  int v39; // [esp+58h] [ebp+8h]
  int v40; // [esp+5Ch] [ebp+Ch]
  int v41; // [esp+5Ch] [ebp+Ch]

  v34 = a1;
  BaseAddress = 0;
  v36 = 0;
  *a5 = 0;
  v7 = a1[2];
  if ( !v7 )
    v7 = (int *)**a1;
  if ( MNIsUAHMenu(v7) )
    *(_DWORD *)(*(_DWORD *)a2 + 68) = -1;
  v9 = *((_DWORD *)a3 + 1);
  if ( (v9 & 0x100) != 0 )
  {
    **(_DWORD **)a2 &= 0xFFFC949B;
    **(_DWORD **)a2 |= *((_DWORD *)a3 + 2);
    v10 = *((_DWORD *)a3 + 2);
    if ( (v10 & 0x800) != 0 )
    {
      *(_DWORD *)(*(_DWORD *)a2 + 4) |= 3u;
      v10 = *((_DWORD *)a3 + 2);
    }
    BaseAddress = (PVOID)1;
    v36 = v10 & 0x100;
    v9 = *((_DWORD *)a3 + 1);
  }
  if ( (v9 & 0x40) != 0 )
  {
    v11 = 0;
    if ( *((_DWORD *)a4 + 1) )
    {
      v12 = (void *)DesktopAlloc(*(_DWORD *)(**a1 + 12), *a4 + 2, 8);
      v38 = v12;
      BaseAddress = v12;
      if ( !v12 )
        return 0;
      ms_exc.registration.TryLevel = 0;
      memcpy(v12, *((const void **)a4 + 1), *a4);
      ms_exc.registration.TryLevel = -2;
      v11 = *a4 >> 1;
    }
    else
    {
      v38 = 0;
    }
    v40 = v11;
    FreeItemString(a1, a2);
    *(_DWORD *)(*(_DWORD *)a2 + 28) = v40;
    tagITEM::SharedPointerFieldlpstr<unsigned short>::operator=(v38);
    ++*(_QWORD *)(a2 + 72);
    BaseAddress = (PVOID)1;
    v36 = 1;
  }
  if ( a3[4] < 0 )
  {
    *(_DWORD *)(*(_DWORD *)a2 + 64) = 0;
    *(_DWORD *)(*(_DWORD *)a2 + 64) = *((_DWORD *)a3 + 11);
    BaseAddress = (PVOID)1;
    v36 = 1;
    *(_DWORD *)(*(_DWORD *)a2 + 68) = -1;
    v16 = *(_DWORD *)(*(_DWORD *)a2 + 4);
    if ( (unsigned int)(*(_DWORD *)(*(_DWORD *)a2 + 64) - 1) > 0xA )
      v17 = v16 & 0xDFFFFFFF;
    else
      v17 = v16 | 0x20000000;
    *(_DWORD *)(*(_DWORD *)a2 + 4) = v17;
  }
  v13 = *((_DWORD *)a3 + 1);
  if ( (v13 & 2) != 0 )
  {
    *(_DWORD *)(*(_DWORD *)a2 + 8) = *((_DWORD *)a3 + 4);
    v13 = *((_DWORD *)a3 + 1);
  }
  if ( (v13 & 0x20) != 0 )
  {
    *(_DWORD *)(*(_DWORD *)a2 + 32) = *((_DWORD *)a3 + 8);
    v13 = *((_DWORD *)a3 + 1);
  }
  if ( (v13 & 1) != 0 )
  {
    *(_DWORD *)(*(_DWORD *)a2 + 4) &= 0xFFFFFFF4;
    *(_DWORD *)(*(_DWORD *)a2 + 4) |= *((_DWORD *)a3 + 3);
    if ( (**(_DWORD **)a2 & 0x800) != 0 )
      *(_DWORD *)(*(_DWORD *)a2 + 4) |= 3u;
    if ( (*((_DWORD *)a3 + 3) & 0x1000) != 0 )
    {
      if ( (*(_DWORD *)(*(_DWORD *)(**a1 + 20) + 20) & 0x400) != 0 )
      {
        UserSetLastError(87);
        return 0;
      }
      *(_DWORD *)(*(_DWORD *)(**a1 + 20) + 20) |= 0x400u;
    }
    BaseAddress = (PVOID)1;
    v36 = 1;
    v13 = *((_DWORD *)a3 + 1);
  }
  if ( (v13 & 8) != 0 )
  {
    *(_DWORD *)(*(_DWORD *)a2 + 16) = *((_DWORD *)a3 + 6);
    *(_DWORD *)(*(_DWORD *)a2 + 20) = *((_DWORD *)a3 + 7);
    v36 = 1;
    v13 = *((_DWORD *)a3 + 1);
  }
  if ( (v13 & 4) == 0 )
    goto LABEL_23;
  SmartObjStackRef<tagMENU>::SmartObjStackRef<tagMENU>(0);
  if ( *((_DWORD *)a3 + 5) )
  {
    v18 = ValidateHmenu(*((_DWORD *)a3 + 5));
    v33 = 0;
    SmartObjStackRefBase<tagMENU>::operator=(v18);
  }
  v19 = (int *)(a2 + 8);
  v39 = a2 + 8;
  v20 = *(_DWORD *)(a2 + 8);
  if ( v20 != *(_DWORD *)v32[0] )
  {
    if ( *v19 )
    {
      SmartObjStackRef<tagMENU>::SmartObjStackRef<tagMENU>(v31);
      RemoveParentMenu(a1, a2);
      _DestroyMenu(*v19);
      SmartObjStackRefBase<tagCLS>::~SmartObjStackRefBase<tagCLS>(v31);
    }
    if ( (unsigned __int8)SmartObjStackRef<tagMENU>::operator==(v20) )
    {
      UnlockSubMenu(a1, a2);
LABEL_53:
      v36 = 1;
      goto LABEL_54;
    }
    v41 = 0;
    if ( SmartObjStackRef<tagMENU>::operator==(v21, (int)a1) )
    {
      Menu = InternalCreateMenu(v30);
      v33 = 0;
      SmartObjStackRefBase<tagMENU>::operator=(Menu);
      if ( !(unsigned __int8)SmartObjStackRef<tagMENU>::operator bool(v32) )
      {
LABEL_59:
        SmartObjStackRefBase<tagCLS>::~SmartObjStackRefBase<tagCLS>(v32);
        return 0;
      }
      v41 = 1;
    }
    v22 = v33;
    if ( !v33 )
      v22 = *(_DWORD *)v32[0];
    v23 = *(_DWORD *)a2;
    if ( v22 )
      v24 = *(_DWORD *)(v22 + 24);
    else
      v24 = 0;
    *(_DWORD *)(v23 + 12) = v24;
    HMAssignmentLock(v23, v24);
    *(_DWORD *)(*(_DWORD *)(*v19 + 20) + 20) |= 1u;
    MenuDepth = GetMenuDepth((int)v32, 25);
    if ( GetMenuAncestors(a1) + MenuDepth < 0x19 )
    {
      v26 = (_DWORD *)Win32AllocPool(8, 1953066325);
      if ( v26 )
      {
        v27 = a1[2];
        if ( !v27 )
          v27 = (int *)**a1;
        v26[1] = v27;
        *v26 = *(_DWORD *)(*(_DWORD *)v32[0] + 64);
        *(_DWORD *)(*(_DWORD *)v32[0] + 64) = v26;
        goto LABEL_53;
      }
    }
    *(_DWORD *)(*(_DWORD *)(*(_DWORD *)v39 + 20) + 20) &= ~1u;
    *(_DWORD *)(*(_DWORD *)a2 + 12) = 0;
    HMAssignmentUnlock(v39);
    if ( v41 )
    {
      v29 = v33;
      if ( !v33 )
        v29 = *(_DWORD *)v32[0];
      _DestroyMenu(v29);
    }
    goto LABEL_59;
  }
LABEL_54:
  SmartObjStackRefBase<tagCLS>::~SmartObjStackRefBase<tagCLS>(v32);
LABEL_23:
  v14 = *(_DWORD **)a2;
  if ( (**(_DWORD **)a2 & 0x900) == 0 && !*(_DWORD *)(a2 + 12) && !v14[16] )
  {
    *v14 = 2048;
    *(_DWORD *)(*(_DWORD *)a2 + 4) |= 3u;
  }
  if ( BaseAddress )
  {
    *(_DWORD *)(*(_DWORD *)a2 + 52) = 0;
    *(_DWORD *)(*(_DWORD *)a2 + 56) = 0x7FFFFFFF;
    *(_DWORD *)(*(_DWORD *)a2 + 60) = 0;
    *(_DWORD *)(**a1 + 36) = 0;
    *(_DWORD *)(**a1 + 40) = 0;
    if ( v36 )
      *a5 = 1;
  }
  return 1;
}
