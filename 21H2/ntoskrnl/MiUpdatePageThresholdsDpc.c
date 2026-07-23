/*
 * XREFs of MiUpdatePageThresholdsDpc @ 0x1403B6B40
 * Callers:
 *     <none>
 * Callees:
 *     KeYieldProcessorEx @ 0x1402EFAD0 (KeYieldProcessorEx.c)
 *     MiUpdateAvailableEvents @ 0x1403B6BB4 (MiUpdateAvailableEvents.c)
 */

__int64 __fastcall MiUpdatePageThresholdsDpc(__int64 a1, _QWORD *a2, volatile signed __int32 *a3, __int64 a4)
{
  signed __int32 v6; // eax
  unsigned int v7; // edi
  __int64 result; // rax
  __int64 v9; // rcx
  signed __int32 v10; // eax
  unsigned int v11; // edi
  int v12; // [rsp+48h] [rbp+10h] BYREF
  int i; // [rsp+58h] [rbp+20h] BYREF

  v12 = 0;
  v6 = _InterlockedDecrement((volatile signed __int32 *)a4);
  v7 = ~v6 & 0x80000000;
  if ( (v6 & 0x7FFFFFFF) != 0 )
  {
    while ( (*(_DWORD *)a4 & 0x80000000) != v7 )
      KeYieldProcessorEx(&v12, (__int64)a2, (__int64)a3, a4);
  }
  else
  {
    *(_DWORD *)a4 = v7 | *(_DWORD *)(a4 + 4);
    v9 = a2[2];
    *(_QWORD *)(v9 + 5168) = *a2;
    *(_QWORD *)(v9 + 5176) = a2[1];
    MiUpdateAvailableEvents(v9);
  }
  v10 = _InterlockedDecrement((volatile signed __int32 *)a4);
  v11 = ~v10 & 0x80000000;
  if ( (v10 & 0x7FFFFFFF) != 0 )
  {
    for ( i = 0; ; KeYieldProcessorEx(&i, (__int64)a2, (__int64)a3, a4) )
    {
      result = *(_DWORD *)a4 & 0x80000000;
      if ( (_DWORD)result == v11 )
        break;
    }
  }
  else
  {
    result = v11 | *(_DWORD *)(a4 + 4);
    *(_DWORD *)a4 = result;
  }
  _InterlockedDecrement(a3);
  return result;
}
