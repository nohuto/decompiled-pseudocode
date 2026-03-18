/*
 * XREFs of NtGdiBRUSHOBJ_ulGetBrushColor @ 0x1C0131C00
 * Callers:
 *     <none>
 * Callees:
 *     ?GetThreadCurrentObj@UMPDOBJ@@SAPEAV1@PEAU_W32THREAD@@@Z @ 0x1C0087F2C (-GetThreadCurrentObj@UMPDOBJ@@SAPEAV1@PEAU_W32THREAD@@@Z.c)
 *     W32GetThreadWin32Thread @ 0x1C00B4FD0 (W32GetThreadWin32Thread.c)
 *     BRUSHOBJ_ulGetBrushColor @ 0x1C0131D00 (BRUSHOBJ_ulGetBrushColor.c)
 *     ??$GetDDIOBJ@U_BRUSHOBJ@@@UMPDOBJ@@QEAAPEAU_BRUSHOBJ@@PEAU1@@Z @ 0x1C013250C (--$GetDDIOBJ@U_BRUSHOBJ@@@UMPDOBJ@@QEAAPEAU_BRUSHOBJ@@PEAU1@@Z.c)
 */

__int64 __fastcall NtGdiBRUSHOBJ_ulGetBrushColor(ULONG64 a1)
{
  struct _W32THREAD *ThreadWin32Thread; // rax
  struct UMPDOBJ *ThreadCurrentObj; // rax
  struct UMPDOBJ *v4; // rbx
  ULONG BrushColor; // esi
  BRUSHOBJ *v6; // r8
  ULONG64 v7; // rax

  ThreadWin32Thread = (struct _W32THREAD *)W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
  ThreadCurrentObj = UMPDOBJ::GetThreadCurrentObj(ThreadWin32Thread);
  v4 = ThreadCurrentObj;
  if ( !ThreadCurrentObj )
    return 0LL;
  ++*((_DWORD *)ThreadCurrentObj + 105);
  BrushColor = 0;
  v6 = (BRUSHOBJ *)UMPDOBJ::GetDDIOBJ<_BRUSHOBJ>(ThreadCurrentObj, a1);
  if ( v6 )
  {
    v7 = a1;
    if ( a1 >= MmUserProbeAddress )
      v7 = MmUserProbeAddress;
    if ( (*(_QWORD *)(v7 + 16) & 8) != 0 && (v6[5].iSolidColor & 0x10) != 0 )
      v6->flColorType |= 8u;
    BrushColor = BRUSHOBJ_ulGetBrushColor(v6);
    *(_DWORD *)(a1 + 16) &= ~8u;
  }
  --*((_DWORD *)v4 + 105);
  return BrushColor;
}
