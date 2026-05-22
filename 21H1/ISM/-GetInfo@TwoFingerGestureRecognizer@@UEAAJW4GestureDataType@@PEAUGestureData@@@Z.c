/*
 * XREFs of ?GetInfo@TwoFingerGestureRecognizer@@UEAAJW4GestureDataType@@PEAUGestureData@@@Z @ 0x180185910
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x18004ACA0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall TwoFingerGestureRecognizer::GetInfo(__int64 a1, unsigned int a2, __int64 a3)
{
  if ( (*(int (__fastcall **)(__int64))(*(_QWORD *)(a1 + 16) + 40LL))(a1 + 16) >= 0
    || (*(int (__fastcall **)(__int64, _QWORD, __int64))(*(_QWORD *)(a1 + 88) + 40LL))(a1 + 88, a2, a3) >= 0 )
  {
    return 0LL;
  }
  else
  {
    return 2147942487LL;
  }
}
