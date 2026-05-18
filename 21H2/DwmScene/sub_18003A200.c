/*
 * XREFs of sub_18003A200 @ 0x18003A200
 * Callers:
 *     <none>
 * Callees:
 *     sub_18002F66C @ 0x18002F66C (sub_18002F66C.c)
 *     sub_180042A04 @ 0x180042A04 (sub_180042A04.c)
 *     sub_1800D2E9C @ 0x1800D2E9C (sub_1800D2E9C.c)
 *     _guard_dispatch_icall_nop @ 0x180125480 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall sub_18003A200(__int64 a1, _QWORD *a2, unsigned int a3)
{
  __int64 *v6; // rcx
  char v7; // di
  __int64 v8; // rax
  volatile signed __int32 *v9; // rbx
  volatile signed __int32 *v10; // rbx
  __int64 v11; // rbx
  __int64 v12; // rcx
  __int64 v13; // rcx
  __int64 v14; // r8
  __int64 result; // rax
  __int64 v16; // [rsp+30h] [rbp-30h]
  volatile signed __int32 *v17; // [rsp+38h] [rbp-28h]
  char v18; // [rsp+40h] [rbp-20h] BYREF
  volatile signed __int32 *v19; // [rsp+48h] [rbp-18h]
  _BYTE v20[8]; // [rsp+50h] [rbp-10h] BYREF
  volatile signed __int32 *v21; // [rsp+58h] [rbp-8h]
  __int64 v22; // [rsp+90h] [rbp+30h] BYREF

  LODWORD(v22) = 0;
  if ( *a2 )
  {
    v6 = (__int64 *)sub_1800D2E9C(*a2, v20, *(unsigned int *)(a1 + 88));
    v7 = 1;
    v8 = *v6;
  }
  else
  {
    v19 = 0LL;
    v6 = (__int64 *)&v18;
    v7 = 2;
    v8 = 0LL;
  }
  v16 = v8;
  v17 = (volatile signed __int32 *)v6[1];
  *v6 = 0LL;
  v6[1] = 0LL;
  if ( (v7 & 2) != 0 )
  {
    v7 &= ~2u;
    if ( v19 )
    {
      if ( !_InterlockedDecrement(v19 + 2) )
      {
        v9 = v19;
        (**(void (__fastcall ***)(volatile signed __int32 *))v19)(v19);
        if ( !_InterlockedDecrement(v9 + 3) )
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v19 + 8LL))(v19);
      }
    }
  }
  if ( (v7 & 1) != 0 )
  {
    v10 = v21;
    if ( v21 )
    {
      if ( !_InterlockedDecrement(v21 + 2) )
      {
        (**(void (__fastcall ***)(volatile signed __int32 *))v10)(v10);
        if ( !_InterlockedDecrement(v10 + 3) )
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v10 + 8LL))(v10);
      }
    }
  }
  if ( v16 )
  {
    v11 = *(_QWORD *)sub_180042A04(v16, &v22);
    v12 = v22;
    if ( v22 )
    {
      v22 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v12 + 16LL))(v12);
    }
    v13 = *(_QWORD *)(*a2 + 112LL);
    if ( v13 )
      LODWORD(v13) = *(_DWORD *)(v13 + 20);
    v14 = (unsigned int)sub_18002F66C(v13, 0);
  }
  else
  {
    v11 = 0LL;
    v14 = 0LL;
  }
  result = (*(__int64 (__fastcall **)(_QWORD, __int64, __int64, _QWORD))(**(_QWORD **)(a1 + 144) + 152LL))(
             *(_QWORD *)(a1 + 144),
             v11,
             v14,
             a3);
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
