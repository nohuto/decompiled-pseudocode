/*
 * XREFs of ?PrepareFallbackKeyboardFile@@YAPEAUtagKbdLayer@@PEAUtagKBDFILE@@@Z @ 0x1C01A7B5C
 * Callers:
 *     ?LoadKeyboardLayoutFile@@YAPEAUtagKBDFILE@@PEAXIIPEBGPEAGKK@Z @ 0x1C0041D24 (-LoadKeyboardLayoutFile@@YAPEAUtagKBDFILE@@PEAXIIPEBGPEAGKK@Z.c)
 * Callees:
 *     Win32AllocPool @ 0x1C0080DF0 (Win32AllocPool.c)
 */

struct tagKbdLayer *__fastcall PrepareFallbackKeyboardFile(struct tagKBDFILE *a1)
{
  struct tagKbdLayer *result; // rax

  result = (struct tagKbdLayer *)Win32AllocPool(104LL, 0x746B7355u);
  if ( result )
  {
    *(_OWORD *)result = *(_OWORD *)KbdTablesFallback;
    *((_OWORD *)result + 1) = unk_1C0278040;
    *((_OWORD *)result + 2) = *(_OWORD *)&off_1C0278050;
    *((_OWORD *)result + 3) = *(_OWORD *)&off_1C0278060;
    *((_OWORD *)result + 4) = *(_OWORD *)&off_1C0278070;
    *((_OWORD *)result + 5) = xmmword_1C0278080;
    *((_QWORD *)result + 12) = qword_1C0278090;
  }
  *((_QWORD *)a1 + 6) = 0LL;
  *((_QWORD *)a1 + 3) = result;
  return result;
}
