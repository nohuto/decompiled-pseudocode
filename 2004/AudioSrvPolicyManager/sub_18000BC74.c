/*
 * XREFs of sub_18000BC74 @ 0x18000BC74
 * Callers:
 *     sub_18000DB00 @ 0x18000DB00 (sub_18000DB00.c)
 * Callees:
 *     sub_18000A610 @ 0x18000A610 (sub_18000A610.c)
 *     sub_18000C840 @ 0x18000C840 (sub_18000C840.c)
 *     _guard_dispatch_icall_nop @ 0x18003AE40 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall sub_18000BC74(_QWORD **a1, __int64 a2)
{
  const wchar_t *v4; // rax
  unsigned int v5; // ebx
  ATL::CAtlException *v6; // r14
  ATL::CAtlException *v7; // rax
  ATL::CAtlException *v10; // rbx
  ATL::CAtlException *v11[4]; // [rsp+20h] [rbp-38h] BYREF
  __int16 v12; // [rsp+40h] [rbp-18h]

  if ( off_18004F000 != (_UNKNOWN *)&off_18004F000
    && (*((_DWORD *)off_18004F000 + 7) & 0x8000000) != 0
    && *((_BYTE *)off_18004F000 + 25) >= 4u )
  {
    v4 = (const wchar_t *)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a2 + 64LL))(a2);
    sub_18000A610(*((_QWORD *)off_18004F000 + 2), 0x1Au, &MessageGuid, v4);
  }
  v5 = 0;
  v6 = (ATL::CAtlException *)*a1[1];
  try
  {
    v7 = (ATL::CAtlException *)(*(__int64 (**)(void))(*(_QWORD *)a2 + 64LL))();
    v11[1] = (ATL::CAtlException *)off_18003ED70;
    v11[2] = v6;
    v11[3] = v7;
    v12 = 257;
    sub_18000C840((LPCRITICAL_SECTION)(*a1 + 9));
  }
  catch ( ATL::CAtlException *v11 )
  {
    v10 = v11[0];
    if ( *(_DWORD *)v11[0] == -1073741571 )
      o__resetstkoflw();
    return *(unsigned int *)v10;
  }
  return v5;
}
