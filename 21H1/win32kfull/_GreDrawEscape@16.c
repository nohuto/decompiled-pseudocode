/*
 * XREFs of _GreDrawEscape@16 @ 0x1D89E6
 * Callers:
 *     _NtGdiDrawEscape@16 @ 0x21241D (_NtGdiDrawEscape@16.c)
 * Callees:
 *     ?vUnlock@DLODCOBJ@@QAEXXZ @ 0x4E14A (-vUnlock@DLODCOBJ@@QAEXXZ.c)
 *     ?bEmpty@ERECTL@@QBEHXZ @ 0x4F396 (-bEmpty@ERECTL@@QBEHXZ.c)
 *     ?prgnVisSnap@DC@@QBEPAVREGION@@XZ @ 0x53684 (-prgnVisSnap@DC@@QBEPAVREGION@@XZ.c)
 *     ?prgnRao@DC@@QBEPAVREGION@@XZ @ 0x538E8 (-prgnRao@DC@@QBEPAVREGION@@XZ.c)
 *     ?vLock@XDCOBJ@@QAEXPAUHDC__@@@Z @ 0x5A410 (-vLock@XDCOBJ@@QAEXPAUHDC__@@@Z.c)
 *     ??1DCOBJ@@QAE@XZ @ 0x5E67A (--1DCOBJ@@QAE@XZ.c)
 *     ?vDestructor@DEVLOCKOBJ@@QAEXXZ @ 0x5E730 (-vDestructor@DEVLOCKOBJ@@QAEXXZ.c)
 *     ?bFullScreen@XDCOBJ@@QAEHXZ @ 0x78918 (-bFullScreen@XDCOBJ@@QAEHXZ.c)
 *     @__security_check_cookie@4 @ 0xED840 (@__security_check_cookie@4.c)
 *     ??1DEVEXCLUDERECT@@QAE@XZ @ 0x1D6F97 (--1DEVEXCLUDERECT@@QAE@XZ.c)
 *     ?vExclude@DEVEXCLUDERECT@@QAEXAAVXDCOBJ@@PAU_RECTL@@@Z @ 0x1D887E (-vExclude@DEVEXCLUDERECT@@QAEXAAVXDCOBJ@@PAU_RECTL@@@Z.c)
 */

int __fastcall GreDrawEscape(HDC a1, int a2, unsigned int a3, int a4)
{
  int v4; // ebx
  int (__stdcall *v6)(int, int, _BYTE *, struct _RECTL *, unsigned int, int); // edx
  int v7; // eax
  DC *v8; // ecx
  struct REGION *v9; // eax
  int v10; // esi
  int v12; // [esp+18h] [ebp-114h]
  DC *v13[3]; // [esp+2Ch] [ebp-100h] BYREF
  int v14; // [esp+38h] [ebp-F4h]
  int v15; // [esp+3Ch] [ebp-F0h]
  int v16; // [esp+40h] [ebp-ECh]
  int (__stdcall *v17)(int, int, _BYTE *, struct _RECTL *, unsigned int, int); // [esp+44h] [ebp-E8h]
  _BYTE v18[20]; // [esp+48h] [ebp-E4h] BYREF
  _DWORD v19[3]; // [esp+5Ch] [ebp-D0h] BYREF
  __int16 v20; // [esp+68h] [ebp-C4h]
  struct _RECTL v21; // [esp+78h] [ebp-B4h] BYREF
  struct XDCOBJ *v22[7]; // [esp+88h] [ebp-A4h] BYREF
  _BYTE v23[4]; // [esp+A4h] [ebp-88h] BYREF
  _BYTE v24[64]; // [esp+A8h] [ebp-84h] BYREF
  int v25; // [esp+E8h] [ebp-44h]
  int v26; // [esp+ECh] [ebp-40h]
  int v27; // [esp+114h] [ebp-18h]
  int v28; // [esp+11Ch] [ebp-10h]

  v4 = 0;
  v15 = a4;
  v16 = a2;
  memset(v13, 0, sizeof(v13));
  XDCOBJ::vLock((XDCOBJ *)v13, a1);
  if ( !v13[0] || !*((_DWORD *)v13[0] + 126) || (**((_BYTE **)v13[0] + 255) & 1) != 0 || a2 == 8 && a3 < 4 )
    goto LABEL_25;
  memset(v19, 0, sizeof(v19));
  v20 = 256;
  DEVLOCKOBJ::bLock((DEVLOCKOBJ *)v18, (struct XDCOBJ *)v13, 0);
  v14 = *((_DWORD *)v13[0] + 9);
  v6 = *(int (__stdcall **)(int, int, _BYTE *, struct _RECTL *, unsigned int, int))(v14 + 2000);
  v17 = v6;
  if ( v6 )
  {
    if ( a2 == 8 )
    {
      if ( (((unsigned int)&loc_1FFFFC + 4) & *(_DWORD *)(*((_DWORD *)v13[0] + 126) != 0
                                                        ? *((_DWORD *)v13[0] + 126) + 16 + 0x38
                                                        : 56)) == 0 )
        goto LABEL_23;
      v7 = v6(*((_DWORD *)v13[0] + 126) != 0 ? *((_DWORD *)v13[0] + 126) + 16 : 0, 8, 0, 0, a3, a4);
    }
    else
    {
      if ( (v18[12] & 1) != 0 )
      {
        v21 = *(struct _RECTL *)((char *)v13[0] + 1064);
        if ( DC::prgnRao(v13[0]) )
          v9 = DC::prgnRao(v8);
        else
          v9 = DC::prgnVisSnap(v8);
        v25 = 0;
        v26 = 0;
        v27 = 1;
        v28 = 0;
        XCLIPOBJ::vSetup((XCLIPOBJ *)v23, v9, (struct ERECTL *)&v21, 0);
        if ( ERECTL::bEmpty((ERECTL *)v24) )
        {
          v4 = 1;
        }
        else if ( (((unsigned int)&loc_1FFFFC + 4) & *(_DWORD *)(*((_DWORD *)v13[0] + 126) != 0
                                                               ? *((_DWORD *)v13[0] + 126) + 16 + 0x38
                                                               : 56)) != 0 )
        {
          v10 = v14;
          if ( (*(_BYTE *)(v14 + 24) & 1) != 0 )
          {
            GreAcquireSemaphore(_ghsemSprite);
            EtwTraceGreLockAcquireSemaphoreExclusive(L"ghsemSprite", _ghsemSprite, 5);
          }
          v22[6] = 0;
          DEVEXCLUDERECT::vExclude((DEVEXCLUDERECT *)v22, (struct XDCOBJ *)v13, &v21);
          v12 = v15;
          ++*(_DWORD *)(*((_DWORD *)v13[0] + 126) + 56);
          v4 = v17(*((_DWORD *)v13[0] + 126) != 0 ? *((_DWORD *)v13[0] + 126) + 16 : 0, v16, v23, &v21, a3, v12);
          DEVEXCLUDERECT::~DEVEXCLUDERECT(v22);
          if ( (*(_BYTE *)(v10 + 24) & 1) != 0 )
          {
            EtwTraceGreLockReleaseSemaphore(L"ghsemSprite", _ghsemSprite);
            GreReleaseSemaphoreInternal(_ghsemSprite);
          }
        }
        goto LABEL_23;
      }
      v7 = XDCOBJ::bFullScreen(v13);
    }
    v4 = v7;
  }
LABEL_23:
  DEVLOCKOBJ::vDestructor((DEVLOCKOBJ *)v18);
  if ( v19[0] )
    DLODCOBJ::vUnlock((DLODCOBJ *)v19);
LABEL_25:
  DCOBJ::~DCOBJ((DCOBJ *)v13);
  return v4;
}
