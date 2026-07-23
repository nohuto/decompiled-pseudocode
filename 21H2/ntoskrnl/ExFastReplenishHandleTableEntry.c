/*
 * XREFs of ExFastReplenishHandleTableEntry @ 0x140247CF0
 * Callers:
 *     ObReferenceFileObjectForWrite @ 0x140645330 (ObReferenceFileObjectForWrite.c)
 *     ObWaitForMultipleObjects @ 0x1406EC520 (ObWaitForMultipleObjects.c)
 *     ObpReferenceObjectByHandleWithTag @ 0x140707FE0 (ObpReferenceObjectByHandleWithTag.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ExFastReplenishHandleTableEntry(volatile signed __int64 *a1, unsigned __int64 *a2, int a3)
{
  __int64 v4; // r11
  unsigned __int64 v5; // rdx
  unsigned __int64 v7; // r10
  __int64 v8; // rcx
  int v9; // eax
  int v10; // r8d
  unsigned __int64 v11; // rax
  __int128 v12; // rt0
  unsigned __int8 v13; // tt
  __int128 v15; // [rsp+0h] [rbp-18h]

  v4 = a3;
  v5 = *a2;
  v7 = v5 >> 20;
  do
  {
    v8 = v4 + (unsigned __int16)(v5 >> 1);
    v9 = v4 + (unsigned __int16)(v5 >> 1);
    v15 = *(_OWORD *)a2;
    if ( v8 > 0xFFFF )
      v9 = 0xFFFF;
    v10 = v8 - 0xFFFF;
    if ( v8 <= 0xFFFF )
      v10 = 0;
    *(_QWORD *)&v15 = ((unsigned int)*a2 ^ (2 * v9)) & 0x1FFFE ^ *a2;
    v12 = *(_OWORD *)a2;
    v13 = _InterlockedCompareExchange128(a1, *((signed __int64 *)&v15 + 1), v15, (signed __int64 *)&v12);
    v11 = v12;
    *(_OWORD *)a2 = v12;
    if ( v13 )
    {
      LODWORD(v4) = v10;
      return (unsigned int)v4;
    }
    v5 = v11;
  }
  while ( v11 >> 20 == v7 && (v11 & 1) != 0 );
  *(_OWORD *)a2 = v15;
  return (unsigned int)v4;
}
