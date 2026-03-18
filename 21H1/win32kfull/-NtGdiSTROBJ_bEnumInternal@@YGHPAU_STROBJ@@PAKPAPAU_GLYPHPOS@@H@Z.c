/*
 * XREFs of ?NtGdiSTROBJ_bEnumInternal@@YGHPAU_STROBJ@@PAKPAPAU_GLYPHPOS@@H@Z @ 0x21643D
 * Callers:
 *     _NtGdiSTROBJ_bEnum@12 @ 0x21AC8C (_NtGdiSTROBJ_bEnum@12.c)
 *     _NtGdiSTROBJ_bEnumPositionsOnly@12 @ 0x21ACAA (_NtGdiSTROBJ_bEnumPositionsOnly@12.c)
 * Callees:
 *     _W32GetThreadWin32Thread@4 @ 0x3FA3E (_W32GetThreadWin32Thread@4.c)
 *     ?GetThreadCurrentObj@UMPDOBJ@@SGPAV1@PAU_W32THREAD@@@Z @ 0x9593E (-GetThreadCurrentObj@UMPDOBJ@@SGPAV1@PAU_W32THREAD@@@Z.c)
 *     __SEH_prolog4 @ 0xF9120 (__SEH_prolog4.c)
 *     _memcpy @ 0xF929B (_memcpy.c)
 *     ?_AllocUserMem@UMPDOBJ@@AAEPAXKH@Z @ 0x1F40D8 (-_AllocUserMem@UMPDOBJ@@AAEPAXKH@Z.c)
 *     ??$GetDDIOBJ@U_STROBJ@@@UMPDOBJ@@QAEPAU_STROBJ@@PAU1@@Z @ 0x216004 (--$GetDDIOBJ@U_STROBJ@@@UMPDOBJ@@QAEPAU_STROBJ@@PAU1@@Z.c)
 *     _STROBJ_bEnum@12 @ 0x2255A9 (_STROBJ_bEnum@12.c)
 *     _STROBJ_bEnumPositionsOnly@12 @ 0x225654 (_STROBJ_bEnumPositionsOnly@12.c)
 */

int __userpurge NtGdiSTROBJ_bEnumInternal@<eax>(
        ULONG a1@<edx>,
        int a2@<ecx>,
        struct _STROBJ *a3,
        unsigned int *a4,
        struct _GLYPHPOS **a5,
        int a6)
{
  PKTHREAD CurrentThread; // eax
  _DWORD *ThreadWin32Thread; // eax
  struct UMPDOBJ *ThreadCurrentObj; // eax
  UMPDOBJ *v10; // esi
  STROBJ *v11; // eax
  unsigned int *v12; // eax
  ULONG v13; // edi
  char *v14; // eax
  struct _STROBJ *v15; // ecx
  _DWORD *v16; // eax
  _DWORD *v17; // eax
  ULONG MaxCount; // [esp+14h] [ebp-2Ch]
  char *v20; // [esp+18h] [ebp-28h]
  PGLYPHPOS ppgpos; // [esp+20h] [ebp-20h] BYREF
  ULONG pc; // [esp+24h] [ebp-1Ch] BYREF
  CPPEH_RECORD ms_exc; // [esp+28h] [ebp-18h]
  unsigned int *v25; // [esp+4Ch] [ebp+Ch]

  ppgpos = 0;
  pc = 0;
  CurrentThread = KeGetCurrentThread();
  ThreadWin32Thread = (_DWORD *)W32GetThreadWin32Thread(CurrentThread);
  ThreadCurrentObj = UMPDOBJ::GetThreadCurrentObj(ThreadWin32Thread);
  v10 = ThreadCurrentObj;
  if ( !ThreadCurrentObj )
    return -1;
  ++*((_DWORD *)ThreadCurrentObj + 57);
  v11 = (STROBJ *)UMPDOBJ::GetDDIOBJ<_STROBJ>(ThreadCurrentObj, a2);
  if ( !v11
    || (!a4
      ? (v12 = (unsigned int *)STROBJ_bEnum(v11, &pc, &ppgpos))
      : (v12 = (unsigned int *)STROBJ_bEnumPositionsOnly(v11, &pc, &ppgpos)),
        (v25 = v12, v12 == (unsigned int *)-1)
     || (v13 = pc, pc > (unsigned int)&unk_271000)
     || (MaxCount = 16 * pc, v14 = UMPDOBJ::_AllocUserMem(v10, (char *)(16 * pc), 0), (v20 = v14) == 0)) )
  {
    --*((_DWORD *)v10 + 57);
    return -1;
  }
  ms_exc.registration.TryLevel = 0;
  memcpy(v14, ppgpos, MaxCount);
  v15 = a3;
  if ( (unsigned int)a3 >= _MmUserProbeAddress )
    v15 = (struct _STROBJ *)_MmUserProbeAddress;
  v15->cGlyphs = (ULONG)v20;
  v16 = (_DWORD *)_MmUserProbeAddress;
  if ( a1 < _MmUserProbeAddress )
    v16 = (_DWORD *)a1;
  *v16 = v13;
  ms_exc.registration.TryLevel = -2;
  if ( v13 )
  {
    v17 = v20 + 4;
    do
    {
      *v17 = 0;
      v17 += 4;
      --v13;
    }
    while ( v13 );
  }
  --*((_DWORD *)v10 + 57);
  return (int)v25;
}
