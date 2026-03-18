/*
 * XREFs of _NtGdiPATHOBJ_bEnumClipLines@12 @ 0x21A890
 * Callers:
 *     <none>
 * Callees:
 *     _W32GetThreadWin32Thread@4 @ 0x3FA3E (_W32GetThreadWin32Thread@4.c)
 *     _PALLOCMEM2@12 @ 0x48D0A (_PALLOCMEM2@12.c)
 *     ?GetThreadCurrentObj@UMPDOBJ@@SGPAV1@PAU_W32THREAD@@@Z @ 0x9593E (-GetThreadCurrentObj@UMPDOBJ@@SGPAV1@PAU_W32THREAD@@@Z.c)
 *     __SEH_prolog4 @ 0xF9120 (__SEH_prolog4.c)
 *     _memcpy @ 0xF929B (_memcpy.c)
 *     _memset @ 0xF92A7 (_memset.c)
 *     ??$GetDDIOBJ@U_PATHOBJ@@@UMPDOBJ@@QAEPAU_PATHOBJ@@PAU1@@Z @ 0x215F66 (--$GetDDIOBJ@U_PATHOBJ@@@UMPDOBJ@@QAEPAU_PATHOBJ@@PAU1@@Z.c)
 *     ?bEnumPath@XCLIPOBJ@@QAEHPAU_PATHOBJ@@KPAU_CLIPLINE@@H@Z @ 0x22360C (-bEnumPath@XCLIPOBJ@@QAEHPAU_PATHOBJ@@KPAU_CLIPLINE@@H@Z.c)
 */

int __stdcall NtGdiPATHOBJ_bEnumClipLines(int a1, SIZE_T Length, volatile void *Address)
{
  struct _CLIPLINE *v3; // edi
  PKTHREAD CurrentThread; // eax
  _DWORD *ThreadWin32Thread; // eax
  struct UMPDOBJ *ThreadCurrentObj; // eax
  struct UMPDOBJ *v7; // esi
  struct _CLIPLINE *v9; // eax
  SIZE_T i; // ecx
  int v11; // eax
  int v12; // eax
  int v13; // eax
  int v15; // [esp+18h] [ebp-1Ch]
  SIZE_T Lengtha; // [esp+40h] [ebp+Ch]

  v15 = 0;
  v3 = 0;
  CurrentThread = KeGetCurrentThread();
  ThreadWin32Thread = (_DWORD *)W32GetThreadWin32Thread(CurrentThread);
  ThreadCurrentObj = UMPDOBJ::GetThreadCurrentObj(ThreadWin32Thread);
  v7 = ThreadCurrentObj;
  if ( !ThreadCurrentObj )
    return 0;
  ++*((_DWORD *)ThreadCurrentObj + 57);
  if ( Length - 33 > 0x270FFDF )
  {
    --*((_DWORD *)ThreadCurrentObj + 57);
    return 0;
  }
  Lengtha = UMPDOBJ::GetDDIOBJ<_PATHOBJ>(ThreadCurrentObj, a1);
  if ( Lengtha )
  {
    v9 = (struct _CLIPLINE *)PALLOCMEM2(Length, 1886221639, 0);
    v3 = v9;
    if ( v9 )
    {
      for ( i = Length; i; --i )
      {
        LOBYTE(v9->ptfxA.x) = 0;
        v9 = (struct _CLIPLINE *)((char *)v9 + 1);
      }
      if ( (*((_DWORD *)v7 + 55) & 0x100) == 0 )
        goto LABEL_16;
      v11 = *(_DWORD *)(Lengtha + 44);
      if ( !v11 )
      {
        if ( gfUMPDDebug )
          _DbgPrint(
            "clientcore\\windows\\core\\ntgdi\\gre\\windows\\umpdeng.cxx:%d:NtGdiPATHOBJ_bEnumClipLines:ppo->pco == NULL\n",
            4027);
        v12 = 1;
        goto LABEL_19;
      }
      if ( *(_DWORD *)(v11 + 120) )
      {
LABEL_16:
        v13 = 0;
      }
      else
      {
        if ( gfUMPDDebug )
          _DbgPrint(
            "clientcore\\windows\\core\\ntgdi\\gre\\windows\\umpdeng.cxx:%d:NtGdiPATHOBJ_bEnumClipLines:ppo->pco->pcle == NULL\n",
            4033);
        v13 = 1;
        v15 = 1;
      }
      if ( !v13 )
      {
        v12 = XCLIPOBJ::bEnumPath(*(XCLIPOBJ **)(Lengtha + 44), (struct _PATHOBJ *)Lengtha, Length, v3, 0);
LABEL_19:
        v15 = v12;
      }
    }
  }
  ProbeForWrite(Address, Length, 4u);
  if ( v3 )
    memcpy((void *)Address, v3, Length);
  else
    memset((void *)Address, 0, Length);
  if ( v3 )
    Win32FreePool((PATHOBJ *)v3);
  --*((_DWORD *)v7 + 57);
  return v15;
}
