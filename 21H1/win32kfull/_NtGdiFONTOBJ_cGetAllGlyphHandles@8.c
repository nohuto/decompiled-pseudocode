/*
 * XREFs of _NtGdiFONTOBJ_cGetAllGlyphHandles@8 @ 0x219DE2
 * Callers:
 *     <none>
 * Callees:
 *     _W32GetThreadWin32Thread@4 @ 0x3FA3E (_W32GetThreadWin32Thread@4.c)
 *     _PALLOCMEM2@12 @ 0x48D0A (_PALLOCMEM2@12.c)
 *     ?GetThreadCurrentObj@UMPDOBJ@@SGPAV1@PAU_W32THREAD@@@Z @ 0x9593E (-GetThreadCurrentObj@UMPDOBJ@@SGPAV1@PAU_W32THREAD@@@Z.c)
 *     _FONTOBJ_cGetAllGlyphHandles@8 @ 0x1F34D6 (_FONTOBJ_cGetAllGlyphHandles@8.c)
 *     ??$GetDDIOBJ@U_FONTOBJ@@@UMPDOBJ@@QAEPAU_FONTOBJ@@PAU1@@Z @ 0x1F3854 (--$GetDDIOBJ@U_FONTOBJ@@@UMPDOBJ@@QAEPAU_FONTOBJ@@PAU1@@Z.c)
 *     ?bSafeCopyBits@@YGHPAX0K@Z @ 0x216D5F (-bSafeCopyBits@@YGHPAX0K@Z.c)
 */

ULONG __stdcall NtGdiFONTOBJ_cGetAllGlyphHandles(int a1, char *a2)
{
  PATHOBJ *v2; // esi
  ULONG v3; // ebx
  PKTHREAD CurrentThread; // eax
  _DWORD *ThreadWin32Thread; // eax
  struct UMPDOBJ *ThreadCurrentObj; // eax
  struct UMPDOBJ *v7; // edi
  FONTOBJ *v8; // eax
  ULONG AllGlyphHandles; // eax
  void *v11; // [esp+0h] [ebp-10h]
  unsigned int v12; // [esp+4h] [ebp-Ch]
  ULONG v13; // [esp+Ch] [ebp-4h]
  FONTOBJ *v14; // [esp+18h] [ebp+8h]

  v2 = 0;
  v13 = 0;
  v3 = 0;
  CurrentThread = KeGetCurrentThread();
  ThreadWin32Thread = (_DWORD *)W32GetThreadWin32Thread(CurrentThread);
  ThreadCurrentObj = UMPDOBJ::GetThreadCurrentObj(ThreadWin32Thread);
  v7 = ThreadCurrentObj;
  if ( !ThreadCurrentObj )
    return v3;
  ++*((_DWORD *)ThreadCurrentObj + 57);
  v8 = (FONTOBJ *)UMPDOBJ::GetDDIOBJ<_FONTOBJ>(ThreadCurrentObj, a1);
  v14 = v8;
  if ( v8 )
  {
    if ( a2 )
    {
      AllGlyphHandles = FONTOBJ_cGetAllGlyphHandles(v8, 0);
      v13 = AllGlyphHandles;
      if ( AllGlyphHandles )
      {
        if ( AllGlyphHandles > 0x9C4000 )
          goto LABEL_14;
        v2 = (PATHOBJ *)PALLOCMEM2(4 * AllGlyphHandles, 1886221639, 0);
      }
      v8 = v14;
    }
    v3 = FONTOBJ_cGetAllGlyphHandles(v8, &v2->fl);
    if ( !v3 || !a2 )
    {
LABEL_12:
      if ( v2 )
        Win32FreePool(v2);
      goto LABEL_14;
    }
    if ( v2 )
    {
      v3 &= -(bSafeCopyBits(v2, a2, 4 * v13, v11, v12) != 0);
      goto LABEL_12;
    }
  }
LABEL_14:
  if ( v7 )
    --*((_DWORD *)v7 + 57);
  return v3;
}
