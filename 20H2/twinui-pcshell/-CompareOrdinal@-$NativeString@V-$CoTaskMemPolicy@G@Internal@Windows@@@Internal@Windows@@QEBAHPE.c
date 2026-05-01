/*
 * XREFs of ?CompareOrdinal@?$NativeString@V?$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@QEBAHPEBG_K@Z @ 0x1801492D4
 * Callers:
 *     ?SetEnterpriseId@CApplicationViewBase@@UEAAJPEBG@Z @ 0x180197A80 (-SetEnterpriseId@CApplicationViewBase@@UEAAJPEBG@Z.c)
 *     ?SetDropEffect@AppResizeAcc@@UEAAXPEBG@Z @ 0x180419E30 (-SetDropEffect@AppResizeAcc@@UEAAXPEBG@Z.c)
 *     ?SetDropEffect@CDragVisualAcc@@UEAAXPEBG@Z @ 0x18042E570 (-SetDropEffect@CDragVisualAcc@@UEAAXPEBG@Z.c)
 *     ?RecalculateDesktopName@VirtualDesktopAcessibility@@AEAAJXZ @ 0x180441060 (-RecalculateDesktopName@VirtualDesktopAcessibility@@AEAAJXZ.c)
 * Callees:
 *     <none>
 */

int __fastcall Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::CompareOrdinal(
        const WCHAR **a1,
        const WCHAR *a2,
        int a3)
{
  const WCHAR *v3; // r10
  const WCHAR *v4; // rax
  const WCHAR *v5; // rcx
  int v6; // r9d

  v3 = &szAgent;
  v4 = a1[1];
  v5 = *a1;
  v6 = a2 != 0LL ? a3 : 0;
  if ( !a2 )
    a2 = &szAgent;
  if ( v4 == (const WCHAR *)-1LL )
  {
    if ( v5 )
    {
      do
        v4 = (const WCHAR *)((char *)v4 + 1);
      while ( v5[(_QWORD)v4] );
    }
    else
    {
      LODWORD(v4) = 0;
    }
  }
  if ( v5 )
    v3 = v5;
  return CompareStringOrdinal(v3, (int)v4, a2, v6, 0);
}
