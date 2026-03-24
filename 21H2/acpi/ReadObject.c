/*
 * XREFs of ReadObject @ 0x1C000B4C0
 * Callers:
 *     DerefOf @ 0x1C000B440 (DerefOf.c)
 *     ParseNameObj @ 0x1C0021920 (ParseNameObj.c)
 *     IncDec @ 0x1C00297D0 (IncDec.c)
 *     AMLIReadNamespaceOverrideObject @ 0x1C0065024 (AMLIReadNamespaceOverrideObject.c)
 *     LoadFieldUnitDDB @ 0x1C0066D9C (LoadFieldUnitDDB.c)
 *     NestAsyncEvalObject @ 0x1C00683FC (NestAsyncEvalObject.c)
 * Callees:
 *     PushFrame @ 0x1C0022DD8 (PushFrame.c)
 *     ReadField @ 0x1C0024420 (ReadField.c)
 *     ConPrintf @ 0x1C0065D60 (ConPrintf.c)
 *     PrintObject @ 0x1C0066934 (PrintObject.c)
 */

__int64 __fastcall ReadObject(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned int v3; // esi
  __int16 v6; // ax
  __int64 v8; // rax
  __int64 v9; // [rsp+48h] [rbp+10h] BYREF

  v3 = 0;
  v9 = 0LL;
  while ( 1 )
  {
    while ( 1 )
    {
      v6 = *(_WORD *)(a2 + 2);
      if ( v6 != 128 )
        break;
      a2 = *(_QWORD *)(a2 + 16) + 64LL;
    }
    if ( v6 != 129 )
      break;
    a2 = *(_QWORD *)(a2 + 16);
  }
  if ( v6 == 5 )
  {
    v3 = PushFrame(a1, 1430668097, 48, (unsigned int)AccFieldUnit, (__int64)&v9);
    if ( !v3 )
    {
      v8 = v9;
      *(_QWORD *)(v9 + 32) = a2;
      *(_DWORD *)(v8 + 16) = 0x10000;
      *(_QWORD *)(v8 + 40) = a3;
    }
  }
  else if ( v6 == 14 )
  {
    return (unsigned int)ReadField(a1, a2, *(_QWORD *)(a2 + 32) + 12LL, a3);
  }
  else
  {
    if ( a3 != a2 )
    {
      *(_OWORD *)a3 = *(_OWORD *)a2;
      *(_OWORD *)(a3 + 16) = *(_OWORD *)(a2 + 16);
      *(_QWORD *)(a3 + 32) = *(_QWORD *)(a2 + 32);
      if ( (*(_BYTE *)a2 & 1) != 0 )
      {
        _InterlockedAdd((volatile signed __int32 *)(*(_QWORD *)(a2 + 8) + 8LL), 1u);
      }
      else if ( *(_QWORD *)(a2 + 32) )
      {
        _InterlockedAdd((volatile signed __int32 *)(a2 + 8), 1u);
        *(_WORD *)a3 |= 1u;
        *(_QWORD *)(a3 + 8) = a2;
      }
    }
    if ( (gDebugger & 0xD0) != 0 )
    {
      ConPrintf("=");
      PrintObject(a3);
    }
  }
  return v3;
}
