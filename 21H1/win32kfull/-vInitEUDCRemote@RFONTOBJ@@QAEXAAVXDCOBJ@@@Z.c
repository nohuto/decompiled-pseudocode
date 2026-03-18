/*
 * XREFs of ?vInitEUDCRemote@RFONTOBJ@@QAEXAAVXDCOBJ@@@Z @ 0x2087AC
 * Callers:
 *     ?vInitEUDC@RFONTOBJ@@QAEXAAVXDCOBJ@@@Z @ 0x208150 (-vInitEUDC@RFONTOBJ@@QAEXAAVXDCOBJ@@@Z.c)
 * Callees:
 *     _PALLOCMEM2@12 @ 0x48D0A (_PALLOCMEM2@12.c)
 *     ??0LFONTOBJ@@QAE@PAUHLFONT__@@PAVPDEVOBJ@@@Z @ 0x4B328 (--0LFONTOBJ@@QAE@PAUHLFONT__@@PAVPDEVOBJ@@@Z.c)
 *     ?vLock@XDCOBJ@@QAEXPAUHDC__@@@Z @ 0x5A410 (-vLock@XDCOBJ@@QAEXPAUHDC__@@@Z.c)
 *     ?vUnlockFast@XDCOBJ@@QAEXXZ @ 0x5E684 (-vUnlockFast@XDCOBJ@@QAEXXZ.c)
 *     ??1RFONTOBJ@@QAE@XZ @ 0x86B86 (--1RFONTOBJ@@QAE@XZ.c)
 *     ??0IFIOBJR@@QAE@PBU_IFIMETRICS@@AAVRFONTOBJ@@AAVDCOBJ@@@Z @ 0x8859E (--0IFIOBJR@@QAE@PBU_IFIMETRICS@@AAVRFONTOBJ@@AAVDCOBJ@@@Z.c)
 *     ?vMakeInactive@RFONTOBJ@@QAEXXZ @ 0x8D42A (-vMakeInactive@RFONTOBJ@@QAEXXZ.c)
 *     ?vUnlock@SEMOBJ@@QAEXXZ @ 0x98AE4 (-vUnlock@SEMOBJ@@QAEXXZ.c)
 *     ?vDeleteRFONTRef@PFFOBJ@@QAEXXZ @ 0xACDB4 (-vDeleteRFONTRef@PFFOBJ@@QAEXXZ.c)
 *     @__security_check_cookie@4 @ 0xED840 (@__security_check_cookie@4.c)
 *     ?ComputeEUDCLogfont@RFONTOBJ@@QAEXPAU_EUDCLOGFONT@@AAVXDCOBJ@@@Z @ 0x206DB5 (-ComputeEUDCLogfont@RFONTOBJ@@QAEXPAU_EUDCLOGFONT@@AAVXDCOBJ@@@Z.c)
 *     ?ppfeFromUFI@@YGPAVPFE@@PAU_UNIVERSAL_FONT_ID@@@Z @ 0x207C74 (-ppfeFromUFI@@YGPAVPFE@@PAU_UNIVERSAL_FONT_ID@@@Z.c)
 *     ?vInit@RFONTOBJ@@QAEXAAVXDCOBJ@@PAVPFE@@PAU_EUDCLOGFONT@@H@Z @ 0x207D5B (-vInit@RFONTOBJ@@QAEXAAVXDCOBJ@@PAVPFE@@PAU_EUDCLOGFONT@@H@Z.c)
 *     ?UpdateFontLinksLockOrder@RFONTOBJ@@AAEXXZ @ 0x208EF6 (-UpdateFontLinksLockOrder@RFONTOBJ@@AAEXXZ.c)
 */

void __thiscall RFONTOBJ::vInitEUDCRemote(RFONTOBJ *this, struct XDCOBJ *a2)
{
  RFONTOBJ *v2; // ebx
  int v3; // ecx
  _DWORD *v4; // eax
  unsigned int v5; // eax
  void *v6; // eax
  int v7; // ecx
  int v8; // esi
  HDC v9; // eax
  struct XDCOBJ *v10; // edi
  unsigned int v11; // esi
  unsigned int v12; // ecx
  int v13; // ecx
  PATHOBJ *v14; // ebx
  struct PFE *v15; // eax
  struct PFE *v16; // edi
  int v17; // eax
  int i; // ecx
  int *v19; // eax
  int v20; // eax
  unsigned int v21; // ecx
  unsigned int j; // edx
  unsigned int k; // edi
  struct HLFONT__ *v24; // [esp-8h] [ebp-E4h]
  int v25; // [esp+Ch] [ebp-D0h] BYREF
  int v26; // [esp+14h] [ebp-C8h]
  RFONTOBJ *v27; // [esp+18h] [ebp-C4h]
  int v28; // [esp+1Ch] [ebp-C0h]
  int v29; // [esp+20h] [ebp-BCh] BYREF
  _DWORD v30[3]; // [esp+24h] [ebp-B8h] BYREF
  struct LFONT *v31; // [esp+30h] [ebp-ACh] BYREF
  FLONG v32; // [esp+34h] [ebp-A8h] BYREF
  struct PFE *v33; // [esp+38h] [ebp-A4h]
  int v34; // [esp+3Ch] [ebp-A0h]
  PATHOBJ *v35; // [esp+40h] [ebp-9Ch]
  struct XDCOBJ *v36; // [esp+44h] [ebp-98h]
  char v37; // [esp+4Bh] [ebp-91h]
  unsigned int v38; // [esp+4Ch] [ebp-90h] BYREF
  _BYTE v39[20]; // [esp+50h] [ebp-8Ch] BYREF
  _DWORD v40[9]; // [esp+64h] [ebp-78h] BYREF
  _DWORD v41[9]; // [esp+88h] [ebp-54h] BYREF
  _BYTE v42[40]; // [esp+ACh] [ebp-30h] BYREF

  v2 = this;
  v3 = *(_DWORD *)this;
  v27 = v2;
  v36 = a2;
  v4 = *(_DWORD **)(v3 + 728);
  if ( v4 )
  {
    if ( *v4 )
      return;
    DbgkWerCaptureLiveKernelDump(L"win32kfull.sys", 356, 24, 0, 0, 0, 0, 0, 1);
    v3 = *(_DWORD *)v2;
  }
  v37 = 0;
  if ( !*(_DWORD *)(v3 + 728) )
  {
    v5 = *(_DWORD *)(*(_DWORD *)a2 + 224);
    if ( v5 <= 0xA )
    {
      *(_DWORD *)(v3 + 728) = v3 + 732;
    }
    else
    {
      v6 = PALLOCMEM2(4 * v5, 1718382187, 1);
      *(_DWORD *)(*(_DWORD *)v2 + 728) = v6;
      if ( !v6 )
        return;
      v37 = 1;
    }
  }
  *(_DWORD *)(*(_DWORD *)v2 + 780) = 0;
  v7 = *(_DWORD *)a2;
  v8 = *(_DWORD *)(*(_DWORD *)v2 + 80);
  v38 = *(_DWORD *)(*(_DWORD *)a2 + 36);
  v24 = *(struct HLFONT__ **)(v7 + 1552);
  v28 = v8;
  LFONTOBJ::LFONTOBJ((LFONTOBJ *)&v31, v24, (struct HLFONT__ **)&v38);
  v38 = *(_DWORD *)v2;
  v9 = **(HDC **)a2;
  memset(v30, 0, sizeof(v30));
  XDCOBJ::vLock((XDCOBJ *)v30, v9);
  IFIOBJR::IFIOBJR(
    (IFIOBJR *)v39,
    *(const struct _IFIMETRICS **)(v8 + 20),
    (struct RFONTOBJ *)&v38,
    (struct DCOBJ *)v30);
  memset(v41, 0, sizeof(v41));
  RFONTOBJ::ComputeEUDCLogfont(v2, (struct _EUDCLOGFONT *)v41, (HDC **)v36);
  memset(v42, 0, sizeof(v42));
  v10 = v36;
  v35 = (PATHOBJ *)v42;
  v11 = 0;
  v34 = 0;
  v12 = *(_DWORD *)(*(_DWORD *)v36 + 224);
  if ( v12 <= 0xA || (v35 = (PATHOBJ *)PALLOCMEM2(4 * v12, 1718382187, 1)) != 0 )
  {
    *(_DWORD *)(*(_DWORD *)v2 + 708) |= 0x200u;
    v13 = *(_DWORD *)v10;
    if ( (*(_DWORD *)(*(_DWORD *)(*(_DWORD *)v10 + 36) + 24) & 0x8000) != 0 )
    {
      EtwTraceGreLockReleaseSemaphore(L"prfnt->hsemEUDC", *(_DWORD *)(*(_DWORD *)v2 + 788));
      GreReleaseSemaphoreInternal(*(_DWORD *)(*(_DWORD *)v2 + 788));
      EtwTraceGreLockReleaseSemaphore(L"prfnt->hsemCache", *(_DWORD *)(*(_DWORD *)v2 + 548));
      GreReleaseSemaphoreInternal(*(_DWORD *)(*(_DWORD *)v2 + 548));
      v10 = v36;
      v11 = v34;
      v13 = *(_DWORD *)v36;
    }
    v38 = 0;
    if ( *(_DWORD *)(v13 + 224) )
    {
      v14 = v35;
      do
      {
        v32 = 0;
        v25 = 0;
        v29 = _ghsemPublicPFT;
        GreAcquireSemaphore(_ghsemPublicPFT);
        v15 = ppfeFromUFI((struct _UNIVERSAL_FONT_ID *)(*(_DWORD *)(*(_DWORD *)v10 + 220) + 8 * v38));
        v16 = v15;
        v33 = v15;
        if ( v15 )
        {
          v25 = *(_DWORD *)v15;
          ++*(_DWORD *)(v25 + 48);
          v26 = 0;
        }
        SEMOBJ::vUnlock((SEMOBJ *)&v29);
        if ( v16 )
        {
          v17 = *(_DWORD *)(v28 + 76);
          qmemcpy(v40, v41, sizeof(v40));
          i = 0;
          if ( v17 )
            v19 = (int *)(v17 + 8);
          else
            v19 = (int *)&NullListHead;
          if ( v19 )
          {
            for ( i = *v19; (int *)i != v19; i = *(_DWORD *)i )
            {
              if ( *(struct PFE **)(i + 24) == v33 || *(struct PFE **)(i + 28) == v33 )
              {
                v20 = *(_DWORD *)(i + 16);
                if ( v20 )
                  v40[3] = v41[3] * v20 / *(_DWORD *)(i + 20);
                break;
              }
            }
          }
          v10 = v36;
          RFONTOBJ::vInit((RFONTOBJ *)&v32, v36, v33, (struct _EUDCLOGFONT *)v40, i);
          v11 = v34;
          if ( v32 )
          {
            *(&v14->fl + v34) = v32;
            v34 = ++v11;
          }
        }
        else
        {
          v10 = v36;
        }
        RFONTOBJ::~RFONTOBJ((RFONTOBJ *)&v32);
        if ( v25 && !v26 )
          PFFOBJ::vDeleteRFONTRef((PFFOBJ *)&v25);
        v13 = *(_DWORD *)v10;
        ++v38;
      }
      while ( v38 < *(_DWORD *)(v13 + 224) );
      v2 = v27;
    }
    if ( (*(_DWORD *)(*(_DWORD *)(v13 + 36) + 24) & 0x8000) != 0 )
    {
      GreAcquireSemaphore(*(_DWORD *)(*(_DWORD *)v2 + 548));
      GreAcquireSemaphore(*(_DWORD *)(*(_DWORD *)v2 + 788));
    }
    v21 = *(_DWORD *)v2;
    if ( (*(_DWORD *)(*(_DWORD *)v2 + 708) & 0x200) != 0 )
    {
      if ( v11 )
      {
        for ( j = 0; j < v11; ++j )
          *(_DWORD *)(*(_DWORD *)(*(_DWORD *)v2 + 728) + 4 * j) = *(&v35->fl + j);
        *(_DWORD *)(*(_DWORD *)v2 + 780) = v11;
      }
      else
      {
        if ( *(_DWORD *)(v21 + 728) != v21 + 732 )
        {
          Win32FreePool(*(PATHOBJ **)(v21 + 728));
          v21 = *(_DWORD *)v2;
        }
        *(_DWORD *)(v21 + 728) = 0;
        *(_DWORD *)(*(_DWORD *)v2 + 780) = 0;
      }
      RFONTOBJ::UpdateFontLinksLockOrder(v2);
      *(_DWORD *)(*(_DWORD *)v2 + 708) &= ~0x200u;
    }
    else
    {
      for ( k = 0; k < v11; ++k )
      {
        v38 = *(&v35->fl + k);
        RFONTOBJ::vMakeInactive((RFONTOBJ *)&v38);
        v38 = 0;
        RFONTOBJ::~RFONTOBJ((RFONTOBJ *)&v38);
      }
    }
    if ( v35 != (PATHOBJ *)v42 )
      Win32FreePool(v35);
  }
  else if ( v37 )
  {
    Win32FreePool(*(PATHOBJ **)(*(_DWORD *)v2 + 728));
    *(_DWORD *)(*(_DWORD *)v2 + 728) = 0;
  }
  if ( v30[0] )
    XDCOBJ::vUnlockFast((XDCOBJ *)v30);
  v38 = 0;
  RFONTOBJ::~RFONTOBJ((RFONTOBJ *)&v38);
  if ( v31 )
    DEC_SHARE_REF_CNT_LAZY_DEL_LOGFONT(v31);
}
