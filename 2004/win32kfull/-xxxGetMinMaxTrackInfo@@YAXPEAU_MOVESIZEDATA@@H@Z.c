/*
 * XREFs of ?xxxGetMinMaxTrackInfo@@YAXPEAU_MOVESIZEDATA@@H@Z @ 0x1C020F4FC
 * Callers:
 *     ?xxxCommitMoveSize@@YAXPEAUtagWND@@PEAU_MOVESIZEDATA@@@Z @ 0x1C020E280 (-xxxCommitMoveSize@@YAXPEAUtagWND@@PEAU_MOVESIZEDATA@@@Z.c)
 *     xxxInitializeMoveSizeData @ 0x1C021285C (xxxInitializeMoveSizeData.c)
 * Callees:
 *     xxxInitSendValidateMinMaxInfoEx @ 0x1C00216DC (xxxInitSendValidateMinMaxInfoEx.c)
 *     __security_check_cookie @ 0x1C0157760 (__security_check_cookie.c)
 */

void __fastcall xxxGetMinMaxTrackInfo(struct _MOVESIZEDATA *a1, int a2)
{
  struct tagWND *v3; // rcx
  __int128 v4; // [rsp+20h] [rbp-38h] BYREF
  __int128 v5; // [rsp+30h] [rbp-28h]
  __int64 v6; // [rsp+40h] [rbp-18h]

  v3 = (struct tagWND *)*((_QWORD *)a1 + 2);
  v6 = 0LL;
  v4 = 0LL;
  v5 = 0LL;
  xxxInitSendValidateMinMaxInfoEx(v3, (__int64)&v4, 0LL, a2);
  *((_QWORD *)a1 + 13) = *((_QWORD *)&v5 + 1);
  *((_QWORD *)a1 + 14) = v6;
}
