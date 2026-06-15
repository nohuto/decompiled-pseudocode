/*
 * XREFs of sub_18000B0FC @ 0x18000B0FC
 * Callers:
 *     sub_18000B210 @ 0x18000B210 (sub_18000B210.c)
 *     sub_18000B460 @ 0x18000B460 (sub_18000B460.c)
 * Callees:
 *     sub_1800050FC @ 0x1800050FC (sub_1800050FC.c)
 *     sub_180005724 @ 0x180005724 (sub_180005724.c)
 *     sub_18000CDD8 @ 0x18000CDD8 (sub_18000CDD8.c)
 *     _guard_dispatch_icall_nop @ 0x18003AE40 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall sub_18000B0FC(__int64 a1, int a2, __int64 a3, __int64 a4)
{
  unsigned int v6; // ebx
  HANDLE ProcessHeap; // rax
  _DWORD *v8; // rax
  _DWORD *v9; // rdi
  __int64 v10; // rcx
  ATL::CAtlException *v12; // rbx
  ATL::CAtlException *v13; // [rsp+20h] [rbp-28h] BYREF
  int v14; // [rsp+58h] [rbp+10h]

  v6 = 0;
  *(_DWORD *)(a1 + 8) = a2;
  *(_QWORD *)a1 = a4;
  ProcessHeap = GetProcessHeap();
  v8 = HeapAlloc(ProcessHeap, 0, 0x18uLL);
  v9 = v8;
  if ( v8 )
  {
    v8[2] = 1;
    *(_QWORD *)v8 = &off_18003EDA0;
    v8[4] = 0;
  }
  else
  {
    v9 = 0LL;
  }
  v10 = *(_QWORD *)(a1 + 24);
  if ( v10 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v10 + 16LL))(v10);
  *(_QWORD *)(a1 + 24) = v9;
  if ( !v9 )
  {
    v6 = -2147024882;
LABEL_11:
    if ( off_18004F000 != (_UNKNOWN *)&off_18004F000
      && (*((_DWORD *)off_18004F000 + 7) & 0x8000000) != 0
      && *((_BYTE *)off_18004F000 + 25) >= 2u )
    {
      sub_1800050FC(*((_QWORD *)off_18004F000 + 2), 0xBu, &MessageGuid, v6);
    }
    sub_180005724("CDuckingNotification::Init", 369, v6);
    return v6;
  }
  if ( !a3 )
    return v6;
  try
  {
    sub_18000CDD8(a1 + 16, a3);
  }
  catch ( ATL::CAtlException *v13 )
  {
    v12 = v13;
    if ( *(_DWORD *)v13 == -1073741571 )
      o__resetstkoflw();
    v14 = *(_DWORD *)v12;
    v6 = *(_DWORD *)v12;
    if ( v14 < 0 )
      goto LABEL_11;
  }
  return v6;
}
