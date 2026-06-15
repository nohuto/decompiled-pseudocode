/*
 * XREFs of sub_180115D60 @ 0x180115D60
 * Callers:
 *     <none>
 * Callees:
 *     sub_180057300 @ 0x180057300 (sub_180057300.c)
 *     sub_1800D8AF8 @ 0x1800D8AF8 (sub_1800D8AF8.c)
 *     sub_180115BB8 @ 0x180115BB8 (sub_180115BB8.c)
 */

__int64 __fastcall sub_180115D60(__int64 a1, __int64 a2, int a3, __int64 a4)
{
  __int64 v6; // rbp
  HANDLE ProcessHeap; // rax
  unsigned int v8; // ebx
  char *v9; // rax
  void *v10; // rsi
  unsigned int v11; // ecx
  HANDLE v12; // rax
  __int64 v14; // [rsp+68h] [rbp+20h] BYREF

  v14 = 0LL;
  if ( (int)sub_1800D8AF8((_WORD *)(a4 + 24), 0xFFFFFFFEuLL, &v14) < 0 )
    return 13;
  v6 = (unsigned int)(v14 + 32);
  if ( (unsigned int)v6 < (unsigned int)v14 )
    return 13;
  ProcessHeap = GetProcessHeap();
  v8 = 8;
  v9 = (char *)HeapAlloc(ProcessHeap, 8u, (unsigned int)v6);
  v10 = v9;
  if ( v9 )
  {
    *((_DWORD *)v9 + 2) = 0;
    *(_DWORD *)v9 = v6;
    *((_DWORD *)v9 + 1) = 5;
    *(_OWORD *)(v9 + 12) = *(_OWORD *)(a4 + 8);
    if ( (int)sub_180057300((_WORD *)v9 + 14, v6 - 30, a4 + 24) < 0 )
    {
LABEL_5:
      v8 = 13;
LABEL_11:
      v12 = GetProcessHeap();
      HeapFree(v12, 0, v10);
      return v8;
    }
    if ( a3 )
    {
      if ( a3 != 1 )
        goto LABEL_5;
      v11 = 32772;
    }
    else
    {
      v11 = 0x8000;
    }
    v8 = sub_180115BB8(v11, (__int64)v10);
    goto LABEL_11;
  }
  return v8;
}
