/*
 * XREFs of sub_1800E5270 @ 0x1800E5270
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180074470 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall sub_1800E5270(__int64 a1, _QWORD *a2)
{
  HRESULT v4; // eax
  int v5; // ebx
  LPVOID v6; // rax
  LPVOID v7; // rcx
  LPVOID ppv; // [rsp+60h] [rbp+30h] BYREF
  __int64 v10; // [rsp+68h] [rbp+38h] BYREF

  ppv = 0LL;
  v4 = CoCreateInstance(&stru_18015E470, 0LL, 0x17u, &stru_18015E460, &ppv);
  v10 = 0LL;
  v5 = v4;
  if ( v4 < 0 )
    goto LABEL_8;
  v5 = (*(__int64 (__fastcall **)(_QWORD, __int64 *))(**(_QWORD **)(a1 + 88) + 56LL))(*(_QWORD *)(a1 + 88), &v10);
  if ( v5 < 0
    || (v5 = (*(__int64 (__fastcall **)(LPVOID, _QWORD, __int64))(*(_QWORD *)ppv + 24LL))(
               ppv,
               *(_QWORD *)(a1 + 80),
               v10),
        v5 < 0) )
  {
    v7 = ppv;
  }
  else
  {
    v6 = ppv;
    v7 = 0LL;
    ppv = 0LL;
    *a2 = v6;
  }
  if ( v10 )
  {
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v10 + 16LL))(v10);
LABEL_8:
    v7 = ppv;
  }
  if ( v7 )
    (*(void (__fastcall **)(LPVOID))(*(_QWORD *)v7 + 16LL))(v7);
  return (unsigned int)v5;
}
