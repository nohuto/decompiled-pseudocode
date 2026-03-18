/*
 * XREFs of ?xxxProgrammaticSemiMaximize@@YGHPAU_MOVESIZEDATA@@PAUtagMONITOR@@W4eTHRESHOLD_MARGIN_DIRECTION@@@Z @ 0x1750AE
 * Callers:
 *     ?xxxApplyArrangeAction@@YGHPAUtagWND@@W4_WARR_STATES@@W4_WARR_ACTIONS@@JPAU_MOVESIZEDATA@@@Z @ 0x172C47 (-xxxApplyArrangeAction@@YGHPAUtagWND@@W4_WARR_STATES@@W4_WARR_ACTIONS@@JPAU_MOVESIZEDATA@@@Z.c)
 * Callees:
 *     __GetProp@12 @ 0x6E54C (__GetProp@12.c)
 *     _xxxMinMaximizeEx@24 @ 0xB3AD2 (_xxxMinMaximizeEx@24.c)
 *     @__security_check_cookie@4 @ 0xED840 (@__security_check_cookie@4.c)
 *     ?xxxCommitMoveSize@@YGXPAUtagWND@@PAU_MOVESIZEDATA@@@Z @ 0x1733E3 (-xxxCommitMoveSize@@YGXPAUtagWND@@PAU_MOVESIZEDATA@@@Z.c)
 *     ?xxxForceSizeRecToDockTarget@@YGHPAU_MOVESIZEDATA@@W4eTHRESHOLD_MARGIN_DIRECTION@@PAUtagMONITOR@@PAKPAUtagRECT@@PAPAUtagCHECKPOINT@@@Z @ 0x174294 (-xxxForceSizeRecToDockTarget@@YGHPAU_MOVESIZEDATA@@W4eTHRESHOLD_MARGIN_DIRECTION@@PAUtagMONITOR@.c)
 */

int __fastcall xxxProgrammaticSemiMaximize(_DWORD *a1, int a2, int a3)
{
  _DWORD *v3; // esi
  int result; // eax
  struct tagQ **v5; // ebx
  struct tagQ *v6; // ecx
  int *v7; // esi
  unsigned int v8; // ecx
  _DWORD *v9; // esi
  int v11; // [esp+14h] [ebp-20h] BYREF
  int Prop; // [esp+18h] [ebp-1Ch] BYREF
  int v13; // [esp+1Ch] [ebp-18h] BYREF
  int v14; // [esp+20h] [ebp-14h]
  int v15; // [esp+24h] [ebp-10h]
  int v16; // [esp+28h] [ebp-Ch]

  v11 = 0;
  Prop = 0;
  v13 = 0;
  v3 = a1;
  v14 = 0;
  v15 = 0;
  v16 = 0;
  result = xxxForceSizeRecToDockTarget(
             (int)a1,
             a3,
             a2,
             (struct _MOVESIZEDATA *)&v11,
             (unsigned int)&v13,
             (unsigned int *)&Prop);
  if ( result )
  {
    v5 = (struct tagQ **)(v3 + 2);
    if ( (v11 & 1) == 0 )
    {
      v6 = *v5;
      if ( (*(_BYTE *)(*((_DWORD *)*v5 + 5) + 23) & 0x20) == 0 )
      {
LABEL_8:
        v9 = v3 + 7;
        a1[3] = *v9++;
        a1[4] = *v9++;
        a1[5] = *v9;
        a1[6] = v9[1];
        xxxCommitMoveSize(v6, (int)a1);
        return 1;
      }
      v7 = v3 + 7;
      v13 = *v7++;
      v14 = *v7++;
      v15 = *v7;
      v16 = v7[1];
      v3 = a1;
      Prop = _GetProp((int)v6, LOWORD(WPP_MAIN_CB.Queue.Wcb.BufferChainingDpc), 1);
      *(_DWORD *)(Prop + 48) &= ~2u;
    }
    *(_DWORD *)(Prop + 48) = *(_DWORD *)(Prop + 48) & 0xFFFFFFF7 | (8 * (*(_BYTE *)(*((_DWORD *)*v5 + 5) + 145) & 1));
    *(_DWORD *)(Prop + 48) = *(_DWORD *)(Prop + 48) & 0xFFFFFFEF | (8 * (*(_BYTE *)(*((_DWORD *)*v5 + 5) + 145) & 2));
    v8 = (32 * (v3[77] & 4)) | 0x24;
    if ( (v3[77] & 0x20) != 0 )
      v8 = (32 * (v3[77] & 4)) | 0x64;
    xxxMinMaximizeEx(*v5, (struct tagWND *)9, v8, 0, (unsigned int *)&v13, 0);
    v6 = *v5;
    goto LABEL_8;
  }
  return result;
}
