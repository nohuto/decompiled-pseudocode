/*
 * XREFs of ?GreRectBlt@@YAHAEAVDCOBJ@@PEAVERECTL@@@Z @ 0x1C0138AC4
 * Callers:
 *     GreRectangle @ 0x1C0137434 (GreRectangle.c)
 * Callees:
 *     ??1BLTRECORD@@QEAA@XZ @ 0x1C001A4EC (--1BLTRECORD@@QEAA@XZ.c)
 *     ?vAccumulate@XDCOBJ@@QEAAXAEAVERECTL@@@Z @ 0x1C001ACC8 (-vAccumulate@XDCOBJ@@QEAAXAEAVERECTL@@@Z.c)
 *     ?bBitBlt@BLTRECORD@@QEAAHAEAVDCOBJ@@0K@Z @ 0x1C001AD5C (-bBitBlt@BLTRECORD@@QEAAHAEAVDCOBJ@@0K@Z.c)
 *     ?bLock@DEVLOCKBLTOBJ@@QEAAHAEAVXDCOBJ@@H@Z @ 0x1C001BD00 (-bLock@DEVLOCKBLTOBJ@@QEAAHAEAVXDCOBJ@@H@Z.c)
 *     ??1DEVLOCKBLTOBJ@@QEAA@XZ @ 0x1C0077CC0 (--1DEVLOCKBLTOBJ@@QEAA@XZ.c)
 *     ?bFullScreen@XDCOBJ@@QEAAHXZ @ 0x1C00FEC0C (-bFullScreen@XDCOBJ@@QEAAHXZ.c)
 *     ?vAccumulateTight@XDCOBJ@@QEAAXAEAVERECTL@@@Z @ 0x1C0138D20 (-vAccumulateTight@XDCOBJ@@QEAAXAEAVERECTL@@@Z.c)
 *     __security_check_cookie @ 0x1C0157760 (__security_check_cookie.c)
 */

__int64 __fastcall GreRectBlt(struct DCOBJ *a1, struct ERECTL *a2)
{
  __int64 v2; // r8
  __int64 v5; // rsi
  char v6; // r15
  unsigned int v7; // ebx
  __int64 v8; // rdx
  __int64 v9; // r8
  __int64 v10; // rcx
  __int64 v11; // rdx
  int v12; // edx
  int v13; // r8d
  int v14; // r8d
  __int128 v15; // xmm0
  _BYTE v17[40]; // [rsp+40h] [rbp-C0h] BYREF
  __int64 v18; // [rsp+68h] [rbp-98h]
  char v19; // [rsp+70h] [rbp-90h]
  int v20; // [rsp+74h] [rbp-8Ch]
  char v21; // [rsp+88h] [rbp-78h]
  __int64 v22; // [rsp+90h] [rbp-70h]
  __int64 v23; // [rsp+98h] [rbp-68h]
  __int16 v24; // [rsp+A0h] [rbp-60h]
  __int64 v25; // [rsp+A8h] [rbp-58h]
  __int64 v26; // [rsp+B0h] [rbp-50h]
  __int16 v27; // [rsp+B8h] [rbp-48h]
  _BYTE v28[32]; // [rsp+100h] [rbp+0h] BYREF
  __int64 v29; // [rsp+120h] [rbp+20h]
  __int64 v30; // [rsp+128h] [rbp+28h]
  __int64 v31; // [rsp+140h] [rbp+40h]
  __int64 v32; // [rsp+150h] [rbp+50h]
  __int64 v33; // [rsp+160h] [rbp+60h]
  __int128 v34; // [rsp+198h] [rbp+98h]
  __int64 v35; // [rsp+1D0h] [rbp+D0h]
  int v36; // [rsp+1D8h] [rbp+D8h]
  int v37; // [rsp+1DCh] [rbp+DCh]

  v2 = *(_QWORD *)a1;
  v32 = 0LL;
  v37 = 0;
  v5 = gaMix[*(_BYTE *)(*(_QWORD *)(v2 + 976) + 212LL) & 0xF];
  v6 = gajRop3[v5];
  if ( (*(_DWORD *)(v2 + 36) & 0xE0) != 0 )
    XDCOBJ::vAccumulate(a1, a2);
  v18 = 0LL;
  v19 = 0;
  v20 = 0;
  v7 = 1;
  v22 = 0LL;
  v23 = 0LL;
  v24 = 256;
  v25 = 0LL;
  v26 = 0LL;
  v27 = 256;
  DEVLOCKBLTOBJ::bLock((DEVLOCKBLTOBJ *)v17, a1);
  if ( !(unsigned int)XDCOBJ::bFullScreen(a1) )
  {
    if ( (v21 & 1) != 0 )
    {
      v10 = *(_QWORD *)a1;
      v31 = *(_QWORD *)(*(_QWORD *)a1 + 496LL);
      v29 = *(_QWORD *)(v31 + 128);
      v30 = *(_QWORD *)(v10 + 88);
      if ( (v6 & 0xE8) == 0 )
      {
        v33 = 0LL;
        goto LABEL_12;
      }
      v33 = v10 + 1184;
      v11 = *(_QWORD *)(v10 + 976);
      if ( (*(_DWORD *)(v11 + 152) & 0x1000) != 0 )
      {
        GreDCSelectBrush(v10, *(_QWORD *)(v11 + 160));
        v10 = *(_QWORD *)a1;
      }
      v9 = *(_QWORD *)(v10 + 976);
      v12 = *(_DWORD *)(v9 + 152);
      if ( (v12 & 1) != 0 || (*(_DWORD *)(v10 + 316) & 1) != 0 )
      {
        *(_DWORD *)(v9 + 152) = v12 & 0xFFFFFFFE;
        *(_DWORD *)(*(_QWORD *)a1 + 316LL) &= ~1u;
        EBRUSHOBJ::vInitBrush(v33, *(_QWORD *)a1, *(_QWORD *)(*(_QWORD *)a1 + 136LL), v30, v29, v31, 1);
      }
      v8 = v33;
      if ( (*(_DWORD *)(v33 + 120) & 0x100) == 0 )
      {
        v10 = *(_QWORD *)a1;
        v35 = *(_QWORD *)(*(_QWORD *)a1 + 1176LL);
        if ( (*(_DWORD *)(v33 + 120) & 0x8000) != 0 && *(_BYTE *)(*(_QWORD *)(v10 + 976) + 213LL) == 1 )
        {
          v13 = 43520;
          goto LABEL_13;
        }
LABEL_12:
        v13 = (_DWORD)v5 << 8;
LABEL_13:
        v14 = v5 | v13;
        if ( (*(_DWORD *)(v10 + 36) & 0xE0) != 0 )
          XDCOBJ::vAccumulateTight(a1, a2);
        v15 = *(_OWORD *)a2;
        v36 = v14;
        v34 = v15;
        v7 = BLTRECORD::bBitBlt((BLTRECORD *)v28, (DC **)a1, a1, v6);
        goto LABEL_16;
      }
    }
    v7 = 0;
  }
LABEL_16:
  DEVLOCKBLTOBJ::~DEVLOCKBLTOBJ((DEVLOCKBLTOBJ *)v17, v8, (SURFACE **)v9);
  BLTRECORD::~BLTRECORD((BLTRECORD *)v28);
  return v7;
}
