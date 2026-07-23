/*
 * XREFs of MiMakeIoRangePermanentDpc @ 0x1405370D0
 * Callers:
 *     <none>
 * Callees:
 *     KeYieldProcessorEx @ 0x1402EFAD0 (KeYieldProcessorEx.c)
 *     MiMakeIoRangePermanent @ 0x140536DF8 (MiMakeIoRangePermanent.c)
 */

__int64 __fastcall MiMakeIoRangePermanentDpc(__int64 a1, __int64 a2, volatile signed __int32 *a3, __int64 a4)
{
  signed __int32 v6; // eax
  unsigned int v7; // edi
  signed __int32 v8; // eax
  unsigned int v9; // edi
  __int64 result; // rax
  int v11; // [rsp+48h] [rbp+10h] BYREF
  int i; // [rsp+58h] [rbp+20h] BYREF

  v11 = 0;
  v6 = _InterlockedDecrement((volatile signed __int32 *)a4);
  v7 = ~v6 & 0x80000000;
  if ( (v6 & 0x7FFFFFFF) != 0 )
  {
    while ( (*(_DWORD *)a4 & 0x80000000) != v7 )
      KeYieldProcessorEx(&v11, a2, (__int64)a3, a4);
  }
  else
  {
    *(_DWORD *)a4 = v7 | *(_DWORD *)(a4 + 4);
    *(_DWORD *)(a2 + 8) = MiMakeIoRangePermanent(*(_QWORD *)a2);
  }
  v8 = _InterlockedDecrement((volatile signed __int32 *)a4);
  v9 = ~v8 & 0x80000000;
  if ( (v8 & 0x7FFFFFFF) != 0 )
  {
    for ( i = 0; ; KeYieldProcessorEx(&i, a2, (__int64)a3, a4) )
    {
      result = *(_DWORD *)a4 & 0x80000000;
      if ( (_DWORD)result == v9 )
        break;
    }
  }
  else
  {
    result = v9 | *(_DWORD *)(a4 + 4);
    *(_DWORD *)a4 = result;
  }
  _InterlockedDecrement(a3);
  return result;
}
