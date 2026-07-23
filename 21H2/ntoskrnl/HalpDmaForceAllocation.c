/*
 * XREFs of HalpDmaForceAllocation @ 0x1404C7BB4
 * Callers:
 *     HalpDmaAllocateMapRegistersAtHighLevel @ 0x1404C6F2C (HalpDmaAllocateMapRegistersAtHighLevel.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall HalpDmaForceAllocation(__int64 a1, __int64 *a2, __int64 **a3, int a4, char a5, _DWORD *a6)
{
  __int64 *v6; // r10
  __int64 v8; // r11
  int v9; // r9d
  unsigned int v10; // ebx
  __int64 result; // rax
  unsigned int v12; // edi
  char i; // bp
  __int64 v14; // r14
  unsigned int v15; // r15d
  __int64 j; // rcx
  int v17; // eax
  __int64 v18; // rax

  v6 = *a3;
  if ( !*a3 )
  {
    if ( *((_DWORD *)a3 + 2) == -1 )
    {
      v8 = 0LL;
      v9 = 0;
      v10 = 0;
      goto LABEL_4;
    }
    *((_DWORD *)a3 + 2) = 0;
    v6 = a2;
    *a3 = a2;
  }
  v12 = *((_DWORD *)a3 + 2);
  v10 = 0;
  for ( i = 1; ; i = 0 )
  {
    v14 = 0LL;
    v8 = 0LL;
    v9 = 0;
    while ( v6 )
    {
      v15 = *((_DWORD *)v6 + 2);
      v10 = v12;
      for ( j = v6[2] + 72LL * v12; v10 < v15; ++v10 )
      {
        if ( (*(_QWORD *)(j + 48) & 0xFFFFFFFFFFFFF000uLL) != 0 )
        {
          if ( v8 )
            *(_QWORD *)(v14 + 8) = j;
          else
            v8 = j;
          ++v9;
          v14 = j;
          if ( v9 == a4 )
            goto LABEL_4;
        }
        else
        {
          v17 = 0;
          if ( !a5 )
            v17 = v9;
          v9 = v17;
          v18 = 0LL;
          if ( !a5 )
            v18 = v8;
          v8 = v18;
        }
        j += 72LL;
      }
      v6 = (__int64 *)*v6;
      v12 = 0;
    }
    if ( !a5 )
      break;
    if ( !i || *a3 == a2 && !*((_DWORD *)a3 + 2) )
    {
      *((_DWORD *)a3 + 2) = 0;
      result = 0LL;
      *a3 = a2;
      return result;
    }
    v12 = 0;
    v6 = a2;
  }
LABEL_4:
  *a3 = v6;
  *((_DWORD *)a3 + 2) = v10;
  if ( v6 )
    goto LABEL_7;
  if ( !a5 )
  {
    *((_DWORD *)a3 + 2) = -1;
LABEL_7:
    if ( !a5 )
      *a6 = v9;
  }
  return v8;
}
