/*
 * XREFs of GreConvertMemToRedirectionDC @ 0x1C00FA368
 * Callers:
 *     ?BltOldRedirectionBitsToNewBitmap@@YAHPEAUtagWND@@PEAUHBITMAP__@@1PEBUtagBITMAP@@2HH@Z @ 0x1C00FA070 (-BltOldRedirectionBitsToNewBitmap@@YAHPEAUtagWND@@PEAUHBITMAP__@@1PEBUtagBITMAP@@2HH@Z.c)
 *     UpdateSpriteArea @ 0x1C0150100 (UpdateSpriteArea.c)
 * Callees:
 *     ?vAltUnlockFast@XDCOBJ@@QEAAXXZ @ 0x1C00FA978 (-vAltUnlockFast@XDCOBJ@@QEAAXXZ.c)
 *     ??0MDCOBJA@@QEAA@PEAUHDC__@@H@Z @ 0x1C00FAA80 (--0MDCOBJA@@QEAA@PEAUHDC__@@H@Z.c)
 */

__int64 __fastcall GreConvertMemToRedirectionDC(HDC a1, _DWORD *a2, int a3)
{
  unsigned int v4; // ebx
  __int64 v5; // r8
  __int64 v6; // rax
  __int64 v8; // rdx
  int v9; // ecx
  _QWORD v10[3]; // [rsp+20h] [rbp-18h] BYREF

  v4 = 0;
  MDCOBJA::MDCOBJA((MDCOBJA *)v10, a1, a3);
  v5 = v10[0];
  *a2 = 0;
  if ( v5 )
  {
    if ( *(_DWORD *)(v5 + 32) == 1 )
    {
      v6 = *(_QWORD *)(v5 + 48);
      if ( v6 )
      {
        if ( (*(_DWORD *)(v6 + 2128) & 0x400) != 0 )
        {
          *(_DWORD *)(v5 + 36) |= 0x4001u;
          *(_DWORD *)(v5 + 32) = 0;
          v4 = 1;
          v8 = *(_QWORD *)(v5 + 496);
          v9 = *(_DWORD *)(v8 + 112);
          if ( (v9 & 0x800) == 0 && !*(_WORD *)(v8 + 100) )
          {
            *a2 = 1;
            *(_DWORD *)(v8 + 112) = v9 | 0x800;
          }
        }
      }
    }
    XDCOBJ::vAltUnlockFast((XDCOBJ *)v10);
  }
  return v4;
}
