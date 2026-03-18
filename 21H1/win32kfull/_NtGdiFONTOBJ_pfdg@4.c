/*
 * XREFs of _NtGdiFONTOBJ_pfdg@4 @ 0x21A194
 * Callers:
 *     <none>
 * Callees:
 *     _W32GetThreadWin32Thread@4 @ 0x3FA3E (_W32GetThreadWin32Thread@4.c)
 *     ??1RFONTOBJ@@QAE@XZ @ 0x86B86 (--1RFONTOBJ@@QAE@XZ.c)
 *     ?GetThreadCurrentObj@UMPDOBJ@@SGPAV1@PAU_W32THREAD@@@Z @ 0x9593E (-GetThreadCurrentObj@UMPDOBJ@@SGPAV1@PAU_W32THREAD@@@Z.c)
 *     ?WriteFD_GLYPHSET@@YGHPAU_FD_GLYPHSET@@0K@Z @ 0xE0034 (-WriteFD_GLYPHSET@@YGHPAU_FD_GLYPHSET@@0K@Z.c)
 *     ??$GetDDIOBJ@U_FONTOBJ@@@UMPDOBJ@@QAEPAU_FONTOBJ@@PAU1@@Z @ 0x1F3854 (--$GetDDIOBJ@U_FONTOBJ@@@UMPDOBJ@@QAEPAU_FONTOBJ@@PAU1@@Z.c)
 *     ?_AllocUserMem@UMPDOBJ@@AAEPAXKH@Z @ 0x1F40D8 (-_AllocUserMem@UMPDOBJ@@AAEPAXKH@Z.c)
 *     ?UMPDAcquireRFONTSem@@YGXAAVRFONTOBJ@@PAVUMPDOBJ@@KKPBH@Z @ 0x210A97 (-UMPDAcquireRFONTSem@@YGXAAVRFONTOBJ@@PAVUMPDOBJ@@KKPBH@Z.c)
 *     ?UMPDReleaseRFONTSem@@YGHAAVRFONTOBJ@@PAVUMPDOBJ@@PAK2PAPAH@Z @ 0x210CB8 (-UMPDReleaseRFONTSem@@YGHAAVRFONTOBJ@@PAVUMPDOBJ@@PAK2PAPAH@Z.c)
 */

FLONG __stdcall NtGdiFONTOBJ_pfdg(unsigned int a1)
{
  FLONG v1; // edi
  FLONG v2; // ebx
  PKTHREAD CurrentThread; // eax
  _DWORD *ThreadWin32Thread; // eax
  struct UMPDOBJ *ThreadCurrentObj; // eax
  UMPDOBJ *v6; // esi
  unsigned int v7; // eax
  FLONG v8; // ebx
  unsigned int flAccel; // edx
  char *v10; // eax
  char *v11; // eax
  unsigned int v13; // [esp+0h] [ebp-14h]
  struct _FD_GLYPHSET *v14; // [esp+0h] [ebp-14h]
  const int *v15; // [esp+4h] [ebp-10h]
  int **v16; // [esp+4h] [ebp-10h]
  _DWORD *v17; // [esp+Ch] [ebp-8h]
  struct _FD_GLYPHSET *v18; // [esp+10h] [ebp-4h]
  struct _FD_GLYPHSET *v19; // [esp+10h] [ebp-4h]

  v1 = 0;
  v2 = 0;
  CurrentThread = KeGetCurrentThread();
  ThreadWin32Thread = (_DWORD *)W32GetThreadWin32Thread(CurrentThread);
  ThreadCurrentObj = UMPDOBJ::GetThreadCurrentObj(ThreadWin32Thread);
  v6 = ThreadCurrentObj;
  if ( !ThreadCurrentObj )
    goto LABEL_14;
  ++*((_DWORD *)ThreadCurrentObj + 57);
  v7 = UMPDOBJ::GetDDIOBJ<_FONTOBJ>(ThreadCurrentObj, a1);
  v18 = (struct _FD_GLYPHSET *)v7;
  if ( !v7 || (v2 = *((_DWORD *)v6 + 43)) != 0 )
  {
    v1 = v2;
LABEL_14:
    v8 = v1;
    goto LABEL_15;
  }
  a1 = v7;
  UMPDAcquireRFONTSem(v6, (int *)&a1, 0, 0, 0, v13, v15);
  v8 = 0;
  flAccel = v18[22].flAccel;
  v17 = (_DWORD *)flAccel;
  if ( flAccel )
  {
    if ( flAccel < (unsigned int)_MmSystemRangeStart )
    {
      v8 = v18[22].flAccel;
      *((_DWORD *)v6 + 43) = flAccel;
    }
    else
    {
      v10 = (char *)(4 * (*(_DWORD *)(flAccel + 8) + 2 * *(_DWORD *)(flAccel + 12) + 4));
      v19 = (struct _FD_GLYPHSET *)v10;
      if ( v10 )
      {
        v11 = UMPDOBJ::_AllocUserMem(v6, v10, 0);
        v8 = (FLONG)v11;
        if ( v11 )
        {
          if ( WriteFD_GLYPHSET(v17, v11, v19, v14, (unsigned int)v16) )
            *((_DWORD *)v6 + 43) = v8;
          else
            v8 = 0;
        }
      }
    }
  }
  UMPDReleaseRFONTSem(v6, (int *)&a1, 0, 0, 0, &v14->cjThis, v16);
  a1 = 0;
  RFONTOBJ::~RFONTOBJ((RFONTOBJ *)&a1);
LABEL_15:
  if ( v6 )
    --*((_DWORD *)v6 + 57);
  return v8;
}
