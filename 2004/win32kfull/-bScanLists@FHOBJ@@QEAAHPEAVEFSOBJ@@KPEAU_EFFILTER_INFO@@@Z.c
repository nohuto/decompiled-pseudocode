/*
 * XREFs of ?bScanLists@FHOBJ@@QEAAHPEAVEFSOBJ@@KPEAU_EFFILTER_INFO@@@Z @ 0x1C00DB760
 * Callers:
 *     ?bScanTheList@@YAHPEAVFHOBJ@@KPEAVEFSOBJ@@KPEAU_EFFILTER_INFO@@PEBG@Z @ 0x1C00D9B7C (-bScanTheList@@YAHPEAVFHOBJ@@KPEAVEFSOBJ@@KPEAU_EFFILTER_INFO@@PEBG@Z.c)
 * Callees:
 *     ?bAdd@EFSOBJ@@QEAAHPEAVPFE@@W4_ENUMFONTSTYLE@@KK@Z @ 0x1C00DB9F4 (-bAdd@EFSOBJ@@QEAAHPEAVPFE@@W4_ENUMFONTSTYLE@@KK@Z.c)
 *     ?pGetLinkedFontList@PFEOBJ@@QEAAPEAU_LIST_ENTRY@@XZ @ 0x1C00DBD64 (-pGetLinkedFontList@PFEOBJ@@QEAAPEAU_LIST_ENTRY@@XZ.c)
 *     ?efstyCompute@@YA?AW4_ENUMFONTSTYLE@@PEAHAEAVPFEOBJ@@@Z @ 0x1C0153CDC (-efstyCompute@@YA-AW4_ENUMFONTSTYLE@@PEAHAEAVPFEOBJ@@@Z.c)
 *     __security_check_cookie @ 0x1C0157760 (__security_check_cookie.c)
 *     ?pPvtDataMatch@PFFOBJ@@QEAAPEAUtagPvtData@@XZ @ 0x1C02BBC34 (-pPvtDataMatch@PFFOBJ@@QEAAPEAUtagPvtData@@XZ.c)
 */

__int64 __fastcall FHOBJ::bScanLists(FHOBJ *this, struct EFSOBJ *a2, int a3, struct _EFFILTER_INFO *a4)
{
  unsigned int v4; // r12d
  __int64 v8; // rsi
  _QWORD *v9; // r14
  int v10; // ebp
  __int64 *v11; // rbx
  int v12; // r8d
  _DWORD *v13; // r9
  int v14; // edx
  __int64 v16; // rdx
  int v17; // edx
  __int64 v18; // rax
  __int64 v19; // rcx
  char *v20; // rcx
  char v21; // r11
  char *v22; // r8
  struct _LIST_ENTRY *LinkedFontList; // r10
  struct _LIST_ENTRY *i; // r9
  struct _LIST_ENTRY *Flink; // rcx
  __int64 Blink_low; // rax
  _BYTE *v27; // rax
  _BYTE *v28; // r8
  struct tagPvtData *v29; // rax
  unsigned int v30; // eax
  __int64 *v31; // [rsp+30h] [rbp-78h] BYREF
  __int64 v32; // [rsp+38h] [rbp-70h] BYREF
  __int128 v33; // [rsp+48h] [rbp-60h] BYREF
  __int64 v34; // [rsp+58h] [rbp-50h]

  v4 = 0;
  if ( a3 == 2 )
  {
    v4 = 1;
  }
  else if ( a3 == 3 )
  {
    v4 = 2;
  }
  v8 = *(_QWORD *)(*((_QWORD *)this + 1) + 24LL);
  if ( !v8 )
    return 1LL;
  while ( 1 )
  {
    v9 = *(_QWORD **)(v8 + 8);
    if ( v9 )
    {
      if ( (*(_DWORD *)(v8 + 32) & 2) == 0 )
        break;
    }
LABEL_15:
    v8 = *(_QWORD *)(v8 + 48);
    if ( !v8 )
      return 1LL;
  }
  v10 = 0;
  *((_DWORD *)a4 + 7) = 1;
  v34 = 0LL;
  *((_DWORD *)a4 + 8) = *(_DWORD *)(v8 + 24);
  v33 = 0LL;
  while ( 1 )
  {
    v11 = (__int64 *)v9[1];
    v31 = v11;
    v12 = *((_DWORD *)v11 + 3);
    v13 = (_DWORD *)v11[4];
    if ( (v12 & 2) != 0 )
      goto LABEL_14;
    v14 = v13[12];
    if ( (v14 & 0x800000) != 0 || (v12 & 8) != 0 || *((_DWORD *)a4 + 6) && (v14 & 2) != 0 )
      goto LABEL_14;
    if ( *((_DWORD *)a4 + 3) && (v14 & 1) != 0
      || *((_DWORD *)a4 + 4) && (v14 & 1) == 0
      || *(_DWORD *)a4
      && (v14 & 2) != 0
      && (v12 & 1) == 0
      && (*((_DWORD *)a4 + 1) != v13[32] || *((_DWORD *)a4 + 2) != v13[33])
      || *((_DWORD *)a4 + 7) && *((_DWORD *)a4 + 8) && (v14 & 2) != 0 )
    {
      goto LABEL_14;
    }
    v16 = *v11;
    v32 = v16;
    if ( *(struct PFT **const *)(v16 + 128) == gpPFTPrivate )
    {
      v29 = PFFOBJ::pPvtDataMatch((PFFOBJ *)&v32);
      if ( !v29 || *((_DWORD *)v29 + 1) )
        goto LABEL_14;
    }
    else if ( !*(_DWORD *)(v16 + 56) )
    {
      goto LABEL_14;
    }
    if ( *((_DWORD *)a4 + 5) && (*((_DWORD *)v11 + 3) & 1) == 0 || (*((_DWORD *)v11 + 3) & 0x44) != 0 )
      goto LABEL_14;
    v17 = *((_DWORD *)a4 + 9);
    if ( v17 != 1 )
    {
      v18 = v11[4];
      v19 = *(int *)(v18 + 40);
      if ( (_DWORD)v19 )
      {
        if ( (_BYTE)v17 == 1 )
          LOBYTE(v17) = MAPPER::DefaultCharset;
        if ( (_BYTE)v17 == 0xFE )
        {
          LOBYTE(v17) = -2;
        }
        else
        {
          v20 = (char *)(v18 + v19);
          v21 = *v20;
          v22 = v20 + 16;
          if ( v20 >= v20 + 16 )
          {
LABEL_36:
            if ( v11[15] )
            {
              LinkedFontList = PFEOBJ::pGetLinkedFontList((PFEOBJ *)&v31);
              for ( i = LinkedFontList->Flink; i != LinkedFontList; i = i->Flink )
              {
                Flink = i[2].Flink[2].Flink;
                Blink_low = SLODWORD(Flink[2].Blink);
                if ( (_DWORD)Blink_low )
                {
                  v27 = (char *)Flink + Blink_low;
                  v28 = v27 + 16;
                  if ( v27 < v27 + 16 )
                  {
                    while ( *v27 != (_BYTE)v17 )
                    {
                      if ( *v27 != 1 && ++v27 < v28 )
                        continue;
                      goto LABEL_53;
                    }
                    goto LABEL_38;
                  }
                }
                else if ( BYTE4(Flink[2].Blink) == (_BYTE)v17 )
                {
                  goto LABEL_38;
                }
LABEL_53:
                ;
              }
            }
            LOBYTE(v17) = v21;
          }
          else
          {
            while ( *v20 != (_BYTE)v17 )
            {
              if ( *v20 != 1 && ++v20 < v22 )
                continue;
              goto LABEL_36;
            }
          }
        }
      }
      else
      {
        LOBYTE(v17) = *(_BYTE *)(v18 + 44);
      }
LABEL_38:
      if ( (_BYTE)v17 != *((_BYTE *)a4 + 36) )
        goto LABEL_14;
    }
    if ( a3 != 1 )
      break;
    v30 = efstyCompute(&v33, &v31);
    if ( !v10 || v30 == 5 )
    {
      if ( !(unsigned int)EFSOBJ::bAdd(a2, v11, v30, 0LL, 1) )
        return 0LL;
      v10 = 1;
    }
LABEL_14:
    v9 = (_QWORD *)*v9;
    if ( !v9 )
      goto LABEL_15;
  }
  if ( (unsigned int)EFSOBJ::bAdd(a2, v11, 0LL, v4, *((_DWORD *)a4 + 9)) )
    goto LABEL_15;
  return 0LL;
}
