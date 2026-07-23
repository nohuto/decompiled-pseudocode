/*
 * XREFs of FsRtlCheckUpperOplock @ 0x14088BA10
 * Callers:
 *     <none>
 * Callees:
 *     FsRtlpOplockBreakToII @ 0x14024302C (FsRtlpOplockBreakToII.c)
 *     FsRtlpComputeShareableOplockState @ 0x1402AAA80 (FsRtlpComputeShareableOplockState.c)
 *     ExAcquireFastMutexUnsafe @ 0x1402AB110 (ExAcquireFastMutexUnsafe.c)
 *     ExReleaseFastMutexUnsafe @ 0x1402AB2A0 (ExReleaseFastMutexUnsafe.c)
 *     FsRtlpOplockBreakByCacheFlags @ 0x14035FB50 (FsRtlpOplockBreakByCacheFlags.c)
 *     FsRtlpOplockBreakToNone @ 0x14036D578 (FsRtlpOplockBreakToNone.c)
 *     __security_check_cookie @ 0x1403D05D0 (__security_check_cookie.c)
 *     memset @ 0x140414300 (memset.c)
 *     FsRtlpRemoveAndCompleteReadOnlyIrp @ 0x1404F0ACC (FsRtlpRemoveAndCompleteReadOnlyIrp.c)
 *     FsRtlpOplockUpperLowerCompatible @ 0x1406D9878 (FsRtlpOplockUpperLowerCompatible.c)
 */

__int64 __fastcall FsRtlCheckUpperOplock(__int64 **a1, char a2, __int64 a3, __int64 a4, __int64 a5, unsigned int a6)
{
  int v7; // r15d
  __int64 *v8; // rsi
  bool v9; // r14
  int v10; // edi
  unsigned int v11; // ebx
  int v12; // r10d
  __int64 *i; // rdi
  __int16 v14; // r10
  char v15; // al
  int v16; // r10d
  __int64 v17; // r15
  bool v18; // zf
  __int64 v19; // r14
  unsigned int v20; // eax
  __int64 v22; // [rsp+20h] [rbp-E8h]
  __int64 v23; // [rsp+20h] [rbp-E8h]
  char v24; // [rsp+70h] [rbp-98h] BYREF
  char v25; // [rsp+71h] [rbp-97h]
  unsigned __int8 v26; // [rsp+72h] [rbp-96h]
  int v27; // [rsp+74h] [rbp-94h]
  __int64 v28; // [rsp+78h] [rbp-90h]
  __int64 v29; // [rsp+80h] [rbp-88h]
  __int64 *v30; // [rsp+88h] [rbp-80h]
  _BYTE v31[72]; // [rsp+90h] [rbp-78h] BYREF

  v28 = a4;
  v29 = a5;
  v7 = ((a2 & 1) << 12) | ((a2 & 6) << 12);
  v30 = *a1;
  v8 = v30;
  v24 = 0;
  v9 = 0;
  v25 = 0;
  v10 = 0;
  v26 = 0;
  memset(v31, 0, sizeof(v31));
  v11 = 0;
  if ( !v30 )
    return v11;
  ExAcquireFastMutexUnsafe((PFAST_MUTEX)v30[19]);
  v24 = 1;
  v12 = *((_DWORD *)v30 + 36);
  if ( v12 != 1 )
  {
    if ( (a6 & 0x20000) != 0 )
    {
      if ( ((v12 - 4096) & 0xFFFFFFEF) != 0 )
      {
        v11 = -1073739511;
        v27 = -1073739511;
      }
      else
      {
        for ( i = (__int64 *)v30[5]; i != v30 + 5; i = (__int64 *)*i )
        {
          if ( *(_DWORD *)(i[2] + 24) == 590400 )
          {
            i = (__int64 *)i[1];
            FsRtlpRemoveAndCompleteReadOnlyIrp((_QWORD *)*i, 0, 0x1000u);
          }
        }
        FsRtlpComputeShareableOplockState((__int64)v30);
      }
      goto LABEL_36;
    }
    if ( !FsRtlpOplockUpperLowerCompatible(v12, v7) )
    {
      if ( v7 )
      {
        if ( v7 != 4096 )
        {
          if ( v7 != 12288 )
          {
            if ( v7 != 20480 )
            {
              v11 = -1073741597;
              v27 = -1073741597;
              goto LABEL_36;
            }
            v10 = 0x2000;
            v9 = (v14 & 4) != 0;
            goto LABEL_19;
          }
          v9 = 1;
LABEL_21:
          v10 = 0x4000;
LABEL_19:
          v15 = v25;
          goto LABEL_27;
        }
        v9 = 1;
        v16 = v14 & 0x5000;
        if ( v16 == 20480 )
        {
          v26 = 1;
          goto LABEL_21;
        }
        v15 = v25;
        if ( v16 )
          v10 = v16;
      }
      else
      {
        v15 = 1;
        v10 = 28672;
      }
LABEL_27:
      v31[0] = 3;
      v17 = v29;
      v18 = !v9;
      v19 = v28;
      if ( v18 )
      {
        if ( !v15 )
        {
LABEL_32:
          if ( !v11 && ((_DWORD)v8[18] & v10) != 0 )
          {
            LODWORD(v22) = 0;
            v11 = FsRtlpOplockBreakByCacheFlags(
                    (__int64)v8,
                    (__int64)v31,
                    0LL,
                    a6 | v26,
                    v22,
                    v10,
                    a3,
                    v19,
                    v17,
                    0LL,
                    0LL,
                    0LL,
                    &v24,
                    0LL);
            v27 = v11;
            if ( v26 )
            {
              LODWORD(v23) = 0;
              v11 = FsRtlpOplockBreakByCacheFlags(
                      (__int64)v8,
                      (__int64)v31,
                      0LL,
                      a6,
                      v23,
                      0x2000,
                      a3,
                      v19,
                      v17,
                      0LL,
                      0LL,
                      0LL,
                      &v24,
                      0LL);
              v27 = v11;
            }
          }
          goto LABEL_36;
        }
        v20 = FsRtlpOplockBreakToNone((__int64)v30, (__int64)v31, 0LL, a6, v22, a3, v28, v29, 0LL, 0LL, 0LL, &v24, 0LL);
      }
      else
      {
        v20 = FsRtlpOplockBreakToII(v30, (__int64)v31, 0LL, a6, v22, a3, v28, v29, 0LL, 0LL, 0LL, &v24, 0LL);
      }
      v27 = v20;
      v11 = v20;
      goto LABEL_32;
    }
  }
LABEL_36:
  if ( v24 )
    ExReleaseFastMutexUnsafe((PFAST_MUTEX)v8[19]);
  return v11;
}
