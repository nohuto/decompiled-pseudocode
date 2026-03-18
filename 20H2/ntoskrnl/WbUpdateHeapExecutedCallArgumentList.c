/*
 * XREFs of WbUpdateHeapExecutedCallArgumentList @ 0x14065FD0C
 * Callers:
 *     WbHeapExecuteCall @ 0x14065FA50 (WbHeapExecuteCall.c)
 * Callees:
 *     memmove @ 0x140411040 (memmove.c)
 *     ProbeForWrite @ 0x14060B790 (ProbeForWrite.c)
 */

__int64 __fastcall WbUpdateHeapExecutedCallArgumentList(
        __int64 a1,
        __int64 a2,
        __int64 *a3,
        _QWORD *a4,
        char *a5,
        unsigned int Size)
{
  unsigned int i; // edi
  __int64 v10; // rdx
  __int64 v11; // rax
  _QWORD *v12; // rdx

  if ( *(_QWORD *)(a1 + 296) )
    a4[3] = *(_QWORD *)(a2 + 32);
  for ( i = 0; i < (*(_DWORD *)(a1 + 324) >> 10) + 1; ++i )
    ProbeForWrite((volatile void *)(*a3 - (i << 10)), 8uLL, 1u);
  v10 = *a3;
  v11 = *a3 - 32;
  *a3 = v11;
  if ( (v11 & 0xF) != 0 )
    v12 = (_QWORD *)(v10 - 48);
  else
    v12 = (_QWORD *)(v10 - 40);
  *a3 = (__int64)v12;
  *v12 = a5 + 16;
  memmove(a5, a4, Size);
  return 0LL;
}
