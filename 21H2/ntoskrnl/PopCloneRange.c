/*
 * XREFs of PopCloneRange @ 0x140997A18
 * Callers:
 *     PopSetRange @ 0x140388350 (PopSetRange.c)
 * Callees:
 *     RtlSetBits @ 0x140363CC0 (RtlSetBits.c)
 *     ExFreePoolWithTag @ 0x1409B5010 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1409B5160 (ExAllocatePoolWithTag.c)
 */

_QWORD *__fastcall PopCloneRange(__int64 a1, unsigned __int64 a2, __int64 a3, int a4)
{
  unsigned __int64 v7; // rsi
  _QWORD *v8; // rdi
  _QWORD *v9; // rbx
  unsigned __int64 v10; // r14
  _QWORD *v11; // rcx
  unsigned __int64 v12; // rax
  _QWORD *result; // rax
  unsigned __int64 v14; // rax
  __int64 v15; // rdx
  _QWORD *v16; // rax

  v7 = a2;
  RtlSetBits((PRTL_BITMAP)(a1 + 32), a2, a3);
  v8 = 0LL;
  v9 = *(_QWORD **)(a1 + 64);
  v10 = v7 + a3;
  if ( v9 == (_QWORD *)(a1 + 64) )
    goto LABEL_13;
  while ( 1 )
  {
    v11 = v9;
    v9 = (_QWORD *)*v9;
    v12 = v11[3];
    if ( (v7 < v12 || v7 > v11[4]) && (v10 < v12 || v10 > v11[4]) )
    {
      if ( v7 > v12 )
        goto LABEL_7;
      if ( v12 > v10 )
        break;
    }
    if ( v7 <= v12 )
      v12 = v7;
    v7 = v12;
    v14 = v11[4];
    if ( v10 >= v14 )
      v14 = v10;
    --*(_DWORD *)(a1 + 80);
    v15 = *v11;
    v10 = v14;
    if ( *(_QWORD **)(*v11 + 8LL) != v11 )
      goto LABEL_25;
    v16 = (_QWORD *)v11[1];
    if ( (_QWORD *)*v16 != v11 )
      goto LABEL_25;
    *v16 = v15;
    *(_QWORD *)(v15 + 8) = v16;
    if ( v8 )
      ExFreePoolWithTag(v11, 0x70616D48u);
    else
      v8 = v11;
LABEL_7:
    if ( v9 == (_QWORD *)(a1 + 64) )
      goto LABEL_12;
  }
  if ( v7 >= v12 )
    goto LABEL_7;
  v9 = (_QWORD *)v9[1];
LABEL_12:
  if ( v8 )
  {
LABEL_14:
    *v8 = 0LL;
    v8[1] = 0LL;
    *((_DWORD *)v8 + 5) = 0;
    v8[5] = 0LL;
    *((_DWORD *)v8 + 4) = a4;
    v8[3] = v7;
    v8[4] = v10;
    result = (_QWORD *)v9[1];
    if ( (_QWORD *)*result != v9 )
LABEL_25:
      __fastfail(3u);
    *v8 = v9;
    v8[1] = result;
    *result = v8;
    v9[1] = v8;
    ++*(_DWORD *)(a1 + 80);
  }
  else
  {
LABEL_13:
    result = ExAllocatePoolWithTag(NonPagedPoolNx, 0x30uLL, 0x70616D48u);
    v8 = result;
    if ( result )
      goto LABEL_14;
    if ( *(int *)(a1 + 188) >= 0 )
      *(_DWORD *)(a1 + 188) = -1073741670;
  }
  return result;
}
