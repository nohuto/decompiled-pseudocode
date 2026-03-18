/*
 * XREFs of _NtGdiCLIPOBJ_bEnum@12 @ 0x21721F
 * Callers:
 *     <none>
 * Callees:
 *     _W32GetThreadWin32Thread@4 @ 0x3FA3E (_W32GetThreadWin32Thread@4.c)
 *     _PALLOCMEM2@12 @ 0x48D0A (_PALLOCMEM2@12.c)
 *     ?bEnum@XCLIPOBJ@@QAEHKPAXPAK@Z @ 0x8E412 (-bEnum@XCLIPOBJ@@QAEHKPAXPAK@Z.c)
 *     ?GetThreadCurrentObj@UMPDOBJ@@SGPAV1@PAU_W32THREAD@@@Z @ 0x9593E (-GetThreadCurrentObj@UMPDOBJ@@SGPAV1@PAU_W32THREAD@@@Z.c)
 *     ??$GetDDIOBJ@U_CLIPOBJ@@@UMPDOBJ@@QAEPAU_CLIPOBJ@@PAU1@@Z @ 0x1F37D6 (--$GetDDIOBJ@U_CLIPOBJ@@@UMPDOBJ@@QAEPAU_CLIPOBJ@@PAU1@@Z.c)
 *     ?bSafeCopyBits@@YGHPAX0K@Z @ 0x216D5F (-bSafeCopyBits@@YGHPAX0K@Z.c)
 */

int __userpurge NtGdiCLIPOBJ_bEnum@<eax>(void *a1@<ebx>, size_t MaxCount, size_t Size, char *a4)
{
  int v4; // edi
  PKTHREAD CurrentThread; // eax
  _DWORD *ThreadWin32Thread; // eax
  struct UMPDOBJ *ThreadCurrentObj; // eax
  struct UMPDOBJ *v8; // esi
  unsigned int v9; // eax
  char *v10; // ebx
  unsigned int v13; // [esp+0h] [ebp-10h]
  XCLIPOBJ *v14; // [esp+8h] [ebp-8h]
  int v15; // [esp+Ch] [ebp-4h]

  v4 = -1;
  v15 = -1;
  CurrentThread = KeGetCurrentThread();
  ThreadWin32Thread = (_DWORD *)W32GetThreadWin32Thread(CurrentThread);
  ThreadCurrentObj = UMPDOBJ::GetThreadCurrentObj(ThreadWin32Thread);
  v8 = ThreadCurrentObj;
  if ( !ThreadCurrentObj )
  {
    v4 = 0;
    goto LABEL_16;
  }
  ++*((_DWORD *)ThreadCurrentObj + 57);
  v9 = UMPDOBJ::GetDDIOBJ<_CLIPOBJ>(ThreadCurrentObj, MaxCount);
  v14 = (XCLIPOBJ *)v9;
  if ( !v9 )
    goto LABEL_15;
  if ( (*((_DWORD *)v8 + 55) & 0x100) == 0 || *(_DWORD *)(v9 + 48) )
  {
    if ( Size <= 0x2710000 )
    {
      v10 = (char *)PALLOCMEM2(Size, 1886221639, 0);
      if ( v10 )
      {
        MaxCount = 0;
        v15 = XCLIPOBJ::bEnum(v14, Size, v10, &MaxCount);
        if ( v15 != -1 && !bSafeCopyBits(v10, a4, MaxCount, a1, v13) )
          v15 = -1;
        Win32FreePool((PATHOBJ *)v10);
      }
    }
LABEL_15:
    v4 = v15;
    goto LABEL_16;
  }
  if ( gfUMPDDebug )
    _DbgPrint(
      "clientcore\\windows\\core\\ntgdi\\gre\\windows\\umpdeng.cxx:%d:NtGdiCLIPOBJ_bEnum:!peco->bValid()\n",
      2605);
LABEL_16:
  if ( v8 )
    --*((_DWORD *)v8 + 57);
  return v4;
}
