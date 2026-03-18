/*
 * XREFs of _GreHintDCWnd@20 @ 0x83BD0
 * Callers:
 *     ?zzzBltValidBits@@YG?AW4BltBitsResult@@PAUtagSMWP@@@Z @ 0x339E2 (-zzzBltValidBits@@YG-AW4BltBitsResult@@PAUtagSMWP@@@Z.c)
 *     _UpdateRedirectedDCE@8 @ 0x83AE6 (_UpdateRedirectedDCE@8.c)
 * Callees:
 *     ?hWnd@DC@@QAEXPAUHWND__@@@Z @ 0x8E2B6 (-hWnd@DC@@QAEXPAUHWND__@@@Z.c)
 */

int __stdcall GreHintDCWnd(int a1, HWND a2, int a3, int a4, int a5)
{
  DC *v5; // eax
  DC *v6; // esi
  int v7; // ecx
  int v8; // eax
  int v9; // edi
  int v11; // eax
  int v12; // eax

  v5 = (DC *)HmgShareLockEx(a1, 1, 0);
  v6 = v5;
  if ( !v5 )
    return 0;
  DC::hWnd(v5, a2);
  v7 = a3;
  *((_DWORD *)v6 + 122) = a3;
  if ( v7 && (v11 = ValidateHwnd(v7)) != 0 && (v12 = *(_DWORD *)(v11 + 8)) != 0 )
    v8 = **(_DWORD **)(v12 + 232);
  else
    v8 = 0;
  *((_DWORD *)v6 + 123) = v8;
  *((_DWORD *)v6 + 124) = a4;
  *((_DWORD *)v6 + 125) = a5;
  a1 = 0;
  v9 = *(_DWORD *)v6;
  HmgDecrementShareReferenceCountEx(v6, &a1);
  if ( a1 )
    bDeleteDCInternalEx(v9, 0);
  return 1;
}
