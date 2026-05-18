/*
 * XREFs of sub_18000D1A4 @ 0x18000D1A4
 * Callers:
 *     sub_18000D868 @ 0x18000D868 (sub_18000D868.c)
 * Callees:
 *     sub_18000C9AC @ 0x18000C9AC (sub_18000C9AC.c)
 *     sub_18000D69C @ 0x18000D69C (sub_18000D69C.c)
 *     sub_18000D6C0 @ 0x18000D6C0 (sub_18000D6C0.c)
 *     sub_18000D6CC @ 0x18000D6CC (sub_18000D6CC.c)
 *     sub_18000D6E4 @ 0x18000D6E4 (sub_18000D6E4.c)
 *     sub_18000DB38 @ 0x18000DB38 (sub_18000DB38.c)
 *     sub_18000EDB8 @ 0x18000EDB8 (sub_18000EDB8.c)
 *     _guard_dispatch_icall_nop @ 0x18011FBB0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall sub_18000D1A4(
        __int64 a1,
        int a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        int a7,
        unsigned int a8,
        _WORD *a9,
        char a10,
        WCHAR *lpOutputString,
        __int64 a12,
        _BYTE *a13,
        __int64 a14,
        __int64 a15)
{
  unsigned int v17; // edi
  int v19; // esi
  int v20; // eax
  char v21; // di
  _WORD *v22; // rax
  DWORD CurrentThreadId; // eax
  __int64 v24; // rax
  int v25; // ecx

  v17 = a8;
  v19 = 0;
  *lpOutputString = 0;
  *a13 = 0;
  switch ( a7 )
  {
    case 0:
      v20 = sub_18000D69C(a8);
      goto LABEL_11;
    case 1:
      v20 = sub_18000D6E4(a8);
      goto LABEL_11;
    case 2:
      if ( (a8 & 0x80000000) == 0 )
      {
        v17 = -2147024228;
        sub_18000DB38(a1, a2, a3, a4, a5, a6, 2, -2147024228);
      }
      v20 = sub_18000D6CC(v17);
      goto LABEL_11;
    case 3:
      v20 = sub_18000D6C0(a8);
LABEL_11:
      v19 = v20;
      break;
  }
  *(_DWORD *)(a15 + 4) = v17;
  v21 = 1;
  *(_DWORD *)a15 = a7;
  *(_DWORD *)(a15 + 8) = _InterlockedIncrement(&dword_180218494);
  v22 = a9;
  if ( !a9 || !*a9 )
    v22 = 0LL;
  *(_QWORD *)(a15 + 16) = v22;
  CurrentThreadId = GetCurrentThreadId();
  *(_DWORD *)(a15 + 60) = v19;
  *(_DWORD *)(a15 + 24) = CurrentThreadId;
  *(_QWORD *)(a15 + 32) = a5;
  *(_QWORD *)(a15 + 128) = a6;
  *(_QWORD *)(a15 + 136) = a1;
  *(_QWORD *)(a15 + 48) = a3;
  *(_DWORD *)(a15 + 56) = a2;
  *(_QWORD *)(a15 + 40) = a4;
  *(_QWORD *)(a15 + 64) = 0LL;
  *(_OWORD *)(a15 + 72) = 0LL;
  *(_OWORD *)(a15 + 88) = 0LL;
  *(_OWORD *)(a15 + 104) = 0LL;
  if ( qword_1802183A8 )
    v24 = qword_1802183A8();
  else
    v24 = 0LL;
  *(_QWORD *)(a15 + 120) = v24;
  if ( qword_180218398 )
    qword_180218398(a15, a13, a14);
  if ( qword_1802183A0 )
    qword_1802183A0(a15);
  if ( qword_180218420 )
    qword_180218420(a15);
  if ( *(int *)(a15 + 4) >= 0 )
  {
    if ( a7 != 3 )
      sub_18000EDB8();
    *(_DWORD *)(a15 + 4) = -2147418113;
  }
  if ( !byte_180218368
    && (!qword_180218360 ? (v25 = IsDebuggerPresent()) : (v25 = (unsigned __int8)qword_180218360()), !v25)
    || !byte_180208000 )
  {
    v21 = 0;
  }
  if ( a10 || v21 )
  {
    if ( qword_180218358 && !byte_180218388 )
      qword_180218358(a15, lpOutputString, a12);
    if ( !*lpOutputString )
      sub_18000C9AC(lpOutputString, a12, a15);
    if ( v21 )
      OutputDebugStringW(lpOutputString);
  }
  else if ( qword_180218358 && !byte_180218388 )
  {
    qword_180218358(a15, 0LL, 0LL);
  }
  if ( byte_180218378 )
  {
    if ( qword_1802183C8 )
      qword_1802183C8();
  }
}
