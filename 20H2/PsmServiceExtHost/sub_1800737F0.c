/*
 * XREFs of sub_1800737F0 @ 0x1800737F0
 * Callers:
 *     sub_1800739C4 @ 0x1800739C4 (sub_1800739C4.c)
 * Callees:
 *     sub_180033EAC @ 0x180033EAC (sub_180033EAC.c)
 */

bool __fastcall sub_1800737F0(DWORD dwProcessId)
{
  bool v1; // bl
  HANDLE v2; // rax
  void *v3; // rdi

  v1 = 0;
  v2 = OpenProcess(0x400u, 0, dwProcessId);
  v3 = v2;
  if ( v2 )
  {
    v1 = sub_180033EAC(v2);
    CloseHandle(v3);
  }
  return v1;
}
