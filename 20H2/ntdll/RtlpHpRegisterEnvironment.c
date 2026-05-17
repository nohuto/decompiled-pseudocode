/*
 * XREFs of RtlpHpRegisterEnvironment @ 0x180007C08
 * Callers:
 *     RtlpHpHeapDestroy @ 0x1800048E4 (RtlpHpHeapDestroy.c)
 *     RtlpHpHeapCreate @ 0x18000821C (RtlpHpHeapCreate.c)
 * Callees:
 *     RtlpHpVaMgrCtxAllocatorDereference @ 0x180004754 (RtlpHpVaMgrCtxAllocatorDereference.c)
 *     RtlpHpVaMgrCtxAllocatorReference @ 0x180007CDC (RtlpHpVaMgrCtxAllocatorReference.c)
 */

__int64 __fastcall RtlpHpRegisterEnvironment(__int128 *a1, int a2)
{
  __int128 v2; // xmm0
  unsigned int v3; // ebx
  __int64 v5; // r8
  int v6; // eax
  __int128 v8; // [rsp+20h] [rbp-30h]
  unsigned int v9[3]; // [rsp+30h] [rbp-20h] BYREF
  int v10; // [rsp+3Ch] [rbp-14h]
  __int64 v11; // [rsp+40h] [rbp-10h]

  v2 = *a1;
  v3 = 0;
  v10 = 0;
  v8 = v2;
  if ( BYTE3(v2) )
    v9[0] = BYTE3(v2) - 1;
  else
    v9[0] = -1;
  v9[2] = BYTE2(v2);
  v9[1] = BYTE1(v2);
  if ( (v2 & 8) != 0 )
    v10 = 1;
  v11 = *((_QWORD *)&v2 + 1);
  if ( a2 )
  {
    v5 = 0x40000000LL;
    if ( BYTE1(v2) != 3 )
      v5 = 0x200000LL;
    v6 = RtlpHpVaMgrCtxAllocatorReference(&unk_18016DC98, v9, v5);
    if ( v6 == -1 )
    {
      return (unsigned int)-1073741670;
    }
    else
    {
      BYTE3(v8) = v6 + 1;
      *a1 = v8;
    }
  }
  else
  {
    RtlpHpVaMgrCtxAllocatorDereference((__int64)&unk_18016DC98, v9);
  }
  return v3;
}
