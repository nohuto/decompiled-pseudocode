/*
 * XREFs of WriteIoMemRawHidden @ 0x1C0003410
 * Callers:
 *     WriteGenAddrHidden @ 0x1C00031EC (WriteGenAddrHidden.c)
 *     PerfControlCpcSingleRegisterHidden @ 0x1C0004F60 (PerfControlCpcSingleRegisterHidden.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C000EC50 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall WriteIoMemRawHidden(__int64 a1, __int64 a2, __int64 a3, unsigned int a4)
{
  unsigned int v4; // ebx
  __int64 v5; // rdi
  char v6; // r10
  __int64 result; // rax
  __int64 v8; // r8

  v4 = a3;
  v5 = *(_QWORD *)(a2 + 4);
  v6 = *(_BYTE *)(a2 + 3);
  if ( *(_BYTE *)a2 == 1 )
  {
    switch ( v6 )
    {
      case 8:
        v8 = 1LL;
        break;
      case 16:
        v8 = 2LL;
        break;
      case 32:
        v8 = 4LL;
        break;
      default:
        return result;
    }
    return ((__int64 (__fastcall *)(__int64, _QWORD, __int64, _QWORD, unsigned int))qword_1C0014700)(
             a1,
             (unsigned __int16)v5,
             v8,
             v4,
             a4);
  }
  else if ( *(_BYTE *)a2 == 127 && v6 == 64 )
  {
    return ((__int64 (__fastcall *)(__int64, _QWORD, __int64, _QWORD))qword_1C00146F0)(a1, (unsigned int)v5, a3, a4);
  }
  return result;
}
