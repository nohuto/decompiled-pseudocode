/*
 * XREFs of ?OnDeviceUpdate@HeatProcessor@@UEAAJPEAUDeviceInfo@@@Z @ 0x1801896D0
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180035770 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18004A6B0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall HeatProcessor::OnDeviceUpdate(HeatProcessor *this, struct DeviceInfo *a2)
{
  __int64 v2; // rcx
  int v3; // eax
  unsigned int v4; // ebx
  int v6; // [rsp+20h] [rbp-28h] BYREF
  __int16 v7; // [rsp+24h] [rbp-24h]
  __int16 v8; // [rsp+26h] [rbp-22h]
  __int16 v9; // [rsp+28h] [rbp-20h]
  int v10; // [rsp+2Ch] [rbp-1Ch]
  __int64 v11; // [rsp+30h] [rbp-18h]
  int v12; // [rsp+38h] [rbp-10h]
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]

  if ( *((_DWORD *)a2 + 1) != 2048 )
    return 0LL;
  v2 = *((_QWORD *)this + 11);
  if ( !v2 )
    return 0LL;
  if ( *((_BYTE *)a2 + 38) != 1 )
    return 0LL;
  v6 = *(_DWORD *)a2;
  v7 = *((_WORD *)a2 + 16);
  v8 = *((_WORD *)a2 + 17);
  v9 = *((_WORD *)a2 + 18);
  v11 = *(_QWORD *)((char *)a2 + 20);
  v12 = *((_DWORD *)a2 + 7);
  v10 = 1;
  v3 = (*(__int64 (__fastcall **)(__int64, int *))(*(_QWORD *)v2 + 40LL))(v2, &v6);
  v4 = v3;
  if ( v3 >= 0 )
    return 0LL;
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x10C,
    (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\heat\\lib\\heatprocessor.cpp",
    (const char *)(unsigned int)v3);
  return v4;
}
