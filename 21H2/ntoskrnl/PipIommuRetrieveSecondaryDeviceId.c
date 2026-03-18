/*
 * XREFs of PipIommuRetrieveSecondaryDeviceId @ 0x140659040
 * Callers:
 *     PiIommuAllocateExtension @ 0x14084C604 (PiIommuAllocateExtension.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x14042A5E0 (_guard_dispatch_icall.c)
 *     PipIommuValidateDeviceId @ 0x14084C850 (PipIommuValidateDeviceId.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 *     ExAllocatePool2 @ 0x140A6E430 (ExAllocatePool2.c)
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
  v3 = *(unsigned int (__fastcall **)(_QWORD, _QWORD, _QWORD, __int64 *))(a1 + 80);
  if ( v3 )
  {
    if ( v3(*(_QWORD *)(a1 + 8), 0LL, 0LL, &v8) != -1073741789 || !v8 )
    {
      v6 = -1073741823;
      goto LABEL_13;
    }
    Pool2 = (_DWORD *)ExAllocatePool2(256LL, v8, 1685089872LL);
    if ( Pool2 )
    {
      v6 = (*(__int64 (__fastcall **)(_QWORD, __int64, _DWORD *, _QWORD))(a1 + 80))(*(_QWORD *)(a1 + 8), v8, Pool2, 0LL);
      if ( v6 >= 0 )
      {
        if ( *Pool2 == 1 )
        {
          PipIommuValidateDeviceId(a1, Pool2, v8);
          goto LABEL_13;
        }
        v6 = -1073741637;
      }
      ExFreePoolWithTag(Pool2, 0x64706E50u);
      Pool2 = 0LL;
    }
    else
    {
      v6 = -1073741670;
    }
  }
  else
  {
    v6 = -1073741637;
  }
LABEL_13:
  result = (unsigned int)v6;
  *a2 = Pool2;
  return result;
}
