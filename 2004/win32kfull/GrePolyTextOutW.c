/*
 * XREFs of GrePolyTextOutW @ 0x1C001836C
 * Callers:
 *     NtGdiPolyTextOutW @ 0x1C0017FB0 (NtGdiPolyTextOutW.c)
 * Callees:
 *     ?vUnlock@DLODCOBJ@@QEAAXXZ @ 0x1C001936C (-vUnlock@DLODCOBJ@@QEAAXXZ.c)
 *     ?vLock@XDCOBJ@@QEAAXPEAUHDC__@@@Z @ 0x1C0076510 (-vLock@XDCOBJ@@QEAAXPEAUHDC__@@@Z.c)
 *     ?vDestructor@DEVLOCKOBJ@@QEAAXXZ @ 0x1C0079350 (-vDestructor@DEVLOCKOBJ@@QEAAXXZ.c)
 *     ?vUnlockFast@XDCOBJ@@QEAAXXZ @ 0x1C0079EB0 (-vUnlockFast@XDCOBJ@@QEAAXXZ.c)
 *     ?GreExtTextOutWLocked@@YAHAEAVXDCOBJ@@HHIPEAUtagRECT@@PEAGHPEAHKPEAXK@Z @ 0x1C00802E0 (-GreExtTextOutWLocked@@YAHAEAVXDCOBJ@@HHIPEAUtagRECT@@PEAGHPEAHKPEAXK@Z.c)
 *     ?bFullScreen@XDCOBJ@@QEAAHXZ @ 0x1C00FEC0C (-bFullScreen@XDCOBJ@@QEAAHXZ.c)
 *     __security_check_cookie @ 0x1C0157760 (__security_check_cookie.c)
 */

__int64 __fastcall GrePolyTextOutW(HDC a1, unsigned __int64 a2, unsigned int a3, unsigned int a4)
{
  __int64 v5; // rsi
  unsigned int v7; // ebx
  unsigned __int64 v8; // rsi
  int **v9; // rdi
  unsigned int v10; // r8d
  char *v11; // rcx
  _QWORD v13[2]; // [rsp+60h] [rbp-A0h] BYREF
  __int128 v14; // [rsp+70h] [rbp-90h] BYREF
  __int64 v15; // [rsp+80h] [rbp-80h]
  int v16; // [rsp+88h] [rbp-78h]
  _QWORD v17[2]; // [rsp+90h] [rbp-70h] BYREF
  __int16 v18; // [rsp+A0h] [rbp-60h]
  __int64 v19; // [rsp+A8h] [rbp-58h]
  __int64 v20; // [rsp+B0h] [rbp-50h]
  __int64 v21; // [rsp+B8h] [rbp-48h]
  char v22; // [rsp+C0h] [rbp-40h] BYREF

  v5 = a3;
  v13[0] = 0LL;
  v13[1] = 0LL;
  v7 = 1;
  XDCOBJ::vLock((XDCOBJ *)v13, a1);
  if ( !v13[0] || (*(_DWORD *)(v13[0] + 36LL) & 0x10000) != 0 )
  {
    EngSetLastError(6u);
    v7 = 0;
  }
  else
  {
    v17[1] = 0LL;
    v14 = 0LL;
    v18 = 256;
    v15 = 0LL;
    v16 = 0;
    v17[0] = 0LL;
    v21 = 0LL;
    v20 = 0LL;
    v19 = 0LL;
    if ( DEVLOCKOBJ::bLock((DEVLOCKOBJ *)&v14, (struct XDCOBJ *)v13, 0) )
    {
      v8 = a2 + 56 * v5;
      if ( a2 < v8 )
      {
        v9 = (int **)(a2 + 48);
        while ( 1 )
        {
          v10 = *((_DWORD *)v9 - 10);
          v11 = &v22;
          if ( ((30 * v10 + 7) & 0xFFFFFFF8) > 0xC0 )
            v11 = 0LL;
          if ( !(unsigned int)GreExtTextOutWLocked(
                                (struct XDCOBJ *)v13,
                                *((_DWORD *)v9 - 12),
                                *((_DWORD *)v9 - 11),
                                *((_DWORD *)v9 - 6),
                                (struct tagRECT *)((char *)v9 - 20),
                                (unsigned __int16 *)*(v9 - 4),
                                v10,
                                *v9,
                                *(unsigned __int8 *)(*(_QWORD *)(v13[0] + 976LL) + 213LL),
                                v11,
                                a4) )
            break;
          v9 += 7;
          if ( (unsigned __int64)(v9 - 6) >= v8 )
            goto LABEL_10;
        }
        v7 = 0;
      }
    }
    else
    {
      v7 = XDCOBJ::bFullScreen((XDCOBJ *)v13);
    }
LABEL_10:
    DEVLOCKOBJ::vDestructor((DEVLOCKOBJ *)&v14);
    if ( v17[0] )
      DLODCOBJ::vUnlock((DLODCOBJ *)v17);
  }
  if ( v13[0] )
    XDCOBJ::vUnlockFast((XDCOBJ *)v13);
  return v7;
}
