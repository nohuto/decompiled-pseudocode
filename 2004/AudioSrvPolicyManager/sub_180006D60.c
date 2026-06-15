/*
 * XREFs of sub_180006D60 @ 0x180006D60
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x18003AE40 (_guard_dispatch_icall_nop.c)
 */

_BOOL8 __fastcall sub_180006D60(__int64 a1, void (__fastcall ***a2)(_QWORD, __int64 *, __int64 *), unsigned int a3)
{
  void (__fastcall **v3)(_QWORD, __int64 *, __int64 *); // rax
  int v5; // esi
  int v6; // r15d
  int v7; // ebp
  int v8; // edi
  int v9; // eax
  __int64 v10; // rbx
  int v11; // eax
  BOOL v12; // edi
  __int64 v14; // [rsp+58h] [rbp+10h] BYREF
  __int64 v15; // [rsp+68h] [rbp+20h] BYREF

  v3 = *a2;
  v5 = 0;
  v14 = 0LL;
  v6 = 0;
  v7 = 0;
  v8 = 0;
  (*v3)(a2, &qword_180042878, &v14);
  v15 = 0LL;
  v9 = (*(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v14 + 24LL))(v14, &v15);
  v10 = v15;
  if ( v9 >= 0 )
  {
    v6 = *(_DWORD *)(v15 + 492);
    v7 = *(_DWORD *)(v15 + 476);
    v5 = *(_DWORD *)(v15 + 496);
    v8 = *(_DWORD *)(*(_QWORD *)(v15 + 256) + 208LL) & 0x20;
  }
  v12 = (a3 > 0x13 || (v11 = 933936, !_bittest(&v11, a3))) && !v6 && !v7 && !v5 && !v8;
  if ( v15 && _InterlockedExchangeAdd((volatile signed __int32 *)(v15 + 8), 0xFFFFFFFF) == 1 )
  {
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v10 + 32LL))(v10);
    (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v10 + 24LL))(v10, 1LL);
  }
  if ( v14 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v14 + 16LL))(v14);
  return v12;
}
