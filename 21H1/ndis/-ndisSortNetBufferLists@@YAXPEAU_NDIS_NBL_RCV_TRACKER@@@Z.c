/*
 * XREFs of ?ndisSortNetBufferLists@@YAXPEAU_NDIS_NBL_RCV_TRACKER@@@Z @ 0x1C0002110
 * Callers:
 *     ?ndisMTopReceiveNetBufferLists@@YAXPEAXPEAU_NET_BUFFER_LIST@@KKK@Z @ 0x1C0001AA0 (-ndisMTopReceiveNetBufferLists@@YAXPEAXPEAU_NET_BUFFER_LIST@@KKK@Z.c)
 *     ?ndisMDispatchReceiveNetBufferListsWithLock@@YAXPEAXPEAU_NET_BUFFER_LIST@@KKK@Z @ 0x1C0035BE0 (-ndisMDispatchReceiveNetBufferListsWithLock@@YAXPEAXPEAU_NET_BUFFER_LIST@@KKK@Z.c)
 *     ?ndisMDispatchReceiveNetBufferLists@@YAXPEAXPEAU_NET_BUFFER_LIST@@KKK@Z @ 0x1C0098E20 (-ndisMDispatchReceiveNetBufferLists@@YAXPEAXPEAU_NET_BUFFER_LIST@@KKK@Z.c)
 *     ndisDoPeriodicReceivesIndication @ 0x1C00A2184 (ndisDoPeriodicReceivesIndication.c)
 *     ndisMIndicateSplitNblChain @ 0x1C00A2A94 (ndisMIndicateSplitNblChain.c)
 * Callees:
 *     ?ndisReturnNetBufferListsInternal@@YAXPEAXPEAU_NET_BUFFER_LIST@@KPEAU_NDIS_OPEN_BLOCK@@@Z @ 0x1C0099194 (-ndisReturnNetBufferListsInternal@@YAXPEAXPEAU_NET_BUFFER_LIST@@KPEAU_NDIS_OPEN_BLOCK@@@Z.c)
 *     PktMonClientNblDropNdis @ 0x1C00C656C (PktMonClientNblDropNdis.c)
 */

void __fastcall ndisSortNetBufferLists(struct _NDIS_NBL_RCV_TRACKER *a1)
{
  char v2; // r9
  __int64 v3; // r8
  unsigned int v4; // r11d
  __int64 v5; // rax
  unsigned int v6; // ebp
  struct _NDIS_OBJECT_HEADER *v7; // r14
  _QWORD *v8; // r10
  __int64 *v9; // rsi
  struct _NET_BUFFER_LIST *v10; // r13
  unsigned __int16 v11; // r12
  __int64 *v12; // rdi
  char v13; // r15
  __int64 v14; // rax
  __int64 v15; // rcx
  unsigned int v16; // ebp
  __int64 v17; // rdi
  unsigned int v18; // r14d
  char *v19; // r8
  char *v20; // r8
  __int64 v21; // rdx
  unsigned int v22; // r10d
  unsigned int v23; // ecx
  _WORD *v24; // rax
  unsigned int v25; // r9d
  __int64 v26; // rcx
  char *v27; // rdx
  _DWORD *v28; // rcx
  char *v29; // rax
  bool v30; // cf
  unsigned int v31; // [rsp+30h] [rbp-68h]
  unsigned int v32; // [rsp+34h] [rbp-64h]
  __int64 *v33; // [rsp+38h] [rbp-60h]
  struct _NDIS_OBJECT_HEADER *v34; // [rsp+40h] [rbp-58h]
  _QWORD *v35; // [rsp+48h] [rbp-50h]
  char v36; // [rsp+A0h] [rbp+8h]
  unsigned __int16 v37; // [rsp+B0h] [rbp+18h]
  int v38; // [rsp+B8h] [rbp+20h]

  v2 = 0;
  v36 = 0;
  LODWORD(v3) = 0;
  v38 = 0;
  v4 = 0;
  v32 = 0;
  v5 = *((_QWORD *)a1 + 1);
  v6 = 0;
  v7 = *(struct _NDIS_OBJECT_HEADER **)a1;
  v8 = 0LL;
  v9 = (__int64 *)*((_QWORD *)a1 + 3);
  v10 = 0LL;
  *((_DWORD *)a1 + 172) = 0;
  v31 = 0;
  v34 = v7;
  v35 = 0LL;
  if ( *(_QWORD *)(v5 + 328) || (*((_DWORD *)a1 + 4) & 2) != 0 )
  {
    *((_QWORD *)a1 + 8) = v9;
    *((_QWORD *)a1 + 9) = *((_QWORD *)a1 + 4);
    *((_QWORD *)a1 + 7) = 0LL;
    *((_DWORD *)a1 + 20) = *((_DWORD *)a1 + 11);
    return;
  }
  v11 = 0;
  *((_QWORD *)a1 + 7) = 0LL;
  *((_QWORD *)a1 + 8) = 0LL;
  *((_QWORD *)a1 + 9) = 0LL;
  *((_WORD *)a1 + 24) = 0;
  *((_DWORD *)a1 + 20) = 0;
  if ( v9 )
  {
    while ( 1 )
    {
      v12 = (__int64 *)*v9;
      v13 = 0;
      *v9 = 0LL;
      v33 = v12;
      if ( *(_DWORD *)(*(_QWORD *)a1 + 464LL) )
        break;
      v14 = v9[1];
      v15 = *(_QWORD *)(v14 + 8);
      v16 = *(_DWORD *)(v15 + 40);
      if ( v16 < 0xE )
        goto LABEL_59;
      v17 = *(unsigned int *)(v14 + 16);
      if ( v16 <= (unsigned int)v17 )
        goto LABEL_58;
      v18 = v16 - v17;
      if ( v16 - (unsigned int)v17 < 0xE )
        goto LABEL_57;
      if ( (*(_BYTE *)(v15 + 10) & 5) != 0 )
      {
        v19 = *(char **)(v15 + 24);
      }
      else
      {
        v29 = (char *)MmMapLockedPages((PMDL)v15, 0);
        v2 = v36;
        v19 = v29;
        v4 = v32;
        v8 = v35;
      }
      v20 = &v19[v17];
      HIBYTE(v37) = v20[12];
      LOBYTE(v37) = v20[13];
      if ( v37 > 0x600u )
      {
        if ( v37 != 0x8100 )
        {
          v11 = *((_WORD *)v20 + 6);
          goto LABEL_13;
        }
        if ( v16 < 0x12 )
        {
          LODWORD(v3) = v38;
LABEL_57:
          v7 = v34;
LABEL_58:
          v12 = v33;
LABEL_59:
          if ( v8 )
            *v8 = v9;
          else
            v10 = (struct _NET_BUFFER_LIST *)v9;
          ++*(_QWORD *)&v7[862].Type;
          v8 = v9;
          v6 = v31;
          v35 = v9;
          goto LABEL_33;
        }
        v12 = v33;
        v30 = v18 < 0x12;
        v7 = v34;
        if ( v30 )
        {
          LODWORD(v3) = v38;
          goto LABEL_59;
        }
        v11 = *((_WORD *)v20 + 8);
LABEL_14:
        LODWORD(v3) = v38;
        v6 = v31;
LABEL_15:
        v13 = 1;
        goto LABEL_16;
      }
      if ( v20[14] == -86 && v20[15] == -86 && v20[16] == 3 )
      {
        v11 = *((_WORD *)v20 + 10);
LABEL_13:
        v7 = v34;
        v12 = v33;
        goto LABEL_14;
      }
      LODWORD(v3) = v38;
      v6 = v31;
      v12 = v33;
      v7 = v34;
LABEL_16:
      v21 = *((_QWORD *)a1 + 1);
      if ( !v13 )
        goto LABEL_39;
      if ( (_DWORD)v3 == v11 )
      {
        v22 = v4;
        if ( v2 != 1 )
          goto LABEL_39;
      }
      else
      {
        v22 = 0;
        v38 = v11;
        v23 = *(_DWORD *)(v21 + 24);
        if ( !v23 )
        {
LABEL_54:
          v36 = 0;
          v4 = 0;
          v32 = 0;
LABEL_39:
          LODWORD(v3) = 0;
          goto LABEL_25;
        }
        v24 = (_WORD *)(v21 + 32);
        while ( v11 != *v24 )
        {
          ++v22;
          v24 += 8;
          if ( v22 >= v23 )
            goto LABEL_54;
        }
        v4 = v22;
        v32 = v22;
        v36 = 1;
      }
      if ( *((_WORD *)a1 + 20 * v6 + 24) == v11 )
      {
        LODWORD(v3) = v6;
      }
      else
      {
        v25 = *((_DWORD *)a1 + 172);
        LODWORD(v3) = 1;
        if ( v25 )
        {
          while ( *((_WORD *)a1 + 20 * (unsigned int)v3 + 24) != v11 )
          {
            LODWORD(v3) = v3 + 1;
            if ( (unsigned int)v3 > v25 )
              goto LABEL_24;
          }
          v6 = v3;
          v31 = v3;
        }
        else
        {
LABEL_24:
          v3 = v25 + 1;
          *((_DWORD *)a1 + 172) = v3;
          v26 = 5 * v3;
          *((_WORD *)a1 + 4 * v26 + 24) = v11;
          v31 = v25 + 1;
          v6 = v25 + 1;
          *((_QWORD *)a1 + v26 + 7) = *(_QWORD *)(v21 + 16 * (v22 + 1LL) + 24);
          *((_QWORD *)a1 + v26 + 8) = 0LL;
        }
      }
LABEL_25:
      v27 = (char *)a1 + 40 * (unsigned int)v3;
      v28 = (_DWORD *)((char *)a1 + 40 * (unsigned int)v3 + 80);
      if ( *((_QWORD *)v27 + 8) )
      {
        LODWORD(v3) = v38;
        v2 = v36;
        v8 = v35;
        **((_QWORD **)v27 + 9) = v9;
        ++*v28;
        *((_QWORD *)v27 + 9) = v9;
      }
      else
      {
        *((_QWORD *)v27 + 8) = v9;
        if ( (*((_DWORD *)a1 + 4) & 0x100) != 0 )
        {
          *((_QWORD *)v27 + 9) = 0LL;
          *v9 = (__int64)v12;
          *v28 = *((_DWORD *)a1 + 11);
LABEL_28:
          if ( v10 )
          {
            if ( byte_1C00E3EA8 && (*(_DWORD *)&v7[1455] & 2) != 0 )
              PktMonClientNblDropNdis((_DWORD)v7 + 5808, (_DWORD)v10, v3, 1, -1073676273, -536866810);
            if ( (*((_DWORD *)a1 + 4) & 2) == 0 )
              ndisReturnNetBufferListsInternal(v7, v10, *((_DWORD *)a1 + 4) & 1, 0LL);
          }
          return;
        }
        LODWORD(v3) = v38;
        v2 = v36;
        v8 = v35;
        *((_QWORD *)v27 + 9) = v9;
        *v28 = 1;
      }
LABEL_33:
      v9 = v12;
      if ( !v12 )
        goto LABEL_28;
    }
    v11 = *((_WORD *)v9 + 100);
    goto LABEL_15;
  }
}
