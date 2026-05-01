/*
 * XREFs of sub_180065BE0 @ 0x180065BE0
 * Callers:
 *     sub_180044894 @ 0x180044894 (sub_180044894.c)
 * Callees:
 *     sub_1800384E8 @ 0x1800384E8 (sub_1800384E8.c)
 *     sub_180039EA4 @ 0x180039EA4 (sub_180039EA4.c)
 *     sub_18003B130 @ 0x18003B130 (sub_18003B130.c)
 *     sub_1800641A0 @ 0x1800641A0 (sub_1800641A0.c)
 *     sub_1800649C0 @ 0x1800649C0 (sub_1800649C0.c)
 *     sub_180066864 @ 0x180066864 (sub_180066864.c)
 */

int __fastcall sub_180065BE0(HANDLE *lpMem)
{
  int result; // eax
  bool v3; // zf
  HANDLE ProcessHeap; // rax
  void *v5; // [rsp+48h] [rbp+10h] BYREF

  if ( sub_180039EA4() )
  {
    result = *(_DWORD *)lpMem - 1;
    *(_DWORD *)lpMem = result;
  }
  else
  {
    sub_18003B130(lpMem + 1, &v5);
    v3 = *(_DWORD *)lpMem == 1;
    result = *(_DWORD *)lpMem - 1;
    *(_DWORD *)lpMem = result;
    if ( v3 )
    {
      sub_1800649C0(lpMem + 2);
      sub_180066864(&v5, 0LL);
      sub_1800641A0(lpMem);
      ProcessHeap = GetProcessHeap();
      result = HeapFree(ProcessHeap, 0, lpMem);
    }
    if ( v5 )
      return sub_1800384E8(v5);
  }
  return result;
}
