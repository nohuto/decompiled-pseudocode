/*
 * XREFs of _NtGdiSTROBJ_bGetAdvanceWidths@16 @ 0x21ACC8
 * Callers:
 *     <none>
 * Callees:
 *     _W32GetThreadWin32Thread@4 @ 0x3FA3E (_W32GetThreadWin32Thread@4.c)
 *     ?GetThreadCurrentObj@UMPDOBJ@@SGPAV1@PAU_W32THREAD@@@Z @ 0x9593E (-GetThreadCurrentObj@UMPDOBJ@@SGPAV1@PAU_W32THREAD@@@Z.c)
 *     __SEH_prolog4 @ 0xF9120 (__SEH_prolog4.c)
 *     _memcpy @ 0xF929B (_memcpy.c)
 *     ?_AllocUserMem@UMPDOBJ@@AAEPAXKH@Z @ 0x1F40D8 (-_AllocUserMem@UMPDOBJ@@AAEPAXKH@Z.c)
 *     ??$GetDDIOBJ@U_STROBJ@@@UMPDOBJ@@QAEPAU_STROBJ@@PAU1@@Z @ 0x216004 (--$GetDDIOBJ@U_STROBJ@@@UMPDOBJ@@QAEPAU_STROBJ@@PAU1@@Z.c)
 *     _STROBJ_bGetAdvanceWidths@16 @ 0x225693 (_STROBJ_bGetAdvanceWidths@16.c)
 */

BOOL __stdcall NtGdiSTROBJ_bGetAdvanceWidths(void *Src, ULONG iFirst, ULONG c, char *a4)
{
  PKTHREAD CurrentThread; // eax
  _DWORD *ThreadWin32Thread; // eax
  struct UMPDOBJ *ThreadCurrentObj; // eax
  UMPDOBJ *v7; // esi
  STROBJ *v8; // ebx
  size_t v9; // edi
  char *v10; // eax
  BOOL AdvanceWidths; // ebx
  char *Srca; // [esp+34h] [ebp+8h]

  CurrentThread = KeGetCurrentThread();
  ThreadWin32Thread = (_DWORD *)W32GetThreadWin32Thread(CurrentThread);
  ThreadCurrentObj = UMPDOBJ::GetThreadCurrentObj(ThreadWin32Thread);
  v7 = ThreadCurrentObj;
  if ( !ThreadCurrentObj )
    return 0;
  ++*((_DWORD *)ThreadCurrentObj + 57);
  v8 = (STROBJ *)UMPDOBJ::GetDDIOBJ<_STROBJ>(ThreadCurrentObj, (int)Src);
  if ( !v8
    || c > (unsigned int)&unk_271000
    || (v9 = 16 * c, v10 = UMPDOBJ::_AllocUserMem(v7, (char *)(16 * c), 0), (Srca = v10) == 0) )
  {
    --*((_DWORD *)v7 + 57);
    return 0;
  }
  AdvanceWidths = STROBJ_bGetAdvanceWidths(v8, iFirst, c, (POINTQF *)v10);
  if ( AdvanceWidths )
  {
    if ( (unsigned int)&a4[v9] > _MmUserProbeAddress || &a4[v9] <= a4 || ((unsigned __int8)a4 & 7) != 0 )
      *(_BYTE *)_MmUserProbeAddress = 0;
    memcpy(a4, Srca, v9);
  }
  --*((_DWORD *)v7 + 57);
  return AdvanceWidths;
}
