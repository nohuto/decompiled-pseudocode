/*
 * XREFs of PopPolicyDeviceRemove @ 0x1408ECE5C
 * Callers:
 *     PopPolicyDeviceTargetChange @ 0x1408ECED0 (PopPolicyDeviceTargetChange.c)
 * Callees:
 *     IoFreeIrp @ 0x1402541B0 (IoFreeIrp.c)
 *     ObfDereferenceObjectWithTag @ 0x1402611B0 (ObfDereferenceObjectWithTag.c)
 *     _guard_dispatch_icall @ 0x1403FE9E0 (_guard_dispatch_icall.c)
 */

LONG_PTR __fastcall PopPolicyDeviceRemove(__int64 a1)
{
  LONG_PTR result; // rax
  LONG_PTR *v3; // rcx
  __int64 v4; // rax

  result = *(_QWORD *)a1;
  if ( *(_QWORD *)a1 )
  {
    if ( *(_QWORD *)(result + 8) != a1 || (v3 = *(LONG_PTR **)(a1 + 8), *v3 != a1) )
      __fastfail(3u);
    *v3 = result;
    *(_QWORD *)(result + 8) = v3;
    v4 = *(int *)(a1 + 16);
    *(_QWORD *)a1 = 0LL;
    (*((void (__fastcall **)(__int64))&unk_140C03238 + 4 * v4))(a1);
    IoFreeIrp(*(PIRP *)(a1 + 56));
    return ObfDereferenceObjectWithTag(*(PVOID *)(a1 + 48), 0x64506F50u);
  }
  return result;
}
