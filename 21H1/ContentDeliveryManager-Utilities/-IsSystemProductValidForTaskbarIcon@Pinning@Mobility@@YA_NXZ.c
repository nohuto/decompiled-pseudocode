/*
 * XREFs of ?IsSystemProductValidForTaskbarIcon@Pinning@Mobility@@YA_NXZ @ 0x18000E1B0
 * Callers:
 *     ??R_lambda_13a45783cb3309e666fe0ee3fbf2f736_@@QEBAXXZ @ 0x18000E3A4 (--R_lambda_13a45783cb3309e666fe0ee3fbf2f736_@@QEBAXXZ.c)
 * Callees:
 *     <none>
 */

char __fastcall Mobility::Pinning::IsSystemProductValidForTaskbarIcon(Mobility::Pinning *this)
{
  char v1; // di
  WCHAR *pvData; // rbx
  const WCHAR *v3; // rsi
  SIZE_T cb; // [rsp+50h] [rbp+8h] BYREF

  v1 = 1;
  if ( !RegGetValueW(
          HKEY_LOCAL_MACHINE,
          L"Hardware\\Description\\System\\BIOS",
          L"SystemProductName",
          2u,
          0LL,
          0LL,
          (LPDWORD)&cb) )
  {
    pvData = (WCHAR *)CoTaskMemAlloc((unsigned int)cb);
    v3 = pvData;
    if ( !RegGetValueW(
            HKEY_LOCAL_MACHINE,
            L"Hardware\\Description\\System\\BIOS",
            L"SystemProductName",
            2u,
            0LL,
            pvData,
            (LPDWORD)&cb) )
    {
      pvData = 0LL;
      if ( CompareStringOrdinal(v3, -1, L"Surface Go", -1, 1) != 2 )
        return v1;
      v1 = 0;
    }
    if ( pvData )
      CoTaskMemFree(pvData);
  }
  return v1;
}
