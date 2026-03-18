/*
 * XREFs of NtGdiCLIPOBJ_ppoGetPath @ 0x1C02B28E0
 * Callers:
 *     <none>
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C00A7BBC (W32GetThreadWin32Thread.c)
 *     ?GetThreadCurrentObj@UMPDOBJ@@SAPEAV1@PEAU_W32THREAD@@@Z @ 0x1C00CC86C (-GetThreadCurrentObj@UMPDOBJ@@SAPEAV1@PEAU_W32THREAD@@@Z.c)
 *     ?GetCLIPOBJPath@UMPDOBJ@@QEAAPEAU_PATHOBJ@@PEAU_CLIPOBJ@@@Z @ 0x1C0294380 (-GetCLIPOBJPath@UMPDOBJ@@QEAAPEAU_PATHOBJ@@PEAU_CLIPOBJ@@@Z.c)
 */

struct _PATHOBJ *__fastcall NtGdiCLIPOBJ_ppoGetPath(struct _CLIPOBJ *a1)
{
  struct _W32THREAD *ThreadWin32Thread; // rax
  struct UMPDOBJ *ThreadCurrentObj; // rax
  struct UMPDOBJ *v4; // rbx
  struct _PATHOBJ *result; // rax

  ThreadWin32Thread = (struct _W32THREAD *)W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
  ThreadCurrentObj = UMPDOBJ::GetThreadCurrentObj(ThreadWin32Thread);
  v4 = ThreadCurrentObj;
  if ( ThreadCurrentObj )
  {
    ++*((_DWORD *)ThreadCurrentObj + 105);
    result = UMPDOBJ::GetCLIPOBJPath(ThreadCurrentObj, a1);
  }
  else
  {
    result = 0LL;
  }
  if ( v4 )
    --*((_DWORD *)v4 + 105);
  return result;
}
