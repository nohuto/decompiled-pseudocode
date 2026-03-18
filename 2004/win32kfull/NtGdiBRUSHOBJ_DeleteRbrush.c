/*
 * XREFs of NtGdiBRUSHOBJ_DeleteRbrush @ 0x1C02B2450
 * Callers:
 *     <none>
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C00A7BBC (W32GetThreadWin32Thread.c)
 *     ?GetThreadCurrentObj@UMPDOBJ@@SAPEAV1@PEAU_W32THREAD@@@Z @ 0x1C00CC86C (-GetThreadCurrentObj@UMPDOBJ@@SAPEAV1@PEAU_W32THREAD@@@Z.c)
 *     ??$GetDDIOBJ@U_BRUSHOBJ@@@UMPDOBJ@@QEAAPEAU_BRUSHOBJ@@PEAU1@@Z @ 0x1C01302E8 (--$GetDDIOBJ@U_BRUSHOBJ@@@UMPDOBJ@@QEAAPEAU_BRUSHOBJ@@PEAU1@@Z.c)
 */

__int64 __fastcall NtGdiBRUSHOBJ_DeleteRbrush(__int64 a1, __int64 a2)
{
  struct _W32THREAD *ThreadWin32Thread; // rax
  struct UMPDOBJ *ThreadCurrentObj; // rax
  __int64 v6; // rbx
  unsigned int v7; // esi
  unsigned __int64 v8; // rax
  unsigned __int64 v9; // rdi
  unsigned __int64 v10; // rdx
  unsigned __int64 v11; // rax
  unsigned __int64 v12; // rdi
  unsigned __int64 v13; // rdx

  ThreadWin32Thread = (struct _W32THREAD *)W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
  ThreadCurrentObj = UMPDOBJ::GetThreadCurrentObj(ThreadWin32Thread);
  v6 = (__int64)ThreadCurrentObj;
  v7 = 1;
  if ( ThreadCurrentObj )
  {
    ++*((_DWORD *)ThreadCurrentObj + 105);
    if ( a1 )
    {
      v8 = UMPDOBJ::GetDDIOBJ<_BRUSHOBJ>((__int64)ThreadCurrentObj, a1);
      v9 = v8;
      if ( v8 )
      {
        v10 = *(_QWORD *)(v8 + 8);
        if ( v10 )
        {
          if ( v10 < (unsigned __int64)MmSystemRangeStart )
          {
            EngFreeUserMem((PVOID)(v10 - 16));
            *(_QWORD *)(v9 + 8) = 0LL;
          }
        }
      }
    }
    if ( a2 )
    {
      v11 = UMPDOBJ::GetDDIOBJ<_BRUSHOBJ>(v6, a2);
      v12 = v11;
      if ( v11 )
      {
        v13 = *(_QWORD *)(v11 + 8);
        if ( v13 )
        {
          if ( v13 < (unsigned __int64)MmSystemRangeStart )
          {
            EngFreeUserMem((PVOID)(v13 - 16));
            *(_QWORD *)(v12 + 8) = 0LL;
          }
        }
      }
    }
  }
  else
  {
    v7 = 0;
  }
  if ( v6 )
    --*(_DWORD *)(v6 + 420);
  return v7;
}
