/*
 * XREFs of _NtGdiBRUSHOBJ_pvAllocRbrush@8 @ 0x217087
 * Callers:
 *     <none>
 * Callees:
 *     _W32GetThreadWin32Thread@4 @ 0x3FA3E (_W32GetThreadWin32Thread@4.c)
 *     ?GetThreadCurrentObj@UMPDOBJ@@SGPAV1@PAU_W32THREAD@@@Z @ 0x9593E (-GetThreadCurrentObj@UMPDOBJ@@SGPAV1@PAU_W32THREAD@@@Z.c)
 *     ?BRUSHOBJ_pvAllocRbrushUMPD@@YGPAXPAU_BRUSHOBJ@@K@Z @ 0x1CC645 (-BRUSHOBJ_pvAllocRbrushUMPD@@YGPAXPAU_BRUSHOBJ@@K@Z.c)
 *     ??$GetDDIOBJ@U_BRUSHOBJ@@@UMPDOBJ@@QAEPAU_BRUSHOBJ@@PAU1@@Z @ 0x215EDE (--$GetDDIOBJ@U_BRUSHOBJ@@@UMPDOBJ@@QAEPAU_BRUSHOBJ@@PAU1@@Z.c)
 */

void *__stdcall NtGdiBRUSHOBJ_pvAllocRbrush(int a1, unsigned int a2)
{
  PKTHREAD CurrentThread; // eax
  _DWORD *ThreadWin32Thread; // eax
  struct UMPDOBJ *ThreadCurrentObj; // eax
  struct UMPDOBJ *v5; // esi
  unsigned int v6; // eax
  void *result; // eax

  CurrentThread = KeGetCurrentThread();
  ThreadWin32Thread = (_DWORD *)W32GetThreadWin32Thread(CurrentThread);
  ThreadCurrentObj = UMPDOBJ::GetThreadCurrentObj(ThreadWin32Thread);
  v5 = ThreadCurrentObj;
  if ( ThreadCurrentObj
    && (++*((_DWORD *)ThreadCurrentObj + 57), (v6 = UMPDOBJ::GetDDIOBJ<_BRUSHOBJ>(ThreadCurrentObj, a1)) != 0) )
  {
    result = BRUSHOBJ_pvAllocRbrushUMPD(v6, a2);
  }
  else
  {
    result = 0;
  }
  if ( v5 )
    --*((_DWORD *)v5 + 57);
  return result;
}
