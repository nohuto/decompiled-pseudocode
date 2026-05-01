/*
 * XREFs of sub_180020F50 @ 0x180020F50
 * Callers:
 *     sub_18000B190 @ 0x18000B190 (sub_18000B190.c)
 *     sub_18001B300 @ 0x18001B300 (sub_18001B300.c)
 *     sub_180022888 @ 0x180022888 (sub_180022888.c)
 *     sub_180027374 @ 0x180027374 (sub_180027374.c)
 *     sub_18007E858 @ 0x18007E858 (sub_18007E858.c)
 * Callees:
 *     sub_18000688C @ 0x18000688C (sub_18000688C.c)
 *     sub_1800097FC @ 0x1800097FC (sub_1800097FC.c)
 *     sub_180009854 @ 0x180009854 (sub_180009854.c)
 *     sub_180012A60 @ 0x180012A60 (sub_180012A60.c)
 *     sub_180012D40 @ 0x180012D40 (sub_180012D40.c)
 *     sub_180016840 @ 0x180016840 (sub_180016840.c)
 *     sub_180017F60 @ 0x180017F60 (sub_180017F60.c)
 *     sub_18001BD70 @ 0x18001BD70 (sub_18001BD70.c)
 *     sub_18001CC80 @ 0x18001CC80 (sub_18001CC80.c)
 *     sub_180021550 @ 0x180021550 (sub_180021550.c)
 *     sub_1800224D0 @ 0x1800224D0 (sub_1800224D0.c)
 *     sub_180022560 @ 0x180022560 (sub_180022560.c)
 *     sub_1800274E0 @ 0x1800274E0 (sub_1800274E0.c)
 *     sub_180035C5C @ 0x180035C5C (sub_180035C5C.c)
 *     sub_1800384A0 @ 0x1800384A0 (sub_1800384A0.c)
 *     sub_180080A60 @ 0x180080A60 (sub_180080A60.c)
 */

__int64 __fastcall sub_180020F50(__int64 a1, __int64 a2)
{
  int v3; // r13d
  __int64 v4; // rbp
  DWORD v5; // esi
  _QWORD *Value; // rdi
  _OWORD *v7; // rax
  __int64 v8; // rdx
  _QWORD *v9; // rcx
  DWORD v10; // ecx
  _QWORD *v11; // rax
  bool v12; // zf
  __int64 v13; // rcx
  _OWORD *v14; // rax
  _QWORD *v15; // rdx
  __int64 v16; // rdi
  __int64 v17; // rcx
  __int64 v18; // rdi
  _QWORD *v19; // rax
  __int64 v20; // rdi
  __int64 v21; // rdx
  DWORD v22; // esi
  __int64 v23; // rbp
  _QWORD *v24; // rdi
  __int64 v25; // rcx
  char v26; // al
  BOOL v27; // esi
  __int64 v28; // rcx
  char *v29; // r14
  int v30; // ebp
  __int64 v31; // r12
  __int64 v32; // r15
  _QWORD *v33; // rax
  unsigned __int64 v34; // rsi
  __int64 v35; // rcx
  DWORD v36; // r14d
  __int64 v37; // rsi
  _QWORD *v38; // rbp
  __int64 v39; // r8
  int v40; // r9d
  __int64 v41; // rax
  __int64 v42; // rcx
  int v43; // eax
  DWORD v44; // ebp
  _QWORD *v45; // rdi
  _QWORD *v46; // rax
  _QWORD *v47; // rax

  LOBYTE(a2) = 4;
  v3 = sub_180022560(a1, a2);
  if ( v3 < 0 )
    return (unsigned int)v3;
  v4 = *(_QWORD *)(a1 + 64);
  if ( v4 )
  {
    v5 = dwTlsIndex;
    if ( dwTlsIndex != -1 )
    {
      Value = TlsGetValue(dwTlsIndex);
      if ( (*(_QWORD *)TlsGetValue(v5) & 0xFFFFFFFFFFFFFE00uLL) != 0 )
        __int2c();
      *Value |= 0x200uLL;
      ++Value[10];
    }
    RtlAcquireSRWLockExclusive(v4 + 24);
    *(_DWORD *)(v4 + 32) = GetCurrentThreadId();
    v7 = (_OWORD *)(a1 + 48);
    v8 = *(_QWORD *)(a1 + 48);
    if ( *(_QWORD *)(v8 + 8) != a1 + 48 || (v9 = *(_QWORD **)(a1 + 56), (_OWORD *)*v9 != v7) )
LABEL_94:
      __fastfail(3u);
    *v9 = v8;
    *(_QWORD *)(v8 + 8) = v9;
    v10 = dwTlsIndex;
    *v7 = 0LL;
    if ( v10 != -1 )
    {
      v11 = TlsGetValue(v10);
      if ( (*(_DWORD *)v11 & 0x200LL) == 0 )
        __int2c();
      v12 = v11[10]-- == 1LL;
      if ( v12 )
        *v11 &= ~0x200uLL;
    }
    *(_DWORD *)(v4 + 32) = 0;
    RtlReleaseSRWLockExclusive(v4 + 24);
  }
  v13 = *(_QWORD *)(a1 + 96);
  v14 = (_OWORD *)(a1 + 96);
  if ( *(_QWORD *)(v13 + 8) != a1 + 96 )
    goto LABEL_94;
  v15 = *(_QWORD **)(a1 + 104);
  if ( (_OWORD *)*v15 != v14 )
    goto LABEL_94;
  *v15 = v13;
  *(_QWORD *)(v13 + 8) = v15;
  *v14 = 0LL;
  v16 = *(_QWORD *)(a1 + 80);
  sub_1800224D0(v16);
  v17 = *(_QWORD *)(a1 + 528);
  if ( v17 )
  {
    if ( (unsigned int)TpSetTimerEx(v17, 0LL, 0LL, 0LL) )
      sub_1800274E0(a1);
    TpReleaseTimer(*(_QWORD *)(a1 + 528));
    *(_QWORD *)(a1 + 528) = 0LL;
    *(_QWORD *)(a1 + 536) = 0LL;
  }
  if ( *(_QWORD *)(v16 + 1000) == a1 )
    *(_QWORD *)(v16 + 1000) = 0LL;
  sub_18001BD70(v16);
  v18 = *(_QWORD *)(a1 + 80);
  if ( dwTlsIndex != -1 )
  {
    v19 = TlsGetValue(dwTlsIndex);
    if ( (*(_BYTE *)v19 & 2) == 0 )
      __int2c();
    v12 = v19[2]-- == 1LL;
    if ( v12 )
      *v19 &= ~2uLL;
  }
  *(_DWORD *)(v18 + 8) = 0;
  RtlReleaseSRWLockExclusive(v18);
  if ( (unsigned int)dword_1800B3218 > 4 && (byte_1800B3228 & 8) != 0 && (qword_1800B3230 & 8) == qword_1800B3230 )
    sub_180080A60(*(_QWORD *)(*(_QWORD *)(a1 + 80) - 32LL), &unk_1800A1C83);
  v20 = *(_QWORD *)(a1 + 88);
  v21 = *(_QWORD *)(v20 + 16);
  if ( v21 != -1 )
  {
    sub_180021550(*(_QWORD *)&qword_1800B41A8, v21, 0LL);
    *(_QWORD *)(v20 + 16) = -1LL;
  }
  if ( *(_QWORD *)(a1 + 504) )
  {
    sub_1800384A0();
    *(_QWORD *)(a1 + 504) = 0LL;
  }
  v22 = dwTlsIndex;
  v23 = *(_QWORD *)(a1 + 80);
  if ( dwTlsIndex != -1 )
  {
    v24 = TlsGetValue(dwTlsIndex);
    if ( (*(_QWORD *)TlsGetValue(v22) & 0xFFFFFFFFFFFFFFFEuLL) != 0 )
      __int2c();
    *v24 |= 2uLL;
    ++v24[2];
  }
  RtlAcquireSRWLockExclusive(v23);
  *(_DWORD *)(v23 + 8) = GetCurrentThreadId();
  v25 = *(_QWORD *)(a1 + 80);
  *(_DWORD *)(a1 + 544) &= ~1u;
  sub_18001BD70(v25);
  v26 = *(_BYTE *)(a1 + 548);
  v27 = (v26 == 4 || v26 == 1) && ((*(_BYTE *)(a1 + 120) & 0xC) != 0 || (*(_DWORD *)(a1 + 112) & 0x4000) != 0);
  v28 = *(_QWORD *)(a1 + 80);
  v29 = *(char **)(v28 + 688);
  if ( v29 )
  {
    sub_18000688C(a1);
    v30 = (*(_DWORD *)(a1 + 544) >> 1) & 1;
    *(_DWORD *)(a1 + 544) &= ~2u;
  }
  else
  {
    v30 = 0;
    sub_18001CC80(v28, 0);
  }
  if ( !v30 )
    v29 = 0LL;
  if ( *(_BYTE *)(a1 + 548) == 4 )
  {
    v31 = *(_QWORD *)(a1 + 72);
    *(_QWORD *)(a1 + 72) = 0LL;
  }
  else
  {
    v31 = 0LL;
  }
  v32 = *(_QWORD *)(a1 + 80);
  if ( dwTlsIndex != -1 )
  {
    v33 = TlsGetValue(dwTlsIndex);
    if ( (*(_BYTE *)v33 & 2) == 0 )
      __int2c();
    v12 = v33[2]-- == 1LL;
    if ( v12 )
      *v33 &= ~2uLL;
  }
  *(_DWORD *)(v32 + 8) = 0;
  RtlReleaseSRWLockExclusive(v32);
  RtlWakeAddressAll(a1 + 544);
  if ( v31 )
    sub_180035C5C(v31);
  if ( v27 )
  {
    v34 = *(_QWORD *)(a1 + 32) & 0xFFFFFFFFFFFFFFFCuLL;
    sub_180009854(*(_QWORD *)(v34 + 120));
    v35 = *(_QWORD *)(v34 + 120);
    if ( *(_DWORD *)(v34 + 204) )
    {
      ++*(_QWORD *)(v34 + 208);
      sub_1800097FC(v35);
      RtlWakeAddressAll(v34 + 208);
    }
    else
    {
      sub_1800097FC(v35);
    }
  }
  if ( v30 )
    sub_180017F60(v29);
  v36 = dwTlsIndex;
  v37 = *(_QWORD *)(a1 + 80);
  if ( dwTlsIndex != -1 )
  {
    v38 = TlsGetValue(dwTlsIndex);
    if ( *(_QWORD *)TlsGetValue(v36) )
      __int2c();
    *v38 |= 1uLL;
    ++v38[1];
  }
  RtlAcquireSRWLockExclusive(&unk_1800B4210);
  dword_1800B4218 = GetCurrentThreadId();
  sub_180012A60(v37 - 64, 2);
  sub_180016840(v37 - 64, 2, v39, v40);
  QueryUnbiasedInterruptTime((PULONGLONG)(v37 + 1392));
  if ( (unsigned int)sub_180012D40(v37 - 64) )
    SetEvent(*(HANDLE *)(*(_QWORD *)(v37 - 8) + 88LL));
  v41 = *(_QWORD *)(v37 - 16);
  *(_QWORD *)(v37 + 1144) = 0LL;
  v42 = *(_QWORD *)(v41 + 2720);
  v43 = *(_DWORD *)(v42 + 160);
  if ( (v43 & 3) == 0 )
  {
    *(_DWORD *)(v42 + 160) = v43 | 1;
    TpPostWork(*(_QWORD *)(v42 + 144));
  }
  v44 = dwTlsIndex;
  if ( dwTlsIndex != -1 )
  {
    v45 = TlsGetValue(dwTlsIndex);
    if ( (*(_QWORD *)TlsGetValue(v44) & 0xFFFFFFFFFFFFFFFEuLL) != 0 )
      __int2c();
    *v45 |= 2uLL;
    ++v45[2];
  }
  RtlAcquireSRWLockExclusive(v37);
  *(_DWORD *)(v37 + 8) = GetCurrentThreadId();
  sub_18001CC80(v37, 0);
  if ( dwTlsIndex != -1 )
  {
    v46 = TlsGetValue(dwTlsIndex);
    if ( (*(_BYTE *)v46 & 2) == 0 )
      __int2c();
    v12 = v46[2]-- == 1LL;
    if ( v12 )
      *v46 &= ~2uLL;
  }
  *(_DWORD *)(v37 + 8) = 0;
  RtlReleaseSRWLockExclusive(v37);
  dword_1800B4218 = 0;
  RtlReleaseSRWLockExclusive(&unk_1800B4210);
  if ( dwTlsIndex != -1 )
  {
    v47 = TlsGetValue(dwTlsIndex);
    if ( (*(_BYTE *)v47 & 1) == 0 )
      __int2c();
    v12 = v47[1]-- == 1LL;
    if ( v12 )
      *v47 &= ~1uLL;
  }
  if ( *(_QWORD *)(a1 + 64) )
    sub_1800274E0(a1);
  sub_1800274E0(a1);
  return (unsigned int)v3;
}
