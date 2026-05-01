/*
 * XREFs of ?GetIids@ViewTabEventArgs@Tabs@ComposableShell@Internal@Windows@@UEAAJPEAKPEAPEAU_GUID@@@Z @ 0x18024E310
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall Windows::Internal::ComposableShell::Tabs::ViewTabEventArgs::GetIids(
        Windows::Internal::ComposableShell::Tabs::ViewTabEventArgs *this,
        unsigned int *a2,
        struct _GUID **a3)
{
  unsigned int v3; // ebx
  struct _GUID *v6; // rax

  v3 = 0;
  *a3 = 0LL;
  *a2 = 0;
  v6 = (struct _GUID *)CoTaskMemAlloc(0x20uLL);
  if ( v6 )
  {
    *v6 = GUID_000b144c_de5b_45c6_8404_b4d06e056130;
    v6[1] = GUID_00000038_0000_0000_c000_000000000046;
    *a2 = 2;
    *a3 = v6;
  }
  else
  {
    return (unsigned int)-2147024882;
  }
  return v3;
}
