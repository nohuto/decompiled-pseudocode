/*
 * XREFs of sub_1800181E0 @ 0x1800181E0
 * Callers:
 *     sub_18001B300 @ 0x18001B300 (sub_18001B300.c)
 *     sub_1800327C0 @ 0x1800327C0 (sub_1800327C0.c)
 *     sub_18007E858 @ 0x18007E858 (sub_18007E858.c)
 * Callees:
 *     sub_1800039E0 @ 0x1800039E0 (sub_1800039E0.c)
 *     sub_18000506C @ 0x18000506C (sub_18000506C.c)
 *     sub_18000688C @ 0x18000688C (sub_18000688C.c)
 *     sub_180006D18 @ 0x180006D18 (sub_180006D18.c)
 *     sub_180008CE8 @ 0x180008CE8 (sub_180008CE8.c)
 *     sub_18000A110 @ 0x18000A110 (sub_18000A110.c)
 *     sub_180012870 @ 0x180012870 (sub_180012870.c)
 *     sub_180012D40 @ 0x180012D40 (sub_180012D40.c)
 *     sub_180016840 @ 0x180016840 (sub_180016840.c)
 *     sub_180017F60 @ 0x180017F60 (sub_180017F60.c)
 *     sub_180018940 @ 0x180018940 (sub_180018940.c)
 *     sub_18001BD70 @ 0x18001BD70 (sub_18001BD70.c)
 *     sub_18001CC80 @ 0x18001CC80 (sub_18001CC80.c)
 *     sub_180022560 @ 0x180022560 (sub_180022560.c)
 *     sub_1800293D0 @ 0x1800293D0 (sub_1800293D0.c)
 *     sub_180033A50 @ 0x180033A50 (sub_180033A50.c)
 *     sub_180035C5C @ 0x180035C5C (sub_180035C5C.c)
 */

__int64 __fastcall sub_1800181E0(__int64 a1, int a2, DWORD *a3, __int64 *a4)
{
  _OWORD *Heap; // rax
  void *v8; // rsi
  __int64 v9; // r13
  int v10; // eax
  __int64 v11; // rdx
  HKEY v12; // rbp
  signed int v13; // edi
  int v14; // eax
  const WCHAR *v15; // rdx
  LSTATUS v16; // eax
  DWORD *v17; // r14
  DWORD *v18; // rbp
  int v19; // edi
  __int64 v20; // rcx
  DWORD v21; // eax
  _DWORD *v22; // r14
  int v23; // r8d
  bool v24; // zf
  __int64 v25; // r15
  __int64 v26; // rbp
  __int64 v27; // rdi
  _QWORD *Value; // rax
  DWORD v29; // esi
  __int64 v30; // rbp
  _QWORD *v31; // rdi
  __int64 v32; // rcx
  char v33; // al
  BOOL v34; // r12d
  __int64 v35; // rcx
  char *v36; // rdi
  int v37; // esi
  __int64 v38; // rbp
  _QWORD *v39; // rax
  DWORD v40; // edi
  __int64 v41; // rbp
  _QWORD *v42; // rbx
  __int64 v43; // r8
  int v44; // r9d
  unsigned __int16 v45; // r11
  __int16 v46; // bx
  __int64 v47; // r10
  __int64 v48; // r10
  __int64 v49; // rdi
  __int64 v50; // r15
  char v51; // dl
  unsigned __int64 v52; // rcx
  __int16 v53; // ax
  __int16 v54; // r9
  __int16 v55; // cx
  unsigned __int64 v56; // rcx
  __int64 v57; // rdx
  __int64 v58; // rax
  __int64 v59; // rdx
  __int64 v60; // rax
  __int16 v61; // r11
  int v62; // ebx
  __int64 v63; // rax
  __int64 v64; // rcx
  int v65; // eax
  DWORD v66; // edi
  _QWORD *v67; // rbx
  _QWORD *v68; // rax
  _QWORD *v69; // rax
  DWORD v70; // ebp
  HKEY hKey; // [rsp+30h] [rbp-48h] BYREF
  BYTE Data[8]; // [rsp+38h] [rbp-40h] BYREF
  DWORD cbData; // [rsp+88h] [rbp+10h] BYREF
  DWORD *v75; // [rsp+90h] [rbp+18h]

  v75 = a3;
  if ( a2 == 1 && (*(_DWORD *)(a1 + 112) & 0x40000) != 0 )
  {
    v70 = 15;
    v19 = -1073741776;
    goto LABEL_101;
  }
  Heap = RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 0, 0x30uLL);
  v8 = Heap;
  if ( !Heap )
  {
    v70 = 15;
    v19 = -1073741801;
    goto LABEL_101;
  }
  *Heap = 0LL;
  Heap[1] = 0LL;
  Heap[2] = 0LL;
  RtlQueryPerformanceCounter(Heap);
  v9 = *(_QWORD *)(a1 + 80);
  hKey = 0LL;
  v10 = sub_1800293D0(v9, 0LL, &hKey);
  v12 = hKey;
  v13 = v10;
  if ( v10 >= 0 )
  {
    v14 = *(_DWORD *)(v9 + 560);
    switch ( v14 )
    {
      case 2:
        v15 = L"Mixed";
        break;
      case 4:
        v15 = L"Pure";
        break;
      case 8:
        v15 = L"System";
        break;
      default:
        __int2c();
        v15 = 0LL;
        break;
    }
    cbData = 8;
    v16 = RegQueryValueExW(hKey, v15, 0LL, 0LL, Data, &cbData);
    v13 = v16;
    if ( v16 > 0 )
      v13 = (unsigned __int16)v16 | 0xC0070000;
    if ( v13 >= 0 )
    {
      if ( cbData == 8 )
      {
        v17 = *(DWORD **)Data;
        v13 = 0;
        goto LABEL_11;
      }
      v13 = -1073739509;
    }
  }
  v17 = v75;
LABEL_11:
  if ( v12 )
    RegCloseKey(v12);
  v18 = 0LL;
  LOBYTE(v11) = 2;
  if ( v13 >= 0 )
    v18 = v17;
  v19 = sub_180022560(a1, v11);
  if ( v19 < 0 )
  {
    v70 = 15;
    goto LABEL_126;
  }
  v20 = *(_QWORD *)(a1 + 80);
  *(_BYTE *)(a1 + 549) = 0;
  sub_18001BD70(v20);
  if ( *(_QWORD *)(a1 + 512) && a2 == 1 )
  {
    v70 = 15;
    v19 = -1073741776;
LABEL_122:
    sub_18000A110(*(_QWORD *)(a1 + 80));
LABEL_125:
    sub_180006D18(a1, 1);
LABEL_126:
    if ( v8 )
      RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, v8);
    goto LABEL_101;
  }
  v21 = sub_1800039E0(a1);
  cbData = v21;
  if ( v21 == 14 )
  {
    v19 = -1058275327;
    v70 = 14;
    goto LABEL_122;
  }
  if ( v21 - 1 <= 6 )
  {
    v19 = -1058275328;
LABEL_121:
    v70 = v21;
    goto LABEL_122;
  }
  if ( v21 - 8 <= 5 )
  {
    v19 = -1058275324;
    goto LABEL_121;
  }
  v22 = (_DWORD *)(a1 + 544);
  *(_QWORD *)(a1 + 520) = v8;
  v8 = 0LL;
  v23 = *(_DWORD *)(a1 + 544) | 4;
  v24 = (*(_DWORD *)(a1 + 112) & 0x40000) == 0;
  *(_DWORD *)(a1 + 544) = v23;
  if ( !v24 )
    *(_QWORD *)(a1 + 512) = *(_QWORD *)(v9 + 800);
  if ( a2 == 1 )
  {
    v25 = 0LL;
    sub_18000506C(v9, 1u, 5376, *(_QWORD *)(a1 + 64), ((v23 & 2) == 0) | 2, 0);
  }
  else
  {
    v25 = 0LL;
  }
  v26 = sub_180033A50(a1, v18);
  v27 = *(_QWORD *)(a1 + 80);
  if ( dwTlsIndex != -1 )
  {
    Value = TlsGetValue(dwTlsIndex);
    if ( (*(_BYTE *)Value & 2) == 0 )
      __int2c();
    v24 = Value[2]-- == 1LL;
    if ( v24 )
      *Value &= ~2uLL;
  }
  *(_DWORD *)(v27 + 8) = 0;
  RtlReleaseSRWLockExclusive(v27);
  if ( a4 )
    *a4 = v26;
  v19 = sub_180012870(*(_QWORD *)(a1 + 88), v26);
  if ( v19 < 0 )
  {
    v70 = 15;
    goto LABEL_125;
  }
  v29 = dwTlsIndex;
  v30 = *(_QWORD *)(a1 + 80);
  if ( dwTlsIndex != -1 )
  {
    v31 = TlsGetValue(dwTlsIndex);
    if ( (*(_QWORD *)TlsGetValue(v29) & 0xFFFFFFFFFFFFFFFEuLL) != 0 )
      __int2c();
    *v31 |= 2uLL;
    ++v31[2];
  }
  RtlAcquireSRWLockExclusive(v30);
  *(_DWORD *)(v30 + 8) = GetCurrentThreadId();
  v32 = *(_QWORD *)(a1 + 80);
  *v22 &= ~1u;
  sub_18001BD70(v32);
  v33 = *(_BYTE *)(a1 + 548);
  v34 = (v33 == 1 || v33 == 4) && ((*(_BYTE *)(a1 + 120) & 0xC) != 0 || (*(_DWORD *)(a1 + 112) & 0x4000) != 0);
  v35 = *(_QWORD *)(a1 + 80);
  v36 = *(char **)(v35 + 688);
  if ( v36 )
  {
    sub_18000688C(a1);
    v37 = (*v22 >> 1) & 1;
    *v22 &= ~2u;
  }
  else
  {
    v37 = 0;
    sub_18001CC80(v35, 0LL);
  }
  if ( !v37 )
    v36 = 0LL;
  if ( *(_BYTE *)(a1 + 548) == 4 )
  {
    v25 = *(_QWORD *)(a1 + 72);
    *(_QWORD *)(a1 + 72) = 0LL;
  }
  v38 = *(_QWORD *)(a1 + 80);
  if ( dwTlsIndex != -1 )
  {
    v39 = TlsGetValue(dwTlsIndex);
    if ( (*(_BYTE *)v39 & 2) == 0 )
      __int2c();
    v24 = v39[2]-- == 1LL;
    if ( v24 )
      *v39 &= ~2uLL;
  }
  *(_DWORD *)(v38 + 8) = 0;
  RtlReleaseSRWLockExclusive(v38);
  RtlWakeAddressAll(a1 + 544);
  if ( v25 )
    sub_180035C5C(v25);
  if ( v34 )
    sub_180008CE8((_QWORD *)((*(_QWORD *)(a1 + 32) & 0xFFFFFFFFFFFFFFFCuLL) + 120), 0);
  if ( v37 )
    sub_180017F60(v36);
  v40 = dwTlsIndex;
  v41 = *(_QWORD *)(a1 + 80);
  if ( dwTlsIndex != -1 )
  {
    v42 = TlsGetValue(dwTlsIndex);
    if ( *(_QWORD *)TlsGetValue(v40) )
      __int2c();
    *v42 |= 1uLL;
    ++v42[1];
  }
  RtlAcquireSRWLockExclusive(&unk_1800B4210);
  dword_1800B4218 = GetCurrentThreadId();
  v45 = 102;
  v46 = *(_WORD *)(v41 + 1098);
  v47 = *(_QWORD *)(v41 + 1072);
  if ( v47 != v41 + 1072 )
  {
    v48 = v47 - 1296;
    if ( v48 )
    {
      v49 = 0x11000002000LL;
      v50 = 0x8800001000LL;
      do
      {
        if ( *(_DWORD *)(v48 + 1280) == 2 || (*(_BYTE *)(v48 + 1332) & 4) != 0 )
        {
          v51 = *(_BYTE *)(v48 + 1378);
          if ( (v51 & 8) != 0 || (v52 = *(int *)(v48 + 1336), (unsigned int)v52 <= 0x27) && _bittest64(&v50, v52) )
          {
            v55 = *(_WORD *)(v48 + 1376);
            v54 = 2;
            LOBYTE(v53) = v55;
          }
          else
          {
            v53 = *(_WORD *)(v48 + 1376);
            if ( (v53 & 0x10) != 0 || (unsigned int)v52 <= 0x28 && _bittest64(&v49, v52) )
            {
              v54 = 4;
              LOBYTE(v55) = *(_WORD *)(v48 + 1376);
            }
            else
            {
              v54 = 1;
              LOBYTE(v55) = *(_WORD *)(v48 + 1376);
            }
          }
          if ( (v55 & 0x10) == 0 && ((v56 = *(int *)(v48 + 1336), (unsigned int)v56 > 0x28) || !_bittest64(&v49, v56))
            || (v51 & 0x40) != 0 )
          {
            v54 |= 8u;
          }
          v57 = *(_DWORD *)(v48 + 1332) >> 3;
          LOWORD(v57) = v54 | (8 * (v53 & 8 | (2 * (v53 & 3 | (8 * (((*(_DWORD *)(v48 + 1332) & 8) != 0) | 2))))));
          v45 = sub_180018940(v45, v57);
        }
        v43 = *(_QWORD *)(v48 + 1296);
        v58 = *(_QWORD *)(v48 + 1320);
        v59 = 3LL * *(int *)(v48 + 1328) + 139;
        v48 = 0LL;
        if ( v43 != v58 + 8 * v59 )
          v48 = v43 - 1296;
      }
      while ( v48 );
    }
  }
  *(_WORD *)(v41 + 1098) = v45;
  v60 = *(_QWORD *)(v41 - 8);
  v61 = v45 & 0x80;
  v62 = v46 & 0x80;
  if ( v62 && !v61 )
  {
    --*(_DWORD *)(v60 + 196);
  }
  else if ( !v62 && v61 )
  {
    ++*(_DWORD *)(v60 + 196);
  }
  sub_180016840(v41 - 64, 2, v43, v44);
  QueryUnbiasedInterruptTime((PULONGLONG)(v41 + 1392));
  if ( (unsigned int)sub_180012D40(v41 - 64) )
    SetEvent(*(HANDLE *)(*(_QWORD *)(v41 - 8) + 88LL));
  v63 = *(_QWORD *)(v41 - 16);
  *(_QWORD *)(v41 + 1144) = 0LL;
  v64 = *(_QWORD *)(v63 + 2720);
  v65 = *(_DWORD *)(v64 + 160);
  if ( (v65 & 3) == 0 )
  {
    *(_DWORD *)(v64 + 160) = v65 | 1;
    TpPostWork(*(_QWORD *)(v64 + 144));
  }
  v66 = dwTlsIndex;
  if ( dwTlsIndex != -1 )
  {
    v67 = TlsGetValue(dwTlsIndex);
    if ( (*(_QWORD *)TlsGetValue(v66) & 0xFFFFFFFFFFFFFFFEuLL) != 0 )
      __int2c();
    *v67 |= 2uLL;
    ++v67[2];
  }
  RtlAcquireSRWLockExclusive(v41);
  *(_DWORD *)(v41 + 8) = GetCurrentThreadId();
  sub_18001CC80(v41, 0LL);
  if ( dwTlsIndex != -1 )
  {
    v68 = TlsGetValue(dwTlsIndex);
    if ( (*(_BYTE *)v68 & 2) == 0 )
      __int2c();
    v24 = v68[2]-- == 1LL;
    if ( v24 )
      *v68 &= ~2uLL;
  }
  *(_DWORD *)(v41 + 8) = 0;
  RtlReleaseSRWLockExclusive(v41);
  dword_1800B4218 = 0;
  RtlReleaseSRWLockExclusive(&unk_1800B4210);
  if ( dwTlsIndex != -1 )
  {
    v69 = TlsGetValue(dwTlsIndex);
    if ( (*(_BYTE *)v69 & 1) == 0 )
      __int2c();
    v24 = v69[1]-- == 1LL;
    if ( v24 )
      *v69 &= ~1uLL;
  }
  v70 = cbData;
  v19 = 0;
LABEL_101:
  *v75 = v70;
  return (unsigned int)v19;
}
