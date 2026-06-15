/*
 * XREFs of sub_18001EC8C @ 0x18001EC8C
 * Callers:
 *     sub_180012518 @ 0x180012518 (sub_180012518.c)
 *     sub_18001E6B8 @ 0x18001E6B8 (sub_18001E6B8.c)
 * Callees:
 *     sub_18001A3F8 @ 0x18001A3F8 (sub_18001A3F8.c)
 *     sub_18001A9A8 @ 0x18001A9A8 (sub_18001A9A8.c)
 *     sub_18001EA68 @ 0x18001EA68 (sub_18001EA68.c)
 *     sub_18001EBA4 @ 0x18001EBA4 (sub_18001EBA4.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall sub_18001EC8C(__int64 a1, __int64 a2, int *a3, int *a4, _DWORD *a5)
{
  struct _RTL_CRITICAL_SECTION *v9; // rbp
  int v10; // eax
  int v11; // r14d
  const wchar_t *v12; // r15
  const wchar_t *v13; // rax
  __int64 v14; // r11
  const wchar_t *v15; // rdx
  const wchar_t *v16; // r8
  const wchar_t *v17; // r9
  const wchar_t *v18; // r10

  v9 = (struct _RTL_CRITICAL_SECTION *)(a1 + 32);
  EnterCriticalSection((LPCRITICAL_SECTION)(a1 + 32));
  v10 = sub_18001EA68(a1, (_DWORD *)a2);
  v11 = v10;
  if ( a3 )
    *a3 = v10;
  if ( a4 )
  {
    if ( *(_DWORD *)(a2 + 568) )
      *a4 = *(_DWORD *)(a2 + 572);
    else
      *a4 = v10;
  }
  if ( a5 )
    *a5 = sub_18001EBA4(a1, a2, v10);
  if ( off_18004F000 != (_UNKNOWN *)&off_18004F000
    && (*((_DWORD *)off_18004F000 + 7) & 0x40000000) != 0
    && *((_BYTE *)off_18004F000 + 25) >= 5u )
  {
    v12 = L"Not computed";
    if ( a4 )
      v12 = sub_18001A9A8(*a4);
    v13 = sub_18001A9A8(v11);
    sub_18001A3F8(
      *(_QWORD *)(v14 + 16),
      (__int64)v15,
      (__int64)v16,
      *(const wchar_t **)(a2 + 24),
      v13,
      v18,
      v12,
      v15,
      v17,
      v16);
  }
  if ( v9 )
    LeaveCriticalSection(v9);
  return 0LL;
}
