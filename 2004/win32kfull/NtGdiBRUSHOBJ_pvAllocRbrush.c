/*
 * XREFs of NtGdiBRUSHOBJ_pvAllocRbrush @ 0x1C02B25C0
 * Callers:
 *     <none>
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C00A7BBC (W32GetThreadWin32Thread.c)
 *     ?GetThreadCurrentObj@UMPDOBJ@@SAPEAV1@PEAU_W32THREAD@@@Z @ 0x1C00CC86C (-GetThreadCurrentObj@UMPDOBJ@@SAPEAV1@PEAU_W32THREAD@@@Z.c)
 *     ??$GetDDIOBJ@U_BRUSHOBJ@@@UMPDOBJ@@QEAAPEAU_BRUSHOBJ@@PEAU1@@Z @ 0x1C01302E8 (--$GetDDIOBJ@U_BRUSHOBJ@@@UMPDOBJ@@QEAAPEAU_BRUSHOBJ@@PEAU1@@Z.c)
 *     ?BRUSHOBJ_pvAllocRbrushUMPD@@YAPEAXPEAU_BRUSHOBJ@@K@Z @ 0x1C026DFCC (-BRUSHOBJ_pvAllocRbrushUMPD@@YAPEAXPEAU_BRUSHOBJ@@K@Z.c)
 */

PVOID __fastcall NtGdiBRUSHOBJ_pvAllocRbrush(__int64 a1, unsigned int a2)
{
  struct _W32THREAD *ThreadWin32Thread; // rax
  struct UMPDOBJ *ThreadCurrentObj; // rax
  struct UMPDOBJ *v6; // rbx
  struct _BRUSHOBJ *v7; // rax
  PVOID result; // rax

  ThreadWin32Thread = (struct _W32THREAD *)W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
  ThreadCurrentObj = UMPDOBJ::GetThreadCurrentObj(ThreadWin32Thread);
  v6 = ThreadCurrentObj;
  if ( ThreadCurrentObj
    && (++*((_DWORD *)ThreadCurrentObj + 105),
        (v7 = (struct _BRUSHOBJ *)UMPDOBJ::GetDDIOBJ<_BRUSHOBJ>((__int64)ThreadCurrentObj, a1)) != 0LL) )
  {
    result = BRUSHOBJ_pvAllocRbrushUMPD(v7, a2);
  }
  else
  {
    result = 0LL;
  }
  if ( v6 )
    --*((_DWORD *)v6 + 105);
  return result;
}
