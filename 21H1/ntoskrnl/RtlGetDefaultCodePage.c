/*
 * XREFs of RtlGetDefaultCodePage @ 0x14075D1C0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall RtlGetDefaultCodePage(USHORT *a1, _WORD *a2)
{
  __int64 result; // rax

  *a1 = NlsAnsiCodePage;
  result = (unsigned __int16)NlsOemCodePage;
  *a2 = NlsOemCodePage;
  return result;
}
