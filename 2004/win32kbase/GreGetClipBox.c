/*
 * XREFs of GreGetClipBox @ 0x1C007C550
 * Callers:
 *     xxxEnumDisplayMonitors @ 0x1C0010F90 (xxxEnumDisplayMonitors.c)
 * Callees:
 *     bCvtPts1 @ 0x1C0029CC4 (bCvtPts1.c)
 *     ?vDestructor@DEVLOCKOBJ@@QEAAXXZ @ 0x1C007BEC0 (-vDestructor@DEVLOCKOBJ@@QEAAXXZ.c)
 *     ?bLock@DEVLOCKOBJ@@QEAAHAEAVXDCOBJ@@H@Z @ 0x1C007D350 (-bLock@DEVLOCKOBJ@@QEAAHAEAVXDCOBJ@@H@Z.c)
 *     ?vInit@EXFORMOBJ@@QEAAXAEAVXDCOBJ@@KH@Z @ 0x1C007ECC0 (-vInit@EXFORMOBJ@@QEAAXAEAVXDCOBJ@@KH@Z.c)
 *     ?prgnVisSnap@DC@@QEBAPEAVREGION@@XZ @ 0x1C007FB68 (-prgnVisSnap@DC@@QEBAPEAVREGION@@XZ.c)
 *     ?prgnRao@DC@@QEBAPEAVREGION@@XZ @ 0x1C007FB94 (-prgnRao@DC@@QEBAPEAVREGION@@XZ.c)
 *     ?vUnlockNoNullSet@XDCOBJ@@QEAAXXZ @ 0x1C00873F0 (-vUnlockNoNullSet@XDCOBJ@@QEAAXXZ.c)
 *     ?vLock@XDCOBJ@@QEAAXPEAUHDC__@@@Z @ 0x1C0088E50 (-vLock@XDCOBJ@@QEAAXPEAUHDC__@@@Z.c)
 *     ?vUnlockFast@XDCOBJ@@QEAAXXZ @ 0x1C00A5238 (-vUnlockFast@XDCOBJ@@QEAAXXZ.c)
 */

__int64 __fastcall GreGetClipBox(HDC a1, signed int *a2, int a3)
{
  unsigned int v5; // edi
  __int64 v6; // rdx
  int v7; // r8d
  DC *v8; // r10
  struct REGION *v9; // rax
  DC *v10; // r10
  struct REGION *v11; // rsi
  signed int v12; // r9d
  signed int v13; // r11d
  _DWORD *v14; // rcx
  __int64 v15; // rcx
  __int64 v16; // rax
  DC *v18; // rax
  unsigned int v19; // eax
  signed int v20; // ecx
  DC *v21[2]; // [rsp+28h] [rbp-29h] BYREF
  unsigned __int64 v22; // [rsp+38h] [rbp-19h] BYREF
  int v23; // [rsp+40h] [rbp-11h]
  int v24; // [rsp+44h] [rbp-Dh]
  _BYTE v25[32]; // [rsp+48h] [rbp-9h] BYREF
  _QWORD v26[2]; // [rsp+68h] [rbp+17h] BYREF
  __int16 v27; // [rsp+78h] [rbp+27h]

  v21[0] = 0LL;
  v21[1] = 0LL;
  v5 = 0;
  XDCOBJ::vLock((XDCOBJ *)v21, a1);
  if ( v21[0] )
  {
    v5 = 1;
    v26[0] = 0LL;
    v26[1] = 0LL;
    v27 = 256;
    DEVLOCKOBJ::bLock((DEVLOCKOBJ *)v25, (struct XDCOBJ *)v21, 1);
    if ( (v25[24] & 1) != 0 )
    {
      if ( DC::prgnRao(v21[0]) )
        v9 = DC::prgnRao(v8);
      else
        v9 = DC::prgnVisSnap(v8);
      v11 = v9;
      *(_OWORD *)a2 = *((_OWORD *)v9 + 6);
      v6 = (unsigned int)*a2;
      v7 = a2[2];
      if ( (int)v6 >= v7 || (v12 = a2[1], v13 = a2[3], v12 >= v13) )
      {
        *(_QWORD *)a2 = 0LL;
        *((_QWORD *)a2 + 1) = 0LL;
      }
      else
      {
        v14 = (_DWORD *)((char *)v10 + 1024);
        if ( (*((_DWORD *)v10 + 10) & 1) == 0 )
          v14 = (_DWORD *)((char *)v10 + 1016);
        v6 = (unsigned int)(v6 - *v14);
        *a2 = v6;
        v7 -= *v14;
        a2[2] = v7;
        a2[1] = v12 - v14[1];
        a2[3] = v13 - v14[1];
        if ( a3 )
        {
          v15 = *((_QWORD *)v10 + 122);
          v23 = *(_DWORD *)(v15 + 208);
          v24 = *(_DWORD *)(v15 + 108) & 1;
          EXFORMOBJ::vInit((EXFORMOBJ *)&v22, (struct XDCOBJ *)v21, 0x402u, 0x80000000);
          if ( v22 )
          {
            if ( (*(_BYTE *)(v22 + 32) & 0x43) != 0x43 )
              bCvtPts1(v22, a2, 2LL);
            if ( v24 )
            {
              ++*a2;
              ++a2[2];
            }
          }
          v10 = v21[0];
        }
        if ( (*(_DWORD *)(*((_QWORD *)v10 + 122) + 108LL) & 1) != 0 )
        {
          v19 = *a2;
          v20 = a2[2];
          if ( *a2 > v20 )
          {
            *a2 = v20;
            a2[2] = v19;
          }
        }
      }
      if ( *((_DWORD *)v11 + 21) != 1 )
        v5 = (*((_DWORD *)v11 + 20) > 0x38u) + 2;
    }
    else
    {
      v18 = v21[0];
      *(_QWORD *)a2 = 0LL;
      *((_QWORD *)a2 + 1) = 0LL;
      if ( *((_QWORD *)v18 + 62) )
        v5 = (*((_DWORD *)v18 + 9) & 0x5000) == 4096;
    }
    DEVLOCKOBJ::vDestructor((DEVLOCKOBJ *)v25, v6, v7);
    v16 = v26[0];
    if ( v26[0] )
    {
      if ( (_BYTE)v27 )
      {
        *(_DWORD *)(v26[0] + 40LL) &= ~2u;
        v16 = v26[0];
        LOBYTE(v27) = 0;
      }
      if ( v16 )
        XDCOBJ::vUnlockFast((XDCOBJ *)v26);
    }
  }
  XDCOBJ::vUnlockNoNullSet((XDCOBJ *)v21);
  return v5;
}
