/*
 * XREFs of sub_180044AA4 @ 0x180044AA4
 * Callers:
 *     sub_180044A90 @ 0x180044A90 (sub_180044A90.c)
 *     sub_1800E8660 @ 0x1800E8660 (sub_1800E8660.c)
 *     sub_1800E8680 @ 0x1800E8680 (sub_1800E8680.c)
 * Callees:
 *     sub_1800E75B4 @ 0x1800E75B4 (sub_1800E75B4.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall sub_180044AA4(__int64 a1, __int64 a2, int a3)
{
  __int64 v3; // rdi
  struct _RTL_CRITICAL_SECTION *v6; // rbx
  int *i; // rax
  __int64 j; // rdi
  __int64 v9; // r15
  __int64 k; // rsi
  __int64 v12; // [rsp+50h] [rbp+8h] BYREF
  int v13; // [rsp+60h] [rbp+18h] BYREF
  char v14; // [rsp+64h] [rbp+1Ch] BYREF
  struct _RTL_CRITICAL_SECTION *v15; // [rsp+68h] [rbp+20h]

  v3 = a3;
  v6 = (struct _RTL_CRITICAL_SECTION *)(a1 + 24);
  EnterCriticalSection((LPCRITICAL_SECTION)(a1 + 24));
  v15 = v6;
  v13 = 0;
  if ( (int)v3 < 4 )
  {
    *((_BYTE *)&v13 + v3) = 1;
  }
  else
  {
    for ( i = &v13; i != (int *)&v14; i = (int *)((char *)i + 1) )
      *(_BYTE *)i = 1;
  }
  for ( j = 0LL; (unsigned int)j < 4; j = (unsigned int)(j + 1) )
  {
    if ( *((_BYTE *)&v13 + j) )
    {
      v12 = a2;
      v9 = *(_QWORD *)(a1 + 24 * j + 96);
      for ( k = *(_QWORD *)(a1 + 24 * j + 88); k != v9; k += 8LL )
        sub_1800E75B4(&v12, k);
    }
  }
  if ( v6 )
    LeaveCriticalSection(v6);
  return 0LL;
}
