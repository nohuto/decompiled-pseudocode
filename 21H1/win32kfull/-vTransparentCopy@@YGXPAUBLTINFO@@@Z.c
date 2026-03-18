/*
 * XREFs of ?vTransparentCopy@@YGXPAUBLTINFO@@@Z @ 0x1F1C70
 * Callers:
 *     _NtUserCallHwndParamLock@12 @ 0x134DE (_NtUserCallHwndParamLock@12.c)
 *     _NtUserCallHwndParamLockSafe@12 @ 0x189A0 (_NtUserCallHwndParamLockSafe@12.c)
 *     _NtUserCallNoParam@4 @ 0x6E940 (_NtUserCallNoParam@4.c)
 *     _NtUserCallHwndLock@8 @ 0x7D35A (_NtUserCallHwndLock@8.c)
 *     _NtUserCallTwoParam@12 @ 0x7FA30 (_NtUserCallTwoParam@12.c)
 *     _NtUserCallHwnd@8 @ 0x80A3A (_NtUserCallHwnd@8.c)
 *     _NtUserCallHwndLockSafe@8 @ 0x92856 (_NtUserCallHwndLockSafe@8.c)
 *     _NtUserCallHwndSafe@8 @ 0x99D78 (_NtUserCallHwndSafe@8.c)
 *     _NtUserCallHwndParam@12 @ 0xA7482 (_NtUserCallHwndParam@12.c)
 *     _NtUserCallHwndOpt@8 @ 0xE81A0 (_NtUserCallHwndOpt@8.c)
 * Callees:
 *     _XLATEOBJ_iXlate@8 @ 0xC5A04 (_XLATEOBJ_iXlate@8.c)
 *     @__security_check_cookie@4 @ 0xED840 (@__security_check_cookie@4.c)
 *     ?StartPixel@@YGPAEPAEKK@Z @ 0x1F1C2A (-StartPixel@@YGPAEPAEKK@Z.c)
 */

void __stdcall vTransparentCopy(struct BLTINFO *a1)
{
  int v1; // edi
  int v2; // eax
  int v3; // eax
  unsigned __int8 *v4; // ecx
  unsigned __int8 *v5; // eax
  int v6; // edx
  bool v7; // zf
  unsigned __int8 *v8; // ebx
  unsigned __int8 *v9; // edi
  ULONG v10; // ecx
  int v11; // eax
  int v12; // eax
  ULONG v13; // ecx
  ULONG v14; // eax
  unsigned int v15; // ecx
  unsigned __int8 v16; // cl
  ULONG v17; // eax
  ULONG v18; // eax
  __int16 v19; // ax
  unsigned __int8 v20; // al
  char v21; // al
  unsigned __int8 v22; // al
  ULONG v23; // eax
  char v24; // al
  char v25; // al
  unsigned __int8 v26; // al
  int v27; // eax
  int v28; // edx
  char v29; // al
  int v30; // edx
  unsigned int v31; // [esp+0h] [ebp-48h]
  unsigned int v32; // [esp+0h] [ebp-48h]
  unsigned int v33; // [esp+4h] [ebp-44h]
  unsigned int v34; // [esp+4h] [ebp-44h]
  int v35; // [esp+Ch] [ebp-3Ch]
  int v36; // [esp+10h] [ebp-38h]
  unsigned __int8 *started; // [esp+14h] [ebp-34h]
  int v38; // [esp+18h] [ebp-30h]
  int v39; // [esp+1Ch] [ebp-2Ch]
  unsigned __int8 *v40; // [esp+20h] [ebp-28h]
  ULONG v41; // [esp+24h] [ebp-24h]
  XLATEOBJ *pxlo; // [esp+28h] [ebp-20h]
  _WORD v43[2]; // [esp+2Ch] [ebp-1Ch]
  int v44; // [esp+30h] [ebp-18h]
  ULONG v45; // [esp+34h] [ebp-14h]
  unsigned __int8 v46; // [esp+3Bh] [ebp-Dh]
  _DWORD v47[2]; // [esp+3Ch] [ebp-Ch]

  v47[0] = -524255232;
  v47[1] = -16975632;
  v1 = *((_DWORD *)a1 + 5);
  v36 = *((_DWORD *)a1 + 4);
  pxlo = *(XLATEOBJ **)a1;
  LOBYTE(v45) = 0;
  v46 = 0;
  v2 = *((_DWORD *)a1 + 14);
  v43[0] = -4096;
  v3 = *(_DWORD *)(v2 + 88);
  if ( v3 )
    v39 = **(_DWORD **)(v3 + 76) | *(_DWORD *)(*(_DWORD *)(v3 + 76) + 4) | *(_DWORD *)(*(_DWORD *)(v3 + 76) + 8);
  else
    v39 = -1;
  started = StartPixel(*((_DWORD *)a1 + 9), *((_DWORD *)a1 + 1), *((unsigned __int8 **)a1 + 28), v31, v33);
  v4 = StartPixel(*((_DWORD *)a1 + 11), *((_DWORD *)a1 + 2), *((unsigned __int8 **)a1 + 29), v32, v34);
  v40 = v4;
  if ( v1 )
  {
    v5 = started;
    do
    {
      v6 = *((_DWORD *)a1 + 11);
      v7 = *((_DWORD *)a1 + 28) == 1;
      v8 = v5;
      v35 = v1 - 1;
      v9 = v4;
      v10 = *((_DWORD *)a1 + 9);
      v41 = v10;
      v44 = v6;
      if ( v7 )
      {
        v10 &= 7u;
        if ( v10 )
          v46 = *v5 << v10;
        else
          v8 = v5 - 1;
      }
      v11 = *((_DWORD *)a1 + 29);
      if ( v11 == 1 )
      {
        LOBYTE(v10) = *((_BYTE *)v47 + (v6 & 7));
      }
      else
      {
        if ( v11 != 2 )
          goto LABEL_15;
        LOBYTE(v10) = *((_BYTE *)v43 + (v6 & 1));
      }
      LOBYTE(v10) = *v40 & v10;
      v45 = v10;
LABEL_15:
      if ( v36 )
      {
        v12 = v36;
        while ( 1 )
        {
          v38 = v12 - 1;
          if ( *((_DWORD *)a1 + 28) == 1 )
            break;
          switch ( *((_DWORD *)a1 + 28) )
          {
            case 2:
              v14 = v41;
              v15 = *v8;
              if ( (v41 & 1) != 0 )
              {
                v13 = v15 & 0xF;
                ++v8;
              }
              else
              {
                v13 = v15 >> 4;
              }
LABEL_34:
              v41 = v14 + 1;
              break;
            case 3:
              v13 = *v8++;
              break;
            case 4:
              v13 = (unsigned __int16)(v39 & *(_WORD *)v8);
              v8 += 2;
              break;
            case 5:
              v13 = *v8 | (*(unsigned __int16 *)(v8 + 1) << 8);
              v8 += 3;
              break;
            case 6:
              v13 = *(_DWORD *)v8 & v39;
              v8 += 4;
              break;
            default:
              return;
          }
          if ( *((_DWORD *)a1 + 29) == 1 )
          {
            if ( v13 == *((_DWORD *)a1 + 30) )
            {
              v25 = (*v9 << (v6 & 7)) & 0x80;
            }
            else
            {
              v24 = XLATEOBJ_iXlate(pxlo, v13);
              v6 = v44;
              v25 = v24 << 7;
            }
            v26 = v45 | v25;
            v44 = ++v6;
            if ( (v6 & 7) != 0 )
            {
              LOBYTE(v45) = v26 >> 1;
            }
            else
            {
              *v9++ = v26;
              LOBYTE(v45) = 0;
            }
            goto LABEL_69;
          }
          if ( *((_DWORD *)a1 + 29) != 2 )
          {
            switch ( *((_DWORD *)a1 + 29) )
            {
              case 3:
                if ( v13 != *((_DWORD *)a1 + 30) )
                {
                  v20 = XLATEOBJ_iXlate(pxlo, v13);
                  v6 = v44;
                  *v9 = v20;
                }
                ++v9;
                break;
              case 4:
                if ( v13 != *((_DWORD *)a1 + 30) )
                {
                  v19 = XLATEOBJ_iXlate(pxlo, v13);
                  v6 = v44;
                  *(_WORD *)v9 = v19;
                }
                v9 += 2;
                break;
              case 5:
                if ( v13 != *((_DWORD *)a1 + 30) )
                {
                  v18 = XLATEOBJ_iXlate(pxlo, v13);
                  v6 = v44;
                  *(_WORD *)v9 = v18;
                  v9[2] = BYTE2(v18);
                }
                v9 += 3;
                break;
              case 6:
                if ( v13 != *((_DWORD *)a1 + 30) )
                {
                  v17 = XLATEOBJ_iXlate(pxlo, v13);
                  v6 = v44;
                  *(_DWORD *)v9 = v17;
                }
                v9 += 4;
                break;
              default:
                return;
            }
            goto LABEL_69;
          }
          if ( (v6 & 1) != 0 )
          {
            if ( v13 == *((_DWORD *)a1 + 30) )
            {
              v21 = *v9 & 0xF;
            }
            else
            {
              v21 = XLATEOBJ_iXlate(pxlo, v13);
              v6 = v44;
            }
            v22 = v45 | v21;
            *v9++ = v22;
            goto LABEL_61;
          }
          if ( v13 == *((_DWORD *)a1 + 30) )
          {
            v22 = *v9 & 0xF0;
LABEL_61:
            LOBYTE(v45) = v22;
            goto LABEL_62;
          }
          v23 = XLATEOBJ_iXlate(pxlo, v13);
          v6 = v44;
          LOBYTE(v23) = 16 * v23;
          v45 = v23;
LABEL_62:
          v44 = ++v6;
LABEL_69:
          v12 = v38;
          if ( !v38 )
            goto LABEL_70;
        }
        v14 = v41;
        if ( (v41 & 7) != 0 )
        {
          v16 = v46;
        }
        else
        {
          v16 = *++v8;
          v46 = *v8;
        }
        v13 = v16 >> 7;
        v46 *= 2;
        goto LABEL_34;
      }
LABEL_70:
      v27 = *((_DWORD *)a1 + 29);
      if ( v27 != 1 )
      {
        if ( v27 != 2 )
          goto LABEL_77;
        v30 = v6 & 1;
        if ( !v30 )
          goto LABEL_77;
        v29 = *((_BYTE *)v43 + v30);
        goto LABEL_76;
      }
      v28 = v6 & 7;
      if ( v28 )
      {
        v29 = *((_BYTE *)v47 + v28);
LABEL_76:
        *v9 = v45 & v29 | *v9 & ~v29;
      }
LABEL_77:
      v5 = &started[*((_DWORD *)a1 + 7)];
      v4 = &v40[*((_DWORD *)a1 + 8)];
      v1 = v35;
      started = v5;
      v40 = v4;
    }
    while ( v35 );
  }
}
