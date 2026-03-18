/*
 * XREFs of _EditionGetInputDelegate@104 @ 0xF148E
 * Callers:
 *     <none>
 * Callees:
 *     _GetInputDelegate@8 @ 0x47988 (_GetInputDelegate@8.c)
 *     @__security_check_cookie@4 @ 0xED840 (@__security_check_cookie@4.c)
 */

int __stdcall EditionGetInputDelegate(
        char a1,
        int a2,
        int a3,
        int a4,
        int a5,
        int a6,
        int a7,
        int a8,
        int a9,
        int a10,
        int a11,
        int a12,
        int a13,
        int a14,
        int a15,
        int a16,
        int a17,
        int a18,
        int a19,
        int a20,
        int a21,
        int a22,
        int a23,
        int a24,
        int a25,
        int a26)
{
  int v27[26]; // [esp+8h] [ebp-6Ch] BYREF

  qmemcpy(v27, &a1, sizeof(v27));
  return GetInputDelegate(v27[20], 4096);
}
