/*
 * XREFs of PerfControlHwpPackage @ 0x1C0007330
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

unsigned __int64 __fastcall PerfControlHwpPackage(__int64 a1, _QWORD *a2, __int64 a3, char a4)
{
  unsigned __int64 v4; // rax
  unsigned __int64 result; // rax

  if ( !*(_BYTE *)(a1 + 106) || a4 )
  {
    v4 = __readmsr(0x772u);
    *(_BYTE *)(a1 + 106) = 1;
  }
  else
  {
    v4 = *(_QWORD *)(a1 + 152);
  }
  result = *(_QWORD *)(a1 + 144) & *a2 | v4 & ~*(_QWORD *)(a1 + 144);
  __writemsr(0x772u, result);
  *(_QWORD *)(a1 + 152) = result;
  return result;
}
