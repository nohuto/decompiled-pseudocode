/*
 * XREFs of _RtlInitializeExtendedContext2@20 @ 0x4B35B8A0
 * Callers:
 *     _RtlInitializeExtendedContext@12 @ 0x4B35BA20 (_RtlInitializeExtendedContext@12.c)
 * Callees:
 *     _memset @ 0x4B2F8F30 (_memset.c)
 *     _RtlpGetEntireXStateAreaLength@8 @ 0x4B35C44C (_RtlpGetEntireXStateAreaLength@8.c)
 *     _RtlpValidateContextFlags@8 @ 0x4B35C543 (_RtlpValidateContextFlags@8.c)
 */

int __stdcall RtlInitializeExtendedContext2(int a1, int a2, _DWORD *a3, int a4, unsigned int a5)
{
  _DWORD *v5; // esi
  int result; // eax
  _DWORD *v7; // eax
  unsigned int v8; // eax
  _DWORD *v9; // eax
  _DWORD *v10; // eax
  int v11; // ecx
  int v12; // edx
  unsigned int v13; // ebx
  size_t v14; // ecx
  int v15; // edi
  size_t v16; // [esp+8h] [ebp-8h]
  int v17; // [esp+Ch] [ebp-4h] BYREF

  v5 = 0;
  result = RtlpValidateContextFlags(a2, &v17);
  if ( result >= 0 )
  {
    if ( (a2 & 0x10000) != 0 )
    {
      v7 = (_DWORD *)((a1 + 3) & 0xFFFFFFFC);
      v5 = v7 + 179;
      *v7 = a2;
      v7[182] = 716;
    }
    else if ( (a2 & 0x100000) != 0 )
    {
      v8 = (a1 + 15) & 0xFFFFFFF0;
      v5 = (_DWORD *)(v8 + 1232);
      *(_DWORD *)(v8 + 48) = a2;
      *(_DWORD *)(v8 + 1244) = 1232;
    }
    else if ( (a2 & 0x200000) != 0 )
    {
      v9 = (_DWORD *)((a1 + 7) & 0xFFFFFFF8);
      v5 = v9 + 104;
      *v9 = a2;
      v9[107] = 416;
    }
    else if ( (a2 & 0x400000) != 0 )
    {
      v10 = (_DWORD *)((a1 + 15) & 0xFFFFFFF0);
      v5 = v10 + 228;
      *v10 = a2;
      v10[231] = 912;
    }
    v11 = v5[3];
    v5[2] = -v11;
    *v5 = -v11;
    v5[1] = v11 + 24;
    if ( (a2 & 0x10020) != 65568 && (a2 & 0x10000) != 0 )
      v5[3] = 204;
    if ( (v17 & 2) != 0 )
    {
      v12 = a4;
      v13 = a5;
      if ( (MEMORY[0x7FFE03EC] & 2) != 0 )
      {
        v12 = (MEMORY[0x7FFE0708] | MEMORY[0x7FFE03D8]) & a4;
        v13 = (MEMORY[0x7FFE070C] | MEMORY[0x7FFE03DC] | 0x80000000) & a5;
      }
      v17 = v12;
      v16 = RtlpGetEntireXStateAreaLength(v12, v13) - 512;
      memset((void *)(((unsigned int)v5 + 87) & 0xFFFFFFC0), 0, v16);
      if ( (MEMORY[0x7FFE03EC] & 2) != 0 )
      {
        *(_DWORD *)((((unsigned int)v5 + 87) & 0xFFFFFFC0) + 8) = v17;
        *(_DWORD *)((((unsigned int)v5 + 87) & 0xFFFFFFC0) + 0xC) = v13 | 0x80000000;
      }
      v14 = v16;
      v15 = (((unsigned int)v5 + 87) & 0xFFFFFFC0) - (_DWORD)v5;
      v5[1] = v16 + v15 - *v5;
    }
    else
    {
      v14 = 0;
      v15 = 25;
    }
    v5[4] = v15;
    v5[5] = v14;
    *a3 = v5;
    return 0;
  }
  return result;
}
