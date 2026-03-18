/*
 * XREFs of IntpReconstructPartitionGroupFromKernel @ 0x1C0024090
 * Callers:
 *     IntPartArbInit @ 0x1C009D7C4 (IntPartArbInit.c)
 * Callees:
 *     IntpAllocateGroupContext @ 0x1C0024184 (IntpAllocateGroupContext.c)
 *     __security_check_cookie @ 0x1C002F140 (__security_check_cookie.c)
 *     RtlNumberOfSetBitsUlongPtr_0 @ 0x1C002F28B (RtlNumberOfSetBitsUlongPtr_0.c)
 */

__int64 __fastcall IntpReconstructPartitionGroupFromKernel(__int64 a1, _QWORD *a2)
{
  int v3; // eax
  __int64 v4; // rdx
  __int64 v5; // rcx
  int InterruptPartitionInformation; // edi
  unsigned __int8 v7; // r14
  _QWORD *GroupContext; // rsi
  unsigned __int8 v9; // bp
  __int64 v10; // rbx
  int v12; // [rsp+20h] [rbp-38h] BYREF
  ULONG_PTR Target[2]; // [rsp+28h] [rbp-30h] BYREF

  v12 = 0;
  *(_OWORD *)Target = 0LL;
  v3 = KeQueryInterruptPartitionCount(0LL, &v12);
  InterruptPartitionInformation = v3;
  if ( v3 != 259 && v3 >= 0 )
  {
    v7 = v12;
    LOBYTE(v4) = v12;
    GroupContext = (_QWORD *)IntpAllocateGroupContext(v5, v4);
    if ( GroupContext )
    {
      v9 = 0;
      if ( v7 )
      {
        while ( 1 )
        {
          InterruptPartitionInformation = KeQueryInterruptPartitionInformation(0LL, v9, Target);
          if ( InterruptPartitionInformation < 0 )
            break;
          v10 = 2LL * v9;
          GroupContext[2 * v9++ + 2] = Target[0];
          BYTE1(GroupContext[v10 + 1]) = RtlNumberOfSetBitsUlongPtr_0(Target[0]);
          if ( v9 >= v7 )
            goto LABEL_7;
        }
        ExFreePoolWithTag(GroupContext, 0);
      }
      else
      {
LABEL_7:
        *a2 = GroupContext;
      }
    }
    else
    {
      return (unsigned int)-1073741670;
    }
  }
  return (unsigned int)InterruptPartitionInformation;
}
