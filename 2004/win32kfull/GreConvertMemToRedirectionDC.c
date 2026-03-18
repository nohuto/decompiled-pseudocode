/*
 * XREFs of GreConvertMemToRedirectionDC @ 0x1C0051DD8
 * Callers:
 *     ?BltOldRedirectionBitsToNewBitmap@@YAHPEAUtagWND@@PEAUHBITMAP__@@1PEBUtagBITMAP@@2HH@Z @ 0x1C0051AE0 (-BltOldRedirectionBitsToNewBitmap@@YAHPEAUtagWND@@PEAUHBITMAP__@@1PEBUtagBITMAP@@2HH@Z.c)
 *     UpdateSpriteArea @ 0x1C014D8F0 (UpdateSpriteArea.c)
 * Callees:
 *     ?vAltUnlockFast@XDCOBJ@@QEAAXXZ @ 0x1C002E05C (-vAltUnlockFast@XDCOBJ@@QEAAXXZ.c)
 *     ??0MDCOBJA@@QEAA@PEAUHDC__@@H@Z @ 0x1C002EF70 (--0MDCOBJA@@QEAA@PEAUHDC__@@H@Z.c)
 */

__int64 __fastcall GreConvertMemToRedirectionDC(HDC a1, _DWORD *a2)
{
  unsigned int v3; // ebx
  __int64 *v4; // r8
  __int64 v5; // rax
  __int64 v7; // rdx
  int v8; // ecx
  __int64 *v9[3]; // [rsp+20h] [rbp-18h] BYREF

  v3 = 0;
  MDCOBJA::MDCOBJA((MDCOBJA *)v9, a1);
  v4 = v9[0];
  *a2 = 0;
  if ( v4 )
  {
    if ( *((_DWORD *)v4 + 8) == 1 )
    {
      v5 = v4[6];
      if ( v5 )
      {
        if ( (*(_DWORD *)(v5 + 2128) & 0x400) != 0 )
        {
          *((_DWORD *)v4 + 9) |= 0x4001u;
          *((_DWORD *)v4 + 8) = 0;
          v3 = 1;
          v7 = v4[62];
          v8 = *(_DWORD *)(v7 + 112);
          if ( (v8 & 0x800) == 0 && !*(_WORD *)(v7 + 100) )
          {
            *a2 = 1;
            *(_DWORD *)(v7 + 112) = v8 | 0x800;
          }
        }
      }
    }
    XDCOBJ::vAltUnlockFast(v9);
  }
  return v3;
}
