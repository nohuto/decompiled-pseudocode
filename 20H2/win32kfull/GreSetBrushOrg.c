/*
 * XREFs of GreSetBrushOrg @ 0x1C0037A28
 * Callers:
 *     xxxPaintRect @ 0x1C0037958 (xxxPaintRect.c)
 *     NtGdiSetBrushOrg @ 0x1C0037E30 (NtGdiSetBrushOrg.c)
 *     _DrawIconEx @ 0x1C0091C78 (_DrawIconEx.c)
 *     MNEraseBackground @ 0x1C024C35C (MNEraseBackground.c)
 *     xxxMNDrawFullNC @ 0x1C024C4A4 (xxxMNDrawFullNC.c)
 * Callees:
 *     ?vLock@XDCOBJ@@QEAAXPEAUHDC__@@@Z @ 0x1C00A1580 (-vLock@XDCOBJ@@QEAAXPEAUHDC__@@@Z.c)
 *     ?vUnlockFast@XDCOBJ@@QEAAXXZ @ 0x1C00A5350 (-vUnlockFast@XDCOBJ@@QEAAXXZ.c)
 */

__int64 __fastcall GreSetBrushOrg(HDC a1, int a2, int a3, _QWORD *a4)
{
  __int64 v7; // rcx
  unsigned int v8; // ebx
  _DWORD *v9; // rcx
  int v10; // edx
  int v11; // edx
  int v12; // eax
  int v13; // eax
  __int64 v15; // [rsp+20h] [rbp-18h] BYREF
  int v16; // [rsp+28h] [rbp-10h]
  int v17; // [rsp+2Ch] [rbp-Ch]

  v15 = 0LL;
  v16 = 0;
  v17 = 0;
  XDCOBJ::vLock((XDCOBJ *)&v15, a1);
  v7 = v15;
  if ( v15 )
  {
    if ( a4 )
      *a4 = *(_QWORD *)(v15 + 124);
    v8 = 1;
    *(_DWORD *)(*(_QWORD *)(v7 + 976) + 344LL) = a2;
    *(_DWORD *)(*(_QWORD *)(v15 + 976) + 348LL) = a3;
    v9 = (_DWORD *)v15;
    v10 = *(_DWORD *)(v15 + 40);
    *(_DWORD *)(v15 + 124) = a2;
    v9[32] = a3;
    v11 = v10 & 1;
    if ( v11 )
      v12 = v9[256];
    else
      v12 = v9[254];
    v9[294] = a2 + v12;
    if ( v11 )
      v13 = v9[257];
    else
      v13 = v9[255];
    v9[295] = a3 + v13;
  }
  else
  {
    EngSetLastError(6u);
    v8 = 0;
  }
  if ( v15 )
    XDCOBJ::vUnlockFast((XDCOBJ *)&v15);
  return v8;
}
