/*
 * XREFs of ?GreRectBlt@@YAHAEAVDCOBJ@@PEAVERECTL@@@Z @ 0x1C013AA94
 * Callers:
 *     GreRectangle @ 0x1C0139384 (GreRectangle.c)
 * Callees:
 *     ?bBitBlt@BLTRECORD@@QEAAHAEAVDCOBJ@@0K@Z @ 0x1C0067BF8 (-bBitBlt@BLTRECORD@@QEAAHAEAVDCOBJ@@0K@Z.c)
 *     ?bLock@DEVLOCKBLTOBJ@@QEAAHAEAVXDCOBJ@@H@Z @ 0x1C00984B8 (-bLock@DEVLOCKBLTOBJ@@QEAAHAEAVXDCOBJ@@H@Z.c)
 *     ?vAccumulate@XDCOBJ@@QEAAXAEAVERECTL@@@Z @ 0x1C009D358 (-vAccumulate@XDCOBJ@@QEAAXAEAVERECTL@@@Z.c)
 *     ??1BLTRECORD@@QEAA@XZ @ 0x1C009D430 (--1BLTRECORD@@QEAA@XZ.c)
 *     ??1DEVLOCKBLTOBJ@@QEAA@XZ @ 0x1C00A37B0 (--1DEVLOCKBLTOBJ@@QEAA@XZ.c)
 *     ?bFullScreen@XDCOBJ@@QEAAHXZ @ 0x1C00F8FAC (-bFullScreen@XDCOBJ@@QEAAHXZ.c)
 *     ?vAccumulateTight@XDCOBJ@@QEAAXAEAVERECTL@@@Z @ 0x1C013AD18 (-vAccumulateTight@XDCOBJ@@QEAAXAEAVERECTL@@@Z.c)
 *     __security_check_cookie @ 0x1C015A0C0 (__security_check_cookie.c)
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
  int v21; // [rsp+98h] [rbp-68h]
  char v22; // [rsp+B0h] [rbp-50h]
  __int64 v23; // [rsp+B8h] [rbp-48h]
  __int64 v24; // [rsp+C0h] [rbp-40h]
  __int16 v25; // [rsp+C8h] [rbp-38h]
  __int64 v26; // [rsp+D0h] [rbp-30h]
  __int64 v27; // [rsp+D8h] [rbp-28h]
  __int16 v28; // [rsp+E0h] [rbp-20h]
  _BYTE v29[32]; // [rsp+120h] [rbp+20h] BYREF
  __int64 v30; // [rsp+140h] [rbp+40h]
  __int64 v31; // [rsp+148h] [rbp+48h]
  __int64 v32; // [rsp+160h] [rbp+60h]
  __int64 v33; // [rsp+170h] [rbp+70h]
  __int64 v34; // [rsp+180h] [rbp+80h]
  __int128 v35; // [rsp+1B8h] [rbp+B8h]
  __int64 v36; // [rsp+1F0h] [rbp+F0h]
  int v37; // [rsp+1F8h] [rbp+F8h]
  int v38; // [rsp+1FCh] [rbp+FCh]

  v2 = *(_QWORD *)a1;
  v33 = 0LL;
  v38 = 0;
  v5 = gaMix[*(_BYTE *)(*(_QWORD *)(v2 + 976) + 212LL) & 0xF];
  v6 = gajRop3[v5];
  if ( (*(_DWORD *)(v2 + 36) & 0xE0) != 0 )
    XDCOBJ::vAccumulate(a1, a2);
  v18 = 0LL;
  v19 = 0;
  v20 = 0;
  v7 = 1;
  v21 = 0;
  v23 = 0LL;
  v24 = 0LL;
  v25 = 256;
  v26 = 0LL;
  v27 = 0LL;
  v28 = 256;
  DEVLOCKBLTOBJ::bLock((DEVLOCKBLTOBJ *)v17, a1);
  if ( !(unsigned int)XDCOBJ::bFullScreen(a1) )
  {
    if ( (v22 & 1) == 0 )
    {
LABEL_12:
      v7 = 0;
      goto LABEL_21;
    }
    v10 = *(_QWORD *)a1;
    v32 = *(_QWORD *)(*(_QWORD *)a1 + 496LL);
    v30 = *(_QWORD *)(v32 + 128);
    v31 = *(_QWORD *)(v10 + 88);
    if ( (v6 & 0xE8) != 0 )
    {
      v34 = v10 + 1184;
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
        EBRUSHOBJ::vInitBrush(v34, *(_QWORD *)a1, *(_QWORD *)(*(_QWORD *)a1 + 136LL), v31, v30, v32, 1);
      }
      v8 = v34;
      if ( (*(_DWORD *)(v34 + 120) & 0x100) != 0 )
        goto LABEL_12;
      v10 = *(_QWORD *)a1;
      v36 = *(_QWORD *)(*(_QWORD *)a1 + 1176LL);
      if ( (*(_DWORD *)(v34 + 120) & 0x8000) != 0 && *(_BYTE *)(*(_QWORD *)(v10 + 976) + 213LL) == 1 )
      {
        v13 = 43520;
LABEL_18:
        v14 = v5 | v13;
        if ( (*(_DWORD *)(v10 + 36) & 0xE0) != 0 )
          XDCOBJ::vAccumulateTight(a1, a2);
        v15 = *(_OWORD *)a2;
        v37 = v14;
        v35 = v15;
        v7 = BLTRECORD::bBitBlt((BLTRECORD *)v29, (DC **)a1, a1, v6);
        goto LABEL_21;
      }
    }
    else
    {
      v34 = 0LL;
    }
    v13 = (_DWORD)v5 << 8;
    goto LABEL_18;
  }
LABEL_21:
  DEVLOCKBLTOBJ::~DEVLOCKBLTOBJ((DEVLOCKBLTOBJ *)v17, v8, (SURFACE **)v9);
  BLTRECORD::~BLTRECORD((BLTRECORD *)v29);
  return v7;
}
