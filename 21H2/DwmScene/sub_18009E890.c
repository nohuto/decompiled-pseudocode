/*
 * XREFs of sub_18009E890 @ 0x18009E890
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_18009E890(__int64 a1)
{
  __int64 result; // rax

  *(_QWORD *)(a1 + 88) = qword_180221E80;
  *(_DWORD *)(a1 + 96) = dword_180221E88;
  *(_QWORD *)(a1 + 100) = qword_180221E80;
  result = (unsigned int)dword_180221E88;
  *(_DWORD *)(a1 + 108) = dword_180221E88;
  return result;
}
