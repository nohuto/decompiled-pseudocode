/*
 * XREFs of StartAddress @ 0x18003E530
 * Callers:
 *     <none>
 * Callees:
 *     sub_18000B7F8 @ 0x18000B7F8 (sub_18000B7F8.c)
 *     sub_18000F390 @ 0x18000F390 (sub_18000F390.c)
 *     sub_180010470 @ 0x180010470 (sub_180010470.c)
 *     sub_180016AF0 @ 0x180016AF0 (sub_180016AF0.c)
 *     sub_1800176F0 @ 0x1800176F0 (sub_1800176F0.c)
 *     sub_18001E380 @ 0x18001E380 (sub_18001E380.c)
 *     sub_18002E278 @ 0x18002E278 (sub_18002E278.c)
 *     sub_180033B8C @ 0x180033B8C (sub_180033B8C.c)
 *     sub_180034F2C @ 0x180034F2C (sub_180034F2C.c)
 *     sub_18003EC60 @ 0x18003EC60 (sub_18003EC60.c)
 *     __security_check_cookie @ 0x180044E30 (__security_check_cookie.c)
 *     memset @ 0x18004683A (memset.c)
 *     sub_1800624C0 @ 0x1800624C0 (sub_1800624C0.c)
 *     sub_180063424 @ 0x180063424 (sub_180063424.c)
 *     sub_1800705E0 @ 0x1800705E0 (sub_1800705E0.c)
 *     sub_180070868 @ 0x180070868 (sub_180070868.c)
 *     sub_1800748D0 @ 0x1800748D0 (sub_1800748D0.c)
 *     sub_180074BB0 @ 0x180074BB0 (sub_180074BB0.c)
 *     sub_180074F24 @ 0x180074F24 (sub_180074F24.c)
 *     sub_1800759A8 @ 0x1800759A8 (sub_1800759A8.c)
 */

__int64 __fastcall StartAddress(_QWORD *Parameter)
{
  __int64 v2; // r13
  DWORD TickCount; // eax
  int v4; // r12d
  int v5; // esi
  int v6; // ebx
  DWORD v7; // edi
  __int64 v8; // r8
  unsigned int v9; // r9d
  int v10; // eax
  __int64 v11; // rcx
  void *v12; // rdx
  __int64 v13; // rcx
  void *v14; // rdx
  __int64 v15; // rcx
  void *v16; // rdx
  __int64 v17; // rcx
  void *v18; // rdx
  __int64 v19; // rcx
  void *v20; // rdx
  DWORD v21; // eax
  int v22; // r8d
  int v23; // r9d
  int v24; // edx
  int i; // eax
  int v26; // edi
  unsigned int v27; // ebx
  int v28; // ebx
  DWORD v29; // edi
  __int64 v30; // rdi
  __int64 v31; // rbx
  __int64 v32; // rcx
  __m128i v33; // xmm1
  unsigned __int64 v34; // rbx
  __int64 v35; // rbx
  DWORD v36; // r14d
  _QWORD *Value; // rdi
  int v38; // eax
  __int64 v39; // rcx
  _QWORD *v40; // rax
  bool v41; // zf
  DWORD v42; // edi
  _QWORD *v43; // rbx
  __int64 v44; // rcx
  __int64 v45; // r9
  __int64 v46; // rax
  __int64 v47; // rcx
  _QWORD *v48; // rax
  int v49; // ebx
  DWORD v50; // edi
  int v51; // edi
  int v52; // r8d
  int v53; // r9d
  void *v54; // rbx
  DWORD v55; // ebx
  int v57; // [rsp+30h] [rbp-D0h] BYREF
  int v58; // [rsp+34h] [rbp-CCh] BYREF
  int v59; // [rsp+38h] [rbp-C8h] BYREF
  int v60; // [rsp+3Ch] [rbp-C4h] BYREF
  int v61; // [rsp+40h] [rbp-C0h] BYREF
  int v62; // [rsp+44h] [rbp-BCh] BYREF
  volatile signed __int32 *v63; // [rsp+48h] [rbp-B8h] BYREF
  unsigned __int64 v64; // [rsp+50h] [rbp-B0h] BYREF
  __int64 v65; // [rsp+58h] [rbp-A8h] BYREF
  _DWORD *v66; // [rsp+60h] [rbp-A0h] BYREF
  __int16 v67; // [rsp+68h] [rbp-98h]
  _QWORD v68[2]; // [rsp+70h] [rbp-90h] BYREF
  __int128 v69; // [rsp+80h] [rbp-80h]
  __int128 v70; // [rsp+90h] [rbp-70h]
  __int64 v71; // [rsp+A0h] [rbp-60h]
  ULONGLONG v72; // [rsp+A8h] [rbp-58h]
  __int128 v73; // [rsp+B0h] [rbp-50h]
  __int128 v74; // [rsp+C0h] [rbp-40h] BYREF
  __int128 v75; // [rsp+D0h] [rbp-30h]
  __int128 v76; // [rsp+E0h] [rbp-20h]
  __m128i v77; // [rsp+F0h] [rbp-10h]
  __int128 v78; // [rsp+100h] [rbp+0h]
  _QWORD v79[30]; // [rsp+110h] [rbp+10h] BYREF
  _OWORD v80[5]; // [rsp+200h] [rbp+100h] BYREF
  ULONGLONG v81[16]; // [rsp+250h] [rbp+150h] BYREF
  _BYTE TlsValue[144]; // [rsp+2D0h] [rbp+1D0h] BYREF
  _DWORD v83[6]; // [rsp+360h] [rbp+260h] BYREF
  HANDLE Handles[6]; // [rsp+378h] [rbp+278h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v85; // [rsp+3A8h] [rbp+2A8h] BYREF

  sub_18000B7F8(TlsValue);
  v2 = *(_QWORD *)(*Parameter + 24LL);
  TickCount = GetTickCount();
  *((_DWORD *)Parameter + 20) = TickCount;
  *((_DWORD *)Parameter + 22) = TickCount;
  sub_18001E380();
  sub_18003EC60(Parameter, 4LL);
  sub_18000F390();
  sub_180034F2C(*Parameter, v2 + 400, v81, 0LL);
  v4 = v59;
  v5 = 0;
  while ( 1 )
  {
    v6 = 7;
    if ( v5 >= 4 )
      v6 = 39;
    v7 = 0;
    if ( WaitForSingleObjectEx((HANDLE)Parameter[1], 0, 0) )
      *((_DWORD *)Parameter + 23) &= ~1u;
    v9 = 0;
    v10 = 1;
    do
    {
      if ( (v10 & v6) != 0 && (v9 || (*((_BYTE *)Parameter + 92) & 1) == 0) )
      {
        v8 = v7++;
        v83[v8] = v9;
        Handles[v8] = (HANDLE)Parameter[v9 + 1];
      }
      if ( (__ROL4__(v10, 1) & v6) != 0 )
      {
        v11 = v9 + 1;
        v12 = (void *)Parameter[v11 + 1];
        v8 = v7++;
        v83[v8] = v11;
        Handles[v8] = v12;
      }
      if ( (__ROL4__(v10, 2) & v6) != 0 )
      {
        v13 = v9 + 2;
        v14 = (void *)Parameter[v13 + 1];
        v8 = v7++;
        v83[v8] = v13;
        Handles[v8] = v14;
      }
      if ( (__ROL4__(v10, 3) & v6) != 0 )
      {
        v15 = v9 + 3;
        v16 = (void *)Parameter[v15 + 1];
        v8 = v7++;
        v83[v8] = v15;
        Handles[v8] = v16;
      }
      if ( (__ROL4__(v10, 4) & v6) != 0 )
      {
        v17 = v9 + 4;
        v18 = (void *)Parameter[v17 + 1];
        v8 = v7++;
        v83[v8] = v17;
        Handles[v8] = v18;
      }
      LODWORD(v19) = __ROL4__(v10, 5);
      if ( ((unsigned int)v19 & v6) != 0 )
      {
        v19 = v9 + 5;
        v20 = (void *)Parameter[v19 + 1];
        v8 = v7++;
        v83[v8] = v19;
        Handles[v8] = v20;
      }
      v9 += 6;
      v10 = __ROL4__(v10, 6);
    }
    while ( v9 < 6 );
    if ( (unsigned int)dword_1800B31E0 > 5 && (byte_1800B31F0 & 1) != 0 && (qword_1800B31F8 & 1) == qword_1800B31F8 )
    {
      v60 = -1;
      v66 = v83;
      v67 = v7;
      sub_1800748D0(v19, (unsigned int)&unk_18009DE47, v8, v9, (__int64)&v66, (__int64)&v60);
    }
    v21 = WaitForMultipleObjectsEx(v7, Handles, 0, 0xFFFFFFFF, 0);
    if ( v21 >= 0x40 )
    {
      if ( v21 == 258 )
      {
        v24 = 258;
      }
      else
      {
        v4 = v83[0];
        v24 = 0;
      }
    }
    else
    {
      v24 = 0;
      v4 = v83[v21];
      if ( !v4 )
        *((_DWORD *)Parameter + 23) |= 1u;
    }
    if ( (unsigned int)dword_1800B31E0 > 5 && (byte_1800B31F0 & 1) != 0 && (qword_1800B31F8 & 1) == qword_1800B31F8 )
    {
      v62 = v24;
      v61 = v4;
      sub_1800624C0(
        (unsigned int)&dword_1800B31E0,
        (unsigned int)&unk_18009E256,
        v22,
        v23,
        (__int64)&v62,
        (__int64)&v61);
    }
    if ( v4 == 2 )
      break;
    for ( i = sub_180016AF0(Parameter, v81, (unsigned int *)&v58, (unsigned int *)&v57);
          i != 4;
          i = sub_180016AF0(Parameter, v81, (unsigned int *)&v58, (unsigned int *)&v57) )
    {
      if ( i == 3 )
        break;
      v26 = 0;
      if ( i == 2 )
        goto LABEL_32;
    }
    v26 = i;
LABEL_32:
    v5 = v57;
    v27 = v58;
    sub_180033B8C((__int64)Parameter, v58, v57);
    if ( v27 > v5 )
      v5 = v27;
    if ( v26 == 4 )
      break;
    if ( v4 != 1 && v26 == 3 && (unsigned int)dword_1800B31E0 > 4 && sub_180010470((__int64)&dword_1800B31E0, 1LL) )
      sub_18002E278((__int64)&dword_1800B31E0, (unsigned __int8 *)dword_18009E458, 0LL, 0LL, 2u, &v85);
    if ( *(_DWORD *)(v2 + 496) )
    {
      v49 = *((_DWORD *)Parameter + 20);
      v50 = *((_DWORD *)Parameter + 19);
      if ( GetTickCount() - v49 >= v50 )
      {
        sub_180074BB0(Parameter, v81);
        *((_DWORD *)Parameter + 20) = GetTickCount();
      }
    }
    if ( *(_DWORD *)(v2 + 500) )
    {
      v28 = *((_DWORD *)Parameter + 22);
      v29 = *((_DWORD *)Parameter + 21);
      if ( GetTickCount() - v28 >= v29 )
      {
        v30 = *Parameter;
        v31 = *(_QWORD *)(*Parameter + 24LL);
        memset(v81, 0, sizeof(v81));
        memset(v79, 0, sizeof(v79));
        v32 = *(_QWORD *)(v30 + 32);
        *(_QWORD *)((char *)v79 + 4) = -1LL;
        NtManagePartition(v32, 0LL, 0LL, v79, 240);
        *(_QWORD *)&v76 = 0LL;
        *((_QWORD *)&v74 + 1) = qword_1800B41B0 * v79[4] - qword_1800B41B0 * v79[28];
        *(_QWORD *)&v75 = qword_1800B41B0 * v79[3] - qword_1800B41B0 * v79[28];
        *((_QWORD *)&v75 + 1) = *((_QWORD *)&v74 + 1) - v75;
        *((_QWORD *)&v76 + 1) = qword_1800B41B0 * v79[6] - qword_1800B41B0 * v79[28];
        v77.m128i_i64[0] = qword_1800B41B0
                         * (v79[8] + v79[9] + v79[16] + v79[15] + v79[14] + v79[13] + v79[11] + v79[12]);
        v77.m128i_i64[1] = *((_QWORD *)&v76 + 1) - v77.m128i_i64[0];
        *(_QWORD *)&v74 = qword_1800B41B0 * v79[27] - qword_1800B41B0 * v79[28];
        v78 = (unsigned __int64)(v79[22] + v79[21] + v79[20] + v79[19] + v79[26] + v79[25] + v79[24] + v79[23]);
        sub_1800176F0(v31 + 400, v31 + 456, (__int64)&v74, v74, (__int64)v81);
        v80[0] = v74;
        v80[1] = v75;
        v33 = v77;
        v80[2] = v76;
        v80[3] = v77;
        v80[4] = v78;
        *(_WORD *)(v30 + 188) = 0;
        v34 = _mm_srli_si128(v33, 8).m128i_u64[0];
        if ( v34 > v81[13] )
        {
          v68[0] = 0LL;
          v69 = 0LL;
          v70 = 0LL;
          v73 = 0LL;
          v68[1] = 0LL;
          v71 = 0LL;
          v72 = v81[13];
          v51 = sub_1800759A8(Parameter, v80, v68, 6LL);
          if ( (unsigned int)dword_1800B31E0 > 4 && sub_180010470((__int64)&dword_1800B31E0, 1LL) )
          {
            v64 = v34;
            v59 = v51;
            sub_180063424(
              (unsigned int)&dword_1800B31E0,
              (unsigned int)&unk_18009E368,
              v52,
              v53,
              (__int64)&v59,
              (__int64)&v64);
          }
          if ( !v51 )
            *((_DWORD *)Parameter + 22) = GetTickCount();
        }
      }
    }
    v35 = *(_QWORD *)(*(_QWORD *)(*Parameter + 24LL) + 2720LL);
    if ( v35 )
    {
      v36 = dwTlsIndex;
      if ( dwTlsIndex != -1 )
      {
        Value = TlsGetValue(dwTlsIndex);
        if ( *(_QWORD *)TlsGetValue(v36) )
          __int2c();
        *Value |= 1uLL;
        ++Value[1];
      }
      RtlAcquireSRWLockExclusive(&unk_1800B4210);
      dword_1800B4218 = GetCurrentThreadId();
      v38 = *(_DWORD *)(v35 + 160);
      if ( (v38 & 3) == 0 )
      {
        v39 = *(_QWORD *)(v35 + 144);
        *(_DWORD *)(v35 + 160) = v38 | 1;
        TpPostWork(v39);
      }
      dword_1800B4218 = 0;
      RtlReleaseSRWLockExclusive(&unk_1800B4210);
      if ( dwTlsIndex != -1 )
      {
        v40 = TlsGetValue(dwTlsIndex);
        if ( (*(_BYTE *)v40 & 1) == 0 )
          __int2c();
        v41 = v40[1]-- == 1LL;
        if ( v41 )
          *v40 &= ~1uLL;
      }
    }
    if ( v4 == 1 || (unsigned __int8)sub_180074F24(Parameter[2]) )
    {
      v42 = dwTlsIndex;
      if ( dwTlsIndex != -1 )
      {
        v43 = TlsGetValue(dwTlsIndex);
        if ( *(_QWORD *)TlsGetValue(v42) )
          __int2c();
        *v43 |= 1uLL;
        ++v43[1];
      }
      RtlAcquireSRWLockExclusive(&unk_1800B4210);
      dword_1800B4218 = GetCurrentThreadId();
      v44 = *(_QWORD *)(*Parameter + 24LL);
      if ( (*(_DWORD *)(v44 + 656) & 1) == 0 && (*(_BYTE *)(v44 + 2712) & 1) == 0 )
      {
        if ( (*(_DWORD *)(v44 + 656) & 2) != 0 )
        {
          v45 = 1000LL;
          if ( v5 <= 0 )
            v45 = 1000LL;
        }
        else
        {
          v45 = 0xFFFFFFFFLL;
        }
        v46 = -10000000LL;
        if ( v5 <= 0 )
          v46 = -50000000LL;
        v47 = Parameter[8];
        v65 = v46;
        TpSetTimer(v47, &v65, 0LL, v45);
      }
      dword_1800B4218 = 0;
      RtlReleaseSRWLockExclusive(&unk_1800B4210);
      if ( dwTlsIndex != -1 )
      {
        v48 = TlsGetValue(dwTlsIndex);
        if ( (*(_BYTE *)v48 & 1) == 0 )
          __int2c();
        v41 = v48[1]-- == 1LL;
        if ( v41 )
          *v48 &= ~1uLL;
      }
    }
  }
  TpSetTimer(Parameter[8], 0LL, 0LL, 0LL);
  TpWaitForTimer(Parameter[8], 1LL);
  v54 = (void *)*Parameter;
  sub_180070868(*(_QWORD *)(*Parameter + 24LL) + 312LL, *Parameter, &v63);
  sub_1800705E0(v54);
  RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, v54);
  v55 = dwTlsIndex;
  if ( dwTlsIndex != -1 )
  {
    if ( *(_QWORD *)TlsGetValue(dwTlsIndex) )
      __int2c();
    TlsSetValue(v55, 0LL);
  }
  _InterlockedDecrement(v63);
  RtlWakeAddressAll(v63);
  return 0LL;
}
