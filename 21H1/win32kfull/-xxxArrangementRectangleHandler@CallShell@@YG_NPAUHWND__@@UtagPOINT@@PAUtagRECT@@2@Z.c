/*
 * XREFs of ?xxxArrangementRectangleHandler@CallShell@@YG_NPAUHWND__@@UtagPOINT@@PAUtagRECT@@2@Z @ 0x19C3BB
 * Callers:
 *     ?xxxGetSizeRectFromShell@@YGHPAU_MOVESIZEDATA@@PAUtagMONITOR@@W4eTHRESHOLD_MARGIN_DIRECTION@@PAUtagRECT@@@Z @ 0x174406 (-xxxGetSizeRectFromShell@@YGHPAU_MOVESIZEDATA@@PAUtagMONITOR@@W4eTHRESHOLD_MARGIN_DIRECTION@@PAU.c)
 * Callees:
 *     _anonymous_namespace_::xxxCallIAMWindowManagementHandler @ 0x92764 (_anonymous_namespace_--xxxCallIAMWindowManagementHandler.c)
 *     _anonymous_namespace_::GetModifiersStateForShell @ 0xB5874 (_anonymous_namespace_--GetModifiersStateForShell.c)
 *     @__security_check_cookie@4 @ 0xED840 (@__security_check_cookie@4.c)
 */

char __userpurge CallShell::xxxArrangementRectangleHandler@<al>(
        _DWORD *a1@<edx>,
        int a2@<ecx>,
        CallShell *this,
        HWND a4,
        struct tagPOINT a5,
        struct tagRECT *a6,
        struct tagRECT *a7)
{
  char v7; // bl
  unsigned int v8; // eax
  _DWORD v11[5]; // [esp+14h] [ebp-40h] BYREF
  int v12; // [esp+28h] [ebp-2Ch]
  int v13; // [esp+2Ch] [ebp-28h]
  int v14; // [esp+30h] [ebp-24h]
  int v15; // [esp+34h] [ebp-20h]
  int v16; // [esp+38h] [ebp-1Ch]
  int v17; // [esp+3Ch] [ebp-18h]
  int v18; // [esp+40h] [ebp-14h]
  int v19; // [esp+44h] [ebp-10h]
  int v20; // [esp+48h] [ebp-Ch]
  int v21; // [esp+4Ch] [ebp-8h]

  v11[0] = a2;
  v7 = 1;
  *a1 = 0;
  a1[1] = 0;
  a1[2] = 0;
  a1[3] = 0;
  *(_DWORD *)this = 0;
  *((_DWORD *)this + 1) = 0;
  *((_DWORD *)this + 2) = 0;
  *((_DWORD *)this + 3) = 0;
  v14 = 0;
  v15 = 0;
  v16 = 0;
  v17 = 0;
  v18 = 0;
  v19 = 0;
  v20 = 0;
  v21 = 0;
  v11[1] = 0;
  v11[2] = a4;
  v11[3] = a5.x;
  v8 = *(_DWORD *)(*(_DWORD *)(_gptiCurrent + 236) + 284);
  if ( (v8 & 0x800000) != 0 )
    v12 = 2;
  else
    v12 = HIBYTE(v8) & 1;
  v13 = *(_DWORD *)(_gptiCurrent + 696);
  v11[4] = anonymous_namespace_::GetModifiersStateForShell(_gptiCurrent);
  if ( !anonymous_namespace_::xxxCallIAMWindowManagementHandler(v11) )
    return 0;
  *a1 = v14;
  a1[1] = v15;
  a1[2] = v16;
  a1[3] = v17;
  *(_DWORD *)this = v18;
  *((_DWORD *)this + 1) = v19;
  *((_DWORD *)this + 2) = v20;
  *((_DWORD *)this + 3) = v21;
  return v7;
}
