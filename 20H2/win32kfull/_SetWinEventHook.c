/*
 * XREFs of _SetWinEventHook @ 0x1C0076C94
 * Callers:
 *     NtUserSetWinEventHook @ 0x1C0076B20 (NtUserSetWinEventHook.c)
 * Callees:
 *     W32GetCurrentThreadDpiAwarenessContext @ 0x1C0055C10 (W32GetCurrentThreadDpiAwarenessContext.c)
 *     AddHmodDependency @ 0x1C0074FE8 (AddHmodDependency.c)
 *     GetHmodTableIndex @ 0x1C007502C (GetHmodTableIndex.c)
 *     CategoryMaskFromEventRange @ 0x1C0076EEC (CategoryMaskFromEventRange.c)
 *     UserSetLastError @ 0x1C00D60E0 (UserSetLastError.c)
 */

// write access to const memory has been detected, the output may be wrong!
__int64 __fastcall SetWinEventHook(
        unsigned int a1,
        unsigned int a2,
        __int64 a3,
        unsigned int *a4,
        __int64 a5,
        __int64 a6,
        unsigned int a7,
        char a8)
{
  __int64 v8; // r12
  int HmodTableIndex; // edi
  __int64 v11; // rax
  __int64 v12; // rbx
  int v13; // ecx
  int v14; // eax
  __int64 v15; // r8
  __int64 v16; // rcx
  __int64 v18; // rax
  __int64 v19; // rcx

  v8 = a3;
  if ( (*(_DWORD *)(gptiCurrent + 488LL) & 1) != 0 )
    return 0LL;
  if ( !a5 )
  {
    v19 = 1427LL;
LABEL_20:
    UserSetLastError(v19);
    return 0LL;
  }
  if ( a1 > a2 )
  {
    v19 = 1426LL;
    goto LABEL_20;
  }
  if ( (a8 & 4) != 0 )
  {
    if ( !a3 )
    {
      v19 = 1428LL;
      goto LABEL_20;
    }
    if ( !a4 )
    {
      v19 = 1157LL;
      goto LABEL_20;
    }
    HmodTableIndex = GetHmodTableIndex(a4);
    if ( HmodTableIndex == -1 )
    {
      v19 = 126LL;
      goto LABEL_20;
    }
  }
  else
  {
    HmodTableIndex = -1;
    v8 = 0LL;
  }
  if ( a7 )
  {
    v18 = PtiFromThreadId(a7);
    if ( !v18 || (*(_DWORD *)(v18 + 488) & 0x1000000) == 0 )
    {
      v19 = 1444LL;
      goto LABEL_20;
    }
  }
  LOBYTE(a3) = 15;
  v11 = HMAllocObject(gptiCurrent, 0LL, a3);
  v12 = v11;
  if ( !v11 )
    return 0LL;
  v13 = *(_DWORD *)(v11 + 40);
  *(_DWORD *)(v11 + 32) = a1;
  *(_DWORD *)(v11 + 36) = a2;
  *(_QWORD *)(v11 + 48) = a6;
  *(_DWORD *)(v11 + 56) = a7;
  *(_DWORD *)(v11 + 72) = HmodTableIndex;
  *(_DWORD *)(v11 + 40) = (2 * (a8 & 0xB)) | v13 & 0xFFFFFFE0 | ((a8 & 4) != 0 ? 8 : 0);
  if ( HmodTableIndex >= 0 )
    AddHmodDependency(HmodTableIndex);
  *(_QWORD *)(v12 + 64) = a5 - v8;
  *(_QWORD *)(v12 + 24) = gpWinEventHooks;
  gpWinEventHooks = v12;
  v14 = CategoryMaskFromEventRange(a1, a2, gpsi);
  *(_DWORD *)(v15 + 1892) |= v14;
  *(_DWORD *)(v12 + 88) = W32GetCurrentThreadDpiAwarenessContext(v16);
  return v12;
}
