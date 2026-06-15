/*
 * XREFs of sub_1800320B0 @ 0x1800320B0
 * Callers:
 *     sub_18002EE80 @ 0x18002EE80 (sub_18002EE80.c)
 * Callees:
 *     sub_180032170 @ 0x180032170 (sub_180032170.c)
 */

__int64 __fastcall sub_1800320B0(__int64 *a1, __int64 a2, unsigned int *a3)
{
  __int64 *v3; // rdi
  int v6; // esi
  __int64 *v7; // rbx
  __int64 *v8; // rax
  HANDLE ProcessHeap; // rax
  _DWORD *v10; // rax
  unsigned int v12; // ecx
  __int64 v13; // [rsp+50h] [rbp+8h] BYREF

  v3 = (__int64 *)*a1;
  v6 = (int)a1;
  v7 = (__int64 *)*a1;
  v8 = *(__int64 **)(*a1 + 8);
  if ( *((_BYTE *)v8 + 25) )
    goto LABEL_2;
  v12 = *a3;
  do
  {
    if ( *((_DWORD *)v8 + 7) >= v12 )
    {
      v7 = v8;
      v8 = (__int64 *)*v8;
    }
    else
    {
      v8 = (__int64 *)v8[2];
    }
  }
  while ( !*((_BYTE *)v8 + 25) );
  if ( v7 == v3 || v12 < *((_DWORD *)v7 + 7) )
  {
LABEL_2:
    ProcessHeap = GetProcessHeap();
    v10 = HeapAlloc(ProcessHeap, 0, 0x28uLL);
    v10[7] = *a3;
    v10[8] = 0;
    *(_QWORD *)v10 = v3;
    *((_QWORD *)v10 + 1) = v3;
    *((_QWORD *)v10 + 2) = v3;
    *((_WORD *)v10 + 12) = 0;
    sub_180032170(v6, (unsigned int)&v13, (_DWORD)v7, (_DWORD)v10 + 28, (__int64)v10);
    *(_QWORD *)a2 = v13;
    *(_BYTE *)(a2 + 8) = 1;
  }
  else
  {
    *(_QWORD *)a2 = v7;
    *(_BYTE *)(a2 + 8) = 0;
  }
  return a2;
}
