/*
 * XREFs of DrvDbGetDriverDatabaseList @ 0x140630F84
 * Callers:
 *     DrvDbDispatchDriverDatabase @ 0x140630C80 (DrvDbDispatchDriverDatabase.c)
 * Callees:
 *     RtlStringCchCopyExW @ 0x140253448 (RtlStringCchCopyExW.c)
 *     _guard_dispatch_icall @ 0x140408790 (_guard_dispatch_icall.c)
 */

__int64 __fastcall DrvDbGetDriverDatabaseList(
        _QWORD *a1,
        unsigned __int8 (__fastcall *a2)(_QWORD, __int64, __int64, __int64),
        __int64 a3,
        _WORD *a4,
        unsigned int a5,
        unsigned int *a6)
{
  unsigned int v6; // ebx
  unsigned __int8 (__fastcall *v8)(_QWORD, __int64, __int64, __int64); // r10
  int v9; // r13d
  unsigned int v10; // eax
  __int64 **v11; // r15
  __int64 **v12; // rdi
  int v13; // eax
  int v14; // r12d
  unsigned int v15; // eax
  _QWORD *v17; // [rsp+70h] [rbp+8h]
  __int64 v19; // [rsp+80h] [rbp+18h]

  v19 = a3;
  v17 = a1;
  v6 = 0;
  v8 = a2;
  v9 = 0;
  v10 = 0;
  *a6 = 0;
  if ( a4 && a5 )
  {
    *a4 = 0;
    v10 = *a6;
  }
  v11 = (__int64 **)(a1 + 2);
  v12 = (__int64 **)a1[2];
  if ( v12 != a1 + 2 )
  {
    do
    {
      if ( !v8 || v8(*a1, (__int64)v12[3], 7LL, a3) )
      {
        v13 = (*((unsigned __int16 *)v12 + 8) >> 1) + 1;
        *a6 += v13;
        if ( a4 )
        {
          v14 = v13 + v9;
          if ( v13 + v9 < a5 )
          {
            RtlStringCchCopyExW(&a4[v9], a5 - v9, (NTSTRSAFE_PCWSTR)v12[3], 0LL, 0LL, 0x900u);
            v9 = v14;
          }
        }
      }
      v12 = (__int64 **)*v12;
      v8 = a2;
      a1 = v17;
      a3 = v19;
    }
    while ( v12 != v11 );
    v10 = *a6;
  }
  v15 = v10 + 1;
  *a6 = v15;
  if ( a4 && v15 <= a5 )
    a4[v15 - 1] = 0;
  else
    return (unsigned int)-1073741789;
  return v6;
}
