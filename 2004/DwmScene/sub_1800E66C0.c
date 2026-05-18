/*
 * XREFs of sub_1800E66C0 @ 0x1800E66C0
 * Callers:
 *     <none>
 * Callees:
 *     sub_180010F3C @ 0x180010F3C (sub_180010F3C.c)
 *     sub_1800183F4 @ 0x1800183F4 (sub_1800183F4.c)
 *     sub_180018458 @ 0x180018458 (sub_180018458.c)
 *     sub_1800839A4 @ 0x1800839A4 (sub_1800839A4.c)
 *     _guard_dispatch_icall_nop @ 0x18011FBB0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall sub_1800E66C0(__int64 a1, __int64 *a2)
{
  __int64 v3; // rbx
  __int64 result; // rax
  __int64 v5; // r8
  _QWORD *v6; // rdx
  __int64 v7; // rcx
  signed __int32 v8; // eax
  bool v9; // zf
  __int64 v10; // rbx
  __int128 v11; // [rsp+20h] [rbp-10h] BYREF
  __int64 *v12; // [rsp+50h] [rbp+20h] BYREF
  __int64 *v13; // [rsp+58h] [rbp+28h]
  __int64 *v14; // [rsp+60h] [rbp+30h]

  v11 = 0LL;
  v3 = *a2;
  sub_1800839A4(*a2);
  v12 = 0LL;
  v13 = *(__int64 **)(v3 + 384);
  v14 = *(__int64 **)(v3 + 376);
  result = (__int64)sub_180018458(&v12, v14, v13, 0);
  if ( v12 == *(__int64 **)(v3 + 384) )
    v11 = 0LL;
  else
    result = (__int64)sub_1800183F4((__int64 *)&v11, v12);
  v5 = v11;
  if ( !(_QWORD)v11 )
    goto LABEL_10;
  result = *(_QWORD *)(a1 + 8);
  v6 = *(_QWORD **)(result + 8);
  if ( *(_QWORD **)(result + 16) == v6 )
  {
    result = sub_180010F3C((_QWORD *)result, v6, &v11);
LABEL_10:
    v7 = *((_QWORD *)&v11 + 1);
    goto LABEL_11;
  }
  *v6 = 0LL;
  v6[1] = 0LL;
  v7 = *((_QWORD *)&v11 + 1);
  if ( *((_QWORD *)&v11 + 1) )
  {
    _InterlockedIncrement((volatile signed __int32 *)(*((_QWORD *)&v11 + 1) + 8LL));
    v7 = *((_QWORD *)&v11 + 1);
    v5 = v11;
  }
  *v6 = v5;
  v6[1] = v7;
  *(_QWORD *)(result + 8) += 16LL;
LABEL_11:
  if ( v7 )
  {
    v8 = _InterlockedExchangeAdd((volatile signed __int32 *)(v7 + 8), 0xFFFFFFFF);
    v9 = v8 == 1;
    result = (unsigned int)(v8 - 1);
    if ( v9 )
    {
      v10 = *((_QWORD *)&v11 + 1);
      (***((void (__fastcall ****)(_QWORD))&v11 + 1))(*((_QWORD *)&v11 + 1));
      result = (unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v10 + 12));
      if ( !(_DWORD)result )
        return (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)&v11 + 1) + 8LL))(*((_QWORD *)&v11 + 1));
    }
  }
  return result;
}
