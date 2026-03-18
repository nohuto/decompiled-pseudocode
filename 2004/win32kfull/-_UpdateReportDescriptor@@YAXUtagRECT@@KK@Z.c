/*
 * XREFs of ?_UpdateReportDescriptor@@YAXUtagRECT@@KK@Z @ 0x1C01DE37C
 * Callers:
 *     CreatePseudoDigitizerDevice @ 0x1C01DE484 (CreatePseudoDigitizerDevice.c)
 * Callees:
 *     <none>
 */

void __fastcall _UpdateReportDescriptor(struct tagRECT *a1, __int16 a2, unsigned int a3)
{
  unsigned int v3; // eax
  int v4; // r8d
  char v5; // r9
  char v6; // dl
  int v7; // ecx

  byte_1C0334242 = a3;
  v3 = a3 >> 8;
  byte_1C03342B4 = a3;
  byte_1C0334326 = a3;
  byte_1C0334398 = a3;
  v4 = (a1->right - a1->left) >> 8;
  v5 = LOBYTE(a1->right) - LOBYTE(a1->left);
  word_1C033423D = a2;
  word_1C03342AF = a2;
  word_1C0334321 = a2;
  word_1C0334393 = a2;
  v6 = LOBYTE(a1->bottom) - LOBYTE(a1->top);
  byte_1C0334243 = v3;
  byte_1C03342B5 = v3;
  byte_1C0334327 = v3;
  byte_1C0334399 = v3;
  v7 = a1->bottom - a1->top;
  byte_1C0334230 = v5;
  byte_1C0334246 = BYTE1(v7);
  byte_1C03342B8 = BYTE1(v7);
  byte_1C033432A = BYTE1(v7);
  byte_1C033439C = BYTE1(v7);
  byte_1C0334231 = v4;
  byte_1C0334245 = v6;
  byte_1C03342A2 = v5;
  byte_1C03342A3 = v4;
  byte_1C03342B7 = v6;
  byte_1C0334314 = v5;
  byte_1C0334315 = v4;
  byte_1C0334329 = v6;
  byte_1C0334386 = v5;
  byte_1C0334387 = v4;
  byte_1C033439B = v6;
}
