/*
 * XREFs of ?DxgIsRemoteSessionUsingXddmMonitors@@YAHXZ @ 0x1C028489C
 * Callers:
 *     ?DxgkWaitForVerticalBlankEventInternal@@YAJIIIIPEAPEAU_KEVENT@@@Z @ 0x1C0157380 (-DxgkWaitForVerticalBlankEventInternal@@YAJIIIIPEAPEAU_KEVENT@@@Z.c)
 *     DxgkGetScanLine @ 0x1C01702A0 (DxgkGetScanLine.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0028C00 (_guard_dispatch_icall_nop.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C0115560 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 */

__int64 __fastcall DxgIsRemoteSessionUsingXddmMonitors(__int64 a1, __int64 a2)
{
  struct DXGPROCESS *Current; // rax
  unsigned int v3; // ebx
  __int64 v4; // rax
  int v6; // [rsp+30h] [rbp+8h] BYREF

  Current = DXGPROCESS::GetCurrent(a1, a2);
  v3 = 0;
  if ( !Current )
    return 0LL;
  v4 = *((_QWORD *)Current + 11);
  if ( !v4 )
    return 0LL;
  v6 = 0;
  if ( (*(unsigned int (__fastcall **)(_QWORD, _QWORD, int *))(v4 + 224))(0LL, 0LL, &v6) )
    return v6 == 0;
  return v3;
}
