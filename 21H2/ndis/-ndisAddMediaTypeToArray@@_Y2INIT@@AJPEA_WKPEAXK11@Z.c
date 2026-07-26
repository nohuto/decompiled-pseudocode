/*
 * XREFs of ?ndisAddMediaTypeToArray@@_Y2INIT@@AJPEA_WKPEAXK11@Z @ 0x1C0147200
 * Callers:
 *     <none>
 * Callees:
 *     memmove @ 0x1C0040100 (memmove.c)
 */

__int64 __fastcall ndisAddMediaTypeToArray(wchar_t *a1, int a2, int *a3)
{
  int v4; // ecx
  _DWORD *v5; // rax
  PVOID PoolWithTag; // rax
  void *v7; // rdi
  PVOID v8; // rsi
  unsigned int v9; // r8d
  int v10; // ecx

  if ( a2 == 4 && a3 && (unsigned int)*a3 > 0x11 )
  {
    v4 = ndisMediumArraySize;
    v5 = ndisMediumArray;
    if ( (_DWORD)ndisMediumArraySize )
    {
      while ( *a3 != *v5 )
      {
        ++v5;
        v4 -= 4;
        if ( !v4 )
          goto LABEL_7;
      }
    }
    else
    {
LABEL_7:
      if ( (_DWORD)ndisMediumArraySize == 96 )
      {
        PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, 0x70uLL, 0x746D444Eu);
        v7 = PoolWithTag;
        if ( PoolWithTag )
        {
          v8 = ndisMediumArray;
          memmove(PoolWithTag, ndisMediumArray, (unsigned int)ndisMediumArraySize);
          if ( v8 != &ndisMediumBuffer )
            ExFreePoolWithTag(v8, 0);
          ndisMediumArray = v7;
        }
      }
      v9 = ndisMediumArraySize;
      if ( (unsigned int)ndisMediumArraySize < 0x60 )
      {
        v10 = *a3;
        LODWORD(ndisMediumArraySize) = ndisMediumArraySize + 4;
        *((_DWORD *)ndisMediumArray + ((unsigned __int64)v9 >> 2)) = v10;
      }
    }
  }
  return 0LL;
}
