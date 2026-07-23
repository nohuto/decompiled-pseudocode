/*
 * XREFs of IvmdFindDeviceEntry @ 0x1404E4E58
 * Callers:
 *     HsaProcessIvmd @ 0x1404E4308 (HsaProcessIvmd.c)
 * Callees:
 *     ExtEnvAllocateMemory @ 0x1404D5330 (ExtEnvAllocateMemory.c)
 */

_OWORD *__fastcall IvmdFindDeviceEntry(__int64 a1, __int16 a2)
{
  __int64 v2; // rbx
  _OWORD *result; // rax
  __int64 v6; // rcx
  __int64 *v7; // rax
  _OWORD *v8; // [rsp+30h] [rbp+8h] BYREF

  v8 = 0LL;
  v2 = a1 + 8;
  for ( result = *(_OWORD **)(a1 + 8); result != (_OWORD *)v2; result = *(_OWORD **)result )
  {
    v8 = result;
    if ( *((_WORD *)result + 8) == a2 )
      return result;
  }
  if ( (int)ExtEnvAllocateMemory(a1, 0x28u, (__int64 *)&v8) < 0 )
    return 0LL;
  v6 = (__int64)v8;
  *v8 = 0LL;
  *(_OWORD *)(v6 + 16) = 0LL;
  *(_QWORD *)(v6 + 32) = 0LL;
  *(_WORD *)(v6 + 16) = a2;
  *(_DWORD *)(v6 + 20) = 0;
  *(_QWORD *)(v6 + 32) = v6 + 24;
  *(_QWORD *)(v6 + 24) = v6 + 24;
  v7 = *(__int64 **)(v2 + 8);
  if ( *v7 != v2 )
    __fastfail(3u);
  *(_QWORD *)(v6 + 8) = v7;
  *(_QWORD *)v6 = v2;
  *v7 = v6;
  result = (_OWORD *)v6;
  *(_QWORD *)(v2 + 8) = v6;
  ++*(_DWORD *)a1;
  return result;
}
