/*
 * XREFs of NtGdiFONTOBJ_pifi @ 0x1C0132AC0
 * Callers:
 *     <none>
 * Callees:
 *     ??1RFONTTMPOBJ@@QEAA@XZ @ 0x1C00262AC (--1RFONTTMPOBJ@@QEAA@XZ.c)
 *     ?_AllocUserMem@UMPDOBJ@@AEAAPEAXKH@Z @ 0x1C007092C (-_AllocUserMem@UMPDOBJ@@AEAAPEAXKH@Z.c)
 *     ?GetThreadCurrentObj@UMPDOBJ@@SAPEAV1@PEAU_W32THREAD@@@Z @ 0x1C0087F2C (-GetThreadCurrentObj@UMPDOBJ@@SAPEAV1@PEAU_W32THREAD@@@Z.c)
 *     W32GetThreadWin32Thread @ 0x1C00B4FD0 (W32GetThreadWin32Thread.c)
 *     ?UMPDReleaseRFONTSem@@YAHAEAVRFONTOBJ@@PEAVUMPDOBJ@@PEAK2PEAPEAH@Z @ 0x1C0132CC4 (-UMPDReleaseRFONTSem@@YAHAEAVRFONTOBJ@@PEAVUMPDOBJ@@PEAK2PEAPEAH@Z.c)
 *     ?UMPDAcquireRFONTSem@@YAXAEAVRFONTOBJ@@PEAVUMPDOBJ@@KKPEBH@Z @ 0x1C0132E9C (-UMPDAcquireRFONTSem@@YAXAEAVRFONTOBJ@@PEAVUMPDOBJ@@KKPEBH@Z.c)
 *     ??$GetDDIOBJ@U_FONTOBJ@@@UMPDOBJ@@QEAAPEAU_FONTOBJ@@PEAU1@@Z @ 0x1C0133004 (--$GetDDIOBJ@U_FONTOBJ@@@UMPDOBJ@@QEAAPEAU_FONTOBJ@@PEAU1@@Z.c)
 *     FONTOBJ_pifi @ 0x1C0133070 (FONTOBJ_pifi.c)
 *     ??0PUBLIC_PFTOBJ@@QEAA@PEAVPFT@@@Z @ 0x1C015D1E8 (--0PUBLIC_PFTOBJ@@QEAA@PEAVPFT@@@Z.c)
 *     memmove @ 0x1C015F5C0 (memmove.c)
 */

IFIMETRICS *__fastcall NtGdiFONTOBJ_pifi(__int64 a1)
{
  IFIMETRICS *v2; // rdi
  struct _W32THREAD *ThreadWin32Thread; // rax
  struct UMPDOBJ *ThreadCurrentObj; // rax
  struct UMPDOBJ *v5; // rbx
  struct PFT *v6; // rax
  FONTOBJ *v7; // rsi
  IFIMETRICS *v8; // rsi
  IFIMETRICS *v9; // rax
  IFIMETRICS *result; // rax
  char v11; // [rsp+48h] [rbp+10h] BYREF
  struct UMPDOBJ *v12; // [rsp+50h] [rbp+18h]

  v2 = 0LL;
  ThreadWin32Thread = (struct _W32THREAD *)W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
  ThreadCurrentObj = UMPDOBJ::GetThreadCurrentObj(ThreadWin32Thread);
  v5 = ThreadCurrentObj;
  v12 = ThreadCurrentObj;
  if ( !ThreadCurrentObj )
    return 0LL;
  ++*((_DWORD *)ThreadCurrentObj + 105);
  v6 = (struct PFT *)UMPDOBJ::GetDDIOBJ<_FONTOBJ>(ThreadCurrentObj, a1);
  v7 = (FONTOBJ *)v6;
  if ( v6 )
  {
    v2 = (IFIMETRICS *)*((_QWORD *)v5 + 40);
    if ( !v2 )
    {
      PUBLIC_PFTOBJ::PUBLIC_PFTOBJ((PUBLIC_PFTOBJ *)&v11, v6);
      UMPDAcquireRFONTSem((struct RFONTOBJ *)&v11, v5, 0, 0, 0LL);
      v2 = FONTOBJ_pifi(v7);
      if ( v2 && v2 >= MmSystemRangeStart )
      {
        v8 = v2;
        v9 = (IFIMETRICS *)UMPDOBJ::_AllocUserMem(v5, v2->cjThis, 0);
        v2 = v9;
        if ( v9 )
        {
          memmove(v9, v8, v8->cjThis);
          *((_QWORD *)v5 + 40) = v2;
        }
      }
      UMPDReleaseRFONTSem((struct RFONTOBJ *)&v11, v5, 0LL, 0LL, 0LL);
      RFONTTMPOBJ::~RFONTTMPOBJ((RFONTTMPOBJ *)&v11);
    }
  }
  result = v2;
  --*((_DWORD *)v5 + 105);
  return result;
}
