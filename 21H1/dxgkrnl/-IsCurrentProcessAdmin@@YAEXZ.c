/*
 * XREFs of ?IsCurrentProcessAdmin@@YAEXZ @ 0x1C00359D8
 * Callers:
 *     ?ReadDiagnostics@DXGDIAGNOSTICS@@QEBAJPEAEPEAII@Z @ 0x1C0043D74 (-ReadDiagnostics@DXGDIAGNOSTICS@@QEBAJPEAEPEAII@Z.c)
 *     DxgkDisplayConfigDeviceInfo @ 0x1C00E73D0 (DxgkDisplayConfigDeviceInfo.c)
 *     DxgkEscape @ 0x1C00FB2D0 (DxgkEscape.c)
 *     ?IsDiagnosticAllowed@DXGADAPTER@@QEBAEXZ @ 0x1C0209CDC (-IsDiagnosticAllowed@DXGADAPTER@@QEBAEXZ.c)
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
