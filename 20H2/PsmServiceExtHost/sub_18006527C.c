/*
 * XREFs of sub_18006527C @ 0x18006527C
 * Callers:
 *     sub_180065D0C @ 0x180065D0C (sub_180065D0C.c)
 * Callees:
 *     sub_18003B340 @ 0x18003B340 (sub_18003B340.c)
 *     _guard_dispatch_icall_nop @ 0x180046860 (_guard_dispatch_icall_nop.c)
 *     sub_180064BF4 @ 0x180064BF4 (sub_180064BF4.c)
 *     sub_180065B08 @ 0x180065B08 (sub_180065B08.c)
 *     sub_180065B28 @ 0x180065B28 (sub_180065B28.c)
 *     sub_180065B48 @ 0x180065B48 (sub_180065B48.c)
 *     sub_180065F34 @ 0x180065F34 (sub_180065F34.c)
 *     sub_1800667C4 @ 0x1800667C4 (sub_1800667C4.c)
 */

void __fastcall sub_18006527C(
        __int64 a1,
        int a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        int a7,
        unsigned int a8,
        _WORD *a9,
        int a10,
        WCHAR *lpOutputString,
        int a12,
        _BYTE *a13,
        int a14,
        __int64 a15)
{
  unsigned int v17; // edi
  int v19; // ebp
  int v20; // eax
  _WORD *v21; // rax
  DWORD CurrentThreadId; // eax
  __int64 (*v23)(void); // rax
  __int64 v24; // rax
  int v25; // eax

  v17 = a8;
  v19 = 0;
  *lpOutputString = 0;
  *a13 = 0;
  switch ( a7 )
  {
    case 0:
      v20 = sub_180065B08(a8);
      goto LABEL_11;
    case 1:
      v20 = sub_180065B48(a8);
      goto LABEL_11;
    case 2:
      if ( (a8 & 0x80000000) == 0 )
      {
        v17 = -2147024228;
        sub_180065F34(a1, a2, a3, a4, a5, a6, 2, -2147024228);
      }
      v20 = sub_180065B28(v17);
      goto LABEL_11;
    case 3:
      v20 = sub_18003B340(a8);
LABEL_11:
      v19 = v20;
      break;
  }
  *(_DWORD *)a15 = a7;
  *(_DWORD *)(a15 + 4) = v17;
  *(_DWORD *)(a15 + 8) = _InterlockedIncrement(&dword_1800B42A0);
  v21 = a9;
  if ( !a9 || !*a9 )
    v21 = 0LL;
  *(_QWORD *)(a15 + 16) = v21;
  CurrentThreadId = GetCurrentThreadId();
  *(_QWORD *)(a15 + 48) = a3;
  *(_DWORD *)(a15 + 24) = CurrentThreadId;
  *(_QWORD *)(a15 + 32) = a5;
  *(_QWORD *)(a15 + 128) = a6;
  *(_QWORD *)(a15 + 136) = a1;
  v23 = (__int64 (*)(void))qword_1800B4EE8;
  *(_DWORD *)(a15 + 56) = a2;
  *(_DWORD *)(a15 + 60) = v19;
  *(_QWORD *)(a15 + 40) = a4;
  *(_QWORD *)(a15 + 64) = 0LL;
  *(_OWORD *)(a15 + 72) = 0LL;
  *(_OWORD *)(a15 + 88) = 0LL;
  *(_OWORD *)(a15 + 104) = 0LL;
  if ( v23 )
    v24 = v23();
  else
    v24 = 0LL;
  *(_QWORD *)(a15 + 120) = v24;
  if ( qword_1800B3FB8 )
    qword_1800B3FB8(a15, a13, 1024LL);
  if ( qword_1800B4F78 )
    qword_1800B4F78(a15);
  if ( qword_1800B4F88 )
    qword_1800B4F88(a15);
  if ( *(int *)(a15 + 4) >= 0 )
  {
    if ( a7 != 3 )
      sub_1800667C4();
    *(_DWORD *)(a15 + 4) = -2147418113;
  }
  if ( byte_1800B4F58 )
    goto LABEL_37;
  if ( qword_1800B4F50 )
  {
    v25 = (unsigned __int8)qword_1800B4F50();
  }
  else
  {
    if ( IsDebuggerPresent() )
      goto LABEL_37;
    v25 = 0;
  }
  if ( !v25 )
  {
    if ( qword_1800B4F60 && !byte_1800B4F69 )
      qword_1800B4F60(a15, 0LL, 0LL);
    goto LABEL_43;
  }
LABEL_37:
  if ( qword_1800B4F60 && !byte_1800B4F69 )
    qword_1800B4F60(a15, lpOutputString, 2048LL);
  if ( !*lpOutputString )
    sub_180064BF4(lpOutputString, 2048LL, a15);
  OutputDebugStringW(lpOutputString);
LABEL_43:
  if ( byte_1800B4F68 )
  {
    if ( qword_1800B4ED8 )
      qword_1800B4ED8();
  }
}
