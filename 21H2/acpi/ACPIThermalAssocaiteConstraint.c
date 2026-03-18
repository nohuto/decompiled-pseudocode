/*
 * XREFs of ACPIThermalAssocaiteConstraint @ 0x1C0003E44
 * Callers:
 *     ACPIThermalActivateConstraint @ 0x1C0003F18 (ACPIThermalActivateConstraint.c)
 *     ACPIThermalAcquireCoolingInterfaces @ 0x1C0005398 (ACPIThermalAcquireCoolingInterfaces.c)
 * Callees:
 *     ACPIThermalReevaluateConstraints @ 0x1C0003ED4 (ACPIThermalReevaluateConstraints.c)
 *     AcpiDiagTraceActiveCoolingConstraint @ 0x1C0047A40 (AcpiDiagTraceActiveCoolingConstraint.c)
 *     AcpiDiagTracePassiveCoolingConstraint @ 0x1C004899C (AcpiDiagTracePassiveCoolingConstraint.c)
 */

__int64 __fastcall ACPIThermalAssocaiteConstraint(__int64 a1, __int64 a2)
{
  __int64 result; // rax
  __int64 v3; // r9
  _QWORD *v5; // rdx
  __int64 v6; // rcx
  _QWORD *v7; // r8
  _QWORD *v8; // r8
  bool v9; // zf

  result = a2;
  v3 = *(_QWORD *)(a1 + 656);
  if ( !*(_QWORD *)(a2 + 40) )
  {
    v5 = (_QWORD *)(a2 + 16);
    v6 = *v5;
    if ( *(_QWORD **)(*v5 + 8LL) != v5
      || (v7 = (_QWORD *)v5[1], (_QWORD *)*v7 != v5)
      || (*v7 = v6, *(_QWORD *)(v6 + 8) = v7, v8 = *(_QWORD **)(v3 + 24), *v8 != v3 + 16) )
    {
      __fastfail(3u);
    }
    *v5 = v3 + 16;
    v5[1] = v8;
    *v8 = v5;
    *(_QWORD *)(v3 + 24) = v5;
    v9 = *(_BYTE *)(result + 52) == 0;
    *(_QWORD *)(result + 40) = a1;
    if ( v9 )
    {
      if ( *(_BYTE *)(result + 55) )
        AcpiDiagTraceActiveCoolingConstraint(*(_QWORD *)(result + 32), a1, 0LL);
    }
    else if ( *(_BYTE *)(result + 53) != 100 )
    {
      AcpiDiagTracePassiveCoolingConstraint(*(_QWORD *)(result + 32), a1, 0LL);
    }
    return ACPIThermalReevaluateConstraints(*(PVOID *)(a1 + 656));
  }
  return result;
}
