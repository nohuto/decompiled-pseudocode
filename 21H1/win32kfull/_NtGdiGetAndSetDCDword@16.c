/*
 * XREFs of _NtGdiGetAndSetDCDword@16 @ 0x1FF0F9
 * Callers:
 *     <none>
 * Callees:
 *     ?vLock@XDCOBJ@@QAEXPAUHDC__@@@Z @ 0x5A410 (-vLock@XDCOBJ@@QAEXPAUHDC__@@@Z.c)
 *     ?vUnlockFast@XDCOBJ@@QAEXXZ @ 0x5E684 (-vUnlockFast@XDCOBJ@@QAEXXZ.c)
 *     __SEH_prolog4 @ 0xF9120 (__SEH_prolog4.c)
 *     ?iSetMapMode@DC@@QAEHH@Z @ 0x21CB7F (-iSetMapMode@DC@@QAEHH@Z.c)
 */

int __stdcall NtGdiGetAndSetDCDword(HDC a1, int a2, int a3, ULONG a4)
{
  int v4; // edi
  int v5; // esi
  _DWORD *v6; // ecx
  int v8; // edx
  int v9; // eax
  unsigned int v10; // eax
  int v11; // eax
  int v12; // ecx
  _DWORD *v13; // ecx
  DC *v14[3]; // [esp+10h] [ebp-24h] BYREF
  CPPEH_RECORD ms_exc; // [esp+1Ch] [ebp-18h]

  v4 = 1;
  v5 = 0;
  v14[1] = 0;
  v14[2] = 0;
  XDCOBJ::vLock((XDCOBJ *)v14, a1);
  if ( !v14[0] )
  {
    if ( a2 == 5 )
    {
      ms_exc.registration.TryLevel = 0;
      v6 = (_DWORD *)a4;
      if ( a4 >= _MmUserProbeAddress )
        v6 = (_DWORD *)_MmUserProbeAddress;
      *v6 = 0x80000000;
      ms_exc.registration.TryLevel = -2;
    }
    return 0;
  }
  switch ( a2 )
  {
    case 1:
      v5 = *((_DWORD *)v14[0] + 6) & 0x400;
      *((_DWORD *)v14[0] + 6) &= ~0x400u;
      goto LABEL_32;
    case 2:
      v5 = *((_DWORD *)v14[0] + 457);
      *((_DWORD *)v14[0] + 457) = a3;
      goto LABEL_32;
    case 4:
      v12 = *((_DWORD *)v14[0] + 255);
      v5 = *(_DWORD *)(v12 + 352);
      *(_DWORD *)(v12 + 352) = a3;
      goto LABEL_32;
  }
  if ( a2 != 6 )
  {
    if ( a2 == 7 )
    {
      if ( (a3 & 0xFFFFFFFE) != 0 )
      {
        EngSetLastError(0x57u);
        v5 = -1;
      }
      else
      {
        v11 = *((_DWORD *)v14[0] + 255);
        v5 = *(_DWORD *)(v11 + 256);
        *(_DWORD *)(v11 + 256) = a3;
      }
      goto LABEL_32;
    }
    if ( a2 == 8 )
    {
      v5 = *(_DWORD *)(*((_DWORD *)v14[0] + 255) + 144);
      if ( v5 != a3 )
        v5 = DC::iSetMapMode(v14[0], a3);
      goto LABEL_32;
    }
    if ( a2 != 9 )
    {
      v4 = 0;
      goto LABEL_32;
    }
    v8 = 0;
    v9 = *((_DWORD *)v14[0] + 43);
    if ( (*(_DWORD *)(*((_DWORD *)v14[0] + 255) + 148) & 1) != 0 )
    {
      LOBYTE(v8) = (v9 & 4) == 0;
      if ( a3 == 2 )
      {
LABEL_17:
        v10 = v9 & 0xFFFFFFFB;
LABEL_18:
        *((_DWORD *)v14[0] + 43) = v10;
        v5 = v8 + 1;
        goto LABEL_32;
      }
      if ( a3 == 1 )
      {
LABEL_20:
        v10 = v9 | 4;
        goto LABEL_18;
      }
    }
    else
    {
      LOBYTE(v8) = (v9 & 4) != 0;
      if ( a3 == 2 )
        goto LABEL_20;
      if ( a3 == 1 )
        goto LABEL_17;
    }
    EngSetLastError(0x57u);
  }
LABEL_32:
  if ( v4 )
  {
    ms_exc.registration.TryLevel = 1;
    v13 = (_DWORD *)a4;
    if ( a4 >= _MmUserProbeAddress )
      v13 = (_DWORD *)_MmUserProbeAddress;
    *v13 = v5;
    ms_exc.registration.TryLevel = -2;
  }
  XDCOBJ::vUnlockFast((XDCOBJ *)v14);
  return v4;
}
