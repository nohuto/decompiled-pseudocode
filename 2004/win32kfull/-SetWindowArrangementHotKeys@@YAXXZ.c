/*
 * XREFs of ?SetWindowArrangementHotKeys@@YAXXZ @ 0x1C00C8328
 * Callers:
 *     RawInputThread @ 0x1C00C62E0 (RawInputThread.c)
 * Callees:
 *     _RegisterHotKey @ 0x1C003D584 (_RegisterHotKey.c)
 */

void SetWindowArrangementHotKeys(void)
{
  _DWORD *v0; // rbx
  __int64 v1; // rdi
  ULONG_PTR BugCheckParameter2; // [rsp+20h] [rbp-18h]

  v0 = &unk_1C02E5244;
  v1 = 14LL;
  do
  {
    LODWORD(BugCheckParameter2) = v0[1];
    RegisterHotKey(0LL, (__int64)WindowArrangementHotKeyCallback, *(v0 - 1), *v0 | 0x4000, BugCheckParameter2);
    v0 += 4;
    --v1;
  }
  while ( v1 );
}
