/*
 * XREFs of sub_180065C70 @ 0x180065C70
 * Callers:
 *     sub_1800448B8 @ 0x1800448B8 (sub_1800448B8.c)
 *     sub_180064258 @ 0x180064258 (sub_180064258.c)
 * Callees:
 *     sub_1800384E8 @ 0x1800384E8 (sub_1800384E8.c)
 *     sub_180039EA4 @ 0x180039EA4 (sub_180039EA4.c)
 *     sub_18003B130 @ 0x18003B130 (sub_18003B130.c)
 *     sub_180064374 @ 0x180064374 (sub_180064374.c)
 *     sub_1800649C0 @ 0x1800649C0 (sub_1800649C0.c)
 *     sub_180066864 @ 0x180066864 (sub_180066864.c)
 */

int __fastcall sub_180065C70(__int64 lpMem)
{
  bool v2; // zf
  int result; // eax
  HANDLE ProcessHeap; // rax
  void *v5; // [rsp+48h] [rbp+10h] BYREF

  if ( sub_180039EA4() )
  {
    v2 = *(_DWORD *)lpMem == 1;
    result = *(_DWORD *)lpMem - 1;
    *(_DWORD *)lpMem = result;
    if ( v2 )
      return sub_1800659C8((_BYTE *)(lpMem + 32));
  }
  else
  {
    sub_18003B130((HANDLE *)(lpMem + 8), &v5);
    v2 = *(_DWORD *)lpMem == 1;
    result = *(_DWORD *)lpMem - 1;
    *(_DWORD *)lpMem = result;
    if ( v2 )
    {
      sub_1800649C0((void **)(lpMem + 16));
      sub_180066864(&v5, 0LL);
      sub_180064374(lpMem);
      ProcessHeap = GetProcessHeap();
      result = HeapFree(ProcessHeap, 0, (LPVOID)lpMem);
    }
    if ( v5 )
      return sub_1800384E8(v5);
  }
  return result;
}
