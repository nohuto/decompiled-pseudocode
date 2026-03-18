/*
 * XREFs of _NtGdiFONTOBJ_pifi@4 @ 0x21A29C
 * Callers:
 *     <none>
 * Callees:
 *     _W32GetThreadWin32Thread@4 @ 0x3FA3E (_W32GetThreadWin32Thread@4.c)
 *     ??1RFONTTMPOBJ@@QAE@XZ @ 0x869E4 (--1RFONTTMPOBJ@@QAE@XZ.c)
 *     ?GetThreadCurrentObj@UMPDOBJ@@SGPAV1@PAU_W32THREAD@@@Z @ 0x9593E (-GetThreadCurrentObj@UMPDOBJ@@SGPAV1@PAU_W32THREAD@@@Z.c)
 *     ??0PUBLIC_PFTOBJ@@QAE@PAVPFT@@@Z @ 0xAB9A0 (--0PUBLIC_PFTOBJ@@QAE@PAVPFT@@@Z.c)
 *     __SEH_prolog4 @ 0xF9120 (__SEH_prolog4.c)
 *     _memcpy @ 0xF929B (_memcpy.c)
 *     _FONTOBJ_pifi@4 @ 0x1F35DA (_FONTOBJ_pifi@4.c)
 *     ??$GetDDIOBJ@U_FONTOBJ@@@UMPDOBJ@@QAEPAU_FONTOBJ@@PAU1@@Z @ 0x1F3854 (--$GetDDIOBJ@U_FONTOBJ@@@UMPDOBJ@@QAEPAU_FONTOBJ@@PAU1@@Z.c)
 *     ?_AllocUserMem@UMPDOBJ@@AAEPAXKH@Z @ 0x1F40D8 (-_AllocUserMem@UMPDOBJ@@AAEPAXKH@Z.c)
 *     ?UMPDAcquireRFONTSem@@YGXAAVRFONTOBJ@@PAVUMPDOBJ@@KKPBH@Z @ 0x210A97 (-UMPDAcquireRFONTSem@@YGXAAVRFONTOBJ@@PAVUMPDOBJ@@KKPBH@Z.c)
 *     ?UMPDReleaseRFONTSem@@YGHAAVRFONTOBJ@@PAVUMPDOBJ@@PAK2PAPAH@Z @ 0x210CB8 (-UMPDReleaseRFONTSem@@YGHAAVRFONTOBJ@@PAVUMPDOBJ@@PAK2PAPAH@Z.c)
 */

char *__stdcall NtGdiFONTOBJ_pifi(int a1)
{
  char *v1; // edi
  PKTHREAD CurrentThread; // eax
  _DWORD *ThreadWin32Thread; // eax
  struct UMPDOBJ *ThreadCurrentObj; // eax
  UMPDOBJ *v5; // esi
  char *result; // eax
  struct PFT *v7; // eax
  int *v8; // ecx
  char **v9; // eax
  unsigned int v10; // [esp+0h] [ebp-30h]
  unsigned int *v11; // [esp+0h] [ebp-30h]
  const int *v12; // [esp+4h] [ebp-2Ch]
  int **v13; // [esp+4h] [ebp-2Ch]
  FONTOBJ *pfo; // [esp+14h] [ebp-1Ch]
  FONTOBJ *pfoa; // [esp+14h] [ebp-1Ch]

  v1 = 0;
  CurrentThread = KeGetCurrentThread();
  ThreadWin32Thread = (_DWORD *)W32GetThreadWin32Thread(CurrentThread);
  ThreadCurrentObj = UMPDOBJ::GetThreadCurrentObj(ThreadWin32Thread);
  v5 = ThreadCurrentObj;
  if ( !ThreadCurrentObj )
    return 0;
  ++*((_DWORD *)ThreadCurrentObj + 57);
  v7 = (struct PFT *)UMPDOBJ::GetDDIOBJ<_FONTOBJ>(ThreadCurrentObj, a1);
  pfo = (FONTOBJ *)v7;
  if ( v7 )
  {
    v1 = (char *)*((_DWORD *)v5 + 42);
    if ( !v1 )
    {
      PUBLIC_PFTOBJ::PUBLIC_PFTOBJ((PUBLIC_PFTOBJ *)&a1, v7);
      UMPDAcquireRFONTSem(v5, v8, 0, 0, 0, v10, v12);
      v9 = (char **)FONTOBJ_pifi(pfo);
      v1 = (char *)v9;
      if ( v9 && v9 >= _MmSystemRangeStart )
      {
        pfoa = (FONTOBJ *)v9;
        v1 = UMPDOBJ::_AllocUserMem(v5, *v9, 0);
        if ( v1 )
        {
          memcpy(v1, pfoa, pfoa->iUniq);
          *((_DWORD *)v5 + 42) = v1;
        }
      }
      UMPDReleaseRFONTSem(v5, &a1, 0, 0, 0, v11, v13);
      RFONTTMPOBJ::~RFONTTMPOBJ((RFONTTMPOBJ *)&a1);
    }
  }
  result = v1;
  --*((_DWORD *)v5 + 57);
  return result;
}
