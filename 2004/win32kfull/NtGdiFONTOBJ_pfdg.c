/*
 * XREFs of NtGdiFONTOBJ_pfdg @ 0x1C02B4BC0
 * Callers:
 *     <none>
 * Callees:
 *     ??1RFONTOBJ@@QEAA@XZ @ 0x1C008502C (--1RFONTOBJ@@QEAA@XZ.c)
 *     W32GetThreadWin32Thread @ 0x1C00A7BBC (W32GetThreadWin32Thread.c)
 *     ?GetThreadCurrentObj@UMPDOBJ@@SAPEAV1@PEAU_W32THREAD@@@Z @ 0x1C00CC86C (-GetThreadCurrentObj@UMPDOBJ@@SAPEAV1@PEAU_W32THREAD@@@Z.c)
 *     ?_AllocUserMem@UMPDOBJ@@AEAAPEAXKH@Z @ 0x1C00D8188 (-_AllocUserMem@UMPDOBJ@@AEAAPEAXKH@Z.c)
 *     ?WriteFD_GLYPHSET@@YAHPEAU_FD_GLYPHSET@@0K@Z @ 0x1C00F4824 (-WriteFD_GLYPHSET@@YAHPEAU_FD_GLYPHSET@@0K@Z.c)
 *     ?UMPDReleaseRFONTSem@@YAHAEAVRFONTOBJ@@PEAVUMPDOBJ@@PEAK2PEAPEAH@Z @ 0x1C0130AA4 (-UMPDReleaseRFONTSem@@YAHAEAVRFONTOBJ@@PEAVUMPDOBJ@@PEAK2PEAPEAH@Z.c)
 *     ?UMPDAcquireRFONTSem@@YAXAEAVRFONTOBJ@@PEAVUMPDOBJ@@KKPEBH@Z @ 0x1C0130C7C (-UMPDAcquireRFONTSem@@YAXAEAVRFONTOBJ@@PEAVUMPDOBJ@@KKPEBH@Z.c)
 *     ??$GetDDIOBJ@U_FONTOBJ@@@UMPDOBJ@@QEAAPEAU_FONTOBJ@@PEAU1@@Z @ 0x1C0130DE4 (--$GetDDIOBJ@U_FONTOBJ@@@UMPDOBJ@@QEAAPEAU_FONTOBJ@@PEAU1@@Z.c)
 */

struct _FD_GLYPHSET *__fastcall NtGdiFONTOBJ_pfdg(__int64 a1)
{
  struct _FD_GLYPHSET *v2; // rdi
  struct _W32THREAD *ThreadWin32Thread; // rax
  struct UMPDOBJ *ThreadCurrentObj; // rax
  struct UMPDOBJ *v5; // rbx
  unsigned __int64 v6; // rax
  unsigned __int64 v7; // rsi
  struct _FD_GLYPHSET *v8; // rsi
  unsigned int v9; // ebp
  struct _FD_GLYPHSET *v10; // rax
  unsigned __int64 v12; // [rsp+48h] [rbp+10h] BYREF

  v2 = 0LL;
  ThreadWin32Thread = (struct _W32THREAD *)W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
  ThreadCurrentObj = UMPDOBJ::GetThreadCurrentObj(ThreadWin32Thread);
  v5 = ThreadCurrentObj;
  if ( ThreadCurrentObj )
  {
    ++*((_DWORD *)ThreadCurrentObj + 105);
    v6 = UMPDOBJ::GetDDIOBJ<_FONTOBJ>((__int64)ThreadCurrentObj, a1);
    v7 = v6;
    if ( v6 )
    {
      v2 = (struct _FD_GLYPHSET *)*((_QWORD *)v5 + 41);
      if ( !v2 )
      {
        v12 = v6;
        UMPDAcquireRFONTSem((struct RFONTOBJ *)&v12, v5, 0, 0, 0LL);
        v8 = *(struct _FD_GLYPHSET **)(v7 + 472);
        if ( v8 )
        {
          if ( v8 < MmSystemRangeStart )
          {
            v2 = v8;
            *((_QWORD *)v5 + 41) = v8;
          }
          else
          {
            v9 = 4 * (v8->cGlyphsSupported + 4 * (v8->cRuns + 1));
            if ( v9 )
            {
              v10 = (struct _FD_GLYPHSET *)UMPDOBJ::_AllocUserMem(v5, v9, 0);
              v2 = v10;
              if ( v10 )
              {
                if ( (unsigned int)WriteFD_GLYPHSET(v10, v8, v9) )
                  *((_QWORD *)v5 + 41) = v2;
                else
                  v2 = 0LL;
              }
            }
          }
        }
        UMPDReleaseRFONTSem((struct RFONTOBJ *)&v12, v5, 0LL, 0LL, 0LL);
        v12 = 0LL;
        RFONTOBJ::~RFONTOBJ((RFONTOBJ *)&v12);
      }
    }
    if ( v5 )
      --*((_DWORD *)v5 + 105);
  }
  return v2;
}
