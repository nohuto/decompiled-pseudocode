/*
 * XREFs of DxgkTestEndTest @ 0x1C03443A0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall DxgkTestEndTest(__int64 a1)
{
  __int64 result; // rax

  qword_1C0130400 = 0LL;
  result = ExReleasePushLockExclusiveEx(&qword_1C0130EE0, 0LL);
  *(_QWORD *)(a1 + 8) = 0LL;
  return result;
}
