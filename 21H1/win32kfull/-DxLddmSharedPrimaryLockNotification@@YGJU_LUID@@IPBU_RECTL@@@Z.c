/*
 * XREFs of ?DxLddmSharedPrimaryLockNotification@@YGJU_LUID@@IPBU_RECTL@@@Z @ 0x1D2FCB
 * Callers:
 *     _NtGdiDdDDISharedPrimaryLockNotification@4 @ 0x1D4649 (_NtGdiDdDDISharedPrimaryLockNotification@4.c)
 * Callees:
 *     ??0DYNAMICMODECHANGESHARELOCK@@QAE@XZ @ 0x213BE (--0DYNAMICMODECHANGESHARELOCK@@QAE@XZ.c)
 *     _PALLOCMEM2@12 @ 0x48D0A (_PALLOCMEM2@12.c)
 *     ?bLddmDriver@PDEVOBJ@@QBEHXZ @ 0xB23BC (-bLddmDriver@PDEVOBJ@@QBEHXZ.c)
 *     @__security_check_cookie@4 @ 0xED840 (@__security_check_cookie@4.c)
 *     ?sizl@PDEVOBJ@@QAE?AUtagSIZE@@XZ @ 0x1D37FE (-sizl@PDEVOBJ@@QAE-AUtagSIZE@@XZ.c)
 *     ?bSpTearDownSprites@@YGHPAUHDEV__@@PAU_RECTL@@H@Z @ 0x1DE451 (-bSpTearDownSprites@@YGHPAUHDEV__@@PAU_RECTL@@H@Z.c)
 */

int __userpurge DxLddmSharedPrimaryLockNotification@<eax>(
        int *a1@<edx>,
        int a2@<ecx>,
        struct _LUID a3,
        unsigned int a4,
        const struct _RECTL *a5)
{
  int v5; // ebx
  int *v6; // esi
  int v7; // edi
  _DWORD *i; // eax
  PDEVOBJ *v9; // ecx
  int v10; // edx
  LONG v11; // eax
  _DWORD *v12; // edi
  _DWORD *ProcessEntry; // ebx
  _DWORD *v14; // eax
  int v15; // ecx
  int v16; // eax
  int *v17; // edx
  _DWORD *v18; // esi
  int v19; // edi
  int v20; // eax
  LONG cx; // eax
  int v22; // eax
  int v23; // eax
  int v24; // eax
  struct _RECTL *v26; // [esp+0h] [ebp-68h]
  int v27; // [esp+4h] [ebp-64h]
  _DWORD *v28; // [esp+10h] [ebp-58h] BYREF
  int v29; // [esp+14h] [ebp-54h]
  char v30; // [esp+1Bh] [ebp-4Dh] BYREF
  unsigned int v31; // [esp+1Ch] [ebp-4Ch]
  int *v32; // [esp+20h] [ebp-48h]
  _DWORD *v33; // [esp+24h] [ebp-44h]
  int v34; // [esp+28h] [ebp-40h]
  int v35; // [esp+2Ch] [ebp-3Ch]
  _DWORD *v36; // [esp+30h] [ebp-38h]
  _DWORD v37[2]; // [esp+54h] [ebp-14h] BYREF
  int v38; // [esp+5Ch] [ebp-Ch]
  int v39; // [esp+60h] [ebp-8h]

  v5 = 0;
  v34 = a2;
  v6 = a1;
  v7 = 0;
  v32 = a1;
  v29 = 0;
  DYNAMICMODECHANGESHARELOCK::DYNAMICMODECHANGESHARELOCK((DYNAMICMODECHANGESHARELOCK *)&v30);
  if ( !g_pDwmState )
  {
    for ( i = (_DWORD *)hdevEnumerate(0); ; i = (_DWORD *)hdevEnumerate(v33) )
    {
      v33 = i;
      if ( !i )
      {
        v5 = v7;
        goto LABEL_46;
      }
      v28 = i;
      if ( ((unsigned int)&loc_20400 & i[6]) == 0
        && PDEVOBJ::bLddmDriver((PDEVOBJ *)&v28)
        && a3.LowPart == PDEVOBJ::pAdapterLuid(v9)->LowPart
        && a3.HighPart == PDEVOBJ::pAdapterLuid((PDEVOBJ *)&v28)->HighPart
        && *(_DWORD *)(v28[458] + 212) == v34 )
      {
        break;
      }
LABEL_43:
      ;
    }
    GreLockVisRgn(v28);
    GreLockSprite(v28);
    GreLockDisplayDevice(v28);
    v36 = v28 + 466;
    v31 = (unsigned int)PsGetCurrentProcessId() & 0xFFFFFFFC;
    v37[0] = 0;
    v37[1] = 0;
    v38 = 0;
    v39 = 0;
    v10 = v6[1];
    if ( v10 || *v6 || v6[2] || v6[3] )
    {
      v19 = v6[2];
      v20 = *v6;
      if ( v19 <= *v6
        || (v35 = v6[3], v35 <= v10)
        || v20 < 0
        || v19 < 0
        || v19 > *(_DWORD *)PDEVOBJ::sizl((PDEVOBJ *)&v28).cx
        || (cx = PDEVOBJ::sizl((PDEVOBJ *)&v28).cx, v35 > *(_DWORD *)(cx + 4)) )
      {
        v7 = -1073741811;
        v29 = -1073741811;
LABEL_14:
        if ( v7 < 0 )
        {
LABEL_42:
          GreUnlockDisplayDevice(v28);
          GreUnlockSprite(v28);
          GreUnlockVisRgn(v28);
          goto LABEL_43;
        }
        v12 = v36;
        ProcessEntry = (_DWORD *)DxLddmFindProcessEntry(v36, v31);
        if ( !ProcessEntry )
        {
          v14 = PALLOCMEM2(0x28u, 1684305988, 1);
          if ( !v14 )
          {
            v7 = -1073741801;
            v29 = -1073741801;
LABEL_20:
            if ( v7 >= 0 )
            {
              ++ProcessEntry[3];
              ++v28[468];
              v16 = ProcessEntry[4];
              if ( v16 != -1 )
                ProcessEntry[4] = v16 + 1;
              v17 = ProcessEntry + 5;
              if ( ProcessEntry[3] == 1 )
              {
                *v17 = *v6;
                v18 = v6 + 1;
                ProcessEntry[6] = *v18++;
                ProcessEntry[7] = *v18;
                ProcessEntry[8] = v18[1];
                v6 = v32;
                v7 = v29;
                ProcessEntry[9] = giVisRgnUniqueness;
              }
              else
              {
                if ( *v6 < *v17 )
                  *v17 = *v6;
                v22 = v6[1];
                if ( v22 < ProcessEntry[6] )
                  ProcessEntry[6] = v22;
                v23 = v6[2];
                if ( v23 > ProcessEntry[7] )
                  ProcessEntry[7] = v23;
                v24 = v6[3];
                if ( v24 > ProcessEntry[8] )
                  ProcessEntry[8] = v24;
              }
              bSpTearDownSprites((HDEV)1, v26, v27);
              PDEVOBJ::vSync((PDEVOBJ *)&v28, v28[455] != 0 ? (struct _SURFOBJ *)(v28[455] + 16) : 0, 0, 6u);
            }
            goto LABEL_42;
          }
          v14[2] = v31;
          v15 = *v12;
          if ( *(_DWORD **)(*v12 + 4) != v12 )
            __fastfail(3u);
          *v14 = v15;
          ProcessEntry = v14;
          v14[1] = v12;
          *(_DWORD *)(v15 + 4) = v14;
          *v12 = v14;
        }
        v7 = v29;
        goto LABEL_20;
      }
    }
    else
    {
      v38 = *(_DWORD *)PDEVOBJ::sizl((PDEVOBJ *)&v28).cx;
      v11 = PDEVOBJ::sizl((PDEVOBJ *)&v28).cx;
      v6 = v37;
      v32 = v37;
      v39 = *(_DWORD *)(v11 + 4);
    }
    v7 = v29;
    goto LABEL_14;
  }
LABEL_46:
  EtwTraceGreLockReleaseSemaphore(L"ghsemDynamicModeChange", _ghsemDynamicModeChange);
  GreReleaseSemaphoreInternal(_ghsemDynamicModeChange);
  return v5;
}
