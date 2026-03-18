/*
 * XREFs of _NtGdiBRUSHOBJ_DeleteRbrush@8 @ 0x216F80
 * Callers:
 *     <none>
 * Callees:
 *     _W32GetThreadWin32Thread@4 @ 0x3FA3E (_W32GetThreadWin32Thread@4.c)
 *     ?GetThreadCurrentObj@UMPDOBJ@@SGPAV1@PAU_W32THREAD@@@Z @ 0x9593E (-GetThreadCurrentObj@UMPDOBJ@@SGPAV1@PAU_W32THREAD@@@Z.c)
 *     ??$GetDDIOBJ@U_BRUSHOBJ@@@UMPDOBJ@@QAEPAU_BRUSHOBJ@@PAU1@@Z @ 0x215EDE (--$GetDDIOBJ@U_BRUSHOBJ@@@UMPDOBJ@@QAEPAU_BRUSHOBJ@@PAU1@@Z.c)
 */

int __stdcall NtGdiBRUSHOBJ_DeleteRbrush(int a1, int a2)
{
  PKTHREAD CurrentThread; // eax
  _DWORD *ThreadWin32Thread; // eax
  struct UMPDOBJ *ThreadCurrentObj; // eax
  struct UMPDOBJ *v5; // esi
  int result; // eax
  unsigned int v7; // eax
  unsigned int v8; // edi
  unsigned int v9; // eax
  unsigned int v10; // eax
  unsigned int v11; // edi
  unsigned int v12; // eax

  CurrentThread = KeGetCurrentThread();
  ThreadWin32Thread = (_DWORD *)W32GetThreadWin32Thread(CurrentThread);
  ThreadCurrentObj = UMPDOBJ::GetThreadCurrentObj(ThreadWin32Thread);
  v5 = ThreadCurrentObj;
  if ( ThreadCurrentObj )
  {
    ++*((_DWORD *)ThreadCurrentObj + 57);
    if ( a1 )
    {
      v7 = UMPDOBJ::GetDDIOBJ<_BRUSHOBJ>(ThreadCurrentObj, a1);
      v8 = v7;
      if ( v7 )
      {
        v9 = *(_DWORD *)(v7 + 4);
        if ( v9 )
        {
          if ( v9 < (unsigned int)_MmSystemRangeStart )
          {
            EngFreeUserMem((PVOID)(v9 - 16));
            *(_DWORD *)(v8 + 4) = 0;
          }
        }
      }
    }
    if ( a2 )
    {
      v10 = UMPDOBJ::GetDDIOBJ<_BRUSHOBJ>(v5, a2);
      v11 = v10;
      if ( v10 )
      {
        v12 = *(_DWORD *)(v10 + 4);
        if ( v12 )
        {
          if ( v12 < (unsigned int)_MmSystemRangeStart )
          {
            EngFreeUserMem((PVOID)(v12 - 16));
            *(_DWORD *)(v11 + 4) = 0;
          }
        }
      }
    }
    result = 1;
  }
  else
  {
    result = 0;
  }
  if ( v5 )
    --*((_DWORD *)v5 + 57);
  return result;
}
