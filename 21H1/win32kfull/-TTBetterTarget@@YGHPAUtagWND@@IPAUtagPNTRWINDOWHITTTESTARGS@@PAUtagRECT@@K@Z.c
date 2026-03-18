/*
 * XREFs of ?TTBetterTarget@@YGHPAUtagWND@@IPAUtagPNTRWINDOWHITTTESTARGS@@PAUtagRECT@@K@Z @ 0x179D48
 * Callers:
 *     ?_TTCheckNCTarget@@YGHUtagRECT@@PAUtagWND@@PAUtagPNTRWINDOWHITTTESTARGS@@PAU1@PAGPAUtagPOINT@@3K@Z @ 0x17A3C7 (-_TTCheckNCTarget@@YGHUtagRECT@@PAUtagWND@@PAUtagPNTRWINDOWHITTTESTARGS@@PAU1@PAGPAUtagPOINT@@3K.c)
 *     ?xxxTargetingHitTest@@YGPAUHWND__@@PAUtagWND@@UtagPOINT@@1PAUtagPNTRWINDOWHITTTESTARGS@@PAHUtagRECT@@KW4tagTARGETING_PROPERTY@@@Z @ 0x17AAE3 (-xxxTargetingHitTest@@YGPAUHWND__@@PAUtagWND@@UtagPOINT@@1PAUtagPNTRWINDOWHITTTESTARGS@@PAHUtagR.c)
 * Callees:
 *     _IntersectRect@12 @ 0x36374 (_IntersectRect@12.c)
 *     @__security_check_cookie@4 @ 0xED840 (@__security_check_cookie@4.c)
 *     ?GetScreenRect@@YG?AUtagRECT@@HPBU_D3DMATRIX@@U1@@Z @ 0x179C6A (-GetScreenRect@@YG-AUtagRECT@@HPBU_D3DMATRIX@@U1@@Z.c)
 *     ?_TTBetterRank@@YGHIHIH@Z @ 0x17A392 (-_TTBetterRank@@YGHIHIH@Z.c)
 */

int __userpurge TTBetterTarget@<eax>(
        int a1@<edx>,
        int a2@<ecx>,
        struct tagWND *a3,
        int *a4,
        struct tagPNTRWINDOWHITTTESTARGS *a5,
        struct tagRECT *a6,
        unsigned int a7)
{
  int v7; // esi
  int result; // eax
  int v9; // esi
  struct tagRECT *ScreenRect; // esi
  LONG v11; // eax
  struct tagRECT *v12; // esi
  LONG v13; // eax
  struct tagRECT v14; // [esp-8h] [ebp-84h]
  struct tagRECT v15; // [esp-8h] [ebp-84h]
  struct tagRECT v16; // [esp-8h] [ebp-84h]
  struct tagRECT v17; // [esp-8h] [ebp-84h]
  unsigned int v18; // [esp+0h] [ebp-7Ch]
  int v19; // [esp+4h] [ebp-78h]
  struct tagRECT v20; // [esp+10h] [ebp-6Ch] BYREF
  struct tagRECT v21; // [esp+20h] [ebp-5Ch] BYREF
  struct tagRECT v22; // [esp+30h] [ebp-4Ch] BYREF
  struct tagRECT v23; // [esp+40h] [ebp-3Ch] BYREF
  const struct _D3DMATRIX *v24; // [esp+50h] [ebp-2Ch] BYREF
  const struct _D3DMATRIX *v25; // [esp+54h] [ebp-28h]
  __int64 v26; // [esp+58h] [ebp-24h]
  struct tagRECT v27; // [esp+60h] [ebp-1Ch]
  int v28; // [esp+70h] [ebp-Ch]

  v7 = *(_DWORD *)(a2 + 20) + 52;
  v28 = a1;
  v24 = *(const struct _D3DMATRIX **)v7;
  v7 += 4;
  v25 = *(const struct _D3DMATRIX **)v7;
  v26 = *(_QWORD *)(v7 + 4);
  if ( !a4 || (result = IntersectRect(&v24, (int *)&v24, a4)) != 0 )
  {
    v9 = 0;
    if ( *((_DWORD *)a3 + 9) )
    {
      if ( !_TTBetterRank(*((_DWORD *)a3 + 10), (*((_DWORD *)a3 + 35) >> 1) & 1, v18, v19) )
        return v9;
      *(_QWORD *)&v14.left = v26;
      v27 = *GetScreenRect(*((_DWORD *)a3 + 17), *((_DWORD *)a3 + 15), &v23, (LONG)v24, v25, v14);
      if ( v27.left < *((_DWORD *)a3 + 13) )
      {
        *(_QWORD *)&v15.left = v26;
        ScreenRect = GetScreenRect(*((_DWORD *)a3 + 17), *((_DWORD *)a3 + 15), &v22, (LONG)v24, v25, v15);
        v11 = *((_DWORD *)a3 + 11);
        v27.left = ScreenRect->left;
        ScreenRect = (struct tagRECT *)((char *)ScreenRect + 4);
        v27.top = ScreenRect->left;
        ScreenRect = (struct tagRECT *)((char *)ScreenRect + 4);
        v27.right = ScreenRect->left;
        v27.bottom = ScreenRect->top;
        if ( v11 < v27.right )
        {
          *(_QWORD *)&v16.left = v26;
          v27 = *GetScreenRect(*((_DWORD *)a3 + 17), *((_DWORD *)a3 + 15), &v21, (LONG)v24, v25, v16);
          if ( v27.top < *((_DWORD *)a3 + 14) )
          {
            *(_QWORD *)&v17.left = v26;
            v12 = GetScreenRect(*((_DWORD *)a3 + 17), *((_DWORD *)a3 + 15), &v20, (LONG)v24, v25, v17);
            v13 = *((_DWORD *)a3 + 12);
            v27.left = v12->left;
            v12 = (struct tagRECT *)((char *)v12 + 4);
            v27.top = v12->left;
            v12 = (struct tagRECT *)((char *)v12 + 4);
            v27.right = v12->left;
            v27.bottom = v12->top;
            if ( v13 < v27.bottom && (*((_BYTE *)a3 + 140) & 1) == 0 )
              return 0;
          }
        }
      }
    }
    return 1;
  }
  return result;
}
