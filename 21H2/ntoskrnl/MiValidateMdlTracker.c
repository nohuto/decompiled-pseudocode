/*
 * XREFs of MiValidateMdlTracker @ 0x140531218
 * Callers:
 *     MiFreeMdlTracker @ 0x140530D70 (MiFreeMdlTracker.c)
 *     MmUpdateMdlTrackerForMdlSwitch @ 0x1405315D8 (MmUpdateMdlTrackerForMdlSwitch.c)
 * Callees:
 *     ?Hash@MetroHash64@@SAXPEBE_KQEAE1@Z @ 0x140225B74 (-Hash@MetroHash64@@SAXPEBE_KQEAE1@Z.c)
 *     KeBugCheckEx @ 0x1403FE0D0 (KeBugCheckEx.c)
 */

__int64 __fastcall MiValidateMdlTracker(ULONG_PTR BugCheckParameter3, int a2)
{
  ULONG_PTR v2; // rsi
  __int64 v4; // rax
  unsigned __int64 v6; // rdx
  __int64 v7; // rbx
  __int64 result; // rax
  __int64 v9; // [rsp+40h] [rbp+8h] BYREF

  v2 = *(_QWORD *)(BugCheckParameter3 + 24);
  v4 = *(_QWORD *)(BugCheckParameter3 + 40);
  v6 = (((*(_DWORD *)(v2 + 32) + *(_DWORD *)(v2 + 44)) & 0xFFF) + (unsigned __int64)*(unsigned int *)(v2 + 40) + 4095) >> 12;
  if ( v4 != v6 )
    KeBugCheckEx(0x76u, 5uLL, *(_QWORD *)(BugCheckParameter3 + 24), BugCheckParameter3, v6 | (v4 << 32));
  v7 = *(_QWORD *)(BugCheckParameter3 + 64);
  result = *(_QWORD *)(v2 + 48);
  if ( v7 != result )
    KeBugCheckEx(0x76u, 6uLL, v2, BugCheckParameter3, result | (v7 << 32));
  if ( a2 )
  {
    v9 = 0LL;
    MetroHash64::Hash((const unsigned __int8 *)(v2 + 48), 8 * v6, (unsigned __int8 *const)&v9);
    result = v9;
    if ( *(_DWORD *)(BugCheckParameter3 + 60) != (_DWORD)v9 )
      KeBugCheckEx(0x76u, 7uLL, v2, BugCheckParameter3, (unsigned int)v9 | (unsigned __int64)(v7 << 32));
  }
  return result;
}
