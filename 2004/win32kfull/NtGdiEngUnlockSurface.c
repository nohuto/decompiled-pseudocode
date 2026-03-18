/*
 * XREFs of NtGdiEngUnlockSurface @ 0x1C0150B10
 * Callers:
 *     <none>
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C00A7BBC (W32GetThreadWin32Thread.c)
 *     ?GetThreadCurrentObj@UMPDOBJ@@SAPEAV1@PEAU_W32THREAD@@@Z @ 0x1C00CC86C (-GetThreadCurrentObj@UMPDOBJ@@SAPEAV1@PEAU_W32THREAD@@@Z.c)
 *     ?UnlockSurface@UMPDOBJ@@QEAAXPEAU_SURFOBJ@@@Z @ 0x1C0150B74 (-UnlockSurface@UMPDOBJ@@QEAAXPEAU_SURFOBJ@@@Z.c)
 */

__int64 __fastcall NtGdiEngUnlockSurface(struct _SURFOBJ *a1)
{
  struct _W32THREAD *ThreadWin32Thread; // rax
  struct UMPDOBJ *ThreadCurrentObj; // rax
  UMPDOBJ *v4; // rcx
  struct UMPDOBJ *v5; // rbx
  __int64 result; // rax

  ThreadWin32Thread = (struct _W32THREAD *)W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
  ThreadCurrentObj = UMPDOBJ::GetThreadCurrentObj(ThreadWin32Thread);
  v5 = ThreadCurrentObj;
  if ( ThreadCurrentObj )
  {
    ++*((_DWORD *)ThreadCurrentObj + 105);
    UMPDOBJ::UnlockSurface(v4, a1);
    result = 0LL;
  }
  else
  {
    result = 3221225485LL;
  }
  if ( v5 )
    --*((_DWORD *)v5 + 105);
  return result;
}
