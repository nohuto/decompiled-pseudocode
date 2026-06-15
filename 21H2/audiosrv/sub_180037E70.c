/*
 * XREFs of sub_180037E70 @ 0x180037E70
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180074470 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall sub_180037E70(__int64 a1, __int64 a2)
{
  void (__fastcall ***v2)(_QWORD, void *, __int64 *); // r9
  __int64 v4; // rcx
  unsigned int v5; // eax
  unsigned int v6; // ebx
  __int64 v8; // [rsp+30h] [rbp+8h] BYREF

  v2 = *(void (__fastcall ****)(_QWORD, void *, __int64 *))(a1 + 32);
  v4 = 0LL;
  v8 = 0LL;
  if ( v2 && ((**v2)(v2, &unk_18015BE10, &v8), (v4 = v8) != 0) )
  {
    v5 = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v8 + 24LL))(v8, a2);
    v4 = v8;
    v6 = v5;
  }
  else
  {
    v6 = -2147467263;
  }
  if ( v4 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 16LL))(v4);
  return v6;
}
