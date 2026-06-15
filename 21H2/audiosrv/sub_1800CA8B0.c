/*
 * XREFs of sub_1800CA8B0 @ 0x1800CA8B0
 * Callers:
 *     sub_1800CAA10 @ 0x1800CAA10 (sub_1800CAA10.c)
 * Callees:
 *     sub_18004BD84 @ 0x18004BD84 (sub_18004BD84.c)
 *     _guard_dispatch_icall_nop @ 0x180074470 (_guard_dispatch_icall_nop.c)
 *     sub_1800C2408 @ 0x1800C2408 (sub_1800C2408.c)
 */

__int64 __fastcall sub_1800CA8B0(__int64 a1, unsigned int a2, float a3, __int64 a4, _DWORD *a5)
{
  __int64 v6; // rsi
  __int64 v9; // rax
  float v10; // xmm7_4
  int v11; // [rsp+20h] [rbp-48h]
  _UNKNOWN *retaddr; // [rsp+68h] [rbp+0h]

  v6 = a2;
  if ( off_18019C348 != (_UNKNOWN *)&off_18019C348
    && (*((_BYTE *)off_18019C348 + 28) & 0x40) != 0
    && *((_BYTE *)off_18019C348 + 25) >= 4u )
  {
    sub_1800C2408(*((_QWORD *)off_18019C348 + 2), 0x17u, (__int64)&unk_18015DEF0, *(const wchar_t **)(a1 + 728), a2, a3);
  }
  EnterCriticalSection((LPCRITICAL_SECTION)(a1 + 808));
  if ( (unsigned int)v6 < *(_DWORD *)(a1 + 960) )
  {
    v9 = *(_QWORD *)(a1 + 968);
    v10 = *(float *)(v9 + 4 * v6);
    *(float *)(v9 + 4 * v6) = a3;
    if ( a1 != -808 )
      LeaveCriticalSection((LPCRITICAL_SECTION)(a1 + 808));
    LOBYTE(v11) = 0;
    (*(void (__fastcall **)(__int64, __int64, __int64, _QWORD, int, _QWORD))(*(_QWORD *)(a1 + 16) + 24LL))(
      a1 + 16,
      1LL,
      a4,
      (unsigned int)v6,
      v11,
      0LL);
    if ( a5 )
      *a5 = v10 == a3;
    return 0LL;
  }
  else
  {
    sub_18004BD84((int)retaddr, 1159, (int)"avcore\\audiocore\\server\\audiosrv\\dll\\audiosession.cpp", -2147024809);
    if ( a1 != -808 )
      LeaveCriticalSection((LPCRITICAL_SECTION)(a1 + 808));
    return 2147942487LL;
  }
}
