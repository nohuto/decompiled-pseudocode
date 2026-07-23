/*
 * XREFs of AslpFileGetCrcChecksum @ 0x14096B0EC
 * Callers:
 *     AslpFileGetChecksumAttributes @ 0x14096ABD4 (AslpFileGetChecksumAttributes.c)
 * Callees:
 *     AslLogCallPrintf @ 0x140756124 (AslLogCallPrintf.c)
 *     AslComputeCrc32 @ 0x140967CB8 (AslComputeCrc32.c)
 */

__int64 __fastcall AslpFileGetCrcChecksum(_DWORD *a1, __int64 a2)
{
  unsigned __int64 v3; // rax
  int v4; // ecx
  unsigned int v5; // r8d
  _BYTE *v6; // rdx
  _BYTE *v7; // rdx
  _BYTE *v8; // rbx

  v3 = *(_QWORD *)(a2 + 16);
  v4 = 0;
  if ( v3 >= 0x2000 )
  {
    v7 = *(_BYTE **)(a2 + 24);
    v8 = &v7[v3];
    v4 = AslComputeCrc32(0, v7, 0x1000u);
    v6 = v8 - 4096;
  }
  else
  {
    v5 = *(_DWORD *)(a2 + 32);
    v6 = *(_BYTE **)(a2 + 24);
  }
  *a1 = AslComputeCrc32(v4, v6, v5);
  return 0LL;
}
