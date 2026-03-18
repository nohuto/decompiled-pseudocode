/*
 * XREFs of RIMVirtGetProductString @ 0x1C0169610
 * Callers:
 *     RIMVirtCreatePointerDeviceInfo @ 0x1C0168B18 (RIMVirtCreatePointerDeviceInfo.c)
 * Callees:
 *     Win32AllocPool @ 0x1C008D7C0 (Win32AllocPool.c)
 *     wcscmp_0 @ 0x1C00D1F63 (wcscmp_0.c)
 */

__int64 __fastcall RIMVirtGetProductString(__int64 a1, __int64 a2)
{
  unsigned int v4; // edi
  __int64 v5; // rax

  v4 = -1073741811;
  v5 = Win32AllocPool(*(unsigned __int16 *)(a2 + 554), 0x77647352u);
  *(_QWORD *)(a1 + 328) = v5;
  if ( v5 )
  {
    *(_WORD *)(a1 + 322) = *(_WORD *)(a2 + 554);
    RtlCopyUnicodeString((PUNICODE_STRING)(a1 + 320), (PCUNICODE_STRING)(a2 + 552));
    if ( !wcscmp_0(*(const wchar_t **)(a1 + 328), L"VHidPen") )
      *(_DWORD *)(a1 + 312) |= 0x4000u;
    return 0;
  }
  return v4;
}
