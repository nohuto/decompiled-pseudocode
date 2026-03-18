/*
 * XREFs of ?_UpdateReportDescriptor@@YAXUtagRECT@@KK@Z @ 0x1C01DD6BC
 * Callers:
 *     CreatePseudoDigitizerDevice @ 0x1C01DD7C4 (CreatePseudoDigitizerDevice.c)
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

  byte_1C0333272 = a3;
  v3 = a3 >> 8;
  byte_1C03332E4 = a3;
  byte_1C0333356 = a3;
  byte_1C03333C8 = a3;
  v4 = (a1->right - a1->left) >> 8;
  v5 = LOBYTE(a1->right) - LOBYTE(a1->left);
  word_1C033326D = a2;
  word_1C03332DF = a2;
  word_1C0333351 = a2;
  word_1C03333C3 = a2;
  v6 = LOBYTE(a1->bottom) - LOBYTE(a1->top);
  byte_1C0333273 = v3;
  byte_1C03332E5 = v3;
  byte_1C0333357 = v3;
  byte_1C03333C9 = v3;
  v7 = a1->bottom - a1->top;
  byte_1C0333260 = v5;
  byte_1C0333276 = BYTE1(v7);
  byte_1C03332E8 = BYTE1(v7);
  byte_1C033335A = BYTE1(v7);
  byte_1C03333CC = BYTE1(v7);
  byte_1C0333261 = v4;
  byte_1C0333275 = v6;
  byte_1C03332D2 = v5;
  byte_1C03332D3 = v4;
  byte_1C03332E7 = v6;
  byte_1C0333344 = v5;
  byte_1C0333345 = v4;
  byte_1C0333359 = v6;
  byte_1C03333B6 = v5;
  byte_1C03333B7 = v4;
  byte_1C03333CB = v6;
}
