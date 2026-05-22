/*
 * XREFs of ?GetInfo@FlickRecognizer@@UEAAJW4GestureDataType@@PEAUGestureData@@@Z @ 0x1801839B0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x18004A6B0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall FlickRecognizer::GetInfo(__int64 a1, int a2, _DWORD *a3)
{
  if ( *a3 != 12 || a2 != 7 || (*(_BYTE *)(a1 + 138) & 4) == 0 )
    return 2147942487LL;
  a3[1] = *(_DWORD *)(a1 + 148);
  a3[2] = *(_DWORD *)(a1 + 152);
  (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)a1 + 24LL))(a1, 0xFFFFFFFFLL);
  return 0LL;
}
