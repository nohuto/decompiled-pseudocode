/*
 * XREFs of sub_18002CD00 @ 0x18002CD00
 * Callers:
 *     <none>
 * Callees:
 *     sub_18000F708 @ 0x18000F708 (sub_18000F708.c)
 *     sub_18002E440 @ 0x18002E440 (sub_18002E440.c)
 *     sub_18004BD84 @ 0x18004BD84 (sub_18004BD84.c)
 *     sub_18006D26C @ 0x18006D26C (sub_18006D26C.c)
 *     _guard_dispatch_icall_nop @ 0x180074470 (_guard_dispatch_icall_nop.c)
 *     sub_1800B8610 @ 0x1800B8610 (sub_1800B8610.c)
 *     sub_1800BD8A8 @ 0x1800BD8A8 (sub_1800BD8A8.c)
 *     sub_1800CB39C @ 0x1800CB39C (sub_1800CB39C.c)
 *     sub_1800CB5A0 @ 0x1800CB5A0 (sub_1800CB5A0.c)
 *     sub_18013CB58 @ 0x18013CB58 (sub_18013CB58.c)
 */

__int64 __fastcall sub_18002CD00(__int64 a1, __int64 a2)
{
  __int64 v4; // rdx
  unsigned __int64 v5; // rcx
  __int64 v6; // r9
  unsigned __int64 v7; // rsi
  __int64 v8; // rax
  __int64 v9; // r8
  __int64 v10; // rsi
  BOOL v11; // edi
  int v12; // r8d
  __int64 v13; // rdx
  int v14; // edx
  unsigned int v15; // r14d
  int v16; // eax
  unsigned int v17; // edi
  __int64 v18; // rcx
  int v19; // eax
  unsigned int v20; // edi
  DWORD LastError; // edi
  __int64 v22; // rcx
  void *retaddr; // [rsp+78h] [rbp+0h]
  __int64 v25; // [rsp+80h] [rbp+8h] BYREF

  if ( off_18019C348 != (_UNKNOWN *)&off_18019C348
    && (*((_BYTE *)off_18019C348 + 28) & 0x40) != 0
    && *((_BYTE *)off_18019C348 + 25) >= 4u )
  {
    sub_1800CB5A0(*((_QWORD *)off_18019C348 + 2), 47LL, &unk_18015DEF0, a1, a2);
  }
  EnterCriticalSection((LPCRITICAL_SECTION)(a1 + 48));
  v5 = *(_QWORD *)(a1 + 104);
  v6 = 0LL;
  if ( v5 )
  {
    v7 = 0LL;
    while ( 1 )
    {
      v8 = *(_QWORD *)(a1 + 96);
      v9 = *(_QWORD *)(v8 + 8 * v7);
      if ( v9 == a2 )
        break;
      v6 = (unsigned int)(v6 + 1);
      v7 = (unsigned int)v6;
      if ( (unsigned int)v6 >= v5 )
        goto LABEL_29;
    }
    if ( off_18019C348 != (_UNKNOWN *)&off_18019C348
      && (*((_BYTE *)off_18019C348 + 28) & 0x40) != 0
      && *((_BYTE *)off_18019C348 + 25) >= 4u )
    {
      sub_1800CB39C(*((_QWORD *)off_18019C348 + 2), 48LL, v9, v6, *(_QWORD *)(v8 + 8 * v7));
    }
    if ( v7 >= *(_QWORD *)(a1 + 104) )
      sub_1800B8610(2147942487LL);
    _mm_lfence();
    v10 = *(_QWORD *)(*(_QWORD *)(a1 + 96) + 8 * v7);
    (*(void (__fastcall **)(__int64, __int64, __int64, __int64))(*(_QWORD *)v10 + 72LL))(v10, v4, v9, v6);
    v11 = (*(unsigned __int8 (__fastcall **)(__int64))(*(_QWORD *)(v10 + 8) + 64LL))(v10 + 8) != 0;
    v12 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(v10 + 80) + 120LL))(*(_QWORD *)(v10 + 80));
    v13 = *(unsigned int *)(v10 + 336);
    if ( v11 )
      v14 = dword_180160610[v13];
    else
      v14 = dword_1801605B0[v13];
    v15 = *(_DWORD *)(v10 + 228);
    v16 = 0;
    if ( v12 )
      v16 = 16;
    v17 = (*(_BYTE *)(v10 + 224) == 0) + 2 * (v14 + v16);
    if ( v17 != v15 )
    {
      v18 = *(_QWORD *)(v10 + 64);
      *(_DWORD *)(v10 + 228) = v17;
      v25 = 0LL;
      (*(void (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v18 + 80LL))(v18, &v25);
      v19 = (*(__int64 (__fastcall **)(__int64, __int64, _QWORD, _QWORD))(*(_QWORD *)v25 + 200LL))(v25, 1LL, v17, v15);
      v20 = v19;
      if ( v19 < 0 )
      {
        sub_18004BD84(retaddr, 746LL, "avcore\\audiocore\\server\\audiosrv\\dll\\audiostream.cpp", (unsigned int)v19);
        sub_18000F708(&v25);
        sub_18006D26C(retaddr, 2954LL, "avcore\\audiocore\\server\\audiosrv\\dll\\audiosession.cpp", v20);
      }
      else if ( v25 )
      {
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v25 + 16LL))(v25);
      }
    }
    if ( ++*(_DWORD *)(a1 + 272) == 1 )
    {
      if ( off_18019C348 != (_UNKNOWN *)&off_18019C348
        && (*((_BYTE *)off_18019C348 + 28) & 0x40) != 0
        && *((_BYTE *)off_18019C348 + 25) >= 4u )
      {
        sub_1800BD8A8(*((_QWORD *)off_18019C348 + 2), 49LL, &unk_18015DEF0, a1, *(_DWORD *)(a1 + 272));
      }
      if ( a1 != -48 )
      {
        LastError = GetLastError();
        LeaveCriticalSection((LPCRITICAL_SECTION)(a1 + 48));
        SetLastError(LastError);
      }
      (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)a1 + 136LL))(a1, 1LL);
    }
    else if ( a1 != -48 )
    {
      LeaveCriticalSection((LPCRITICAL_SECTION)(a1 + 48));
    }
    (*(void (__fastcall **)(__int64))(*(_QWORD *)a1 + 8LL))(a1);
    if ( *(_DWORD *)(v10 + 296) == 1 )
      sub_18013CB58(v22, 1LL, 1LL);
    *(_DWORD *)(v10 + 296) = 1;
    *(_QWORD *)(v10 + 304) = L"CAudioSession::StartStream";
    sub_18002E440((LPCRITICAL_SECTION)(a1 + 496));
    (*(void (__fastcall **)(__int64))(*(_QWORD *)a1 + 16LL))(a1);
    return 0LL;
  }
  else
  {
LABEL_29:
    sub_18004BD84(retaddr, 2952LL, "avcore\\audiocore\\server\\audiosrv\\dll\\audiosession.cpp", 2290679812LL);
    if ( a1 != -48 )
      LeaveCriticalSection((LPCRITICAL_SECTION)(a1 + 48));
    return 2290679812LL;
  }
}
