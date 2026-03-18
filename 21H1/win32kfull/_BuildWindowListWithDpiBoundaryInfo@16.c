/*
 * XREFs of _BuildWindowListWithDpiBoundaryInfo@16 @ 0x2AC94
 * Callers:
 *     _UpdateMonitorForWindowAndChildren@16 @ 0x2A86E (_UpdateMonitorForWindowAndChildren@16.c)
 *     ?xxxSetParentWorker@@YGPAUtagWND@@PAU1@00H@Z @ 0xC70E0 (-xxxSetParentWorker@@YGPAUtagWND@@PAU1@00H@Z.c)
 * Callees:
 *     _IsDpiBoundaryBetweenWindows@8 @ 0x2B03C (_IsDpiBoundaryBetweenWindows@8.c)
 *     _FreeHwndList@4 @ 0x2D2D0 (_FreeHwndList@4.c)
 *     _BuildHwndList@12 @ 0x2D340 (_BuildHwndList@12.c)
 *     __IsTopLevelWindow@4 @ 0x38178 (__IsTopLevelWindow@4.c)
 *     @HMValidateHandleNoSecure@8 @ 0x3C46E (@HMValidateHandleNoSecure@8.c)
 *     _LogicalToPhysicalInPlaceRectWithSubpixel@12 @ 0x9B5AE (_LogicalToPhysicalInPlaceRectWithSubpixel@12.c)
 *     _PhysicalToLogicalInPlaceRectWithSubpixel@12 @ 0x9B600 (_PhysicalToLogicalInPlaceRectWithSubpixel@12.c)
 */

int __fastcall BuildWindowListWithDpiBoundaryInfo(_DWORD *a1, unsigned int a2, int a3, int *a4)
{
  int v5; // ebx
  int v6; // esi
  int v7; // ecx
  int v8; // eax
  int v9; // eax
  _DWORD *v10; // esi
  int v11; // edi
  unsigned int v12; // edi
  int v13; // ecx
  int v14; // eax
  int v15; // edi
  int v16; // eax
  BOOL v17; // eax
  _DWORD *v19; // ecx
  int *v20; // eax
  unsigned int v21; // edx
  int v22; // eax
  int *v23; // esi
  int v24; // eax
  _DWORD *v25; // ecx
  int v26; // [esp+Ch] [ebp-4Ch]
  int v27; // [esp+10h] [ebp-48h]
  int v28; // [esp+1Ch] [ebp-3Ch] BYREF
  int v29; // [esp+20h] [ebp-38h]
  int v30; // [esp+24h] [ebp-34h]
  int v31; // [esp+28h] [ebp-30h]
  _DWORD *v32; // [esp+2Ch] [ebp-2Ch]
  int (__stdcall *v33)(int, int); // [esp+30h] [ebp-28h]
  int v34; // [esp+34h] [ebp-24h]
  int v35; // [esp+38h] [ebp-20h]
  int v36; // [esp+3Ch] [ebp-1Ch]
  int v37; // [esp+40h] [ebp-18h] BYREF
  _DWORD *v38; // [esp+44h] [ebp-14h]
  int v39; // [esp+48h] [ebp-10h]
  _DWORD *v40; // [esp+4Ch] [ebp-Ch]
  int *v41; // [esp+50h] [ebp-8h]
  unsigned int v42; // [esp+54h] [ebp-4h]
  int v43; // [esp+60h] [ebp+8h]
  unsigned int v44; // [esp+60h] [ebp+8h]
  unsigned int v45; // [esp+60h] [ebp+8h]

  v42 = a2;
  v5 = 0;
  v40 = a1;
  v37 = 0;
  v41 = &v37;
  v6 = 0;
  v7 = a3;
  v35 = 0;
  v34 = 0;
  v36 = a3;
  if ( a3 || (v7 = BuildHwndList(a1, 1, 0), v34 = 1, (v36 = v7) != 0) )
  {
    v38 = (_DWORD *)(v7 + 16);
    v8 = *(_DWORD *)(v7 + 16);
    if ( v8 != 1 )
    {
      v33 = Win32AllocPool;
      do
      {
        LOBYTE(a2) = 1;
        v9 = HMValidateHandleNoSecure(v8, a2);
        v10 = (_DWORD *)v9;
        v39 = v9;
        if ( v9 )
        {
          v11 = *(_DWORD *)(v9 + 56);
          if ( v11 )
          {
            if ( v42 && !_IsTopLevelWindow(v9) )
            {
              v12 = *(_DWORD *)(*(_DWORD *)(v11 + 20) + 184);
              a2 = *(_DWORD *)(v10[5] + 184);
              v13 = (a2 >> 8) & 0x1FF;
              if ( (_WORD)v13 != ((v12 >> 8) & 0x1FF) )
                goto LABEL_36;
              if ( (a2 & 0xF) != 2 || (v43 = 1, (a2 & 0x20000000) == 0) )
                v43 = 0;
              v14 = (v12 & 0xF) == 2 && (v12 & 0x20000000) != 0;
              if ( v43 == v14 )
                v15 = 0;
              else
LABEL_36:
                v15 = 1;
              if ( v10 == v40 )
              {
                v44 = *(_DWORD *)(*(_DWORD *)(v42 + 20) + 184);
                v17 = 1;
                if ( (_WORD)v13 == ((v44 >> 8) & 0x1FF) )
                {
                  a2 = (a2 & 0xF) == 2 && (a2 & 0x20000000) != 0;
                  v16 = (v44 & 0xF) == 2 && (v44 & 0x20000000) != 0;
                  if ( a2 == v16 )
                    v17 = 0;
                }
                v15 |= v17;
              }
              if ( v15 )
              {
                v19 = (_DWORD *)v33(24, 1819767637);
                v32 = v19;
                if ( v19 )
                {
                  v20 = v41;
                  v41 = v19;
                  *v20 = (int)v19;
                  *v19 = 0;
                  v19[1] = *v10;
                  if ( v10 == v40 )
                  {
                    v21 = v42;
                    v22 = 1;
                    v35 = 1;
                  }
                  else
                  {
                    v21 = v10[14];
                    v22 = 0;
                  }
                  v19[5] = v22;
                  v23 = (int *)(*(_DWORD *)(v21 + 20) + 68);
                  v45 = v21;
                  v28 = *v23++;
                  v29 = *v23++;
                  v30 = *v23;
                  v31 = v23[1];
                  v26 = *(_DWORD *)(*(_DWORD *)(v39 + 20) + 52);
                  v27 = *(_DWORD *)(*(_DWORD *)(v39 + 20) + 56);
                  if ( IsDpiBoundaryBetweenWindows(v39) )
                  {
                    LogicalToPhysicalInPlaceRectWithSubpixel(v45, &v28, 0);
                    PhysicalToLogicalInPlaceRectWithSubpixel(v39, &v28, 0);
                    v24 = 1;
                  }
                  else
                  {
                    v24 = 0;
                  }
                  v25 = v32;
                  v32[4] = v24;
                  v25[2] = v26 - v28;
                  v25[3] = v27 - v29;
                }
              }
            }
          }
        }
        v8 = *++v38;
      }
      while ( *v38 != 1 );
      v5 = v37;
      v7 = v36;
      v6 = v35;
    }
    if ( v34 )
      FreeHwndList(v7);
  }
  if ( a4 )
    *a4 = v6;
  return v5;
}
