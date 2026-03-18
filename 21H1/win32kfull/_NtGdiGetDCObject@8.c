/*
 * XREFs of _NtGdiGetDCObject@8 @ 0x78A34
 * Callers:
 *     _CreateCompatiblePublicDC@8 @ 0xBCDD4 (_CreateCompatiblePublicDC@8.c)
 * Callees:
 *     ?vUnlock@DLODCOBJ@@QAEXXZ @ 0x4E14A (-vUnlock@DLODCOBJ@@QAEXXZ.c)
 *     ?vLock@XDCOBJ@@QAEXPAUHDC__@@@Z @ 0x5A410 (-vLock@XDCOBJ@@QAEXPAUHDC__@@@Z.c)
 *     ?vDestructor@DEVLOCKOBJ@@QAEXXZ @ 0x5E730 (-vDestructor@DEVLOCKOBJ@@QAEXXZ.c)
 *     ?vInit@DEVLOCKOBJ@@QAEXXZ @ 0x78C50 (-vInit@DEVLOCKOBJ@@QAEXXZ.c)
 *     ?pSurfaceEff@XDCOBJ@@QAEPAVSURFACE@@XZ @ 0x79420 (-pSurfaceEff@XDCOBJ@@QAEPAVSURFACE@@XZ.c)
 */

int __stdcall NtGdiGetDCObject(HDC a1, const WCHAR *a2)
{
  int v2; // esi
  DC *v3; // ecx
  int v4; // eax
  int v5; // edi
  struct _DC_ATTR *UserAttr; // eax
  int v7; // edi
  DEVLOCKOBJ *v9; // ecx
  int *v10; // eax
  int v11; // [esp+10h] [ebp-40h] BYREF
  DC *v12; // [esp+14h] [ebp-3Ch] BYREF
  int v13; // [esp+18h] [ebp-38h]
  int v14; // [esp+1Ch] [ebp-34h]
  _BYTE v15[20]; // [esp+20h] [ebp-30h] BYREF
  _DWORD v16[3]; // [esp+34h] [ebp-1Ch] BYREF
  __int16 v17; // [esp+40h] [ebp-10h]

  v2 = 0;
  if ( PsGetWin32KFilterSet() != 5 || a1 != (HDC)-589410304 )
  {
    v13 = 0;
    v14 = 0;
    XDCOBJ::vLock((XDCOBJ *)&v12, a1);
    v3 = v12;
    if ( !v12 )
      return v2;
    v4 = *((_DWORD *)v12 + 255);
    v5 = *(_DWORD *)(v4 + 184);
    if ( (v5 & 0x1000) != 0 )
    {
      GreDCSelectBrush(v12, *(_DWORD *)(v4 + 188));
      v3 = v12;
    }
    if ( (v5 & 0x2000) != 0 )
    {
      GreDCSelectPen(v3, *(_DWORD *)(*((_DWORD *)v3 + 255) + 192));
      v3 = v12;
    }
    if ( a2 == (const WCHAR *)((char *)&loc_9FFFF + 1) )
    {
      v2 = *(_DWORD *)(*((_DWORD *)v3 + 255) + 300);
    }
    else
    {
      if ( a2 == (const WCHAR *)&loc_50000 )
      {
        memset(v16, 0, sizeof(v16));
        v17 = 256;
        DEVLOCKOBJ::vInit((DEVLOCKOBJ *)v15);
        DEVLOCKOBJ::vLockNoDrawing(v9, (struct XDCOBJ *)&v12);
        v2 = *((_DWORD *)XDCOBJ::pSurfaceEff((XDCOBJ *)&v12) + 5);
        DEVLOCKOBJ::vDestructor((DEVLOCKOBJ *)v15);
        if ( v16[0] )
          DLODCOBJ::vUnlock((DLODCOBJ *)v16);
        v3 = v12;
        goto LABEL_9;
      }
      if ( a2 == (const WCHAR *)&loc_80000 )
      {
        v2 = *((_DWORD *)v3 + 14);
      }
      else
      {
        if ( a2 == L"ry\\Machine\\System\\CurrentControlSet\\Hardware Profiles\\Current\\Software\\Fonts" )
        {
          v10 = (int *)*((_DWORD *)v3 + 23);
        }
        else
        {
          if ( a2 != (const WCHAR *)3145728 && a2 != (const WCHAR *)5242880 )
            goto LABEL_9;
          v10 = (int *)*((_DWORD *)v3 + 24);
        }
        v2 = *v10;
      }
    }
LABEL_9:
    if ( v13 && (*((_BYTE *)v3 + 32) & 2) != 0 )
    {
      if ( !v14 )
      {
        UserAttr = XDCOBJ::GetUserAttr((XDCOBJ *)&v12);
        v3 = v12;
        if ( UserAttr )
        {
          DC::RestoreAttributes(v12, UserAttr);
          v3 = v12;
        }
      }
      *((_DWORD *)v3 + 8) &= ~2u;
      v3 = v12;
      v13 = 0;
    }
    v11 = 0;
    v7 = *(_DWORD *)v3;
    HmgDecrementExclusiveReferenceCountEx(v3, v14, &v11);
    if ( v11 )
      bDeleteDCInternalEx(v7, 0);
    return v2;
  }
  if ( a2 == (const WCHAR *)((char *)&loc_9FFFF + 1) )
    return GreGetStockObject(13);
  else
    return 0;
}
