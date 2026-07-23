/*
 * XREFs of HalpInterruptCreateGdtEntry32 @ 0x1403A1918
 * Callers:
 *     HalpInterruptBuildStartupStub @ 0x1403A16D0 (HalpInterruptBuildStartupStub.c)
 * Callees:
 *     <none>
 */

int __fastcall HalpInterruptCreateGdtEntry32(__int64 a1, int a2, __int64 a3, unsigned int a4, __int16 a5, char a6)
{
  __int64 v6; // r8
  int v8; // ecx
  unsigned int v9; // ecx
  int result; // eax

  v6 = a2 & 0xFFFFFFF0;
  *(_QWORD *)(v6 + a1) = 0LL;
  v8 = *(_DWORD *)(v6 + a1 + 4);
  if ( a4 > 0xFFFFF )
  {
    a4 >>= 12;
    v8 |= 0x800000u;
  }
  *(_WORD *)(v6 + a1) = a4;
  *(_DWORD *)(v6 + a1 + 4) = v8 ^ (a4 ^ v8) & 0xF0000;
  *(_BYTE *)(v6 + a1 + 4) = 0;
  *(_BYTE *)(v6 + a1 + 7) = 0;
  v9 = *(_DWORD *)(v6 + a1 + 4) & 0xFFFF1FFF | 0x8000;
  if ( !a6 )
    v9 = *(_DWORD *)(v6 + a1 + 4) & 0xFFBF1FFF | 0x408000;
  result = v9 ^ ((unsigned __int16)v9 ^ (unsigned __int16)(a5 << 8)) & 0x1F00;
  *(_DWORD *)(v6 + a1 + 4) = result;
  if ( a6 )
  {
    result |= 0x200000u;
    *(_DWORD *)(v6 + a1 + 4) = result;
  }
  return result;
}
