/*
 * XREFs of GreGetClipBox @ 0x1C004C930
 * Callers:
 *     xxxEnumDisplayMonitors @ 0x1C002F2E0 (xxxEnumDisplayMonitors.c)
 * Callees:
 *     ?bLock@DEVLOCKOBJ@@QEAAHAEAVXDCOBJ@@H@Z @ 0x1C0038370 (-bLock@DEVLOCKOBJ@@QEAAHAEAVXDCOBJ@@H@Z.c)
 *     ?vUnlockNoNullSet@XDCOBJ@@QEAAXXZ @ 0x1C0041720 (-vUnlockNoNullSet@XDCOBJ@@QEAAXXZ.c)
 *     ?vLock@XDCOBJ@@QEAAXPEAUHDC__@@@Z @ 0x1C0042800 (-vLock@XDCOBJ@@QEAAXPEAUHDC__@@@Z.c)
 *     ?prgnVisSnap@DC@@QEBAPEAVREGION@@XZ @ 0x1C004BD20 (-prgnVisSnap@DC@@QEBAPEAVREGION@@XZ.c)
 *     ?prgnRao@DC@@QEBAPEAVREGION@@XZ @ 0x1C004BD4C (-prgnRao@DC@@QEBAPEAVREGION@@XZ.c)
 *     ?vDestructor@DEVLOCKOBJ@@QEAAXXZ @ 0x1C004C148 (-vDestructor@DEVLOCKOBJ@@QEAAXXZ.c)
 *     bCvtPts1 @ 0x1C004FBD0 (bCvtPts1.c)
 *     ?vInit@EXFORMOBJ@@QEAAXAEAVXDCOBJ@@KH@Z @ 0x1C005B8F0 (-vInit@EXFORMOBJ@@QEAAXAEAVXDCOBJ@@KH@Z.c)
 */

__int64 __fastcall GreGetClipBox(HDC a1, int *a2, int a3)
{
  unsigned int v5; // edi
  DC *v6; // r10
  struct REGION *v7; // rax
  DC *v8; // r10
  struct REGION *v9; // rsi
  int v10; // r8d
  int v11; // r9d
  int v12; // r11d
  _DWORD *v13; // rcx
  __int64 v14; // rcx
  DC *v16; // rax
  int v17; // eax
  int v18; // ecx
  DC *v19[2]; // [rsp+28h] [rbp-29h] BYREF
  __int64 v20; // [rsp+38h] [rbp-19h] BYREF
  int v21; // [rsp+40h] [rbp-11h]
  int v22; // [rsp+44h] [rbp-Dh]
  _BYTE v23[32]; // [rsp+48h] [rbp-9h] BYREF
  _QWORD v24[2]; // [rsp+68h] [rbp+17h] BYREF
  __int16 v25; // [rsp+78h] [rbp+27h]

  v19[0] = 0LL;
  v19[1] = 0LL;
  v5 = 0;
  XDCOBJ::vLock((XDCOBJ *)v19, a1);
  if ( v19[0] )
  {
    v5 = 1;
    v24[0] = 0LL;
    v24[1] = 0LL;
    v25 = 256;
    DEVLOCKOBJ::bLock((DEVLOCKOBJ *)v23, v19, 1);
    if ( (v23[24] & 1) != 0 )
    {
      if ( DC::prgnRao(v19[0]) )
        v7 = DC::prgnRao(v6);
      else
        v7 = DC::prgnVisSnap(v6);
      v9 = v7;
      *(_OWORD *)a2 = *((_OWORD *)v7 + 6);
      v10 = a2[2];
      if ( *a2 >= v10 || (v11 = a2[1], v12 = a2[3], v11 >= v12) )
      {
        *(_QWORD *)a2 = 0LL;
        *((_QWORD *)a2 + 1) = 0LL;
      }
      else
      {
        v13 = (_DWORD *)((char *)v8 + 1024);
        if ( (*((_DWORD *)v8 + 10) & 1) == 0 )
          v13 = (_DWORD *)((char *)v8 + 1016);
        *a2 -= *v13;
        a2[2] = v10 - *v13;
        a2[1] = v11 - v13[1];
        a2[3] = v12 - v13[1];
        if ( a3 )
        {
          v14 = *((_QWORD *)v8 + 122);
          v21 = *(_DWORD *)(v14 + 208);
          v22 = *(_DWORD *)(v14 + 108) & 1;
          EXFORMOBJ::vInit((EXFORMOBJ *)&v20, (struct XDCOBJ *)v19, 0x402u, 0x80000000);
          if ( v20 )
          {
            if ( (*(_BYTE *)(v20 + 32) & 0x43) != 0x43 )
              bCvtPts1(v20, a2, 2LL);
            if ( v22 )
            {
              ++*a2;
              ++a2[2];
            }
          }
          v8 = v19[0];
        }
        if ( (*(_DWORD *)(*((_QWORD *)v8 + 122) + 108LL) & 1) != 0 )
        {
          v17 = *a2;
          v18 = a2[2];
          if ( *a2 > v18 )
          {
            *a2 = v18;
            a2[2] = v17;
          }
        }
      }
      if ( *((_DWORD *)v9 + 21) != 1 )
        v5 = (*((_DWORD *)v9 + 20) > 0x38u) + 2;
    }
    else
    {
      v16 = v19[0];
      *(_QWORD *)a2 = 0LL;
      *((_QWORD *)a2 + 1) = 0LL;
      if ( *((_QWORD *)v16 + 62) )
        v5 = (*((_DWORD *)v16 + 9) & 0x5000) == 4096;
    }
    DEVLOCKOBJ::vDestructor((DEVLOCKOBJ *)v23);
    if ( v24[0] )
    {
      if ( (_BYTE)v25 )
      {
        *(_DWORD *)(v24[0] + 40LL) &= ~2u;
        LOBYTE(v25) = 0;
      }
      XDCOBJ::vUnlockNoNullSet((XDCOBJ *)v24);
    }
  }
  XDCOBJ::vUnlockNoNullSet((XDCOBJ *)v19);
  return v5;
}
