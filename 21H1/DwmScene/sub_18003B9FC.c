/*
 * XREFs of sub_18003B9FC @ 0x18003B9FC
 * Callers:
 *     _expandlocale @ 0x18003BFEC (_expandlocale.c)
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x18011E768 (--2@YAPEAX_K@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18011FBB0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
_DWORD *__fastcall sub_18003B9FC(__int64 a1, __int64 a2, _DWORD *a3, __int64 *a4)
{
  _DWORD *v7; // rsi
  __int64 v8; // rcx

  v7 = operator new(0x30uLL);
  v7[8] = *a3;
  v8 = *a4;
  *((_QWORD *)v7 + 5) = *a4;
  if ( v8 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v8 + 8LL))(v8);
  *(_QWORD *)v7 = a2;
  *((_QWORD *)v7 + 1) = a2;
  *((_QWORD *)v7 + 2) = a2;
  *((_WORD *)v7 + 12) = 0;
  return v7;
}
