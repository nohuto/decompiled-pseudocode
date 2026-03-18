/*
 * XREFs of ?GreRectBlt@@YGHAAVDCOBJ@@PAVERECTL@@@Z @ 0xBB65A
 * Callers:
 *     _GreRectangle@20 @ 0xBB904 (_GreRectangle@20.c)
 * Callees:
 *     ??1DEVLOCKBLTOBJ@@QAE@XZ @ 0x5DBF8 (--1DEVLOCKBLTOBJ@@QAE@XZ.c)
 *     ?bFullScreen@XDCOBJ@@QAEHXZ @ 0x78918 (-bFullScreen@XDCOBJ@@QAEHXZ.c)
 *     ??1BLTRECORD@@QAE@XZ @ 0x79466 (--1BLTRECORD@@QAE@XZ.c)
 *     ?bBitBlt@BLTRECORD@@QAEHAAVDCOBJ@@0K@Z @ 0x79928 (-bBitBlt@BLTRECORD@@QAEHAAVDCOBJ@@0K@Z.c)
 *     ?vAccumulate@XDCOBJ@@QAEXAAVERECTL@@@Z @ 0x7B8B6 (-vAccumulate@XDCOBJ@@QAEXAAVERECTL@@@Z.c)
 *     ?vAccumulateTight@XDCOBJ@@QAEXAAVERECTL@@@Z @ 0xBB856 (-vAccumulateTight@XDCOBJ@@QAEXAAVERECTL@@@Z.c)
 *     ?bLock@DEVLOCKBLTOBJ@@QAEHAAVXDCOBJ@@H@Z @ 0xBD6B8 (-bLock@DEVLOCKBLTOBJ@@QAEHAAVXDCOBJ@@H@Z.c)
 *     @__security_check_cookie@4 @ 0xED840 (@__security_check_cookie@4.c)
 */

int __fastcall GreRectBlt(struct DCOBJ *a1, struct ERECTL *a2)
{
  bool v3; // zf
  int v4; // ebx
  int v5; // ecx
  int v6; // eax
  int v7; // edx
  int v8; // eax
  int v9; // eax
  int v10; // esi
  struct ERECTL *v11; // ebx
  int v12; // esi
  _BYTE v14[20]; // [esp+10h] [ebp-140h] BYREF
  int v15; // [esp+24h] [ebp-12Ch]
  char v16; // [esp+28h] [ebp-128h]
  int v17; // [esp+2Ch] [ebp-124h]
  char v18; // [esp+38h] [ebp-118h]
  int v19; // [esp+40h] [ebp-110h]
  int v20; // [esp+44h] [ebp-10Ch]
  int v21; // [esp+48h] [ebp-108h]
  char v22; // [esp+4Ch] [ebp-104h]
  char v23; // [esp+4Dh] [ebp-103h]
  int v24; // [esp+50h] [ebp-100h]
  int v25; // [esp+54h] [ebp-FCh]
  int v26; // [esp+58h] [ebp-F8h]
  char v27; // [esp+5Ch] [ebp-F4h]
  char v28; // [esp+5Dh] [ebp-F3h]
  struct DCOBJ *v29; // [esp+80h] [ebp-D0h]
  unsigned int v30; // [esp+84h] [ebp-CCh]
  struct ERECTL *v31; // [esp+88h] [ebp-C8h]
  int v32; // [esp+8Ch] [ebp-C4h]
  _BYTE v33[24]; // [esp+90h] [ebp-C0h] BYREF
  int v34; // [esp+A8h] [ebp-A8h]
  int v35; // [esp+ACh] [ebp-A4h]
  int v36; // [esp+B8h] [ebp-98h]
  int v37; // [esp+C0h] [ebp-90h]
  int v38; // [esp+C8h] [ebp-88h]
  int v39; // [esp+F4h] [ebp-5Ch]
  int v40; // [esp+F8h] [ebp-58h]
  int v41; // [esp+FCh] [ebp-54h]
  int v42; // [esp+100h] [ebp-50h]
  int v43; // [esp+12Ch] [ebp-24h]
  int v44; // [esp+130h] [ebp-20h]
  int v45; // [esp+134h] [ebp-1Ch]
  int v46; // [esp+138h] [ebp-18h]

  v31 = a2;
  v29 = a1;
  v37 = 0;
  v46 = 0;
  v3 = (*(_BYTE *)(*(_DWORD *)a1 + 24) & 0xE0) == 0;
  v32 = (unsigned __int8)gaMix[*(_BYTE *)(*(_DWORD *)(*(_DWORD *)a1 + 1020) + 232) & 0xF];
  v30 = (unsigned __int8)gajRop3[v32];
  if ( !v3 )
    XDCOBJ::vAccumulate(a1, a2);
  v15 = 0;
  v16 = 0;
  v4 = 1;
  v17 = 0;
  v19 = 0;
  v20 = 0;
  v21 = 0;
  v22 = 0;
  v24 = 0;
  v25 = 0;
  v26 = 0;
  v27 = 0;
  v23 = 1;
  v28 = 1;
  DEVLOCKBLTOBJ::bLock((DEVLOCKBLTOBJ *)v14, a1, 0);
  if ( !XDCOBJ::bFullScreen((DC **)a1) )
  {
    if ( (v18 & 1) != 0 )
    {
      v5 = *(_DWORD *)a1;
      v36 = *(_DWORD *)(*(_DWORD *)a1 + 504);
      v34 = *(_DWORD *)(v36 + 88);
      v35 = *(_DWORD *)(v5 + 60);
      if ( (v30 & 0xE8) == 0 )
      {
        v38 = 0;
        goto LABEL_12;
      }
      v38 = v5 + 1184;
      v6 = *(_DWORD *)(v5 + 1020);
      if ( (*(_DWORD *)(v6 + 184) & 0x1000) != 0 )
      {
        GreDCSelectBrush(v5, *(_DWORD *)(v6 + 188));
        v5 = *(_DWORD *)a1;
      }
      v7 = *(_DWORD *)(v5 + 1020);
      v8 = *(_DWORD *)(v7 + 184);
      if ( (v8 & 1) != 0 || (*(_BYTE *)(v5 + 236) & 1) != 0 )
      {
        *(_DWORD *)(v7 + 184) = v8 & 0xFFFFFFFE;
        *(_DWORD *)(*(_DWORD *)a1 + 236) &= ~1u;
        EBRUSHOBJ::vInitBrush(v38, *(_DWORD *)a1, *(_DWORD *)(*(_DWORD *)a1 + 92), v35, v34, v36, 1);
      }
      if ( (*(_DWORD *)(v38 + 76) & 0x100) == 0 )
      {
        v5 = *(_DWORD *)a1;
        v43 = *(_DWORD *)(*(_DWORD *)a1 + 1176);
        v44 = *(_DWORD *)(v5 + 1180);
        if ( (*(_DWORD *)(v38 + 76) & 0x8000) != 0 && *(_BYTE *)(*(_DWORD *)(v5 + 1020) + 233) == 1 )
        {
          v9 = v32;
          v10 = 43520;
          goto LABEL_13;
        }
LABEL_12:
        v9 = v32;
        v10 = v32 << 8;
LABEL_13:
        v11 = v31;
        v12 = v9 | v10;
        if ( (*(_BYTE *)(v5 + 24) & 0xE0) != 0 )
          XDCOBJ::vAccumulateTight(a1, v31);
        v45 = v12;
        v39 = *(_DWORD *)v11;
        v40 = *((_DWORD *)v11 + 1);
        v41 = *((_DWORD *)v11 + 2);
        v42 = *((_DWORD *)v11 + 3);
        v4 = BLTRECORD::bBitBlt((BLTRECORD *)v33, v29, v29, v30);
        goto LABEL_16;
      }
    }
    v4 = 0;
  }
LABEL_16:
  DEVLOCKBLTOBJ::~DEVLOCKBLTOBJ((DEVLOCKBLTOBJ *)v14);
  BLTRECORD::~BLTRECORD((BLTRECORD *)v33);
  return v4;
}
