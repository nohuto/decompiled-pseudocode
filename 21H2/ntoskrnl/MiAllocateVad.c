/*
 * XREFs of MiAllocateVad @ 0x1406C04D8
 * Callers:
 *     MiFreeVadRange @ 0x140323314 (MiFreeVadRange.c)
 *     MiAllocateProcessVads @ 0x1406C0430 (MiAllocateProcessVads.c)
 *     MiCreatePlaceholderStorage @ 0x1408D8438 (MiCreatePlaceholderStorage.c)
 * Callees:
 *     MiAllocatePool @ 0x14027C2E0 (MiAllocatePool.c)
 *     MiAddSecureEntry @ 0x140689430 (MiAddSecureEntry.c)
 *     ExFreePoolWithTag @ 0x1409B5010 (ExFreePoolWithTag.c)
 */

__int64 __fastcall MiAllocateVad(unsigned __int64 a1, unsigned __int64 a2, char a3)
{
  _DWORD *Pool; // rax
  __int64 v7; // rbx
  int v8; // edx
  unsigned int v9; // edx
  unsigned __int64 v10; // r8
  int v11; // eax

  Pool = MiAllocatePool(64, 0x40uLL, 0x53646156u);
  v7 = (__int64)Pool;
  if ( Pool )
  {
    v8 = Pool[12];
    *((_QWORD *)Pool + 5) = 0LL;
    Pool[6] = a1 >> 12;
    v9 = v8 & 0xFFFFF07F | 0x80;
    *((_BYTE *)Pool + 32) = a1 >> 44;
    *((_QWORD *)Pool + 2) = -2LL;
    Pool[7] = a2 >> 12;
    *((_BYTE *)Pool + 33) = a2 >> 44;
    if ( (a3 & 1) != 0 )
    {
      v10 = ((unsigned int)(a2 >> 12) | ((unsigned __int64)(unsigned __int8)(a2 >> 44) << 32))
          - ((unsigned int)(a1 >> 12) | ((unsigned __int64)(unsigned __int8)(a1 >> 44) << 32))
          + 1;
      Pool[13] |= 0x80000000;
    }
    else if ( (a3 & 2) != 0 )
    {
      v10 = 0x7FFFFFFFDLL;
      v9 = v9 & 0xFFFFF07F | 0xC00;
    }
    else
    {
      v10 = 0x7FFFFFFFFLL;
    }
    v11 = v10 ^ Pool[13];
    *(_DWORD *)(v7 + 48) = v9 | 0x100000;
    *(_DWORD *)(v7 + 52) ^= v11 & 0x7FFFFFFF;
    *(_BYTE *)(v7 + 34) = v10 >> 31;
    if ( (a3 & 2) != 0 || MiAddSecureEntry(v7, a1, a2, -2147483647, 0) )
      return v7;
    ExFreePoolWithTag((PVOID)v7, 0);
  }
  return 0LL;
}
