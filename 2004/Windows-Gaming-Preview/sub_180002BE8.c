/*
 * XREFs of sub_180002BE8 @ 0x180002BE8
 * Callers:
 *     sub_180002F40 @ 0x180002F40 (sub_180002F40.c)
 * Callees:
 *     sub_180001C5C @ 0x180001C5C (sub_180001C5C.c)
 *     sub_180001FD0 @ 0x180001FD0 (sub_180001FD0.c)
 *     sub_180001FF0 @ 0x180001FF0 (sub_180001FF0.c)
 *     sub_180002010 @ 0x180002010 (sub_180002010.c)
 *     sub_180002030 @ 0x180002030 (sub_180002030.c)
 *     sub_18000307C @ 0x18000307C (sub_18000307C.c)
 *     sub_18000335C @ 0x18000335C (sub_18000335C.c)
 *     _guard_dispatch_icall_nop @ 0x180045CB0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall sub_180002BE8(
        __int64 a1,
        int a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        int a7,
        int a8,
        _WORD *a9,
        int a10,
        char *lpOutputString,
        int a12,
        _BYTE *a13,
        int a14,
        __int64 a15)
{
  int v18; // ebp
  int v19; // edi
  int v20; // eax
  _WORD *v21; // rax
  DWORD CurrentThreadId; // eax
  __int64 (*v23)(void); // rax
  __int64 v24; // rax
  int v25; // ecx

  v18 = 0;
  v19 = a8;
  *(_WORD *)lpOutputString = 0;
  *a13 = 0;
  switch ( a7 )
  {
    case 0:
      v20 = sub_180001FD0(a8);
      goto LABEL_11;
    case 1:
      v20 = sub_180001FF0(a8);
      goto LABEL_11;
    case 2:
      if ( a8 >= 0 )
      {
        v19 = -2147024228;
        sub_18000307C(a1, a2, a3, a4, a5, a6, 2, -2147024228);
      }
      v20 = sub_180002010(v19);
      goto LABEL_11;
    case 3:
      v20 = sub_180002030(a8);
LABEL_11:
      v18 = v20;
      break;
  }
  *(_DWORD *)a15 = a7;
  *(_DWORD *)(a15 + 4) = v19;
  *(_DWORD *)(a15 + 8) = _InterlockedIncrement(&dword_18005AD50);
  v21 = a9;
  if ( !a9 || !*a9 )
    v21 = 0LL;
  *(_QWORD *)(a15 + 16) = v21;
  CurrentThreadId = GetCurrentThreadId();
  *(_QWORD *)(a15 + 48) = a3;
  *(_DWORD *)(a15 + 24) = CurrentThreadId;
  *(_QWORD *)(a15 + 32) = a5;
  *(_QWORD *)(a15 + 40) = a4;
  *(_QWORD *)(a15 + 128) = a6;
  v23 = (__int64 (*)(void))qword_18005AC30;
  *(_DWORD *)(a15 + 56) = a2;
  *(_DWORD *)(a15 + 60) = v18;
  *(_QWORD *)(a15 + 136) = a1;
  *(_QWORD *)(a15 + 64) = 0LL;
  *(_OWORD *)(a15 + 72) = 0LL;
  *(_OWORD *)(a15 + 88) = 0LL;
  *(_OWORD *)(a15 + 104) = 0LL;
  if ( v23 )
    v24 = v23();
  else
    v24 = 0LL;
  *(_QWORD *)(a15 + 120) = v24;
  if ( qword_18005ABD8 )
    qword_18005ABD8(a15, a13, 1024LL);
  if ( qword_18005ABC8 )
    qword_18005ABC8(a15);
  if ( qword_18005AC00 )
    qword_18005AC00(a15);
  if ( *(int *)(a15 + 4) >= 0 )
  {
    if ( a7 != 3 )
      sub_18000335C();
    *(_DWORD *)(a15 + 4) = -2147418113;
  }
  if ( byte_18005AB88
    || (!qword_18005AB78 ? (v25 = IsDebuggerPresent()) : (v25 = (unsigned __int8)qword_18005AB78()), v25) )
  {
    if ( qword_18005AB90 && !byte_18005ABB0 )
      qword_18005AB90(a15, lpOutputString, 2048LL);
    if ( !*(_WORD *)lpOutputString )
      sub_180001C5C(lpOutputString, 2048LL, a15);
    OutputDebugStringW((LPCWSTR)lpOutputString);
  }
  else if ( qword_18005AB90 && !byte_18005ABB0 )
  {
    qword_18005AB90(a15, 0LL, 0LL);
  }
  if ( byte_18005AB98 )
  {
    if ( qword_18005ABE8 )
      qword_18005ABE8();
  }
}
