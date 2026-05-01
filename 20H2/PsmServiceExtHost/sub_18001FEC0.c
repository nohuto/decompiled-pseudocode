/*
 * XREFs of sub_18001FEC0 @ 0x18001FEC0
 * Callers:
 *     sub_1800233B4 @ 0x1800233B4 (sub_1800233B4.c)
 * Callees:
 *     sub_180008CE8 @ 0x180008CE8 (sub_180008CE8.c)
 *     sub_18000A110 @ 0x18000A110 (sub_18000A110.c)
 *     sub_180012A60 @ 0x180012A60 (sub_180012A60.c)
 *     sub_180012D40 @ 0x180012D40 (sub_180012D40.c)
 *     sub_180016840 @ 0x180016840 (sub_180016840.c)
 *     sub_1800179D8 @ 0x1800179D8 (sub_1800179D8.c)
 *     sub_180017F60 @ 0x180017F60 (sub_180017F60.c)
 *     sub_18001BD70 @ 0x18001BD70 (sub_18001BD70.c)
 *     sub_18001CC80 @ 0x18001CC80 (sub_18001CC80.c)
 *     sub_18002AA58 @ 0x18002AA58 (sub_18002AA58.c)
 */

__int64 __fastcall sub_18001FEC0(__int64 a1, _DWORD *a2)
{
  DWORD v3; // esi
  unsigned __int64 v4; // r14
  __int64 v5; // rbp
  _QWORD *Value; // rdi
  int v8; // eax
  int v9; // ebp
  char v10; // di
  int v11; // esi
  int v12; // eax
  __int64 v13; // rdi
  int v14; // eax
  int v15; // edx
  char *v16; // rsi
  __int64 v17; // rdi
  _QWORD *v18; // rax
  bool v19; // zf
  DWORD v20; // ebp
  __int64 v21; // rdi
  _QWORD *v22; // rsi
  __int64 v23; // r8
  int v24; // r9d
  __int64 v25; // rax
  __int64 v26; // rcx
  int v27; // eax
  DWORD v28; // esi
  _QWORD *v29; // rbx
  _QWORD *v30; // rax
  _QWORD *v31; // rax
  unsigned int v33; // edi
  int v34; // [rsp+40h] [rbp+8h]

  v3 = dwTlsIndex;
  v4 = *(_QWORD *)(a1 + 32) & 0xFFFFFFFFFFFFFFFCuLL;
  v5 = *(_QWORD *)(a1 + 80);
  if ( dwTlsIndex != -1 )
  {
    Value = TlsGetValue(dwTlsIndex);
    if ( (*(_QWORD *)TlsGetValue(v3) & 0xFFFFFFFFFFFFFFFEuLL) != 0 )
      __int2c();
    *Value |= 2uLL;
    ++Value[2];
  }
  RtlAcquireSRWLockExclusive(v5);
  *(_DWORD *)(v5 + 8) = GetCurrentThreadId();
  if ( *(_BYTE *)(a1 + 548) == 4 )
  {
    v33 = -1073741275;
LABEL_57:
    sub_18000A110(*(_QWORD *)(a1 + 80));
    return v33;
  }
  if ( (*(_BYTE *)(a1 + 544) & 8) != 0 )
  {
    v33 = -1058275327;
    goto LABEL_57;
  }
  v8 = sub_1800179D8(*(_DWORD *)(a1 + 424));
  v9 = *(_DWORD *)(a1 + 480) & 3;
  v10 = *a2;
  if ( v9 <= v8 )
    v9 = v8;
  v11 = HIWORD(*a2);
  if ( (v11 & 1) != 0 )
  {
    *(_DWORD *)(a1 + 112) &= ~0x200u;
    *(_DWORD *)(a1 + 112) |= (v10 & 1) << 9;
  }
  if ( (v11 & 4) != 0 )
  {
    *(_DWORD *)(a1 + 112) &= ~0x4000u;
    *(_DWORD *)(a1 + 112) |= (v10 & 8) << 11;
    sub_180008CE8((_QWORD *)(v4 + 120), 0);
  }
  if ( (v11 & 2) != 0 )
  {
    *(_DWORD *)(a1 + 112) &= 0xFFFFFE7F;
    *(_DWORD *)(a1 + 112) |= (v10 & 6) << 6;
  }
  v12 = a2[1];
  v13 = *(_QWORD *)(a1 + 80);
  v34 = v12;
  if ( (v12 & 1) != 0 )
  {
    if ( !HIBYTE(v12) )
    {
      HIBYTE(v34) = *(_BYTE *)(a1 + 427);
      v12 = v34;
    }
    *(_DWORD *)(a1 + 424) = v12;
    sub_18001BD70(v13);
  }
  v14 = sub_1800179D8(*(_DWORD *)(a1 + 424));
  v15 = *(_DWORD *)(a1 + 480) & 3;
  if ( v15 <= v14 )
    v15 = v14;
  if ( v9 == v15 || (unsigned __int8)(*(_BYTE *)(a1 + 548) - 2) > 1u )
    v16 = 0LL;
  else
    v16 = (char *)sub_18002AA58(v13);
  v17 = *(_QWORD *)(a1 + 80);
  if ( dwTlsIndex != -1 )
  {
    v18 = TlsGetValue(dwTlsIndex);
    if ( (*(_BYTE *)v18 & 2) == 0 )
      __int2c();
    v19 = v18[2]-- == 1LL;
    if ( v19 )
      *v18 &= ~2uLL;
  }
  *(_DWORD *)(v17 + 8) = 0;
  RtlReleaseSRWLockExclusive(v17);
  if ( v16 )
    sub_180017F60(v16);
  v20 = dwTlsIndex;
  v21 = *(_QWORD *)(a1 + 80);
  if ( dwTlsIndex != -1 )
  {
    v22 = TlsGetValue(dwTlsIndex);
    if ( *(_QWORD *)TlsGetValue(v20) )
      __int2c();
    *v22 |= 1uLL;
    ++v22[1];
  }
  RtlAcquireSRWLockExclusive(&unk_1800B4210);
  dword_1800B4218 = GetCurrentThreadId();
  sub_180012A60(v21 - 64, 2);
  sub_180016840(v21 - 64, 2, v23, v24);
  QueryUnbiasedInterruptTime((PULONGLONG)(v21 + 1392));
  if ( (unsigned int)sub_180012D40(v21 - 64) )
    SetEvent(*(HANDLE *)(*(_QWORD *)(v21 - 8) + 88LL));
  v25 = *(_QWORD *)(v21 - 16);
  *(_QWORD *)(v21 + 1144) = 0LL;
  v26 = *(_QWORD *)(v25 + 2720);
  v27 = *(_DWORD *)(v26 + 160);
  if ( (v27 & 3) == 0 )
  {
    *(_DWORD *)(v26 + 160) = v27 | 1;
    TpPostWork(*(_QWORD *)(v26 + 144));
  }
  v28 = dwTlsIndex;
  if ( dwTlsIndex != -1 )
  {
    v29 = TlsGetValue(dwTlsIndex);
    if ( (*(_QWORD *)TlsGetValue(v28) & 0xFFFFFFFFFFFFFFFEuLL) != 0 )
      __int2c();
    *v29 |= 2uLL;
    ++v29[2];
  }
  RtlAcquireSRWLockExclusive(v21);
  *(_DWORD *)(v21 + 8) = GetCurrentThreadId();
  sub_18001CC80(v21, 0);
  if ( dwTlsIndex != -1 )
  {
    v30 = TlsGetValue(dwTlsIndex);
    if ( (*(_BYTE *)v30 & 2) == 0 )
      __int2c();
    v19 = v30[2]-- == 1LL;
    if ( v19 )
      *v30 &= ~2uLL;
  }
  *(_DWORD *)(v21 + 8) = 0;
  RtlReleaseSRWLockExclusive(v21);
  dword_1800B4218 = 0;
  RtlReleaseSRWLockExclusive(&unk_1800B4210);
  if ( dwTlsIndex != -1 )
  {
    v31 = TlsGetValue(dwTlsIndex);
    if ( (*(_BYTE *)v31 & 1) == 0 )
      __int2c();
    v19 = v31[1]-- == 1LL;
    if ( v19 )
      *v31 &= ~1uLL;
  }
  return 0LL;
}
