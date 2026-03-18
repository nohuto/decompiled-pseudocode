/*
 * XREFs of ?IsCurrentProcessAdmin@@YAEXZ @ 0x1C0043CF4
 * Callers:
 *     ?ReadDiagnostics@DXGDIAGNOSTICS@@QEBAJPEAEPEAII@Z @ 0x1C0052D10 (-ReadDiagnostics@DXGDIAGNOSTICS@@QEBAJPEAEPEAII@Z.c)
 *     DxgkEscape @ 0x1C0179FA0 (DxgkEscape.c)
 *     DxgkDisplayConfigDeviceInfo @ 0x1C01A0EB0 (DxgkDisplayConfigDeviceInfo.c)
 *     ?IsDiagnosticAllowed@DXGADAPTER@@QEBAEXZ @ 0x1C02BC3EC (-IsDiagnosticAllowed@DXGADAPTER@@QEBAEXZ.c)
 * Callees:
 *     <none>
 */

bool IsCurrentProcessAdmin(void)
{
  char v0; // bl
  char v2; // [rsp+30h] [rbp+8h] BYREF

  v0 = 0;
  v2 = 0;
  if ( (int)RtlCheckTokenMembership(0LL, SeExports->SeAliasAdminsSid, &v2) >= 0 )
    return v2 != 0;
  return v0;
}
