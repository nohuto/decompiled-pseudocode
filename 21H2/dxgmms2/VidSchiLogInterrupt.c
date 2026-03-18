/*
 * XREFs of VidSchiLogInterrupt @ 0x1C000CAA0
 * Callers:
 *     VidSchDdiNotifyInterrupt @ 0x1C000C690 (VidSchDdiNotifyInterrupt.c)
 *     ?VidSchiCallNotifyInterruptAtISR@@YAEPEAX@Z @ 0x1C0044360 (-VidSchiCallNotifyInterruptAtISR@@YAEPEAX@Z.c)
 * Callees:
 *     memset @ 0x1C001DC40 (memset.c)
 */

char __fastcall VidSchiLogInterrupt(__int64 a1, int *a2, char a3)
{
  int v3; // eax
  __int64 *v7; // rsi
  __int64 v8; // rcx
  unsigned __int64 v9; // r15
  __int64 v10; // rsi
  LARGE_INTEGER *v11; // rdi
  char v12; // al
  __int64 *v13; // rsi
  __int64 v14; // rcx
  __int64 *v15; // rdi
  __int64 v16; // rcx
  unsigned __int64 v17; // r15
  __int64 v18; // rdi
  LARGE_INTEGER *v19; // rsi
  unsigned __int8 v20; // cf
  __int64 v21; // rdx
  unsigned int v22; // eax
  __int64 v23; // rax

  v3 = *a2;
  if ( *a2 == 1 )
  {
    v7 = *(__int64 **)(a1 + 632);
    v8 = a2[3] + (unsigned int)*(unsigned __int8 *)((unsigned int)a2[4] + a1 + 88);
    v9 = (unsigned int)v8;
    if ( (unsigned int)v8 < *(_DWORD *)(a1 + 704) )
      v7 += v8;
    v10 = *v7;
    v11 = (LARGE_INTEGER *)(*(_QWORD *)(v10 + 200) + 96LL * *(unsigned int *)(v10 + 212));
    *(_OWORD *)&v11->LowPart = 0LL;
    *(_OWORD *)&v11[2].LowPart = 0LL;
    *(_OWORD *)&v11[4].LowPart = 0LL;
    *(_OWORD *)&v11[6].LowPart = 0LL;
    *(_OWORD *)&v11[8].LowPart = 0LL;
    *(_OWORD *)&v11[10].LowPart = 0LL;
LABEL_5:
    v11[10] = KeQueryPerformanceCounter(0LL);
    BYTE3(v11[11].QuadPart) = 1;
    *(_DWORD *)(v10 + 212) = (*(_DWORD *)(v10 + 212) + 1) & (*(_DWORD *)(v10 + 208) - 1);
    LOBYTE(v11[11].LowPart) = a3;
    if ( _bittest64(*(const signed __int64 **)(a1 + 592), v9) )
      v12 = 0;
    else
      v12 = 1;
    BYTE2(v11[11].u.LowPart) = v12;
    LOBYTE(v3) = *(_DWORD *)(v10 + 16) == 1;
    BYTE1(v11[11].LowPart) = v3;
    *(_OWORD *)&v11->LowPart = *(_OWORD *)a2;
    *(_OWORD *)&v11[2].LowPart = *((_OWORD *)a2 + 1);
    *(_OWORD *)&v11[4].LowPart = *((_OWORD *)a2 + 2);
    *(_OWORD *)&v11[6].LowPart = *((_OWORD *)a2 + 3);
    *(_OWORD *)&v11[8].LowPart = *((_OWORD *)a2 + 4);
  }
  else if ( v3 == 3 )
  {
    if ( (*(_DWORD *)(a1 + 2536) & 0x100) != 0 )
    {
      if ( (a2[18] & 1) != 0 )
        v23 = (unsigned int)a2[6];
      else
        v23 = 0LL;
      LOBYTE(v3) = WdLogSingleEntry4(4LL, a1, (unsigned int)a2[2], *((_QWORD *)a2 + 2), v23);
    }
  }
  else
  {
    v3 -= 2;
    switch ( v3 )
    {
      case 0:
        v13 = *(__int64 **)(a1 + 632);
        v14 = a2[4] + (unsigned int)*(unsigned __int8 *)((unsigned int)a2[5] + a1 + 88);
        v9 = (unsigned int)v14;
        if ( (unsigned int)v14 < *(_DWORD *)(a1 + 704) )
          v13 += v14;
        v10 = *v13;
        v11 = (LARGE_INTEGER *)(*(_QWORD *)(v10 + 200) + 96LL * *(unsigned int *)(v10 + 212));
        memset(v11, 0, 0x60uLL);
        goto LABEL_5;
      case 5:
      case 8:
        if ( (*(_DWORD *)(a1 + 2536) & 0x100) != 0 )
        {
          v21 = (unsigned int)a2[4];
          if ( (a2[18] & 1) != 0 )
            v22 = a2[3];
          else
            v22 = 0;
          LOBYTE(v3) = WdLogSingleEntry5(4LL, a1, (unsigned int)a2[2], v22, v21, *((_QWORD *)a2 + 3));
        }
        return v3;
      case 7:
        v16 = a2[12] + (unsigned int)*(unsigned __int8 *)((unsigned int)a2[13] + a1 + 88);
        goto LABEL_25;
      case 9:
        v15 = *(__int64 **)(a1 + 632);
        v16 = a2[2] + (unsigned int)*(unsigned __int8 *)((unsigned int)a2[3] + a1 + 88);
        v17 = (unsigned int)v16;
        if ( (unsigned int)v16 < *(_DWORD *)(a1 + 704) )
          goto LABEL_19;
        goto LABEL_20;
      case 10:
        v16 = a2[10] + (unsigned int)*(unsigned __int8 *)((unsigned int)a2[11] + a1 + 88);
        goto LABEL_25;
      case 13:
      case 14:
        v16 = a2[2] + (unsigned int)*(unsigned __int8 *)((unsigned int)a2[3] + a1 + 88);
LABEL_25:
        v15 = *(__int64 **)(a1 + 632);
        v17 = (unsigned int)v16;
        if ( (unsigned int)v16 < *(_DWORD *)(a1 + 704) )
LABEL_19:
          v15 += v16;
LABEL_20:
        v18 = *v15;
        v19 = (LARGE_INTEGER *)(*(_QWORD *)(v18 + 200) + 96LL * *(unsigned int *)(v18 + 212));
        memset(v19, 0, 0x60uLL);
        v19[10] = KeQueryPerformanceCounter(0LL);
        BYTE3(v19[11].QuadPart) = 1;
        *(_DWORD *)(v18 + 212) = (*(_DWORD *)(v18 + 212) + 1) & (*(_DWORD *)(v18 + 208) - 1);
        LOBYTE(v19[11].LowPart) = a3;
        v20 = _bittest64(*(const signed __int64 **)(a1 + 592), v17);
        goto LABEL_22;
      case 15:
        v18 = *(_QWORD *)(*(_QWORD *)(*((_QWORD *)a2 + 1) + 8LL) + 16LL);
        v19 = (LARGE_INTEGER *)(*(_QWORD *)(v18 + 200) + 96LL * *(unsigned int *)(v18 + 212));
        memset(v19, 0, 0x60uLL);
        v19[10] = KeQueryPerformanceCounter(0LL);
        BYTE3(v19[11].QuadPart) = 1;
        *(_DWORD *)(v18 + 212) = (*(_DWORD *)(v18 + 212) + 1) & (*(_DWORD *)(v18 + 208) - 1);
        LOBYTE(v19[11].LowPart) = a3;
        v20 = _bittest64(*(const signed __int64 **)(a1 + 592), *(unsigned __int16 *)(v18 + 4));
LABEL_22:
        BYTE2(v19[11].u.LowPart) = !v20;
        LOBYTE(v3) = *(_DWORD *)(v18 + 16) == 1;
        BYTE1(v19[11].LowPart) = v3;
        *(_OWORD *)&v19->LowPart = *(_OWORD *)a2;
        *(_OWORD *)&v19[2].LowPart = *((_OWORD *)a2 + 1);
        *(_OWORD *)&v19[4].LowPart = *((_OWORD *)a2 + 2);
        *(_OWORD *)&v19[6].LowPart = *((_OWORD *)a2 + 3);
        *(_OWORD *)&v19[8].LowPart = *((_OWORD *)a2 + 4);
        break;
      default:
        return v3;
    }
  }
  return v3;
}
