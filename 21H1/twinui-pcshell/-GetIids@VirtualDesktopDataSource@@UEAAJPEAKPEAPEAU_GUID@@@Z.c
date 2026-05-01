/*
 * XREFs of ?GetIids@VirtualDesktopDataSource@@UEAAJPEAKPEAPEAU_GUID@@@Z @ 0x180353950
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall VirtualDesktopDataSource::GetIids(
        VirtualDesktopDataSource *this,
        unsigned int *a2,
        struct _GUID **a3)
{
  unsigned int v3; // ebx
  struct _GUID *v6; // rax

  v3 = 0;
  *a3 = 0LL;
  *a2 = 0;
  v6 = (struct _GUID *)CoTaskMemAlloc(0x50uLL);
  if ( v6 )
  {
    *v6 = GUID_d695e3e4_4996_4604_85d7_84f7ca94029f;
    v6[1] = GUID_00000038_0000_0000_c000_000000000046;
    v6[2] = GUID_7f331592_08ca_41ff_a77d_f2138806e857;
    v6[3] = GUID_6a44b01b_d9f2_4ed1_afbc_430477598dfc;
    v6[4] = GUID_c179334c_4295_40d3_bea1_c654d965605a;
    *a2 = 5;
    *a3 = v6;
  }
  else
  {
    return (unsigned int)-2147024882;
  }
  return v3;
}
