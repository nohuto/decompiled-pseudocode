/*
 * XREFs of USBCntrlRestoreDbLevel @ 0x1C00314D0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0013270 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall USBCntrlRestoreDbLevel(__int64 a1, __int64 a2)
{
  int v2; // ebx
  unsigned int i; // edi
  int v6; // eax
  int v7; // eax
  int v9; // [rsp+58h] [rbp+10h] BYREF

  v2 = 0;
  for ( i = 0; i < *(_DWORD *)(a2 + 92); ++i )
  {
    v9 = 0;
    v6 = *(_DWORD *)(a2 + 96);
    if ( _bittest(&v6, i) )
    {
      v7 = (*(__int64 (__fastcall **)(__int64, __int64, __int64, _QWORD, int, int *))(a2 + 136))(
             a1,
             a2,
             *(_QWORD *)(a2 + 128) + 32LL * i + 12,
             i,
             1,
             &v9);
      if ( v7 < 0 && v2 >= 0 )
        v2 = v7;
    }
  }
  return (unsigned int)v2;
}
