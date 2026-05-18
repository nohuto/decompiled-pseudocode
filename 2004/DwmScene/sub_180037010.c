/*
 * XREFs of sub_180037010 @ 0x180037010
 * Callers:
 *     <none>
 * Callees:
 *     sub_1800339E0 @ 0x1800339E0 (sub_1800339E0.c)
 *     sub_180038450 @ 0x180038450 (sub_180038450.c)
 *     sub_1800CBBE0 @ 0x1800CBBE0 (sub_1800CBBE0.c)
 *     sub_1800CBBF8 @ 0x1800CBBF8 (sub_1800CBBF8.c)
 *     _guard_dispatch_icall_nop @ 0x18011FBB0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall sub_180037010(__int64 a1, __int64 a2, __int64 a3, unsigned int a4)
{
  __int64 v8; // rax
  char v9; // di
  __int64 *v10; // rcx
  __int64 v11; // rax
  volatile signed __int32 *v12; // rbx
  volatile signed __int32 *v13; // rbx
  __int64 v14; // rbx
  __int64 result; // rax
  __int64 v16; // [rsp+20h] [rbp-30h]
  volatile signed __int32 *v17; // [rsp+28h] [rbp-28h]
  __int64 v18; // [rsp+30h] [rbp-20h] BYREF
  volatile signed __int32 *v19; // [rsp+38h] [rbp-18h]
  char v20; // [rsp+40h] [rbp-10h] BYREF
  volatile signed __int32 *v21; // [rsp+48h] [rbp-8h]

  v8 = sub_1800CBBF8(a1);
  v9 = 1;
  sub_1800CBBE0(v8, 7LL, 4LL, 1LL);
  if ( *(_QWORD *)a2 )
  {
    sub_1800339E0((__int64 *)(*(_QWORD *)a2 + 112LL), &v18, *(_DWORD *)(a1 + 88));
    v10 = &v18;
    v11 = v18;
  }
  else
  {
    v21 = 0LL;
    v10 = (__int64 *)&v20;
    v9 = 2;
    v11 = 0LL;
  }
  v16 = v11;
  v17 = (volatile signed __int32 *)v10[1];
  *v10 = 0LL;
  v10[1] = 0LL;
  if ( (v9 & 2) != 0 )
  {
    v9 &= ~2u;
    if ( v21 )
    {
      if ( _InterlockedExchangeAdd(v21 + 2, 0xFFFFFFFF) == 1 )
      {
        v12 = v21;
        (**(void (__fastcall ***)(volatile signed __int32 *))v21)(v21);
        if ( _InterlockedExchangeAdd(v12 + 3, 0xFFFFFFFF) == 1 )
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v21 + 8LL))(v21);
      }
    }
  }
  if ( (v9 & 1) != 0 )
  {
    if ( v19 )
    {
      if ( _InterlockedExchangeAdd(v19 + 2, 0xFFFFFFFF) == 1 )
      {
        v13 = v19;
        (**(void (__fastcall ***)(volatile signed __int32 *))v19)(v19);
        if ( _InterlockedExchangeAdd(v13 + 3, 0xFFFFFFFF) == 1 )
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v19 + 8LL))(v19);
      }
    }
  }
  v14 = *(_QWORD *)(v16 + 120);
  if ( v14 )
  {
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v14 + 8LL))(v14);
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v14 + 16LL))(v14);
  }
  result = sub_180038450(a1, v14, a3, a4);
  if ( v17 )
  {
    result = (unsigned int)_InterlockedDecrement(v17 + 2);
    if ( !(_DWORD)result )
    {
      (**(void (__fastcall ***)(volatile signed __int32 *))v17)(v17);
      result = (unsigned int)_InterlockedDecrement(v17 + 3);
      if ( !(_DWORD)result )
        return (*(__int64 (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v17 + 8LL))(v17);
    }
  }
  return result;
}
