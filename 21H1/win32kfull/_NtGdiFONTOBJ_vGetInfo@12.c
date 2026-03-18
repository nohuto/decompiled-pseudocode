/*
 * XREFs of _NtGdiFONTOBJ_vGetInfo@12 @ 0x21A4F5
 * Callers:
 *     <none>
 * Callees:
 *     _W32GetThreadWin32Thread@4 @ 0x3FA3E (_W32GetThreadWin32Thread@4.c)
 *     _PALLOCMEM2@12 @ 0x48D0A (_PALLOCMEM2@12.c)
 *     ?GetThreadCurrentObj@UMPDOBJ@@SGPAV1@PAU_W32THREAD@@@Z @ 0x9593E (-GetThreadCurrentObj@UMPDOBJ@@SGPAV1@PAU_W32THREAD@@@Z.c)
 *     __SEH_prolog4 @ 0xF9120 (__SEH_prolog4.c)
 *     _FONTOBJ_vGetInfo@12 @ 0x1F36D2 (_FONTOBJ_vGetInfo@12.c)
 *     ??$GetDDIOBJ@U_FONTOBJ@@@UMPDOBJ@@QAEPAU_FONTOBJ@@PAU1@@Z @ 0x1F3854 (--$GetDDIOBJ@U_FONTOBJ@@@UMPDOBJ@@QAEPAU_FONTOBJ@@PAU1@@Z.c)
 *     ?bSafeCopyBits@@YGHPAX0K@Z @ 0x216D5F (-bSafeCopyBits@@YGHPAX0K@Z.c)
 */

int __stdcall NtGdiFONTOBJ_vGetInfo(int a1, ULONG cjSize, char *a3)
{
  PKTHREAD CurrentThread; // eax
  _DWORD *ThreadWin32Thread; // eax
  struct UMPDOBJ *ThreadCurrentObj; // eax
  struct UMPDOBJ *v6; // esi
  unsigned int v8; // eax
  FONTINFO *v9; // ebx
  void *v10; // [esp+0h] [ebp-38h]
  unsigned int v11; // [esp+4h] [ebp-34h]
  FONTOBJ *pfo; // [esp+14h] [ebp-24h]

  CurrentThread = KeGetCurrentThread();
  ThreadWin32Thread = (_DWORD *)W32GetThreadWin32Thread(CurrentThread);
  ThreadCurrentObj = UMPDOBJ::GetThreadCurrentObj(ThreadWin32Thread);
  v6 = ThreadCurrentObj;
  if ( !ThreadCurrentObj )
    return -1073741811;
  ++*((_DWORD *)ThreadCurrentObj + 57);
  v8 = UMPDOBJ::GetDDIOBJ<_FONTOBJ>(ThreadCurrentObj, a1);
  pfo = (FONTOBJ *)v8;
  if ( v8 && cjSize && a3 && cjSize <= 0x2710000 )
  {
    v9 = (FONTINFO *)PALLOCMEM2(cjSize, 1886221639, 0);
    if ( v9 )
    {
      memset(v9, 0, cjSize);
      FONTOBJ_vGetInfo(pfo, cjSize, v9);
      bSafeCopyBits(v9, a3, cjSize, v10, v11);
      Win32FreePool((PATHOBJ *)v9);
    }
  }
  --*((_DWORD *)v6 + 57);
  return 0;
}
