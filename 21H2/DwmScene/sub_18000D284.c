/*
 * XREFs of sub_18000D284 @ 0x18000D284
 * Callers:
 *     sub_18000D948 @ 0x18000D948 (sub_18000D948.c)
 * Callees:
 *     sub_18000CA8C @ 0x18000CA8C (sub_18000CA8C.c)
 *     sub_18000D77C @ 0x18000D77C (sub_18000D77C.c)
 *     sub_18000D7A0 @ 0x18000D7A0 (sub_18000D7A0.c)
 *     sub_18000D7AC @ 0x18000D7AC (sub_18000D7AC.c)
 *     sub_18000D7C4 @ 0x18000D7C4 (sub_18000D7C4.c)
 *     sub_18000DC18 @ 0x18000DC18 (sub_18000DC18.c)
 *     sub_18000EE98 @ 0x18000EE98 (sub_18000EE98.c)
 *     _guard_dispatch_icall_nop @ 0x180125480 (_guard_dispatch_icall_nop.c)
 */

void __fastcall sub_18000D284(
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
      v20 = sub_18000D77C(a8);
      goto LABEL_11;
    case 1:
      v20 = sub_18000D7C4(a8);
      goto LABEL_11;
    case 2:
      if ( (a8 & 0x80000000) == 0 )
      {
        v17 = -2147024228;
        sub_18000DC18(a1, a2, a3, a4, a5, a6, 2, -2147024228);
      }
      v20 = sub_18000D7AC(v17);
      goto LABEL_11;
    case 3:
      v20 = sub_18000D7A0(a8);
LABEL_11:
      v19 = v20;
      break;
  }
  *(_DWORD *)(a15 + 4) = v17;
  v21 = 1;
  *(_DWORD *)a15 = a7;
  *(_DWORD *)(a15 + 8) = _InterlockedIncrement(&dword_18021F5C4);
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
  if ( qword_18021F4D8 )
    v24 = qword_18021F4D8();
  else
    v24 = 0LL;
  *(_QWORD *)(a15 + 120) = v24;
  if ( qword_18021F4C8 )
    qword_18021F4C8(a15, a13, a14);
  if ( qword_18021F4D0 )
    qword_18021F4D0(a15);
  if ( qword_18021F550 )
    qword_18021F550(a15);
  if ( *(int *)(a15 + 4) >= 0 )
  {
    if ( a7 != 3 )
      sub_18000EE98();
    *(_DWORD *)(a15 + 4) = -2147418113;
  }
  if ( !byte_18021F498
    && (!qword_18021F490 ? (v25 = IsDebuggerPresent()) : (v25 = (unsigned __int8)qword_18021F490()), !v25)
    || !byte_18020F000 )
  {
    v21 = 0;
  }
  if ( a10 || v21 )
  {
    if ( qword_18021F488 && !byte_18021F4B8 )
      qword_18021F488(a15, lpOutputString, a12);
    if ( !*lpOutputString )
      sub_18000CA8C(lpOutputString, a12, a15);
    if ( v21 )
      OutputDebugStringW(lpOutputString);
  }
  else if ( qword_18021F488 && !byte_18021F4B8 )
  {
    qword_18021F488(a15, 0LL, 0LL);
  }
  if ( byte_18021F4A8 )
  {
    if ( qword_18021F4F8 )
      qword_18021F4F8();
  }
}
