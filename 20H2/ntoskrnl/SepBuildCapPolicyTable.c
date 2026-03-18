/*
 * XREFs of SepBuildCapPolicyTable @ 0x1403CB19C
 * Callers:
 *     SepRmCapUpdateWrkr @ 0x1407C9AB0 (SepRmCapUpdateWrkr.c)
 * Callees:
 *     RtlpCreateHashTable @ 0x1403765D0 (RtlpCreateHashTable.c)
 *     ZwClose @ 0x1403F8350 (ZwClose.c)
 *     memset @ 0x140411300 (memset.c)
 *     SepRegOpenKey @ 0x14068D944 (SepRegOpenKey.c)
 *     SepReadAndPopulateCapes @ 0x1407C9B9C (SepReadAndPopulateCapes.c)
 *     SepReadAndInsertCaps @ 0x1409281FC (SepReadAndInsertCaps.c)
 *     SepRmDestroyCapTable @ 0x140928868 (SepRmDestroyCapTable.c)
 *     ExAllocatePoolWithTag @ 0x1409B7010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x1409B70B0 (ExFreePoolWithTag.c)
 */

__int64 __fastcall SepBuildCapPolicyTable(__int64 a1, _QWORD *a2)
{
  unsigned int v2; // ebx
  HANDLE v4; // [rsp+20h] [rbp-20h] BYREF
  HANDLE KeyHandle; // [rsp+30h] [rbp-10h] BYREF
  HANDLE Handle; // [rsp+88h] [rbp+48h] BYREF

  *a2 = 0LL;
  KeyHandle = 0LL;
  v4 = 0LL;
  Handle = 0LL;
  if ( (int)SepRegOpenKey(
              L"\\Registry\\Machine\\System\\CurrentControlSet\\Control\\Lsa\\CentralizedAccessPolicies",
              0x201u,
              &KeyHandle) < 0
    || (int)SepRegOpenKey(
              L"\\Registry\\Machine\\System\\CurrentControlSet\\Control\\Lsa\\CentralizedAccessPolicies\\CAPEs",
              0x201u,
              &v4) < 0
    || (int)SepRegOpenKey(
              L"\\Registry\\Machine\\System\\CurrentControlSet\\Control\\Lsa\\CentralizedAccessPolicies\\CAPs",
              0x201u,
              &Handle) < 0 )
  {
    v2 = 0;
  }
  else
  {
    v2 = SepReadAndPopulateCapes(v4);
  }
  if ( Handle )
    ZwClose(Handle);
  if ( v4 )
    ZwClose(v4);
  if ( KeyHandle )
    ZwClose(KeyHandle);
  return v2;
}
