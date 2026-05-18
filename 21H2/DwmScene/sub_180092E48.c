/*
 * XREFs of sub_180092E48 @ 0x180092E48
 * Callers:
 *     sub_180092E28 @ 0x180092E28 (sub_180092E28.c)
 * Callees:
 *     sub_1800F5438 @ 0x1800F5438 (sub_1800F5438.c)
 *     _guard_dispatch_icall_nop @ 0x180125480 (_guard_dispatch_icall_nop.c)
 */

bool __fastcall sub_180092E48(__int64 a1, unsigned __int16 a2)
{
  volatile signed __int32 *v4; // rbx
  bool v5; // bp
  __int64 *v7; // rdx
  __int64 *v8; // rax
  __int64 *v9; // rcx
  __int64 v10; // [rsp+20h] [rbp-28h] BYREF
  volatile signed __int32 *v11; // [rsp+28h] [rbp-20h]

  sub_1800F5438(*(_QWORD *)(a1 + 120), &v10, a2);
  v4 = v11;
  v5 = v10 != 0;
  if ( v11 )
  {
    if ( _InterlockedExchangeAdd(v11 + 2, 0xFFFFFFFF) == 1 )
    {
      (**(void (__fastcall ***)(volatile signed __int32 *))v4)(v4);
      if ( _InterlockedExchangeAdd(v4 + 3, 0xFFFFFFFF) == 1 )
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v4 + 8LL))(v4);
    }
  }
  if ( v5 )
    return 1;
  v7 = *(__int64 **)(a1 + 200);
  v8 = v7;
  v9 = (__int64 *)v7[1];
  if ( *((_BYTE *)v9 + 25) )
    goto LABEL_14;
  do
  {
    if ( *((_WORD *)v9 + 14) >= a2 )
    {
      v8 = v9;
      v9 = (__int64 *)*v9;
    }
    else
    {
      v9 = (__int64 *)v9[2];
    }
  }
  while ( !*((_BYTE *)v9 + 25) );
  if ( v8 == v7 || a2 < *((_WORD *)v8 + 14) )
LABEL_14:
    v8 = *(__int64 **)(a1 + 200);
  return v8 != v7 && (unsigned int)(*((_DWORD *)v8 + 8) - 1) <= 1;
}
