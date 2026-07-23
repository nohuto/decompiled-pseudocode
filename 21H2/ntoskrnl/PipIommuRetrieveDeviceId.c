/*
 * XREFs of PipIommuRetrieveDeviceId @ 0x1407661E0
 * Callers:
 *     PiIommuAllocateExtension @ 0x1407660DC (PiIommuAllocateExtension.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x140408790 (_guard_dispatch_icall.c)
 *     memset @ 0x140414300 (memset.c)
 *     PipIommuValidateDeviceId @ 0x1407662C4 (PipIommuValidateDeviceId.c)
 *     ExFreePoolWithTag @ 0x1409B5010 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1409B5160 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall PipIommuRetrieveDeviceId(__int64 a1, _QWORD *a2)
{
  void *v2; // rbx
  unsigned int (__fastcall *v3)(_QWORD, _QWORD, _QWORD, SIZE_T *); // rax
  PVOID PoolWithTag; // rax
  int v7; // edi
  __int64 result; // rax
  SIZE_T NumberOfBytes; // [rsp+40h] [rbp+8h] BYREF

  NumberOfBytes = 0LL;
  v2 = 0LL;
  v3 = *(unsigned int (__fastcall **)(_QWORD, _QWORD, _QWORD, SIZE_T *))(a1 + 64);
  if ( !v3 )
  {
    v7 = -1073741637;
    goto LABEL_8;
  }
  if ( v3(*(_QWORD *)(a1 + 8), 0LL, 0LL, &NumberOfBytes) != -1073741789 || !NumberOfBytes )
  {
    v7 = -1073741823;
LABEL_7:
    if ( v7 >= 0 )
      goto LABEL_8;
    goto LABEL_12;
  }
  PoolWithTag = ExAllocatePoolWithTag(PagedPool, NumberOfBytes, 0x64706E50u);
  v2 = PoolWithTag;
  if ( !PoolWithTag )
  {
    v7 = -1073741670;
    goto LABEL_8;
  }
  memset(PoolWithTag, 0, NumberOfBytes);
  v7 = (*(__int64 (__fastcall **)(_QWORD, SIZE_T, void *, _QWORD))(a1 + 64))(
         *(_QWORD *)(a1 + 8),
         NumberOfBytes,
         v2,
         0LL);
  if ( v7 >= 0 )
  {
    PipIommuValidateDeviceId(a1, v2, NumberOfBytes);
    goto LABEL_7;
  }
LABEL_12:
  if ( v2 )
  {
    ExFreePoolWithTag(v2, 0x64706E50u);
    v2 = 0LL;
  }
LABEL_8:
  result = (unsigned int)v7;
  *a2 = v2;
  return result;
}
