/*
 * XREFs of sub_18007C140 @ 0x18007C140
 * Callers:
 *     sub_1800C2EF0 @ 0x1800C2EF0 (sub_1800C2EF0.c)
 * Callees:
 *     sub_180079834 @ 0x180079834 (sub_180079834.c)
 *     sub_18007AB84 @ 0x18007AB84 (sub_18007AB84.c)
 *     sub_18007B4CC @ 0x18007B4CC (sub_18007B4CC.c)
 *     sub_1800A5B40 @ 0x1800A5B40 (sub_1800A5B40.c)
 *     sub_1800E31CC @ 0x1800E31CC (sub_1800E31CC.c)
 *     _guard_dispatch_icall_nop @ 0x180125480 (_guard_dispatch_icall_nop.c)
 */

unsigned __int64 __fastcall sub_18007C140(__int64 a1, __int64 a2)
{
  __int64 v4; // rax
  unsigned int v5; // eax
  unsigned __int64 result; // rax
  volatile signed __int32 *v7; // rbx
  signed __int32 v8; // eax
  bool v9; // zf
  __int64 v10; // [rsp+20h] [rbp-18h] BYREF
  volatile signed __int32 *v11; // [rsp+28h] [rbp-10h]

  v4 = sub_18007AB84(a1, 1);
  sub_1800E31CC(v4, 1LL);
  *(_DWORD *)(a1 + 696) = *(_DWORD *)(a2 + 56);
  v5 = sub_1800A5B40();
  sub_18007B4CC((_QWORD *)a1, v5);
  result = (unsigned __int64)sub_180079834((_QWORD *)a1, &v10);
  v7 = v11;
  if ( v11 )
  {
    v8 = _InterlockedExchangeAdd(v11 + 2, 0xFFFFFFFF);
    v9 = v8 == 1;
    result = (unsigned int)(v8 - 1);
    if ( v9 )
    {
      (**(void (__fastcall ***)(volatile signed __int32 *))v7)(v7);
      result = (unsigned int)_InterlockedDecrement(v7 + 3);
      if ( !(_DWORD)result )
        return (*(__int64 (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v7 + 8LL))(v7);
    }
  }
  return result;
}
