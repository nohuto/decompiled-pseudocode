/*
 * XREFs of USBParseMIDIElement @ 0x1C00313E0
 * Callers:
 *     <none>
 * Callees:
 *     Feature_853910841__private_IsEnabledDeviceUsage @ 0x1C0004418 (Feature_853910841__private_IsEnabledDeviceUsage.c)
 *     Feature_3805127995__private_IsEnabledDeviceUsage @ 0x1C00044C0 (Feature_3805127995__private_IsEnabledDeviceUsage.c)
 *     BusApiBuildFunctionUnit @ 0x1C002B504 (BusApiBuildFunctionUnit.c)
 *     USBParseGetUnitString @ 0x1C002FD24 (USBParseGetUnitString.c)
 */

__int64 __fastcall USBParseMIDIElement(__int64 a1, __int64 a2, unsigned __int8 *a3)
{
  __int64 v6; // rax
  unsigned __int64 v7; // rdi
  __int64 v8; // rdx
  unsigned __int64 v9; // rax
  int v10; // ebp
  unsigned __int8 *v11; // rsi
  __int64 v12; // rcx
  __int64 v13; // rdx
  unsigned __int64 v14; // r8
  unsigned __int64 v15; // rax
  int v16; // edx
  int UnitString; // edi
  int v18; // r14d
  int *PoolWithTag; // rax
  int *v20; // rsi
  unsigned int v21; // ecx
  __int64 v22; // r8
  unsigned int v23; // edx
  PCWSTR SourceString; // [rsp+80h] [rbp+8h] BYREF
  __int64 v26; // [rsp+90h] [rbp+18h] BYREF

  v6 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 16) + 72LL) + 40LL);
  v7 = v6 + *(unsigned __int16 *)(v6 + 2);
  if ( (unsigned int)Feature_3805127995__private_IsEnabledDeviceUsage() )
  {
    v9 = *a3;
    if ( (unsigned __int8)v9 < 5u )
      return 3221225858LL;
    v8 = a3[4];
    if ( v9 < 2 * v8 + 5 || (unsigned __int64)&a3[2 * v8 + 5] > v7 )
      return 3221225858LL;
  }
  else
  {
    LOBYTE(v8) = a3[4];
  }
  v10 = 0;
  SourceString = 0LL;
  v11 = &a3[2 * (unsigned __int8)v8];
  if ( (unsigned int)Feature_853910841__private_IsEnabledDeviceUsage() )
  {
    v13 = a3[4];
    v14 = *a3;
    if ( v14 >= 2 * v13 + 9 )
    {
      v12 = v11[8];
      v15 = v12 + 2 * (v13 + 5);
      if ( v14 >= v15 && (unsigned __int64)&a3[v15] <= v7 )
        goto LABEL_11;
    }
    return 3221225858LL;
  }
  LOBYTE(v12) = v11[8];
LABEL_11:
  v16 = (unsigned __int8)v12;
  if ( (_BYTE)v12 )
  {
    do
    {
      v10 = v11[v16 * (unsigned __int8)v12 + 8] | (v10 << 8);
      --v16;
    }
    while ( v16 );
  }
  UnitString = USBParseGetUnitString(a1, a3, &SourceString);
  if ( UnitString >= 0 )
  {
    UnitString = -1073741670;
    v18 = *(unsigned __int8 *)(a2 + 2) << 8;
    PoolWithTag = (int *)ExAllocatePoolWithTag(PagedPool, 4LL * a3[4], 0x41627845u);
    v20 = PoolWithTag;
    if ( PoolWithTag )
    {
      LOBYTE(v21) = a3[4];
      v22 = 0LL;
      if ( (_BYTE)v21 )
      {
        do
        {
          PoolWithTag[v22] = v18 | a3[2 * v22 + 5];
          v22 = (unsigned int)(v22 + 1);
          v21 = a3[4];
        }
        while ( (unsigned int)v22 < v21 );
      }
      v23 = a3[3];
      v26 = 0LL;
      UnitString = BusApiBuildFunctionUnit(
                     a1,
                     v18 | v23,
                     8,
                     0,
                     0,
                     (unsigned __int8)v21,
                     PoolWithTag,
                     SourceString,
                     0,
                     &v26);
      if ( UnitString >= 0 )
      {
        if ( v26 )
          *(_DWORD *)(v26 + 64) = v10;
      }
      ExFreePool(v20);
    }
  }
  return (unsigned int)UnitString;
}
