/*
 * XREFs of sub_180071AF0 @ 0x180071AF0
 * Callers:
 *     sub_180071664 @ 0x180071664 (sub_180071664.c)
 * Callees:
 *     memset @ 0x18004683A (memset.c)
 *     sub_180063CBC @ 0x180063CBC (sub_180063CBC.c)
 *     sub_180071894 @ 0x180071894 (sub_180071894.c)
 */

__int64 __fastcall sub_180071AF0(__int64 a1, __int64 a2, unsigned __int64 a3, int a4, __int64 a5)
{
  int v9; // ebx
  unsigned int v10; // r9d
  __int64 result; // rax
  ULONG v12; // eax
  int v13; // r10d
  unsigned __int64 v14; // r15
  int *v15; // r8
  int v16; // edx
  __int64 v17; // r8
  __int64 v18; // r11

  memset(*(void **)(a2 + 8), 0, 24LL * *(unsigned int *)(a2 + 32));
  v9 = 1;
  if ( a4 == 1 )
  {
    v10 = 0;
  }
  else
  {
    v12 = sub_180071894(a2);
    v10 = -1;
    if ( 5 * (unsigned __int64)v12 <= 0xFFFFFFFF )
      v10 = 5 * v12;
    v13 = 0;
    v14 = 0LL;
    if ( *(_DWORD *)(a2 + 36) )
    {
      v15 = (int *)(*(_QWORD *)a2 + 56LL);
      v16 = *(_DWORD *)(*(_QWORD *)(a1 + 24) + 520LL);
      do
      {
        v14 += *((_QWORD *)v15 - 2);
        if ( (int)sub_180063CBC(*v15, v16) < 0 && *(char *)(*(_QWORD *)(v17 - 8) + 1162LL) < 0 )
          ++v13;
        v15 = (int *)(v17 + 64);
      }
      while ( v18 != 1 );
    }
    if ( v10 < *(_DWORD *)(a1 + 196) && v13 )
    {
      v9 = 0;
      goto LABEL_4;
    }
    if ( v14 >= a3 )
    {
      a4 = 0;
      goto LABEL_4;
    }
  }
  v9 = 2;
LABEL_4:
  *(_DWORD *)(a5 + 20) = 0;
  *(_QWORD *)a5 = a2;
  *(_DWORD *)(a5 + 8) = a4;
  *(_DWORD *)(a5 + 12) = v9;
  *(_DWORD *)(a5 + 16) = v10;
  result = *(_QWORD *)(a1 + 24);
  *(_BYTE *)(a5 + 20) = *(_BYTE *)(result + 512);
  return result;
}
