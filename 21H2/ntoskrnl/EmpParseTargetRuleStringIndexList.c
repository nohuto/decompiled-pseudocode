/*
 * XREFs of EmpParseTargetRuleStringIndexList @ 0x140A47D1C
 * Callers:
 *     EmpParseTargetRules @ 0x140A47ADC (EmpParseTargetRules.c)
 * Callees:
 *     RtlStringCbCopyNA @ 0x1403B45D4 (RtlStringCbCopyNA.c)
 *     strchr @ 0x1403D3860 (strchr.c)
 *     RtlCharToInteger @ 0x14079D4B0 (RtlCharToInteger.c)
 *     ExFreePoolWithTag @ 0x1409B5010 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1409B5160 (ExAllocatePoolWithTag.c)
 *     EmpInfParseGetStringIndexFromName @ 0x140A47F60 (EmpInfParseGetStringIndexFromName.c)
 */

bool __fastcall EmpParseTargetRuleStringIndexList(
        __int64 a1,
        const char *a2,
        unsigned int a3,
        unsigned int a4,
        __int64 a5,
        unsigned int a6,
        int *a7)
{
  unsigned int v7; // esi
  char v9; // di
  int v10; // r15d
  unsigned int v11; // r14d
  int v12; // ecx
  bool v13; // zf
  __int64 v14; // r13
  const char *v15; // r12
  char *PoolWithTag; // rax
  char *v17; // rbp
  __int64 v18; // rcx
  int v20; // [rsp+20h] [rbp-58h]
  ULONG Value[21]; // [rsp+24h] [rbp-54h] BYREF
  unsigned int v23; // [rsp+88h] [rbp+10h]
  unsigned int v24; // [rsp+90h] [rbp+18h]
  unsigned int v25; // [rsp+98h] [rbp+20h]

  v25 = a4;
  v24 = a3;
  v7 = 0;
  v9 = 0;
  Value[0] = 0;
  v10 = 0;
  v11 = 0;
  v23 = 0;
  v12 = *a7;
  v20 = *a7;
  if ( a5 )
  {
    while ( 1 )
    {
      while ( 1 )
      {
        while ( 1 )
        {
          v13 = v9 == 0;
          if ( v9 )
            return v13;
          if ( v10 )
            break;
          if ( *a2 != 123 )
            goto LABEL_27;
LABEL_7:
          ++a2;
          v10 = 1;
        }
        if ( v10 == 1 )
          break;
        if ( v10 != 2 )
        {
          if ( !*a2 && v11 == a3 && v7 == a4 )
          {
            *a7 = v12 + v7 + v11;
            return v9 == 0;
          }
          goto LABEL_27;
        }
        if ( *a2 == 46 )
          goto LABEL_7;
        if ( *a2 == 125 )
        {
LABEL_35:
          ++a2;
          v10 = 3;
        }
        else
        {
LABEL_27:
          v9 = 1;
        }
      }
      if ( *a2 == 125 )
        goto LABEL_35;
      if ( v11 > a3 || v7 > a4 || (v14 = v12 + v7 + v11, (unsigned int)v14 >= a6) )
      {
        v9 = 1;
        return v9 == 0;
      }
      v15 = a2;
      do
      {
        if ( strchr(".}", *a2) )
          break;
        ++a2;
      }
      while ( a2 );
      if ( a2 - v15 != -1 )
      {
        PoolWithTag = (char *)ExAllocatePoolWithTag(PagedPool, a2 - v15 + 1, 0x74694D45u);
        v17 = PoolWithTag;
        if ( PoolWithTag )
        {
          if ( RtlStringCbCopyNA(PoolWithTag, a2 - v15 + 1, v15, a2 - v15) >= 0 )
            break;
        }
      }
      v7 = v23;
      v9 = 1;
LABEL_23:
      v12 = v20;
      a3 = v24;
      a4 = v25;
    }
    if ( v11 < v24 )
    {
      v7 = v23;
      if ( (int)EmpInfParseGetStringIndexFromName(a1, v17, Value) >= 0 )
      {
        v18 = v11 + v20;
        ++v11;
        *(_DWORD *)(a5 + 4 * v18) = Value[0];
        goto LABEL_21;
      }
    }
    else
    {
      v7 = v23;
      if ( RtlCharToInteger(v17, 0x10u, Value) >= 0 )
      {
        v7 = ++v23;
        *(_DWORD *)(a5 + 4 * v14) = Value[0];
LABEL_21:
        v10 = 2;
LABEL_22:
        ExFreePoolWithTag(v17, 0x74694D45u);
        goto LABEL_23;
      }
    }
    v9 = 1;
    goto LABEL_22;
  }
  return 0;
}
