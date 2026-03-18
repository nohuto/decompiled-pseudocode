/*
 * XREFs of _NtGdiBRUSHOBJ_ulGetBrushColor@4 @ 0x217138
 * Callers:
 *     <none>
 * Callees:
 *     _W32GetThreadWin32Thread@4 @ 0x3FA3E (_W32GetThreadWin32Thread@4.c)
 *     ?GetThreadCurrentObj@UMPDOBJ@@SGPAV1@PAU_W32THREAD@@@Z @ 0x9593E (-GetThreadCurrentObj@UMPDOBJ@@SGPAV1@PAU_W32THREAD@@@Z.c)
 *     __SEH_prolog4 @ 0xF9120 (__SEH_prolog4.c)
 *     _BRUSHOBJ_ulGetBrushColor@4 @ 0x1CC906 (_BRUSHOBJ_ulGetBrushColor@4.c)
 *     ??$GetDDIOBJ@U_BRUSHOBJ@@@UMPDOBJ@@QAEPAU_BRUSHOBJ@@PAU1@@Z @ 0x215EDE (--$GetDDIOBJ@U_BRUSHOBJ@@@UMPDOBJ@@QAEPAU_BRUSHOBJ@@PAU1@@Z.c)
 */

ULONG __stdcall NtGdiBRUSHOBJ_ulGetBrushColor(ULONG a1)
{
  PKTHREAD CurrentThread; // eax
  _DWORD *ThreadWin32Thread; // eax
  struct UMPDOBJ *ThreadCurrentObj; // eax
  ULONG v5; // esi
  unsigned int v6; // eax
  ULONG BrushColor; // [esp+1Ch] [ebp-24h]
  struct UMPDOBJ *v8; // [esp+20h] [ebp-20h]

  CurrentThread = KeGetCurrentThread();
  ThreadWin32Thread = (_DWORD *)W32GetThreadWin32Thread(CurrentThread);
  ThreadCurrentObj = UMPDOBJ::GetThreadCurrentObj(ThreadWin32Thread);
  v8 = ThreadCurrentObj;
  if ( !ThreadCurrentObj )
    return 0;
  ++*((_DWORD *)ThreadCurrentObj + 57);
  BrushColor = 0;
  v5 = a1;
  v6 = UMPDOBJ::GetDDIOBJ<_BRUSHOBJ>(ThreadCurrentObj, a1);
  if ( v6 )
  {
    if ( a1 >= _MmUserProbeAddress )
      v5 = _MmUserProbeAddress;
    if ( (*(_DWORD *)(v5 + 8) & 8) != 0 && (*(_BYTE *)(v6 + 76) & 0x10) != 0 )
      *(_DWORD *)(v6 + 8) |= 8u;
    BrushColor = BRUSHOBJ_ulGetBrushColor((BRUSHOBJ *)v6);
    *(_DWORD *)(a1 + 8) &= ~8u;
  }
  --*((_DWORD *)v8 + 57);
  return BrushColor;
}
