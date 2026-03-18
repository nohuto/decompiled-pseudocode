/*
 * XREFs of PipIommuRetrieveSecondaryDeviceId @ 0x1405CCE28
 * Callers:
 *     PiIommuAllocateExtension @ 0x140762C4C (PiIommuAllocateExtension.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x140405F40 (_guard_dispatch_icall.c)
 *     PipIommuValidateDeviceId @ 0x140762E64 (PipIommuValidateDeviceId.c)
 *     ExFreePoolWithTag @ 0x1409B70B0 (ExFreePoolWithTag.c)
 *     ExAllocatePool2 @ 0x1409B7280 (ExAllocatePool2.c)
 */

__int64 __fastcall PipIommuRetrieveSecondaryDeviceId(__int64 a1, _QWORD *a2)
{
  _DWORD *Pool2; // rdi
  unsigned int (__fastcall *v3)(_QWORD, _QWORD, _QWORD, __int64 *); // rax
  int v6; // ebx
  __int64 result; // rax
  __int64 v8; // [rsp+40h] [rbp+8h] BYREF

  v8 = 0LL;
  Pool2 = 0LL;
  v3 = *(unsigned int (__fastcall **)(_QWORD, _QWORD, _QWORD, __int64 *))(a1 + 72);
  if ( !v3 )
  {
    v6 = -1073741637;
    goto LABEL_15;
  }
  if ( v3(*(_QWORD *)(a1 + 8), 0LL, 0LL, &v8) != -1073741789 || !v8 )
  {
    v6 = -1073741823;
LABEL_12:
    if ( v6 >= 0 )
      goto LABEL_15;
    goto LABEL_13;
  }
  Pool2 = (_DWORD *)ExAllocatePool2(256LL, v8, 1685089872LL);
  if ( !Pool2 )
  {
    v6 = -1073741670;
    goto LABEL_15;
  }
  v6 = (*(__int64 (__fastcall **)(_QWORD, __int64, _DWORD *, _QWORD))(a1 + 72))(*(_QWORD *)(a1 + 8), v8, Pool2, 0LL);
  if ( v6 < 0 )
    goto LABEL_13;
  if ( *Pool2 == 1 )
  {
    PipIommuValidateDeviceId(a1, Pool2, v8);
    goto LABEL_12;
  }
  v6 = -1073741637;
LABEL_13:
  if ( Pool2 )
  {
    ExFreePoolWithTag(Pool2, 0x64706E50u);
    Pool2 = 0LL;
  }
LABEL_15:
  result = (unsigned int)v6;
  *a2 = Pool2;
  return result;
}
