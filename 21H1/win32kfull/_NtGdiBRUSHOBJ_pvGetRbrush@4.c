/*
 * XREFs of _NtGdiBRUSHOBJ_pvGetRbrush@4 @ 0x2170E1
 * Callers:
 *     <none>
 * Callees:
 *     _W32GetThreadWin32Thread@4 @ 0x3FA3E (_W32GetThreadWin32Thread@4.c)
 *     ?GetThreadCurrentObj@UMPDOBJ@@SGPAV1@PAU_W32THREAD@@@Z @ 0x9593E (-GetThreadCurrentObj@UMPDOBJ@@SGPAV1@PAU_W32THREAD@@@Z.c)
 *     ?BRUSHOBJ_pvGetRbrushUMPD@@YGPAXPAU_BRUSHOBJ@@@Z @ 0x1CC6D1 (-BRUSHOBJ_pvGetRbrushUMPD@@YGPAXPAU_BRUSHOBJ@@@Z.c)
 *     ??$GetDDIOBJ@U_BRUSHOBJ@@@UMPDOBJ@@QAEPAU_BRUSHOBJ@@PAU1@@Z @ 0x215EDE (--$GetDDIOBJ@U_BRUSHOBJ@@@UMPDOBJ@@QAEPAU_BRUSHOBJ@@PAU1@@Z.c)
 */

void *__stdcall NtGdiBRUSHOBJ_pvGetRbrush(int a1)
{
  PKTHREAD CurrentThread; // eax
  _DWORD *ThreadWin32Thread; // eax
  struct UMPDOBJ *ThreadCurrentObj; // eax
  struct UMPDOBJ *v4; // esi
  unsigned int v5; // eax
  void *result; // eax

  CurrentThread = KeGetCurrentThread();
  ThreadWin32Thread = (_DWORD *)W32GetThreadWin32Thread(CurrentThread);
  ThreadCurrentObj = UMPDOBJ::GetThreadCurrentObj(ThreadWin32Thread);
  v4 = ThreadCurrentObj;
  if ( ThreadCurrentObj
    && (++*((_DWORD *)ThreadCurrentObj + 57), (v5 = UMPDOBJ::GetDDIOBJ<_BRUSHOBJ>(ThreadCurrentObj, a1)) != 0) )
  {
    result = BRUSHOBJ_pvGetRbrushUMPD(v5);
  }
  else
  {
    result = 0;
  }
  if ( v4 )
    --*((_DWORD *)v4 + 57);
  return result;
}
