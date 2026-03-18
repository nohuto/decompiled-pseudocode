/*
 * XREFs of xxEngNineGrid @ 0x504A8
 * Callers:
 *     sub_50481 @ 0x50481 (sub_50481.c)
 * Callees:
 *     ?bWrapped@ERECTL@@QBEHXZ @ 0x33892 (-bWrapped@ERECTL@@QBEHXZ.c)
 *     ??XERECTL@@QAEAAV0@ABU_RECTL@@@Z @ 0x4F46A (--XERECTL@@QAEAAV0@ABU_RECTL@@@Z.c)
 *     RenderNineGrid @ 0x50852 (RenderNineGrid.c)
 *     @__security_check_cookie@4 @ 0xED840 (@__security_check_cookie@4.c)
 */

int __fastcall xxEngNineGrid(int a1, int a2, int a3, int a4, int *a5, _DWORD *a6, _BYTE *a7, int a8)
{
  int v8; // esi
  int v9; // ebx
  int v10; // eax
  int v11; // edx
  int v12; // edi
  int v13; // ecx
  int v14; // edi
  int v15; // ebx
  int v16; // esi
  BOOL v17; // eax
  char v18; // dl
  char v19; // al
  ULONG ClearBits; // eax
  ULONG v21; // ebx
  struct _SURFOBJ **v22; // edi
  _DWORD *v23; // eax
  int v24; // esi
  struct _SURFOBJ **v25; // eax
  int v26; // esi
  int v27; // ecx
  int v28; // edx
  unsigned __int8 v29; // bl
  int v30; // edi
  int v31; // ecx
  int v32; // eax
  int v33; // eax
  _DWORD v35[6]; // [esp+10h] [ebp-90h] BYREF
  ULONG v36; // [esp+28h] [ebp-78h]
  int v37; // [esp+2Ch] [ebp-74h]
  int v38; // [esp+30h] [ebp-70h]
  int v39; // [esp+34h] [ebp-6Ch]
  _BYTE *v40; // [esp+38h] [ebp-68h]
  int v41; // [esp+3Ch] [ebp-64h]
  int v42; // [esp+40h] [ebp-60h] BYREF
  char v43; // [esp+44h] [ebp-5Ch]
  int v44; // [esp+48h] [ebp-58h]
  int v45; // [esp+4Ch] [ebp-54h]
  int v46; // [esp+50h] [ebp-50h]
  int v47; // [esp+54h] [ebp-4Ch]
  int v48; // [esp+58h] [ebp-48h]
  _DWORD *v49; // [esp+5Ch] [ebp-44h]
  struct _SURFOBJ **v50; // [esp+60h] [ebp-40h]
  int v51; // [esp+64h] [ebp-3Ch]
  unsigned __int8 v52; // [esp+6Bh] [ebp-35h]
  _DWORD v53[4]; // [esp+6Ch] [ebp-34h] BYREF
  int v54; // [esp+7Ch] [ebp-24h] BYREF
  int v55; // [esp+80h] [ebp-20h]
  int v56; // [esp+84h] [ebp-1Ch]
  int v57; // [esp+88h] [ebp-18h]
  int v58; // [esp+8Ch] [ebp-14h] BYREF
  int v59; // [esp+90h] [ebp-10h]
  int v60; // [esp+94h] [ebp-Ch]
  int v61; // [esp+98h] [ebp-8h]

  v48 = a3;
  v39 = a4;
  v49 = a6;
  v47 = a1;
  v41 = a8;
  v38 = a2;
  v8 = *a5;
  v9 = a5[3];
  v51 = a5[1];
  v55 = v51;
  v10 = a5[2];
  v46 = a2 != 0 ? a2 - 16 : 0;
  v11 = v10;
  v54 = v8;
  v56 = v10;
  v57 = v9;
  v40 = a7;
  if ( v8 <= v10 )
  {
    v52 = 0;
  }
  else
  {
    v11 = v8;
    v52 = 1;
    v8 = v10;
    v56 = v11;
    v54 = v10;
  }
  if ( (*a7 & 0x20) != 0 )
  {
    v12 = v49[2] - *v49;
    v13 = v49[3] - v49[1];
    if ( v11 - v8 > v12 )
    {
      if ( v52 )
        v54 = v11 - v12;
      else
        v56 = v12 + v8;
    }
    if ( v9 - v51 > v13 )
    {
      if ( v52 )
        v55 = v9 - v13;
      else
        v57 = v51 + v13;
    }
  }
  v58 = v54;
  v59 = v55;
  v60 = v56;
  v61 = v57;
  if ( v48 && *(_BYTE *)(v48 + 20) )
    ERECTL::operator*=(&v58, (int *)(v48 + 4));
  v14 = v58;
  v15 = v61;
  v16 = v59;
  v51 = v60;
  v17 = ERECTL::bWrapped((ERECTL *)&v58);
  v19 = !v17 ? v18 : 0;
  if ( v14 != v51 && v16 != v15 && v19 )
  {
    v45 = v15 - v16;
    v51 -= v14;
    v42 = 0;
    v43 = 0;
    v44 = 0;
    v50 = 0;
    KeEnterCriticalRegion();
    ExAcquirePushLockExclusiveEx(&nineGridPushLock, 0);
    ClearBits = RtlFindClearBits(&apsoNineGridBitmapHeader, 1u, 0);
    v21 = ClearBits;
    v36 = ClearBits;
    if ( ClearBits == -1 || (v22 = (&apsoNineGrid)[ClearBits], (v50 = v22) == 0) )
    {
      memset(v35, 0, sizeof(v35));
      v23 = *(_DWORD **)(v46 + 88);
      if ( v23
        && (v35[0] = *(_DWORD *)(v46 + 60),
            v35[5] = 0,
            v35[1] = 256,
            v35[2] = 64,
            v35[4] = *v23,
            SURFMEM::bCreateDIB((SURFMEM *)&v42, (struct _DEVBITMAPINFO *)v35, 0, 0, 0, 0, 0, 0, 1, 0, 0)) )
      {
        v24 = v42;
        if ( v21 != -1 )
        {
          v25 = (struct _SURFOBJ **)EngLockSurface(*(HSURF *)(v42 + 20));
          v43 |= 1u;
          (&apsoNineGrid)[v21] = v25;
          HmgSetOwner(*(_DWORD *)(v42 + 20), 0, 5);
          *(_DWORD *)(v42 + 56) = 0;
        }
        if ( v24 )
          v22 = (struct _SURFOBJ **)(v24 + 16);
        else
          v22 = 0;
        v50 = v22;
      }
      else
      {
        v22 = v50;
      }
    }
    if ( v21 != -1 )
      RtlSetBits(&apsoNineGridBitmapHeader, v21, 1u);
    ExReleasePushLockExclusiveEx(&nineGridPushLock, 0);
    KeLeaveCriticalRegion();
    if ( v22 )
    {
      if ( v51 > 256 || v45 > 64 )
      {
        v26 = v59;
        v27 = v61;
        if ( v59 < v61 )
        {
          v28 = v60;
          v29 = v52;
          do
          {
            v37 = v26 + 64;
            v51 = v26 + 64;
            if ( v26 + 64 > v27 || v26 + 64 < v26 )
              v51 = v27;
            v30 = v58;
            if ( v58 < v28 )
            {
              v45 = v29;
              do
              {
                v46 = v30 + 256;
                v31 = v30 + 256;
                if ( v30 + 256 > v28 || v30 + 256 < v30 )
                  v31 = v28;
                v53[3] = v51;
                v53[2] = v31;
                v53[0] = v30;
                v53[1] = v26;
                RenderNineGrid(v50, v48, v53, v39, &v54, v49, v40, v41, v45);
                v28 = v60;
                v32 = v30;
                v30 = v46;
              }
              while ( v46 >= v32 && v46 < v60 );
              v27 = v61;
            }
            v33 = v26;
            v26 = v37;
          }
          while ( v37 >= v33 && v37 < v27 );
          v21 = v36;
        }
      }
      else
      {
        RenderNineGrid(v22, v48, &v58, v39, &v54, v49, v40, v41, v52);
      }
    }
    KeEnterCriticalRegion();
    ExAcquirePushLockExclusiveEx(&nineGridPushLock, 0);
    if ( v21 != -1 )
      RtlClearBits(&apsoNineGridBitmapHeader, v21, 1u);
    ExReleasePushLockExclusiveEx(&nineGridPushLock, 0);
    KeLeaveCriticalRegion();
    SURFMEM::~SURFMEM((SURFMEM *)&v42);
  }
  return 1;
}
