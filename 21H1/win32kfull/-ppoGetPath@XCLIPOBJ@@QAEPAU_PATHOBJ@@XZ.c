/*
 * XREFs of ?ppoGetPath@XCLIPOBJ@@QAEPAU_PATHOBJ@@XZ @ 0x1CCB24
 * Callers:
 *     _CLIPOBJ_ppoGetPath@4 @ 0x1CCCD7 (_CLIPOBJ_ppoGetPath@4.c)
 *     ?GetCLIPOBJPath@UMPDOBJ@@QAEPAU_PATHOBJ@@PAU_CLIPOBJ@@@Z @ 0x1F3AFC (-GetCLIPOBJPath@UMPDOBJ@@QAEPAU_PATHOBJ@@PAU_CLIPOBJ@@@Z.c)
 *     _VerifierCLIPOBJ_ppoGetPath@4 @ 0x1FC7A3 (_VerifierCLIPOBJ_ppoGetPath@4.c)
 * Callees:
 *     _PALLOCMEM2@12 @ 0x48D0A (_PALLOCMEM2@12.c)
 *     @__security_check_cookie@4 @ 0xED840 (@__security_check_cookie@4.c)
 *     ?vLock@EPATHOBJ@@QAEXPAUHPATH__@@@Z @ 0x1CCC42 (-vLock@EPATHOBJ@@QAEXPAUHPATH__@@@Z.c)
 *     ?bDiagonalizePath@RTP_PATHMEMOBJ@@QAEHPAVEPATHOBJ@@@Z @ 0x228189 (-bDiagonalizePath@RTP_PATHMEMOBJ@@QAEHPAVEPATHOBJ@@@Z.c)
 */

struct _PATHOBJ *__thiscall XCLIPOBJ::ppoGetPath(XCLIPOBJ *this)
{
  struct _PATHOBJ *v1; // esi
  struct _PATHOBJ *result; // eax
  struct _PATHOBJ *v3; // ebx
  _DWORD v4[17]; // [esp+8h] [ebp-FCh] BYREF
  _BYTE v5[12]; // [esp+4Ch] [ebp-B8h] BYREF
  XCLIPOBJ *v6; // [esp+58h] [ebp-ACh]
  _BYTE v7[8]; // [esp+5Ch] [ebp-A8h] BYREF
  int v8; // [esp+64h] [ebp-A0h]

  v1 = 0;
  v6 = this;
  result = (struct _PATHOBJ *)PALLOCMEM2(0x30u, 1869639751, 0);
  v3 = result;
  if ( result )
  {
    PATHMEMOBJ::PATHMEMOBJ((PATHMEMOBJ *)v4);
    if ( v4[2] )
    {
      EXFORMOBJ::EXFORMOBJ((EXFORMOBJ *)v5, 1u, 8u);
      PATHMEMOBJ::PATHMEMOBJ((PATHMEMOBJ *)v7);
      if ( v8
        && RGNOBJ::bCreate((XCLIPOBJ *)((char *)v6 + 48), (struct EPATHOBJ *)v7, (struct EXFORMOBJ *)v5)
        && RTP_PATHMEMOBJ::bDiagonalizePath((RTP_PATHMEMOBJ *)v7, (struct EPATHOBJ *)v4) )
      {
        PATHMEMOBJ::~PATHMEMOBJ((PATHMEMOBJ *)v7);
        qmemcpy(v3, v4, 0x30u);
        EPATHOBJ::vLock((EPATHOBJ *)v3, *(struct HPATH__ **)v4[2]);
        v1 = v3;
        v3->cCurves = v4[1];
        v3->fl = v4[0];
      }
      else
      {
        Win32FreePool(v3);
        PATHMEMOBJ::~PATHMEMOBJ((PATHMEMOBJ *)v7);
      }
    }
    else
    {
      Win32FreePool(v3);
    }
    PATHMEMOBJ::~PATHMEMOBJ((PATHMEMOBJ *)v4);
    return v1;
  }
  return result;
}
