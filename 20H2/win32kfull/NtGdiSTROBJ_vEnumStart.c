/*
 * XREFs of NtGdiSTROBJ_vEnumStart @ 0x1C02B4310
 * Callers:
 *     <none>
 * Callees:
 *     ?GetThreadCurrentObj@UMPDOBJ@@SAPEAV1@PEAU_W32THREAD@@@Z @ 0x1C0087F2C (-GetThreadCurrentObj@UMPDOBJ@@SAPEAV1@PEAU_W32THREAD@@@Z.c)
 *     W32GetThreadWin32Thread @ 0x1C00B4FD0 (W32GetThreadWin32Thread.c)
 *     ??$GetDDIOBJ@U_STROBJ@@@UMPDOBJ@@QEAAPEAU_STROBJ@@PEAU1@@Z @ 0x1C01333DC (--$GetDDIOBJ@U_STROBJ@@@UMPDOBJ@@QEAAPEAU_STROBJ@@PEAU1@@Z.c)
 */

__int64 __fastcall NtGdiSTROBJ_vEnumStart(__int64 a1)
{
  struct _W32THREAD *ThreadWin32Thread; // rax
  struct UMPDOBJ *ThreadCurrentObj; // rax
  struct UMPDOBJ *v4; // rbx
  __int64 result; // rax
  unsigned __int64 v6; // rax

  ThreadWin32Thread = (struct _W32THREAD *)W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
  ThreadCurrentObj = UMPDOBJ::GetThreadCurrentObj(ThreadWin32Thread);
  v4 = ThreadCurrentObj;
  if ( ThreadCurrentObj )
  {
    ++*((_DWORD *)ThreadCurrentObj + 105);
    v6 = UMPDOBJ::GetDDIOBJ<_STROBJ>((__int64)ThreadCurrentObj, a1);
    if ( v6 )
    {
      *(_DWORD *)(v6 + 48) = 0;
      *(_DWORD *)(v6 + 52) = 0;
    }
    result = 0LL;
  }
  else
  {
    result = 3221225485LL;
  }
  if ( v4 )
    --*((_DWORD *)v4 + 105);
  return result;
}
