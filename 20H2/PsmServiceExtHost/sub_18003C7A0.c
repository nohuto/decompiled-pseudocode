/*
 * XREFs of sub_18003C7A0 @ 0x18003C7A0
 * Callers:
 *     sub_18003C6F0 @ 0x18003C6F0 (sub_18003C6F0.c)
 * Callees:
 *     sub_18003C89C @ 0x18003C89C (sub_18003C89C.c)
 *     _guard_dispatch_icall_nop @ 0x180046860 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall sub_18003C7A0(__int64 a1, __int64 a2)
{
  unsigned int v2; // ebx
  HRESULT ClassObject; // edi
  __int64 v6; // [rsp+30h] [rbp-10h] BYREF
  __int64 v7; // [rsp+70h] [rbp+30h] BYREF
  LPVOID ppv; // [rsp+80h] [rbp+40h] BYREF
  __int64 v9; // [rsp+88h] [rbp+48h] BYREF

  v7 = a1;
  v2 = 0;
  ppv = 0LL;
  ClassObject = CoGetClassObject(&rclsid, 1u, 0LL, &riid, &ppv);
  if ( ClassObject >= 0 )
  {
    ClassObject = (*(__int64 (__fastcall **)(LPVOID, _QWORD, _QWORD, void *, __int64 *))(*(_QWORD *)ppv + 24LL))(
                    ppv,
                    *(unsigned int *)(a2 + 88),
                    0LL,
                    &unk_180095B08,
                    &v9);
    if ( ClassObject >= 0 )
    {
      ClassObject = sub_18003C89C(&v6, &v7, a2 + 88);
      if ( ClassObject >= 0 )
      {
        ClassObject = (*(__int64 (__fastcall **)(__int64, __int64, __int64))(*(_QWORD *)v9 + 152LL))(v9, v6, a2 + 128);
        if ( ClassObject >= 0 )
        {
          ClassObject = 0;
          *(_QWORD *)(a2 + 112) = v9;
          *(_QWORD *)(a2 + 120) = v6;
        }
      }
    }
  }
  if ( ppv )
    (*(void (__fastcall **)(LPVOID))(*(_QWORD *)ppv + 16LL))(ppv);
  if ( ClassObject < 0 )
    return ClassObject | 0xC0000000;
  return v2;
}
