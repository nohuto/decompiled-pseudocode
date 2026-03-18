/*
 * XREFs of _NtUserEnableScrollBar@12 @ 0x8E04C
 * Callers:
 *     <none>
 * Callees:
 *     _UserSetLastError@4 @ 0x81122 (_UserSetLastError@4.c)
 *     _xxxEnableScrollBar@12 @ 0x8E0EE (_xxxEnableScrollBar@12.c)
 */

int __stdcall NtUserEnableScrollBar(int a1, unsigned int a2, unsigned int HighLimit)
{
  int v3; // esi
  ULONG_PTR v4; // eax
  ULONG_PTR v5; // edi
  int v6; // ecx
  int v8; // [esp+8h] [ebp-Ch] BYREF
  ULONG_PTR v9; // [esp+Ch] [ebp-8h]
  int v10; // [esp+10h] [ebp-4h]

  v3 = 0;
  v8 = 0;
  v9 = 0;
  v10 = 0;
  EnterCrit(0, 1);
  v4 = ValidateHwnd(a1);
  v5 = v4;
  if ( v4 )
  {
    v6 = *(_WORD *)(*(_DWORD *)(v4 + 20) + 30) & 0x3FFF;
    if ( v6 != 669 && v6 != 671 )
    {
      v8 = *(_DWORD *)(_gptiCurrent + 228);
      *(_DWORD *)(_gptiCurrent + 228) = &v8;
      v9 = v4;
      HMLockObject(v4);
      if ( a2 > 3 || a2 == 2 && *(_WORD *)(*(_DWORD *)(v5 + 20) + 30) != 666 )
        UserSetLastError((struct _NT_TIB *)0x57);
      else
        v3 = xxxEnableScrollBar(v5, HighLimit);
      ThreadUnlock1();
    }
  }
  UserSessionSwitchLeaveCrit();
  return v3;
}
