/*
 * XREFs of sub_180010CB0 @ 0x180010CB0
 * Callers:
 *     sub_18000F930 @ 0x18000F930 (sub_18000F930.c)
 * Callees:
 *     sub_180010FD8 @ 0x180010FD8 (sub_180010FD8.c)
 *     memset @ 0x18006AB8C (memset.c)
 *     sub_18006D234 @ 0x18006D234 (sub_18006D234.c)
 *     _guard_dispatch_icall_nop @ 0x180074470 (_guard_dispatch_icall_nop.c)
 *     sub_1800DBFB4 @ 0x1800DBFB4 (sub_1800DBFB4.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall sub_180010CB0(_QWORD *a1)
{
  _QWORD *v1; // r14
  unsigned int v3; // edi
  HANDLE ProcessHeap; // rax
  _DWORD *v5; // rax
  _DWORD *v6; // rbx
  int v7; // eax
  _DWORD *v9; // [rsp+60h] [rbp+18h]

  v1 = a1;
  if ( !a1 )
    return 2147500035LL;
  *a1 = 0LL;
  v3 = -2147024882;
  ProcessHeap = GetProcessHeap();
  v5 = HeapAlloc(ProcessHeap, 0, 0x230uLL);
  try
  {
    v6 = v5;
    if ( v5 )
    {
      v5[2] = 0;
      *((_OWORD *)v5 + 1) = 0LL;
      *((_OWORD *)v5 + 2) = 0LL;
      *((_QWORD *)v5 + 6) = 0LL;
      *((_BYTE *)v5 + 56) = 0;
      v5[16] = 0;
      *((_QWORD *)v5 + 9) = (*(__int64 (__fastcall **)(__int64 *))(qword_18019F818 + 24))(&qword_18019F818) + 24;
      *((_QWORD *)v6 + 10) = (*(__int64 (__fastcall **)(__int64 *))(qword_18019F818 + 24))(&qword_18019F818) + 24;
      *((_QWORD *)v6 + 11) = (*(__int64 (__fastcall **)(__int64 *))(qword_18019F818 + 24))(&qword_18019F818) + 24;
      *((_QWORD *)v6 + 14) = (*(__int64 (__fastcall **)(__int64 *))(qword_18019F818 + 24))(&qword_18019F818) + 24;
      *((_OWORD *)v6 + 6) = xmmword_18015B730;
      v6[30] = 0;
      v6[33] = -1;
      v6[32] = 0;
      v6[34] = 0;
      *((_QWORD *)v6 + 18) = (*(__int64 (__fastcall **)(__int64 *))(qword_18019F818 + 24))(&qword_18019F818) + 24;
      *((_QWORD *)v6 + 19) = 0LL;
      *((_QWORD *)v6 + 20) = 0LL;
      *((_QWORD *)v6 + 21) = 0LL;
      *((_QWORD *)v6 + 22) = 0LL;
      v6[46] = 0;
      *((_BYTE *)v6 + 188) = 0;
      *((_QWORD *)v6 + 24) = 0LL;
      *((_BYTE *)v6 + 200) = 1;
      *((_QWORD *)v6 + 26) = (*(__int64 (__fastcall **)(__int64 *))(qword_18019F818 + 24))(&qword_18019F818) + 24;
      *((_QWORD *)v6 + 27) = (*(__int64 (__fastcall **)(__int64 *))(qword_18019F818 + 24))(&qword_18019F818) + 24;
      InitializeCriticalSectionEx((LPCRITICAL_SECTION)(v6 + 56), 0, 0);
      v6[68] = 0;
      *(_OWORD *)(v6 + 110) = xmmword_18015B730;
      *((_QWORD *)v6 + 57) = 0LL;
      *((_QWORD *)v6 + 58) = 0LL;
      *((_QWORD *)v6 + 59) = 0LL;
      *((_QWORD *)v6 + 60) = 0LL;
      *((_BYTE *)v6 + 488) = 0;
      *((_QWORD *)v6 + 62) = 0LL;
      *((_QWORD *)v6 + 64) = 0LL;
      *((_QWORD *)v6 + 63) = 0LL;
      QueryPerformanceFrequency((LARGE_INTEGER *)v6 + 65);
      *((_QWORD *)v6 + 66) = 0LL;
      *((_QWORD *)v6 + 67) = 0LL;
      *((_QWORD *)v6 + 68) = 0LL;
      v6[138] = 0;
      memset(v6 + 70, 0, 0xA0uLL);
      *(_QWORD *)(v6 + 83) = 0LL;
      v6[82] = 0;
      v6[102] = 0;
      *(_QWORD *)v6 = off_180148490;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)qword_18019E5D8 + 8LL))(qword_18019E5D8);
    }
    else
    {
      v6 = 0LL;
    }
    v9 = v6;
  }
  catch ( ... )
  {
    v1 = a1;
    v3 = -2147024882;
    v6 = v9;
  }
  if ( v6 )
  {
    sub_18006D234(v6 + 2);
    v7 = sub_180010FD8(v6 + 4);
    if ( v7 >= 0 )
    {
      *((_BYTE *)v6 + 56) = 1;
      v7 = 0;
    }
    v3 = 0;
    if ( v7 < 0 )
      v3 = v7;
    sub_1800DBFB4(v6);
    if ( v3 )
    {
      (*(void (__fastcall **)(_DWORD *, __int64))(*(_QWORD *)v6 + 216LL))(v6, 1LL);
      v6 = 0LL;
    }
  }
  *v1 = v6;
  return v3;
}
