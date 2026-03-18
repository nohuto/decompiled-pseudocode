/*
 * XREFs of ProcessorpValidateTargetSet @ 0x1C0093EF8
 * Callers:
 *     ProcessorpFindIdtEntriesApic @ 0x1C0092C10 (ProcessorpFindIdtEntriesApic.c)
 * Callees:
 *     <none>
 */

bool __fastcall ProcessorpValidateTargetSet(__int64 a1)
{
  __int64 v1; // rsi
  char v3; // bl
  __int64 v4; // r8
  _QWORD *v5; // r8
  _QWORD *v6; // rcx

  v1 = *(unsigned __int16 *)(a1 + 8);
  if ( (unsigned __int16)v1 >= KeQueryMaximumGroupCount() )
    return 0;
  v3 = 0;
  v4 = *(_QWORD *)(ProcessorGroupByNumber + 8 * v1);
  if ( !v4 )
    return 0;
  if ( *(_DWORD *)(v4 + 36) == 1
    && (!*(_QWORD *)a1 || (*(_QWORD *)a1 & (*(_QWORD *)a1 ^ (*(_QWORD *)a1 - 1LL))) != *(_QWORD *)a1)
    && IrqMachinePolicy != 6 )
  {
    return 0;
  }
  v5 = (_QWORD *)(v4 + 16);
  v6 = (_QWORD *)*v5;
  if ( (_QWORD *)*v5 == v5 )
  {
LABEL_14:
    if ( IrqMachinePolicy == 6 )
      return KeQueryGroupAffinity(v1) == *(_QWORD *)a1;
  }
  else
  {
    while ( (*(_QWORD *)a1 & v6[3]) != *(_QWORD *)a1 )
    {
      v6 = (_QWORD *)*v6;
      if ( v6 == v5 )
        goto LABEL_14;
    }
    return 1;
  }
  return v3;
}
