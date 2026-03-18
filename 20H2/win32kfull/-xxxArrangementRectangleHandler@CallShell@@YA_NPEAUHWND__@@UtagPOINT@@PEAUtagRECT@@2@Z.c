/*
 * XREFs of ?xxxArrangementRectangleHandler@CallShell@@YA_NPEAUHWND__@@UtagPOINT@@PEAUtagRECT@@2@Z @ 0x1C023D400
 * Callers:
 *     ?xxxGetSizeRectFromShell@@YAHPEAU_MOVESIZEDATA@@PEAUtagMONITOR@@W4eTHRESHOLD_MARGIN_DIRECTION@@PEAUtagRECT@@@Z @ 0x1C020E6E8 (-xxxGetSizeRectFromShell@@YAHPEAU_MOVESIZEDATA@@PEAUtagMONITOR@@W4eTHRESHOLD_MARGIN_DIRECTION@@P.c)
 * Callees:
 *     _anonymous_namespace_::xxxCallIAMWindowManagementHandler @ 0x1C007F1D0 (_anonymous_namespace_--xxxCallIAMWindowManagementHandler.c)
 *     __security_check_cookie @ 0x1C015A0C0 (__security_check_cookie.c)
 */

char __fastcall CallShell::xxxArrangementRectangleHandler(
        CallShell *this,
        HWND a2,
        struct tagPOINT a3,
        struct tagRECT *a4)
{
  char v6; // bl
  unsigned int v7; // ecx
  char v8; // r8
  int v9; // edx
  int v10; // eax
  struct tagRECT v11; // xmm1
  int v13[2]; // [rsp+20h] [rbp-58h] BYREF
  int v14; // [rsp+28h] [rbp-50h]
  HWND v15; // [rsp+2Ch] [rbp-4Ch]
  int v16; // [rsp+34h] [rbp-44h]
  int v17; // [rsp+38h] [rbp-40h]
  int v18; // [rsp+3Ch] [rbp-3Ch]
  __int128 v19; // [rsp+40h] [rbp-38h]
  struct tagRECT v20; // [rsp+50h] [rbp-28h]

  v14 = 0;
  v19 = 0LL;
  v20 = 0LL;
  *(_QWORD *)v13 = this;
  v6 = 1;
  *(_OWORD *)*(_QWORD *)&a3 = 0LL;
  v15 = a2;
  *a4 = 0LL;
  v7 = *(_DWORD *)(*(_QWORD *)(gptiCurrent + 432LL) + 388LL);
  if ( (v7 & 0x800000) != 0 )
    v17 = 2;
  else
    v17 = HIBYTE(v7) & 1;
  v18 = *(_DWORD *)(gptiCurrent + 1240LL);
  v8 = *(_BYTE *)(*(_QWORD *)(gptiCurrent + 432LL) + 232LL);
  v9 = (4 * (v8 & 1)) | 1;
  if ( (v8 & 0x10) == 0 )
    v9 = 4 * (v8 & 1);
  v10 = v9 | 2;
  if ( (v8 & 4) == 0 )
    v10 = v9;
  v16 = v10;
  if ( !(unsigned int)anonymous_namespace_::xxxCallIAMWindowManagementHandler((struct _LARGE_STRING *)v13) )
    return 0;
  v11 = v20;
  *(_OWORD *)*(_QWORD *)&a3 = v19;
  *a4 = v11;
  return v6;
}
