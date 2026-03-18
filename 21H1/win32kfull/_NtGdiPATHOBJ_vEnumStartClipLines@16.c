/*
 * XREFs of _NtGdiPATHOBJ_vEnumStartClipLines@16 @ 0x21AAAC
 * Callers:
 *     <none>
 * Callees:
 *     _W32GetThreadWin32Thread@4 @ 0x3FA3E (_W32GetThreadWin32Thread@4.c)
 *     ?GetThreadCurrentObj@UMPDOBJ@@SGPAV1@PAU_W32THREAD@@@Z @ 0x9593E (-GetThreadCurrentObj@UMPDOBJ@@SGPAV1@PAU_W32THREAD@@@Z.c)
 *     ??$GetDDIOBJ@U_PATHOBJ@@@UMPDOBJ@@QAEPAU_PATHOBJ@@PAU1@@Z @ 0x215F66 (--$GetDDIOBJ@U_PATHOBJ@@@UMPDOBJ@@QAEPAU_PATHOBJ@@PAU1@@Z.c)
 *     ??0UMPDSURFOBJ@@QAE@PAU_SURFOBJ@@PAVUMPDOBJ@@@Z @ 0x216194 (--0UMPDSURFOBJ@@QAE@PAU_SURFOBJ@@PAVUMPDOBJ@@@Z.c)
 *     ?GetDDIOBJ@UMPDOBJ@@QAEPAU_CLIPOBJ@@PAU2@PAUtagSIZE@@@Z @ 0x21637D (-GetDDIOBJ@UMPDOBJ@@QAEPAU_CLIPOBJ@@PAU2@PAUtagSIZE@@@Z.c)
 *     ?bCaptureLINEATTRS@@YGHPAPAU_LINEATTRS@@PAU1@@Z @ 0x21684C (-bCaptureLINEATTRS@@YGHPAPAU_LINEATTRS@@PAU1@@Z.c)
 *     ?vEnumPathStart@XCLIPOBJ@@QAEXPAU_PATHOBJ@@PAVSURFACE@@PAU_LINEATTRS@@@Z @ 0x22389D (-vEnumPathStart@XCLIPOBJ@@QAEXPAU_PATHOBJ@@PAVSURFACE@@PAU_LINEATTRS@@@Z.c)
 */

int __stdcall NtGdiPATHOBJ_vEnumStartClipLines(int a1, struct _CLIPOBJ *a2, struct _SURFOBJ *a3, struct _LINEATTRS *a4)
{
  PKTHREAD CurrentThread; // eax
  _DWORD *ThreadWin32Thread; // eax
  struct UMPDOBJ *ThreadCurrentObj; // eax
  UMPDOBJ *v7; // esi
  int v8; // edi
  unsigned int v9; // eax
  SURFOBJ *v10; // ebx
  struct _CLIPOBJ *DDIOBJ; // eax
  XCLIPOBJ *v12; // ecx
  struct _LINEATTRS *v13; // edi
  unsigned int v15[8]; // [esp+8h] [ebp-28h] BYREF
  SURFOBJ *pso[2]; // [esp+28h] [ebp-8h] BYREF
  struct _CLIPOBJ *v17; // [esp+38h] [ebp+8h]
  struct _PATHOBJ *v18; // [esp+40h] [ebp+10h]

  memset(v15, 0, sizeof(v15));
  CurrentThread = KeGetCurrentThread();
  ThreadWin32Thread = (_DWORD *)W32GetThreadWin32Thread(CurrentThread);
  ThreadCurrentObj = UMPDOBJ::GetThreadCurrentObj(ThreadWin32Thread);
  v7 = ThreadCurrentObj;
  if ( !ThreadCurrentObj )
  {
    v8 = -1073741811;
    goto LABEL_24;
  }
  ++*((_DWORD *)ThreadCurrentObj + 57);
  UMPDSURFOBJ::UMPDSURFOBJ((UMPDSURFOBJ *)pso, a3, ThreadCurrentObj);
  v9 = UMPDOBJ::GetDDIOBJ<_PATHOBJ>(v7, a1);
  v10 = pso[0];
  v18 = (struct _PATHOBJ *)v9;
  if ( pso[0] && v9 && bCaptureLINEATTRS((const void **)&a4, v15) )
  {
    DDIOBJ = UMPDOBJ::GetDDIOBJ(v7, a2, (struct _CLIPOBJ *)&v10->sizlBitmap);
    v12 = (XCLIPOBJ *)DDIOBJ;
    v17 = DDIOBJ;
    if ( (*((_DWORD *)v7 + 55) & 0x100) == 0 )
    {
      v13 = a4;
      goto LABEL_18;
    }
    if ( !DDIOBJ && gfUMPDDebug )
      _DbgPrint(
        "clientcore\\windows\\core\\ntgdi\\gre\\windows\\umpdeng.cxx:%d:NtGdiPATHOBJ_vEnumStartClipLines:pco == NULL\n",
        3974);
    v13 = a4;
    if ( !a4 && gfUMPDDebug )
      _DbgPrint(
        "clientcore\\windows\\core\\ntgdi\\gre\\windows\\umpdeng.cxx:%d:NtGdiPATHOBJ_vEnumStartClipLines:pla == NULL\n",
        3979);
    v12 = (XCLIPOBJ *)v17;
    if ( !v17 )
      goto LABEL_19;
    if ( v13 )
    {
LABEL_18:
      XCLIPOBJ::vEnumPathStart(v12, v18, (struct SURFACE *)&v10[-1].lDelta, v13);
LABEL_19:
      if ( v13 && v13->pstyle )
        Win32FreePool((PATHOBJ *)v13->pstyle);
    }
  }
  v8 = 0;
  if ( pso[1] )
    EngUnlockSurface(v10);
LABEL_24:
  if ( v7 )
    --*((_DWORD *)v7 + 57);
  return v8;
}
