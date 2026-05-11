/*
 * XREFs of USBParseMIDIElement @ 0x1C0030280
 * Callers:
 *     <none>
 * Callees:
 *     BusApiBuildFunctionUnit @ 0x1C002AFD4 (BusApiBuildFunctionUnit.c)
 *     USBParseGetUnitString @ 0x1C002F1F4 (USBParseGetUnitString.c)
 */

__int64 __fastcall USBParseMIDIElement(__int64 a1, __int64 a2, unsigned __int8 *a3)
{
  __int64 v3; // rax
  int v4; // ebp
  unsigned __int8 *v8; // r9
  int v9; // r8d
  int UnitString; // edi
  int v11; // r14d
  int *PoolWithTag; // rax
  int *v13; // rsi
  unsigned int v14; // ecx
  __int64 v15; // r8
  unsigned int v16; // edx
  PCWSTR SourceString; // [rsp+90h] [rbp+18h] BYREF
  __int64 v19; // [rsp+98h] [rbp+20h] BYREF

  v3 = a3[4];
  v4 = 0;
  SourceString = 0LL;
  v8 = &a3[2 * v3];
  v9 = v8[8];
  if ( v8[8] )
  {
    do
    {
      v4 = v8[v9 * v8[8] + 8] | (v4 << 8);
      --v9;
    }
    while ( v9 );
  }
  UnitString = USBParseGetUnitString(a1, a3, &SourceString);
  if ( UnitString >= 0 )
  {
    UnitString = -1073741670;
    v11 = *(unsigned __int8 *)(a2 + 2) << 8;
    PoolWithTag = (int *)ExAllocatePoolWithTag(PagedPool, 4LL * a3[4], 0x41627845u);
    v13 = PoolWithTag;
    if ( PoolWithTag )
    {
      LOBYTE(v14) = a3[4];
      v15 = 0LL;
      if ( (_BYTE)v14 )
      {
        do
        {
          PoolWithTag[v15] = v11 | a3[2 * v15 + 5];
          v15 = (unsigned int)(v15 + 1);
          v14 = a3[4];
        }
        while ( (unsigned int)v15 < v14 );
      }
      v16 = a3[3];
      v19 = 0LL;
      UnitString = BusApiBuildFunctionUnit(
                     a1,
                     v11 | v16,
                     8,
                     0,
                     0,
                     (unsigned __int8)v14,
                     PoolWithTag,
                     SourceString,
                     0,
                     &v19);
      if ( UnitString >= 0 && v19 )
        *(_DWORD *)(v19 + 64) = v4;
      ExFreePool(v13);
    }
  }
  return (unsigned int)UnitString;
}
