/*
 * XREFs of ?IsDiagnosticAllowed@DXGADAPTER@@QEBAEXZ @ 0x1C0209CDC
 * Callers:
 *     DxgkEscape @ 0x1C00FB2D0 (DxgkEscape.c)
 *     ?DmmEscape@@YAJQEAVDXGADAPTER@@QEAU_D3DKMT_DMM_ESCAPE_INTERNAL@@@Z @ 0x1C02D7D60 (-DmmEscape@@YAJQEAVDXGADAPTER@@QEAU_D3DKMT_DMM_ESCAPE_INTERNAL@@@Z.c)
 * Callees:
 *     ?IsAdapterSessionized@DXGADAPTER@@QEBA_NPEAU_LUID@@PEAIPEA_K@Z @ 0x1C0011FD8 (-IsAdapterSessionized@DXGADAPTER@@QEBA_NPEAU_LUID@@PEAIPEA_K@Z.c)
 *     ?IsCurrentConsoleSession@@YAEXZ @ 0x1C00359A0 (-IsCurrentConsoleSession@@YAEXZ.c)
 *     ?IsCurrentProcessAdmin@@YAEXZ @ 0x1C00359D8 (-IsCurrentProcessAdmin@@YAEXZ.c)
 */

bool __fastcall DXGADAPTER::IsDiagnosticAllowed(DXGADAPTER *this, struct _LUID *a2)
{
  __int64 v2; // rdx
  __int64 v3; // rcx
  int CurrentProcessSessionId; // eax
  unsigned __int64 v6; // [rsp+38h] [rbp+10h] BYREF

  v6 = 0LL;
  DXGADAPTER::IsAdapterSessionized(this, a2, 0LL, &v6);
  if ( v6 == 0x100000000LL || IsCurrentProcessAdmin() )
    return 1;
  if ( v6 == 0x200000000LL )
    return IsCurrentConsoleSession(v3, v2);
  CurrentProcessSessionId = PsGetCurrentProcessSessionId(v3);
  return CurrentProcessSessionId == (_DWORD)v6;
}
