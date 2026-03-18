/*
 * XREFs of sub_1C0045A10 @ 0x1C0045A10
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C001D060 (_guard_dispatch_icall_nop.c)
 *     sub_1C0048394 @ 0x1C0048394 (sub_1C0048394.c)
 */

__int64 __fastcall sub_1C0045A10(__int64 a1, int a2, __int64 a3, unsigned int a4, __int64 a5, __int64 a6)
{
  unsigned int v9; // ebx

  v9 = 0;
  if ( off_1C006B000 != (_UNKNOWN *)&off_1C006B000 && LOWORD(DeviceObject->DeviceType) )
    sub_1C0048394(DeviceObject->DeviceExtension, a2, a3, a4);
  if ( a2 == 3 )
  {
    if ( a4 >= *(_DWORD *)(a6 + 12) )
      (*(void (__fastcall **)(__int64, _QWORD, __int64))(a6 + 16))(a5, *(_QWORD *)a6, a3);
  }
  else
  {
    return (unsigned int)-1073741811;
  }
  return v9;
}
