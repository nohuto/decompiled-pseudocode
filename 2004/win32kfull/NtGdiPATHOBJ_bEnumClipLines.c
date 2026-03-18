/*
 * XREFs of NtGdiPATHOBJ_bEnumClipLines @ 0x1C02B51A0
 * Callers:
 *     <none>
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C00A7BBC (W32GetThreadWin32Thread.c)
 *     ?GetThreadCurrentObj@UMPDOBJ@@SAPEAV1@PEAU_W32THREAD@@@Z @ 0x1C00CC86C (-GetThreadCurrentObj@UMPDOBJ@@SAPEAV1@PEAU_W32THREAD@@@Z.c)
 *     PALLOCMEM2 @ 0x1C00D8F8C (PALLOCMEM2.c)
 *     ?bEnumPath@XCLIPOBJ@@QEAAHPEAU_PATHOBJ@@KPEAU_CLIPLINE@@H@Z @ 0x1C013DA04 (-bEnumPath@XCLIPOBJ@@QEAAHPEAU_PATHOBJ@@KPEAU_CLIPLINE@@H@Z.c)
 *     memmove @ 0x1C015BD40 (memmove.c)
 *     memset @ 0x1C015C000 (memset.c)
 *     ??$GetDDIOBJ@U_PATHOBJ@@@UMPDOBJ@@QEAAPEAU_PATHOBJ@@PEAU1@@Z @ 0x1C02B1D44 (--$GetDDIOBJ@U_PATHOBJ@@@UMPDOBJ@@QEAAPEAU_PATHOBJ@@PEAU1@@Z.c)
 */

_BOOL8 __fastcall NtGdiPATHOBJ_bEnumClipLines(__int64 a1, unsigned int a2, volatile void *a3)
{
  unsigned __int64 v4; // r13
  BOOL v6; // r14d
  struct _CLIPLINE *v7; // rsi
  struct _W32THREAD *ThreadWin32Thread; // rax
  struct UMPDOBJ *ThreadCurrentObj; // rax
  struct UMPDOBJ *v10; // rbx
  unsigned __int64 v11; // r15
  struct _CLIPLINE *v12; // rax
  __int64 v13; // rax

  v4 = a2;
  v6 = 0;
  v7 = 0LL;
  ThreadWin32Thread = (struct _W32THREAD *)W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
  ThreadCurrentObj = UMPDOBJ::GetThreadCurrentObj(ThreadWin32Thread);
  v10 = ThreadCurrentObj;
  if ( !ThreadCurrentObj )
    return 0LL;
  ++*((_DWORD *)ThreadCurrentObj + 105);
  if ( (unsigned int)(v4 - 33) > 0x270FFDF )
  {
    --*((_DWORD *)ThreadCurrentObj + 105);
    return 0LL;
  }
  v11 = UMPDOBJ::GetDDIOBJ<_PATHOBJ>((__int64)ThreadCurrentObj, a1);
  if ( v11 )
  {
    v12 = (struct _CLIPLINE *)PALLOCMEM2((unsigned int)v4, 1886221639LL, 0);
    v7 = v12;
    if ( v12 )
    {
      memset(v12, 0, v4);
      if ( (*((_DWORD *)v10 + 103) & 0x100) != 0 )
      {
        v13 = *(_QWORD *)(v11 + 72);
        if ( !v13 )
        {
          if ( gfUMPDDebug )
            DbgPrint(
              "clientcore\\windows\\core\\ntgdi\\gre\\windows\\umpdeng.cxx:%d:NtGdiPATHOBJ_bEnumClipLines:ppo->pco == NULL\n",
              4027);
          v6 = 1;
          goto LABEL_16;
        }
        if ( !*(_QWORD *)(v13 + 144) )
        {
          if ( gfUMPDDebug )
            DbgPrint(
              "clientcore\\windows\\core\\ntgdi\\gre\\windows\\umpdeng.cxx:%d:NtGdiPATHOBJ_bEnumClipLines:ppo->pco->pcle == NULL\n",
              4033);
          v6 = 1;
        }
      }
      if ( !v6 )
        v6 = XCLIPOBJ::bEnumPath(*(XCLIPOBJ **)(v11 + 72), (struct _PATHOBJ *)v11, v4, v7, 0);
    }
  }
LABEL_16:
  ProbeForWrite(a3, v4, 4u);
  if ( v7 )
    memmove((void *)a3, v7, v4);
  else
    memset((void *)a3, 0, v4);
  if ( v7 )
    Win32FreePool(v7);
  --*((_DWORD *)v10 + 105);
  return v6;
}
