/*
 * XREFs of ?SpiSetStickyKeys@@YAHKPEAXHHPEAH@Z @ 0x1C013ACE4
 * Callers:
 *     xxxSystemParametersInfo @ 0x1C008BBE0 (xxxSystemParametersInfo.c)
 * Callees:
 *     ?SetAccessEnabledFlag@@YAXXZ @ 0x1C008DC50 (-SetAccessEnabledFlag@@YAXXZ.c)
 *     ?RtlStringCchPrintfW@@YAJPEAG_KPEBGZZ @ 0x1C008FCEC (-RtlStringCchPrintfW@@YAJPEAG_KPEBGZZ.c)
 *     __security_check_cookie @ 0x1C00CBC40 (__security_check_cookie.c)
 *     memset @ 0x1C00D3740 (memset.c)
 *     memmove @ 0x1C00D3840 (memmove.c)
 *     FastWriteProfileValue @ 0x1C0122050 (FastWriteProfileValue.c)
 *     ?xxxTurnOffStickyKeys@@YAXXZ @ 0x1C0183530 (-xxxTurnOffStickyKeys@@YAXXZ.c)
 *     ApiSetEditionCallAccessibilityHook @ 0x1C01C4C78 (ApiSetEditionCallAccessibilityHook.c)
 *     ApiSetEditionPostShellHookMessages @ 0x1C01C7834 (ApiSetEditionPostShellHookMessages.c)
 */

__int64 __fastcall SpiSetStickyKeys(int a1, _WORD *a2, int a3, unsigned int a4, int *a5)
{
  int v9; // ebp
  int v10; // r9d
  unsigned int v11; // eax
  int v12; // r9d
  __int64 v13; // rax
  __int64 v14; // rcx
  wchar_t Dest[40]; // [rsp+30h] [rbp-78h] BYREF

  memset(Dest, 0, sizeof(Dest));
  v9 = dword_1C0249BC4 & 1;
  if ( (a1 & 0xFFFFFFF7) != 0 )
    return 0LL;
  if ( !a2 )
    return 0LL;
  if ( *(_DWORD *)a2 != 8 )
    return 0LL;
  a2[3] = 0;
  v10 = *((_DWORD *)a2 + 1);
  if ( (v10 & 0x1FF) != v10 )
    return 0LL;
  v11 = v10 & 0xFFFFFFFD;
  v12 = v10 | 2;
  if ( (dword_1C0249BC4 & 2) == 0 )
    v12 = v11;
  *((_DWORD *)a2 + 1) = v12;
  if ( a3 )
  {
    RtlStringCchPrintfW(Dest, 40LL, L"%d");
    v13 = -1LL;
    do
      ++v13;
    while ( Dest[v13] );
    a4 = (unsigned int)FastWriteProfileValue(0LL, 0xEu, (const WCHAR *)L"Flags", 1u, Dest, 2 * (int)v13 + 2);
    *a5 = a4;
  }
  if ( !a4 )
    return 0LL;
  memmove(&gStickyKeys, a2, *(unsigned int *)a2);
  gStickyKeys = 8;
  if ( (dword_1C0249BC4 & 1) == 0 )
  {
    if ( v9 )
      xxxTurnOffStickyKeys();
  }
  SetAccessEnabledFlag();
  ApiSetEditionCallAccessibilityHook();
  ApiSetEditionPostShellHookMessages(v14, 1LL);
  return 1LL;
}
