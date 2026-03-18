/*
 * XREFs of _NtGdiFONTOBJ_pQueryGlyphAttrs@8 @ 0x21A080
 * Callers:
 *     <none>
 * Callees:
 *     _W32GetThreadWin32Thread@4 @ 0x3FA3E (_W32GetThreadWin32Thread@4.c)
 *     ??1RFONTTMPOBJ@@QAE@XZ @ 0x869E4 (--1RFONTTMPOBJ@@QAE@XZ.c)
 *     ?GetThreadCurrentObj@UMPDOBJ@@SGPAV1@PAU_W32THREAD@@@Z @ 0x9593E (-GetThreadCurrentObj@UMPDOBJ@@SGPAV1@PAU_W32THREAD@@@Z.c)
 *     ??0PUBLIC_PFTOBJ@@QAE@PAVPFT@@@Z @ 0xAB9A0 (--0PUBLIC_PFTOBJ@@QAE@PAVPFT@@@Z.c)
 *     __SEH_prolog4 @ 0xF9120 (__SEH_prolog4.c)
 *     _memcpy @ 0xF929B (_memcpy.c)
 *     _FONTOBJ_pQueryGlyphAttrs@8 @ 0x1F3574 (_FONTOBJ_pQueryGlyphAttrs@8.c)
 *     ??$GetDDIOBJ@U_FONTOBJ@@@UMPDOBJ@@QAEPAU_FONTOBJ@@PAU1@@Z @ 0x1F3854 (--$GetDDIOBJ@U_FONTOBJ@@@UMPDOBJ@@QAEPAU_FONTOBJ@@PAU1@@Z.c)
 *     ?_AllocUserMem@UMPDOBJ@@AAEPAXKH@Z @ 0x1F40D8 (-_AllocUserMem@UMPDOBJ@@AAEPAXKH@Z.c)
 *     ?UMPDAcquireRFONTSem@@YGXAAVRFONTOBJ@@PAVUMPDOBJ@@KKPBH@Z @ 0x210A97 (-UMPDAcquireRFONTSem@@YGXAAVRFONTOBJ@@PAVUMPDOBJ@@KKPBH@Z.c)
 *     ?UMPDReleaseRFONTSem@@YGHAAVRFONTOBJ@@PAVUMPDOBJ@@PAK2PAPAH@Z @ 0x210CB8 (-UMPDReleaseRFONTSem@@YGHAAVRFONTOBJ@@PAVUMPDOBJ@@PAK2PAPAH@Z.c)
 */

char *__stdcall NtGdiFONTOBJ_pQueryGlyphAttrs(int a1, char *iMode)
{
  PKTHREAD CurrentThread; // eax
  _DWORD *ThreadWin32Thread; // eax
  struct UMPDOBJ *ThreadCurrentObj; // eax
  UMPDOBJ *v5; // esi
  struct PFT *v7; // eax
  char *v8; // ebx
  int *v9; // ecx
  PFD_GLYPHATTR GlyphAttrs; // eax
  char *v11; // eax
  unsigned int v12; // [esp+0h] [ebp-30h]
  unsigned int *v13; // [esp+0h] [ebp-30h]
  const int *v14; // [esp+4h] [ebp-2Ch]
  int **v15; // [esp+4h] [ebp-2Ch]
  FONTOBJ *pfo; // [esp+14h] [ebp-1Ch]
  FONTOBJ *pfoa; // [esp+14h] [ebp-1Ch]

  CurrentThread = KeGetCurrentThread();
  ThreadWin32Thread = (_DWORD *)W32GetThreadWin32Thread(CurrentThread);
  ThreadCurrentObj = UMPDOBJ::GetThreadCurrentObj(ThreadWin32Thread);
  v5 = ThreadCurrentObj;
  if ( !ThreadCurrentObj )
    return 0;
  ++*((_DWORD *)ThreadCurrentObj + 57);
  v7 = (struct PFT *)UMPDOBJ::GetDDIOBJ<_FONTOBJ>(ThreadCurrentObj, a1);
  pfo = (FONTOBJ *)v7;
  if ( !v7 )
  {
    --*((_DWORD *)v5 + 57);
    return 0;
  }
  v8 = 0;
  if ( *((_DWORD *)v5 + 44) )
  {
    v8 = (char *)*((_DWORD *)v5 + 44);
  }
  else
  {
    PUBLIC_PFTOBJ::PUBLIC_PFTOBJ((PUBLIC_PFTOBJ *)&a1, v7);
    UMPDAcquireRFONTSem(v5, v9, 0, 0, 0, v12, v14);
    GlyphAttrs = FONTOBJ_pQueryGlyphAttrs(pfo, (ULONG)iMode);
    pfoa = (FONTOBJ *)GlyphAttrs;
    if ( GlyphAttrs )
    {
      iMode = (char *)GlyphAttrs->cjThis;
      v11 = UMPDOBJ::_AllocUserMem(v5, iMode, 0);
      v8 = v11;
      if ( v11 )
      {
        memcpy(v11, pfoa, (size_t)iMode);
        *((_DWORD *)v5 + 44) = v8;
      }
    }
    UMPDReleaseRFONTSem(v5, &a1, 0, 0, 0, v13, v15);
    RFONTTMPOBJ::~RFONTTMPOBJ((RFONTTMPOBJ *)&a1);
  }
  --*((_DWORD *)v5 + 57);
  return v8;
}
