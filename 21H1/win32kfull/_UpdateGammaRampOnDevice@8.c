/*
 * XREFs of _UpdateGammaRampOnDevice@8 @ 0xB00CE
 * Callers:
 *     ?GreSetDeviceGammaRampInternal@@YGHPAUHDEV__@@PAXHHPAW4_SETGAMMARAMP_FAILED_REASON@@PAK@Z @ 0xCEC02 (-GreSetDeviceGammaRampInternal@@YGHPAUHDEV__@@PAXHHPAW4_SETGAMMARAMP_FAILED_REASON@@PAK@Z.c)
 * Callees:
 *     ?vUnlock@SEMOBJ@@QAEXXZ @ 0x98AE4 (-vUnlock@SEMOBJ@@QAEXXZ.c)
 *     ?SETFLAG@@YGXHACKK@Z @ 0x9DB80 (-SETFLAG@@YGXHACKK@Z.c)
 *     ?GetAppliedGammaRampTable@PDEVOBJ@@QAEPAXXZ @ 0xB0152 (-GetAppliedGammaRampTable@PDEVOBJ@@QAEPAXXZ.c)
 *     ?bLddmDriver@PDEVOBJ@@QBEHXZ @ 0xB23BC (-bLddmDriver@PDEVOBJ@@QBEHXZ.c)
 */

int __userpurge UpdateGammaRampOnDevice@<eax>(volatile unsigned int *a1@<esi>, int a2, int a3)
{
  _DWORD *v3; // edi
  int v4; // ebx
  int v5; // eax
  int (__stdcall *v6)(int, int, void *); // esi
  void *AppliedGammaRampTable; // eax
  int v8; // edx
  int (__stdcall *v10)(_DWORD, int *, _DWORD, _DWORD, _DWORD); // edx
  unsigned int v12; // [esp+0h] [ebp-8h]

  v3 = (_DWORD *)a2;
  v4 = 0;
  if ( a2 )
  {
    v5 = *(_DWORD *)(a2 + 1404);
    if ( v5 == 6 || v5 == 3 || v5 == 4 || v5 == 5 )
    {
      v6 = *(int (__stdcall **)(int, int, void *))(a2 + 2168);
      if ( v6 && (*(_BYTE *)(a2 + 1416) & 0x10) != 0 )
      {
        if ( *(_DWORD *)(a2 + 1052)
          || *(_DWORD *)(a2 + 1048)
          || ((unsigned int)&loc_20000 & *(_DWORD *)(a2 + 24)) != 0
          || PDEVOBJ::bLddmDriver((PDEVOBJ *)&a2) )
        {
          AppliedGammaRampTable = PDEVOBJ::GetAppliedGammaRampTable((PDEVOBJ *)&a2);
          return v6(v8, 1, AppliedGammaRampTable);
        }
      }
      else if ( v5 == 3 && (*(_DWORD *)(a2 + 1456) & 0x100) != 0 && (a3 || *(_DWORD *)(a2 + 1048)) )
      {
        a2 = *(_DWORD *)(a2 + 1112);
        SETFLAG((volatile signed __int32 *)(a2 + 16), v3[262] != 0, 0x800000, a1, v12);
        *(_DWORD *)(a2 + 48) = v3;
        a3 = v3[10];
        GreAcquireSemaphore(a3);
        GreAcquireSemaphore(v3[8]);
        EtwTraceGreLockAcquireSemaphoreExclusive(L"po.hsemDevLock()", v3[8], 11);
        if ( (v3[6] & 0x400) == 0 )
        {
          v10 = (int (__stdcall *)(_DWORD, int *, _DWORD, _DWORD, _DWORD))v3[497];
          if ( v10 )
            v4 = v10(v3[277], &a2, 0, 0, *(_DWORD *)(a2 + 20));
        }
        EtwTraceGreLockReleaseSemaphore(L"po.hsemDevLock()", v3[8]);
        GreReleaseSemaphoreInternal(v3[8]);
        SEMOBJ::vUnlock((SEMOBJ *)&a3);
      }
    }
  }
  return v4;
}
