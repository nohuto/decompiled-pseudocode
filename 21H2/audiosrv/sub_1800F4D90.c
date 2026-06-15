/*
 * XREFs of sub_1800F4D90 @ 0x1800F4D90
 * Callers:
 *     sub_1800F3680 @ 0x1800F3680 (sub_1800F3680.c)
 * Callees:
 *     sub_180066980 @ 0x180066980 (sub_180066980.c)
 *     __security_check_cookie @ 0x180069A70 (__security_check_cookie.c)
 *     sub_1800B8CCC @ 0x1800B8CCC (sub_1800B8CCC.c)
 *     sub_1800B91A0 @ 0x1800B91A0 (sub_1800B91A0.c)
 *     sub_1800BB4E0 @ 0x1800BB4E0 (sub_1800BB4E0.c)
 *     sub_1800F22A4 @ 0x1800F22A4 (sub_1800F22A4.c)
 *     sub_1800F3EAC @ 0x1800F3EAC (sub_1800F3EAC.c)
 *     sub_1800F4F90 @ 0x1800F4F90 (sub_1800F4F90.c)
 *     sub_1800F55C8 @ 0x1800F55C8 (sub_1800F55C8.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall sub_1800F4D90(struct _RTL_CRITICAL_SECTION *a1, __int64 a2)
{
  int v4; // ebp
  const wchar_t *v5; // r9
  __int64 v6; // rcx
  _QWORD *p_Type; // rbx
  _OWORD *v8; // rax
  _OWORD *v9; // rcx
  __int64 v10; // rdx
  __int64 v11; // rcx
  _QWORD *v13; // [rsp+30h] [rbp-528h] BYREF
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+38h] [rbp-520h] BYREF
  char v15; // [rsp+40h] [rbp-518h]
  _WORD v16[146]; // [rsp+50h] [rbp-508h] BYREF
  int v17; // [rsp+174h] [rbp-3E4h]

  v4 = 0;
  if ( off_18019C348 != (_UNKNOWN *)&off_18019C348
    && (*((_DWORD *)off_18019C348 + 7) & 0x100) != 0
    && *((_BYTE *)off_18019C348 + 25) >= 4u )
  {
    v5 = L"n/a";
    if ( *(_WORD *)a2 )
      LODWORD(v5) = a2;
    sub_1800F55C8(
      *((_QWORD *)off_18019C348 + 2),
      a2,
      (_DWORD)off_18019C348,
      (_DWORD)v5,
      a2 + 402,
      *(_DWORD *)(a2 + 924));
  }
  sub_180066980((__int64)&lpCriticalSection, a1 + 3);
  p_Type = &a1[4].DebugInfo->Type;
  v13 = p_Type;
  while ( p_Type )
  {
    v8 = (_OWORD *)sub_1800B8CCC(v6, (__int64)p_Type);
    v9 = v16;
    v10 = 9LL;
    do
    {
      *v9 = *v8;
      v9[1] = v8[1];
      v9[2] = v8[2];
      v9[3] = v8[3];
      v9[4] = v8[4];
      v9[5] = v8[5];
      v9[6] = v8[6];
      v9 += 8;
      *(v9 - 1) = v8[7];
      v8 += 8;
      --v10;
    }
    while ( v10 );
    *v9 = *v8;
    v9[1] = v8[1];
    v9[2] = v8[2];
    v9[3] = v8[3];
    v9[4] = v8[4];
    if ( sub_1800F22A4(a2, v16) )
    {
      ++v4;
      v17 = 1;
      sub_1800F4F90(v11, p_Type, v16);
    }
    sub_1800B91A0(v11, &v13);
    p_Type = v13;
  }
  if ( v15 )
    LeaveCriticalSection(lpCriticalSection);
  sub_1800F3EAC((__int64)a1);
  if ( off_18019C348 != (_UNKNOWN *)&off_18019C348
    && (*((_DWORD *)off_18019C348 + 7) & 0x100) != 0
    && *((_BYTE *)off_18019C348 + 25) >= 4u )
  {
    sub_1800BB4E0(*((_QWORD *)off_18019C348 + 2), 0xDu, (__int64)&unk_180171BD8, v4);
  }
  return 0LL;
}
