/*
 * XREFs of ?BmlIsSupportedPathScaling@@YA_NW4_D3DKMDT_VIDPN_PRESENT_PATH_SCALING@@U_D3DKMDT_VIDPN_PRESENT_PATH_SCALING_SUPPORT@@@Z @ 0x1C013A3E4
 * Callers:
 *     BmlInternalTryPinningScaling @ 0x1C013A334 (BmlInternalTryPinningScaling.c)
 * Callees:
 *     <none>
 */

char __fastcall BmlIsSupportedPathScaling(__int64 a1, __int64 a2)
{
  __int64 v2; // rbx
  __int64 v4; // rax

  v2 = (int)a1;
  switch ( (_DWORD)a1 )
  {
    case 1:
      return a2 & 1;
    case 2:
      LODWORD(a2) = (unsigned int)a2 >> 1;
      return a2 & 1;
    case 3:
      LODWORD(a2) = (unsigned int)a2 >> 2;
      return a2 & 1;
    case 4:
      LODWORD(a2) = (unsigned int)a2 >> 3;
      return a2 & 1;
    case 5:
      LODWORD(a2) = (unsigned int)a2 >> 4;
      return a2 & 1;
    case 0xFF:
      return 1;
  }
  v4 = WdLogNewEntry5_WdAssertion(a1, a2);
  *(_QWORD *)(v4 + 24) = v2;
  WdLogEvent5_WdAssertion(v4);
  return 0;
}
