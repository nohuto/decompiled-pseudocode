/*
 * XREFs of RtlLookupFunctionEntry @ 0x1402E9520
 * Callers:
 *     RtlRaiseException @ 0x1402E6830 (RtlRaiseException.c)
 *     RtlDispatchException @ 0x1402E6C20 (RtlDispatchException.c)
 *     RtlUnwindEx @ 0x1402E70E0 (RtlUnwindEx.c)
 *     MmWriteSystemImageTracepoint @ 0x14053A228 (MmWriteSystemImageTracepoint.c)
 *     RtlpSameFunction @ 0x1405811D0 (RtlpSameFunction.c)
 *     KiTpBuildExcludedKernelTracepointRangeList @ 0x1408B9474 (KiTpBuildExcludedKernelTracepointRangeList.c)
 *     sub_140A19EE4 @ 0x140A19EE4 (sub_140A19EE4.c)
 *     KiInitDynamicTraceSupport @ 0x140A45B30 (KiInitDynamicTraceSupport.c)
 *     RtlInitializeHistoryTable @ 0x140A54074 (RtlInitializeHistoryTable.c)
 * Callees:
 *     RtlpxLookupFunctionTable @ 0x1402E92F0 (RtlpxLookupFunctionTable.c)
 *     RtlpConvertFunctionEntry @ 0x1402E9860 (RtlpConvertFunctionEntry.c)
 */

unsigned int *__fastcall RtlLookupFunctionEntry(unsigned __int64 a1, _QWORD *a2, unsigned int *a3)
{
  unsigned int v6; // edx
  unsigned int v7; // ecx
  unsigned int *v8; // r10
  __int64 v9; // r9
  unsigned int *result; // rax
  unsigned int v11; // edx
  unsigned int v12; // r9d
  __int64 v13; // r8
  unsigned int *v14; // rcx
  unsigned int *v15; // rbp
  __int64 v16; // rcx
  unsigned __int64 v17; // rdx
  unsigned __int64 v18; // rcx
  unsigned int *v19; // rsi
  __int64 v20; // r8
  unsigned __int128 v21; // rax
  __int64 v22; // rdx
  unsigned __int64 v23; // rbx
  unsigned __int64 v24; // r11
  unsigned int *v25; // r10
  int v26; // r8d
  int i; // r9d
  int v28; // eax
  __int64 v29; // rdx
  __int128 v30; // [rsp+20h] [rbp-28h] BYREF
  __int64 v31; // [rsp+30h] [rbp-18h]

  if ( !a3 )
    goto LABEL_29;
  if ( *((_BYTE *)a3 + 7) )
  {
    *((_BYTE *)a3 + 7) = 0;
    result = *(unsigned int **)&RtlpUnwindHistoryTable[4 * (unsigned __int8)byte_140E01945 + 8];
    if ( result )
    {
      v29 = *(_QWORD *)&RtlpUnwindHistoryTable[4 * (unsigned __int8)byte_140E01945 + 6];
      if ( a1 >= v29 + (unsigned __int64)*result && a1 < v29 + (unsigned __int64)result[1] )
      {
        *a2 = v29;
        return result;
      }
    }
  }
  if ( !*((_BYTE *)a3 + 6) )
    goto LABEL_29;
  if ( a1 >= qword_140E01950
    || a1 < qword_140E01948
    || (v6 = *((unsigned __int8 *)a3 + 5), v7 = v6, v6 >= RtlpUnwindHistoryTable[0]) )
  {
LABEL_11:
    if ( a1 >= *((_QWORD *)a3 + 1) && a1 < *((_QWORD *)a3 + 2) )
    {
      v11 = *((unsigned __int8 *)a3 + 4);
      v12 = v11;
      if ( v11 < *a3 )
      {
        while ( 1 )
        {
          v13 = *(_QWORD *)&a3[4 * v12 + 6];
          v14 = *(unsigned int **)&a3[4 * v12 + 8];
          if ( a1 >= v13 + (unsigned __int64)*v14 && a1 < v13 + (unsigned __int64)v14[1] )
            break;
          if ( ++v12 >= *a3 )
            goto LABEL_29;
        }
        *((_BYTE *)a3 + 4) = v11 + 1;
        *a2 = v13;
        return (unsigned int *)RtlpConvertFunctionEntry(v14, v13);
      }
    }
LABEL_29:
    v31 = 0LL;
    v30 = 0LL;
    if ( a1 < *(&xmmword_140E00020 + 1) || a1 >= *(&xmmword_140E00020 + 1) + (unsigned int)qword_140E00030 )
    {
      v19 = (unsigned int *)RtlpxLookupFunctionTable(a1, (__int64)&v30);
    }
    else
    {
      v19 = (unsigned int *)xmmword_140E00020;
      v30 = *(_OWORD *)&xmmword_140E00020;
      v31 = qword_140E00030;
    }
    v15 = 0LL;
    if ( v19 )
    {
      v20 = *((_QWORD *)&v30 + 1);
      v21 = HIDWORD(v31) * (unsigned __int128)0xAAAAAAAAAAAAAAABuLL;
      *a2 = *((_QWORD *)&v30 + 1);
      v22 = *((_QWORD *)&v21 + 1) >> 3;
      if ( (_DWORD)v22 )
      {
        v23 = a1 - v20;
        v24 = v19[3 * (unsigned int)(v22 - 1)];
        v25 = &v19[3 * (unsigned int)(v22 - 1)];
        if ( v23 < v24 )
        {
          v26 = v22 - 2;
          for ( i = 0; v26 >= i; LODWORD(v24) = *v25 )
          {
            v28 = (i + v26) >> 1;
            v25 = &v19[3 * v28];
            if ( v23 < *v25 )
            {
              v26 = v28 - 1;
            }
            else
            {
              LODWORD(v24) = *v25;
              if ( v23 < v25[3] )
                break;
              i = v28 + 1;
            }
          }
        }
        if ( v23 >= (unsigned int)v24 && v23 < v25[1] )
          v15 = v25;
      }
      if ( v15 )
      {
        if ( a3 )
        {
          if ( !*((_BYTE *)a3 + 6) )
          {
            v16 = *a3;
            if ( (unsigned int)v16 < 0xC )
            {
              *a3 = v16 + 1;
              *(_QWORD *)&a3[4 * v16 + 6] = *a2;
              *(_QWORD *)&a3[4 * (unsigned int)v16 + 8] = v15;
              v17 = *a2 + *v15;
              v18 = *a2 + v15[1];
              if ( v17 < *((_QWORD *)a3 + 1) )
                *((_QWORD *)a3 + 1) = v17;
              if ( v18 > *((_QWORD *)a3 + 2) )
                *((_QWORD *)a3 + 2) = v18;
            }
          }
        }
      }
    }
    return (unsigned int *)RtlpConvertFunctionEntry(v15, *a2);
  }
  while ( 1 )
  {
    v8 = *(unsigned int **)&RtlpUnwindHistoryTable[4 * v7 + 8];
    v9 = *(_QWORD *)&RtlpUnwindHistoryTable[4 * v7 + 6];
    if ( a1 >= v9 + (unsigned __int64)*v8 && a1 < v9 + (unsigned __int64)v8[1] )
      break;
    if ( ++v7 >= RtlpUnwindHistoryTable[0] )
      goto LABEL_11;
  }
  result = *(unsigned int **)&RtlpUnwindHistoryTable[4 * v7 + 8];
  *((_BYTE *)a3 + 5) = v6 + 1;
  *a2 = v9;
  return result;
}
