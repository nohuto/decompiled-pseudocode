/*
 * XREFs of VidSchiLogInterrupt @ 0x1C000CF70
 * Callers:
 *     VidSchDdiNotifyInterrupt @ 0x1C000CB70 (VidSchDdiNotifyInterrupt.c)
 *     ?VidSchiCallNotifyInterruptAtISR@@YAEPEAX@Z @ 0x1C003C480 (-VidSchiCallNotifyInterruptAtISR@@YAEPEAX@Z.c)
 * Callees:
 *     memset @ 0x1C00185C0 (memset.c)
 */

char __fastcall VidSchiLogInterrupt(__int64 a1, int *a2, char a3)
{
  int v3; // eax
  __int64 *v7; // r8
  __int64 v8; // rcx
  __int64 v9; // r8
  __int64 v10; // rdx
  char v11; // al
  __int64 *v12; // rsi
  __int64 v13; // rcx
  unsigned __int64 v14; // r15
  __int64 v15; // rsi
  _OWORD *v16; // rdi
  char v17; // al
  __int64 v18; // rcx
  __int64 v19; // rdi
  _OWORD *v20; // rsi
  unsigned __int8 v21; // cf
  __int64 *v22; // rdi
  unsigned __int64 v23; // r15
  _QWORD *v24; // rdx
  unsigned int v25; // ecx
  _QWORD *v26; // rax
  unsigned int v27; // ecx

  v3 = *a2;
  if ( *a2 == 1 )
  {
    v7 = *(__int64 **)(a1 + 624);
    v8 = a2[3] + (unsigned int)*(unsigned __int8 *)((unsigned int)a2[4] + a1 + 80);
    if ( (unsigned int)v8 < *(_DWORD *)(a1 + 696) )
      v7 += v8;
    v9 = *v7;
    v10 = *(_QWORD *)(v9 + 200) + 88LL * *(unsigned int *)(v9 + 212);
    *(_OWORD *)v10 = 0LL;
    *(_OWORD *)(v10 + 16) = 0LL;
    *(_OWORD *)(v10 + 32) = 0LL;
    *(_OWORD *)(v10 + 48) = 0LL;
    *(_OWORD *)(v10 + 64) = 0LL;
    *(_QWORD *)(v10 + 80) = 0LL;
    *(_BYTE *)(v10 + 83) = 1;
    *(_DWORD *)(v9 + 212) = (*(_DWORD *)(v9 + 212) + 1) & (*(_DWORD *)(v9 + 208) - 1);
    *(_BYTE *)(v10 + 80) = a3;
    if ( _bittest64(*(const signed __int64 **)(a1 + 584), (unsigned int)v8) )
      v11 = 0;
    else
      v11 = 1;
    *(_BYTE *)(v10 + 82) = v11;
    LOBYTE(v3) = *(_DWORD *)(v9 + 16) == 1;
    *(_BYTE *)(v10 + 81) = v3;
    *(_OWORD *)v10 = *(_OWORD *)a2;
    *(_OWORD *)(v10 + 16) = *((_OWORD *)a2 + 1);
    *(_OWORD *)(v10 + 32) = *((_OWORD *)a2 + 2);
    *(_OWORD *)(v10 + 48) = *((_OWORD *)a2 + 3);
    *(_OWORD *)(v10 + 64) = *((_OWORD *)a2 + 4);
  }
  else if ( v3 == 3 )
  {
    if ( (*(_DWORD *)(a1 + 2448) & 0x100) != 0 )
    {
      v26 = (_QWORD *)WdLogNewEntry5_WdEvent(a1, a2);
      v26[3] = a1;
      v26[4] = (unsigned int)a2[2];
      v26[5] = *((_QWORD *)a2 + 2);
      if ( (a2[18] & 1) != 0 )
        v27 = a2[6];
      else
        v27 = 0;
      v26[6] = v27;
      LOBYTE(v3) = WdLogEvent5_WdEvent(v26);
    }
  }
  else
  {
    v3 -= 2;
    switch ( v3 )
    {
      case 0:
        v12 = *(__int64 **)(a1 + 624);
        v13 = a2[4] + (unsigned int)*(unsigned __int8 *)((unsigned int)a2[5] + a1 + 80);
        v14 = (unsigned int)v13;
        if ( (unsigned int)v13 < *(_DWORD *)(a1 + 696) )
          v12 += v13;
        v15 = *v12;
        v16 = (_OWORD *)(*(_QWORD *)(v15 + 200) + 88LL * *(unsigned int *)(v15 + 212));
        memset(v16, 0, 0x58uLL);
        *((_BYTE *)v16 + 83) = 1;
        *(_DWORD *)(v15 + 212) = (*(_DWORD *)(v15 + 212) + 1) & (*(_DWORD *)(v15 + 208) - 1);
        *((_BYTE *)v16 + 80) = a3;
        if ( _bittest64(*(const signed __int64 **)(a1 + 584), v14) )
          v17 = 0;
        else
          v17 = 1;
        *((_BYTE *)v16 + 82) = v17;
        LOBYTE(v3) = *(_DWORD *)(v15 + 16) == 1;
        *((_BYTE *)v16 + 81) = v3;
        *v16 = *(_OWORD *)a2;
        v16[1] = *((_OWORD *)a2 + 1);
        v16[2] = *((_OWORD *)a2 + 2);
        v16[3] = *((_OWORD *)a2 + 3);
        v16[4] = *((_OWORD *)a2 + 4);
        return v3;
      case 5:
        if ( (*(_DWORD *)(a1 + 2448) & 0x100) != 0 )
          goto LABEL_29;
        return v3;
      case 7:
        v22 = *(__int64 **)(a1 + 624);
        v18 = a2[12] + (unsigned int)*(unsigned __int8 *)((unsigned int)a2[13] + a1 + 80);
        v23 = (unsigned int)v18;
        if ( (unsigned int)v18 >= *(_DWORD *)(a1 + 696) )
          goto LABEL_26;
        goto LABEL_25;
      case 8:
        if ( (*(_DWORD *)(a1 + 2448) & 0x100) != 0 )
        {
LABEL_29:
          v24 = (_QWORD *)WdLogNewEntry5_WdEvent(a1, 0x1C0000000uLL);
          v24[3] = a1;
          v24[4] = (unsigned int)a2[2];
          if ( (a2[18] & 1) != 0 )
            v25 = a2[3];
          else
            v25 = 0;
          v24[5] = v25;
          v24[6] = (unsigned int)a2[4];
          v24[7] = *((_QWORD *)a2 + 3);
          LOBYTE(v3) = WdLogEvent5_WdEvent(v24);
        }
        return v3;
      case 9:
      case 13:
      case 14:
        v18 = a2[2] + (unsigned int)*(unsigned __int8 *)((unsigned int)a2[3] + a1 + 80);
        goto LABEL_22;
      case 10:
        v18 = a2[10] + (unsigned int)*(unsigned __int8 *)((unsigned int)a2[11] + a1 + 80);
LABEL_22:
        v22 = *(__int64 **)(a1 + 624);
        v23 = (unsigned int)v18;
        if ( (unsigned int)v18 < *(_DWORD *)(a1 + 696) )
LABEL_25:
          v22 += v18;
LABEL_26:
        v19 = *v22;
        v20 = (_OWORD *)(*(_QWORD *)(v19 + 200) + 88LL * *(unsigned int *)(v19 + 212));
        memset(v20, 0, 0x58uLL);
        *((_BYTE *)v20 + 83) = 1;
        *(_DWORD *)(v19 + 212) = (*(_DWORD *)(v19 + 212) + 1) & (*(_DWORD *)(v19 + 208) - 1);
        *((_BYTE *)v20 + 80) = a3;
        v21 = _bittest64(*(const signed __int64 **)(a1 + 584), v23);
        goto LABEL_27;
      case 15:
        v19 = *(_QWORD *)(*(_QWORD *)(*((_QWORD *)a2 + 1) + 8LL) + 16LL);
        v20 = (_OWORD *)(*(_QWORD *)(v19 + 200) + 88LL * *(unsigned int *)(v19 + 212));
        memset(v20, 0, 0x58uLL);
        *((_BYTE *)v20 + 83) = 1;
        *(_DWORD *)(v19 + 212) = (*(_DWORD *)(v19 + 212) + 1) & (*(_DWORD *)(v19 + 208) - 1);
        *((_BYTE *)v20 + 80) = a3;
        v21 = _bittest64(*(const signed __int64 **)(a1 + 584), *(unsigned __int16 *)(v19 + 4));
LABEL_27:
        *((_BYTE *)v20 + 82) = !v21;
        LOBYTE(v3) = *(_DWORD *)(v19 + 16) == 1;
        *((_BYTE *)v20 + 81) = v3;
        *v20 = *(_OWORD *)a2;
        v20[1] = *((_OWORD *)a2 + 1);
        v20[2] = *((_OWORD *)a2 + 2);
        v20[3] = *((_OWORD *)a2 + 3);
        v20[4] = *((_OWORD *)a2 + 4);
        break;
      default:
        return v3;
    }
  }
  return v3;
}
