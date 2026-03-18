/*
 * XREFs of _xxxMNCanClose@4 @ 0x31A3A
 * Callers:
 *     ?xxxCommonGetTitleBarInfo@@YGXPAUtagWND@@PAUtagTITLEBARINFO@@@Z @ 0x31656 (-xxxCommonGetTitleBarInfo@@YGXPAUtagWND@@PAUtagTITLEBARINFO@@@Z.c)
 *     _xxxDrawCaptionBar@12 @ 0x8F42C (_xxxDrawCaptionBar@12.c)
 *     ?xxxDCECalcCaptionButton@@YGXPAUtagWND@@HPAG@Z @ 0x1501AD (-xxxDCECalcCaptionButton@@YGXPAUtagWND@@HPAG@Z.c)
 *     _xxxCalcCaptionButton@24 @ 0x1A52FE (_xxxCalcCaptionButton@24.c)
 * Callees:
 *     ??8?$SmartObjStackRef@UtagMENU@@@@QBE_NH@Z @ 0x2D4BC (--8-$SmartObjStackRef@UtagMENU@@@@QBE_NH@Z.c)
 *     _xxxGetSysMenuPtr@4 @ 0x31E72 (_xxxGetSysMenuPtr@4.c)
 *     _MNLookUpItem@16 @ 0x32010 (_MNLookUpItem@16.c)
 *     ??1?$SmartObjStackRefBase@UtagCLS@@@@IAE@XZ @ 0x3F9D2 (--1-$SmartObjStackRefBase@UtagCLS@@@@IAE@XZ.c)
 *     ??4?$SmartObjStackRefBase@UtagMENU@@@@IAEAAV0@QAUtagMENU@@@Z @ 0x94D5C (--4-$SmartObjStackRefBase@UtagMENU@@@@IAEAAV0@QAUtagMENU@@@Z.c)
 *     _IsThreadCrossSessionAttached@0 @ 0xEF2EA (_IsThreadCrossSessionAttached@0.c)
 */

int __thiscall xxxMNCanClose(_DWORD *this)
{
  char v1; // bl
  int v3; // esi
  int *ThreadWin32Thread; // eax
  int v5; // eax
  int SysMenuPtr; // eax
  int v7; // esi
  int v8; // esi
  PKTHREAD v9; // ebx
  int v10; // edi
  int *v11; // eax
  int v12; // esi
  PKTHREAD v13; // edi
  int v14; // esi
  int *v15; // eax
  _DWORD *v16; // eax
  int v17; // edi
  PKTHREAD v18; // ebx
  int v19; // esi
  int *v20; // eax
  int v21; // eax
  struct _KTHREAD *v22; // ebx
  int v23; // ecx
  int v24; // eax
  PKTHREAD v25; // esi
  int v26; // eax
  PKTHREAD v27; // edi
  int v28; // esi
  int *v29; // eax
  _DWORD *v30; // eax
  int v31; // ebx
  PKTHREAD v32; // edi
  int v33; // esi
  int *v34; // eax
  _DWORD *v35; // ecx
  int *v37; // [esp+Ch] [ebp-30h]
  _DWORD v38[2]; // [esp+10h] [ebp-2Ch] BYREF
  int v39; // [esp+18h] [ebp-24h] BYREF
  int v40; // [esp+1Ch] [ebp-20h] BYREF
  int v41; // [esp+20h] [ebp-1Ch]
  int *v42; // [esp+24h] [ebp-18h]
  int v43; // [esp+28h] [ebp-14h] BYREF
  int v44; // [esp+2Ch] [ebp-10h]
  PKTHREAD CurrentThread; // [esp+30h] [ebp-Ch]
  int v46; // [esp+34h] [ebp-8h]
  char v47; // [esp+3Bh] [ebp-1h]

  v1 = 0;
  CurrentThread = KeGetCurrentThread();
  v3 = 0;
  if ( !IsThreadCrossSessionAttached() )
  {
    ThreadWin32Thread = (int *)PsGetThreadWin32Thread(CurrentThread);
    if ( ThreadWin32Thread )
      v3 = *ThreadWin32Thread;
  }
  v42 = (int *)gSmartObjNullRef;
  v43 = *(_DWORD *)(v3 + 840);
  *(_DWORD *)(v3 + 840) = &v43;
  v5 = this[19];
  v44 = 0;
  if ( (*(_BYTE *)(*(_DWORD *)(v5 + 4) + 9) & 2) != 0 )
    goto LABEL_77;
  SysMenuPtr = xxxGetSysMenuPtr(this);
  v44 = 0;
  v7 = SysMenuPtr;
  if ( SysMenuPtr == *v42 )
    goto LABEL_14;
  if ( v42 != (int *)gSmartObjNullRef && !--v42[1] )
  {
    if ( *((_BYTE *)v42 + 8) )
      Win32FreeToPagedLookasideList(gpStackRefLookAside, v42);
  }
  if ( v7 )
  {
    v42 = *(int **)(v7 + 104);
    ++v42[1];
  }
  else
  {
    v42 = (int *)gSmartObjNullRef;
  }
  if ( !v44 )
  {
LABEL_14:
    if ( !*v42 )
      goto LABEL_31;
  }
  v8 = *v42;
  v9 = KeGetCurrentThread();
  v10 = 0;
  if ( !IsThreadCrossSessionAttached() )
  {
    v11 = (int *)PsGetThreadWin32Thread(v9);
    if ( v11 )
      v10 = *v11;
  }
  v37 = (int *)gSmartObjNullRef;
  if ( v8 )
  {
    v37 = *(int **)(v8 + 104);
    ++v37[1];
  }
  v38[0] = *(_DWORD *)(v10 + 840);
  *(_DWORD *)(v10 + 840) = v38;
  v38[1] = v44;
  v12 = *v37;
  if ( *v37 != *v42 )
  {
    if ( v42 != (int *)gSmartObjNullRef && !--v42[1] )
    {
      if ( *((_BYTE *)v42 + 8) )
        Win32FreeToPagedLookasideList(gpStackRefLookAside, v42);
    }
    if ( v12 )
    {
      v42 = *(int **)(v12 + 104);
      ++v42[1];
    }
    else
    {
      v42 = (int *)gSmartObjNullRef;
    }
  }
  if ( !v44 && !*v42 )
  {
    v1 = 1;
LABEL_31:
    v47 = 1;
    goto LABEL_32;
  }
  v47 = 0;
  v1 = 1;
LABEL_32:
  if ( (v1 & 1) != 0 )
  {
    v13 = KeGetCurrentThread();
    v14 = 0;
    if ( !IsThreadCrossSessionAttached() )
    {
      v15 = (int *)PsGetThreadWin32Thread(v13);
      if ( v15 )
        v14 = *v15;
    }
    if ( v37 != (int *)gSmartObjNullRef && !--v37[1] )
    {
      if ( *((_BYTE *)v37 + 8) )
        Win32FreeToPagedLookasideList(gpStackRefLookAside, v37);
    }
    v16 = *(_DWORD **)(v14 + 840);
    if ( v16 )
      *(_DWORD *)(v14 + 840) = *v16;
  }
  if ( v47 )
    goto LABEL_77;
  v17 = v44;
  if ( !v44 )
    v17 = *v42;
  CurrentThread = 0;
  v18 = KeGetCurrentThread();
  v19 = 0;
  if ( !IsThreadCrossSessionAttached() )
  {
    v20 = (int *)PsGetThreadWin32Thread(v18);
    if ( v20 )
      v19 = *v20;
  }
  v39 = gSmartObjNullRef;
  v40 = *(_DWORD *)(v19 + 840);
  *(_DWORD *)(v19 + 840) = &v40;
  v41 = 0;
  if ( v17 && (v21 = *(_DWORD *)(*(_DWORD *)(v17 + 20) + 24)) != 0 )
  {
    v22 = *(struct _KTHREAD **)(v17 + 56);
    v23 = 0;
    v46 = 0;
    if ( v21 > 0 )
    {
      do
      {
        v24 = *(_DWORD *)(*(_DWORD *)v22 + 8);
        if ( *((_DWORD *)v22 + 2) )
        {
          if ( v24 == 61536 )
          {
            v41 = 0;
            SmartObjStackRefBase<tagMENU>::operator=(v17);
            CurrentThread = v22;
          }
          v25 = (PKTHREAD)MNLookUpItem(0, 0);
          if ( v25 )
            goto LABEL_72;
          v23 = v46;
        }
        else if ( v24 == 61536 )
        {
          v25 = v22;
          goto LABEL_72;
        }
        v26 = *(_DWORD *)(v17 + 20);
        ++v23;
        v22 = (struct _KTHREAD *)((char *)v22 + 80);
        v46 = v23;
      }
      while ( v23 < *(_DWORD *)(v26 + 24) );
    }
    if ( !SmartObjStackRef<tagMENU>::operator==(&v39, v23) )
    {
      v25 = CurrentThread;
      goto LABEL_72;
    }
    v27 = KeGetCurrentThread();
    v28 = 0;
    if ( !IsThreadCrossSessionAttached() )
    {
      v29 = (int *)PsGetThreadWin32Thread(v27);
      if ( v29 )
        v28 = *v29;
    }
    if ( v39 != gSmartObjNullRef && !--*(_DWORD *)(v39 + 4) )
    {
      if ( *(_BYTE *)(v39 + 8) )
        Win32FreeToPagedLookasideList(gpStackRefLookAside, v39);
    }
    v30 = *(_DWORD **)(v28 + 840);
    if ( v30 )
      *(_DWORD *)(v28 + 840) = *v30;
  }
  else
  {
    v25 = 0;
LABEL_72:
    SmartObjStackRefBase<tagCLS>::~SmartObjStackRefBase<tagCLS>(&v39);
    if ( v25 )
      goto LABEL_75;
  }
  v25 = (PKTHREAD)MNLookUpItem(0, 0);
  if ( !v25 )
  {
    v25 = (PKTHREAD)MNLookUpItem(0, 0);
    if ( !v25 )
      goto LABEL_77;
  }
LABEL_75:
  if ( (*(_BYTE *)(*(_DWORD *)v25 + 4) & 3) != 0 )
  {
LABEL_77:
    v31 = 0;
    goto LABEL_78;
  }
  v31 = 1;
LABEL_78:
  v32 = KeGetCurrentThread();
  v33 = 0;
  if ( !IsThreadCrossSessionAttached() )
  {
    v34 = (int *)PsGetThreadWin32Thread(v32);
    if ( v34 )
      v33 = *v34;
  }
  if ( v42 != (int *)gSmartObjNullRef && !--v42[1] )
  {
    if ( *((_BYTE *)v42 + 8) )
      Win32FreeToPagedLookasideList(gpStackRefLookAside, v42);
  }
  v35 = *(_DWORD **)(v33 + 840);
  if ( v35 )
    *(_DWORD *)(v33 + 840) = *v35;
  return v31;
}
