/*
 * XREFs of _NtGdiGetDCDword@12 @ 0x8E686
 * Callers:
 *     <none>
 * Callees:
 *     ?vLock@XDCOBJ@@QAEXPAUHDC__@@@Z @ 0x5A410 (-vLock@XDCOBJ@@QAEXPAUHDC__@@@Z.c)
 *     __SEH_prolog4 @ 0xF9120 (__SEH_prolog4.c)
 *     ?dwGetFontLanguageInfo@@YGKAAVXDCOBJ@@@Z @ 0x1EB996 (-dwGetFontLanguageInfo@@YGKAAVXDCOBJ@@@Z.c)
 */

int __stdcall NtGdiGetDCDword(HDC a1, int a2, ULONG a3)
{
  int v3; // edi
  unsigned int FontLanguageInfo; // ebx
  DC *v5; // ecx
  _DWORD *v6; // ecx
  struct _DC_ATTR *UserAttr; // eax
  int v8; // ebx
  int v10; // ebx
  struct XDCOBJ *v11; // [esp+0h] [ebp-34h]
  DC *v12; // [esp+10h] [ebp-24h] BYREF
  int v13; // [esp+14h] [ebp-20h]
  int v14; // [esp+18h] [ebp-1Ch]
  CPPEH_RECORD ms_exc; // [esp+1Ch] [ebp-18h]

  v3 = 1;
  FontLanguageInfo = 0;
  v13 = 0;
  v14 = 0;
  XDCOBJ::vLock((XDCOBJ *)&v12, a1);
  v5 = v12;
  if ( !v12 )
    return 0;
  switch ( a2 )
  {
    case 0:
      FontLanguageInfo = ((*((_DWORD *)v12 + 12) >> 13) & 1) == 0;
      break;
    case 1:
      FontLanguageInfo = *(_DWORD *)(*((_DWORD *)v12 + 255) + 352);
      break;
    case 2:
      FontLanguageInfo = *(_DWORD *)(*((_DWORD *)v12 + 255) + 292);
      break;
    case 3:
      FontLanguageInfo = *(_DWORD *)(*((_DWORD *)v12 + 255) + 296);
      break;
    case 4:
      v10 = 0;
      if ( (*(_DWORD *)(*((_DWORD *)v12 + 255) + 148) & 1) != 0 )
        LOBYTE(v10) = (*((_BYTE *)v12 + 172) & 4) == 0;
      else
        LOBYTE(v10) = (*((_BYTE *)v12 + 172) & 4) != 0;
      FontLanguageInfo = v10 + 1;
      break;
    case 5:
      FontLanguageInfo = *((_DWORD *)v12 + 17);
      break;
    case 6:
      FontLanguageInfo = dwGetFontLanguageInfo(v11);
      v5 = v12;
      break;
    case 7:
      FontLanguageInfo = *((_DWORD *)v12 + 5) == 1;
      break;
    case 8:
      FontLanguageInfo = *(_DWORD *)(*((_DWORD *)v12 + 255) + 144);
      break;
    default:
      v3 = 0;
      break;
  }
  if ( v3 )
  {
    ms_exc.registration.TryLevel = 0;
    v6 = (_DWORD *)a3;
    if ( a3 >= _MmUserProbeAddress )
      v6 = (_DWORD *)_MmUserProbeAddress;
    *v6 = FontLanguageInfo;
    ms_exc.registration.TryLevel = -2;
    v5 = v12;
  }
  if ( v13 && (*((_BYTE *)v5 + 32) & 2) != 0 )
  {
    if ( !v14 )
    {
      UserAttr = XDCOBJ::GetUserAttr((XDCOBJ *)&v12);
      v5 = v12;
      if ( UserAttr )
      {
        DC::RestoreAttributes(v12, UserAttr);
        v5 = v12;
      }
    }
    *((_DWORD *)v5 + 8) &= ~2u;
    v13 = 0;
    v5 = v12;
  }
  a1 = 0;
  v8 = *(_DWORD *)v5;
  HmgDecrementExclusiveReferenceCountEx(v5, v14, &a1);
  if ( a1 )
    bDeleteDCInternalEx(v8, 0);
  return v3;
}
