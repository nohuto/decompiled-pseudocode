/*
 * XREFs of ?CheckAndNotifyDualView@@YA?AW4_DUALVIEW_STATE@@PEAU_UNICODE_STRING@@PEAU_MDEV@@@Z @ 0x1C00AE328
 * Callers:
 *     ?DrvChangeDisplaySettingsInternal@@YAJPEAUtagGRAPHICS_DEVICE@@PEAU_devicemodeW@@PEAUD3DKMT_GETPATHSMODALITY@@PEAXHHPEAU_MDEV@@PEAPEAU4@KHHHU_CDS_INTERNAL_FLAGS@@@Z @ 0x1C00AF6FC (-DrvChangeDisplaySettingsInternal@@YAJPEAUtagGRAPHICS_DEVICE@@PEAU_devicemodeW@@PEAUD3DKMT_GETPA.c)
 * Callees:
 *     ?DrvUpdateAttachFlag@@YAXPEAUtagGRAPHICS_DEVICE@@K@Z @ 0x1C004D734 (-DrvUpdateAttachFlag@@YAXPEAUtagGRAPHICS_DEVICE@@K@Z.c)
 *     DrvGetDeviceFromName @ 0x1C006A270 (DrvGetDeviceFromName.c)
 *     Win32FreePool @ 0x1C008C9A0 (Win32FreePool.c)
 *     PALLOCMEM2 @ 0x1C008D744 (PALLOCMEM2.c)
 *     ?GetPrimaryAttachFlags@@YAHPEAUtagGRAPHICS_DEVICE@@GPEAK1@Z @ 0x1C00AF4CC (-GetPrimaryAttachFlags@@YAHPEAUtagGRAPHICS_DEVICE@@GPEAK1@Z.c)
 */

__int64 __fastcall CheckAndNotifyDualView(const UNICODE_STRING *a1, __int64 a2)
{
  wchar_t *v2; // r8
  int v5; // ecx
  int v6; // r12d
  int v7; // r13d
  int v8; // ebx
  bool v9; // zf
  int v10; // eax
  __int64 v11; // rdx
  __int64 v12; // r8
  __int64 v13; // rsi
  wchar_t *i; // rdi
  unsigned int v15; // ebp
  unsigned __int16 v16; // ax
  unsigned int v17; // eax
  __int64 *v18; // rcx
  __int64 v19; // r9
  __int64 v20; // rax
  BOOL v21; // eax
  __int64 v22; // rcx
  unsigned int v23; // ebx
  _DWORD *v24; // rcx
  int v26; // eax
  unsigned int v27; // eax
  wchar_t **v28; // rcx
  int *v29; // r14
  __int64 v30; // r15
  unsigned int v31; // [rsp+20h] [rbp-48h] BYREF
  void *v32; // [rsp+28h] [rbp-40h]
  unsigned int v33; // [rsp+80h] [rbp+18h] BYREF
  int v34; // [rsp+88h] [rbp+20h]

  v2 = gpGraphicsDeviceList;
  v31 = 0;
  v5 = 0;
  v33 = 0;
  v6 = 0;
  v34 = 0;
  v7 = 0;
  v8 = 1;
  if ( !gpGraphicsDeviceList )
    return 0LL;
  do
  {
    v9 = (*((_DWORD *)v2 + 40) & 0x20800000) == 0;
    v10 = v5 + 1;
    v2 = (wchar_t *)*((_QWORD *)v2 + 16);
    if ( v9 )
      v10 = v5;
    v5 = v10;
  }
  while ( v2 );
  if ( !v10 )
    return 0LL;
  v32 = PALLOCMEM2((unsigned int)(16 * v10), 0x73726447u, 1);
  v13 = (__int64)v32;
  if ( !v32 )
    return 3LL;
  i = gpGraphicsDeviceList;
  v15 = 0;
  if ( gpGraphicsDeviceList )
  {
    do
    {
      v16 = -1;
      if ( !gForceDisconnect )
        v16 = gProtocolType;
      if ( !(unsigned int)GetPrimaryAttachFlags((struct tagGRAPHICS_DEVICE *)i, v16, &v31, &v33) )
      {
        v23 = 3;
        goto LABEL_39;
      }
      v12 = v33;
      v11 = 0LL;
      if ( v33 )
        v8 = 0;
      if ( a2 )
      {
        v17 = *(_DWORD *)(a2 + 20);
        if ( v17 )
        {
          v18 = (__int64 *)(a2 + 40);
          v19 = v17;
          do
          {
            v20 = *v18;
            v18 += 7;
            if ( *(wchar_t **)(v20 + 2576) == i )
              v11 = 1LL;
            --v19;
          }
          while ( v19 );
        }
        v21 = v33 && !(_DWORD)v11;
        v34 |= v21;
      }
      if ( (*((_DWORD *)i + 40) & 0x2800008) == 0x800000 )
      {
        v22 = 2LL * v15;
        *(_QWORD *)(v13 + 8 * v22) = i;
        *(_DWORD *)(v13 + 8 * v22 + 12) = v33 != 0;
        ++v15;
        *(_DWORD *)(v13 + 8 * v22 + 8) = v11 != 0;
      }
      i = (wchar_t *)*((_QWORD *)i + 16);
    }
    while ( i );
    if ( v8 )
      goto LABEL_49;
  }
  else
  {
LABEL_49:
    for ( i = gpGraphicsDeviceList; i; i = (wchar_t *)*((_QWORD *)i + 16) )
    {
      v26 = *((_DWORD *)i + 40);
      if ( (v26 & 0x2000008) == 0 )
      {
        if ( (v26 & 0x800000) == 0 )
          break;
        v23 = 1;
        *(_DWORD *)(v13 + 12) = 1;
        goto LABEL_27;
      }
    }
  }
  v23 = 1;
LABEL_27:
  if ( a1 )
  {
    i = DrvGetDeviceFromName(a1);
    if ( !i )
      goto LABEL_34;
    v27 = 0;
    if ( !v15 )
      goto LABEL_34;
    v28 = (wchar_t **)v13;
    while ( i != *v28 )
    {
      ++v27;
      v28 += 2;
      if ( v27 >= v15 )
        goto LABEL_34;
    }
    if ( *(_DWORD *)(v13 + 16LL * v27 + 8) == *(_DWORD *)(v13 + 16LL * v27 + 12) && a2 )
      goto LABEL_34;
    v6 = 1;
    v7 = 1;
  }
  else
  {
    if ( !v15 )
    {
LABEL_34:
      v23 = 0;
      goto LABEL_35;
    }
    v24 = (_DWORD *)(v13 + 8);
    v11 = v15;
    do
    {
      if ( *v24 != v24[1] || !a2 )
        v6 = 1;
      v24 += 4;
      --v11;
    }
    while ( v11 );
  }
  if ( !v6 )
    goto LABEL_34;
  if ( v7 )
  {
    v23 = 3;
    if ( a2 )
    {
      v29 = (int *)(v13 + 8);
      v30 = v15;
      do
      {
        DrvUpdateAttachFlag((struct tagGRAPHICS_DEVICE *)i, *v29);
        v29 += 4;
        --v30;
      }
      while ( v30 );
      v13 = (__int64)v32;
    }
  }
LABEL_35:
  if ( v15 )
  {
    if ( v6 || v34 )
      v23 = 1;
    else
      v23 = 2;
  }
LABEL_39:
  Win32FreePool(v13, v11, v12);
  return v23;
}
