/*
 * XREFs of _AddBGRMapCache @ 0x1BCA75
 * Callers:
 *     _CreateDyesColorMappingTable @ 0x1BE5CD (_CreateDyesColorMappingTable.c)
 * Callees:
 *     _memcpy @ 0xF929B (_memcpy.c)
 *     _ULongAdd @ 0x1BAE44 (_ULongAdd.c)
 *     _TrimBGRMapCache @ 0x1BEA53 (_TrimBGRMapCache.c)
 */

int __fastcall AddBGRMapCache(int a1, int a2)
{
  int v2; // ebx
  int v3; // edi
  int v4; // esi
  PVOID v5; // ebx
  PVOID v6; // edi
  char *v7; // edx
  int v8; // eax
  unsigned int v12; // [esp+14h] [ebp-4h] BYREF

  v2 = a2;
  v3 = a1;
  v4 = 1;
  EngAcquireSemaphore(dword_27430C);
  if ( dword_27431C > 5 && dword_274324 )
    TrimBGRMapCache();
  if ( dword_27431C >= dword_274320 )
  {
    v12 = dword_274320;
    if ( (ULongAdd(dword_274320, 10, (int *)&v12) & 0x80000000) == 0 && is_mul_ok(0xCu, v12) )
    {
      v5 = EngAllocMem(1u, 12 * v12, 0x30365448u);
      if ( v5 )
      {
        v6 = Src;
        if ( Src )
        {
          memcpy(v5, Src, 12 * dword_27431C);
          EngFreeMem(v6);
        }
        v3 = a1;
        Src = v5;
        dword_274320 = v12;
      }
      v2 = a2;
    }
  }
  v7 = (char *)Src;
  if ( Src && dword_27431C < dword_274320 )
  {
    v8 = 12 * dword_27431C++;
    *(_DWORD *)((char *)Src + v8) = v3;
    *(_DWORD *)&v7[v8 + 8] = v2;
    *(_DWORD *)&v7[v8 + 4] = 1;
  }
  else
  {
    v4 = 0;
  }
  EngReleaseSemaphore(dword_27430C);
  return v4;
}
