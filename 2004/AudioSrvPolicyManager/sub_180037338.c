/*
 * XREFs of sub_180037338 @ 0x180037338
 * Callers:
 *     sub_180037620 @ 0x180037620 (sub_180037620.c)
 * Callees:
 *     sub_180003AB0 @ 0x180003AB0 (sub_180003AB0.c)
 *     sub_180037A30 @ 0x180037A30 (sub_180037A30.c)
 *     _XMMI2_FP_Emulation @ 0x180037AE0 (_XMMI2_FP_Emulation.c)
 *     sub_180037CF8 @ 0x180037CF8 (sub_180037CF8.c)
 *     sub_180037F08 @ 0x180037F08 (sub_180037F08.c)
 *     sub_1800383AC @ 0x1800383AC (sub_1800383AC.c)
 *     sub_1800384A4 @ 0x1800384A4 (sub_1800384A4.c)
 *     sub_18003850C @ 0x18003850C (sub_18003850C.c)
 *     _guard_dispatch_icall_nop @ 0x18003AE40 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall sub_180037338(__int64 a1, __int64 a2, _DWORD *a3)
{
  HANDLE ProcessHeap; // rax
  LPVOID *v6; // rax
  LPVOID *v7; // rdi
  LPVOID *v8; // rbx
  HANDLE v9; // rax
  int v10; // esi
  int v11; // eax
  int v12; // eax
  __int64 v13; // rax
  __int64 *v14; // rdi
  int v15; // eax
  HANDLE v16; // rax
  __int64 v18; // [rsp+20h] [rbp-30h] BYREF
  __int64 *v19; // [rsp+28h] [rbp-28h] BYREF
  __int64 v20; // [rsp+30h] [rbp-20h] BYREF
  _QWORD v21[3]; // [rsp+38h] [rbp-18h] BYREF
  __int64 retaddr; // [rsp+78h] [rbp+28h]

  ProcessHeap = GetProcessHeap();
  v6 = (LPVOID *)HeapAlloc(ProcessHeap, 0, 0x20uLL);
  v7 = v6;
  if ( v6 )
  {
    v6[3] = 0LL;
    *v6 = 0LL;
    v6[1] = 0LL;
    v6[2] = 0LL;
  }
  else
  {
    v7 = 0LL;
  }
  v8 = v7;
  if ( !v7 || !(unsigned __int8)sub_180037A30(v7) )
  {
    v8 = 0LL;
    if ( !v7 )
    {
LABEL_36:
      v10 = -2147418113;
      sub_180003AB0(
        retaddr,
        43,
        (__int64)"onecoreuap\\base\\embedded\\sys\\lockdown\\config\\lib\\assignedaccessconfig.cpp",
        -2147418113);
      goto LABEL_37;
    }
    if ( *v7 )
    {
      CoTaskMemFree(*v7);
      *v7 = 0LL;
    }
    v7[1] = 0LL;
    v7[2] = 0LL;
    v9 = GetProcessHeap();
    HeapFree(v9, 0, v7);
    v7 = 0LL;
  }
  if ( !v7 )
    goto LABEL_36;
  if ( !(unsigned __int8)XMMI2_FP_Emulation(v8, a1)
    && !(unsigned __int8)sub_180037CF8(v8)
    && !(unsigned __int8)sub_180037F08(v8) )
  {
    *a3 = 0;
    v10 = 0;
    goto LABEL_37;
  }
  sub_1800383AC(v21);
  *a3 = 0;
  v20 = a1;
  v18 = 0LL;
  v11 = sub_1800384A4(v21, &v18);
  v10 = v11;
  if ( v11 < 0 )
  {
    sub_180003AB0(
      retaddr,
      191,
      (__int64)"onecoreuap\\base\\embedded\\sys\\lockdown\\config\\lib\\aamanagerhelper.cpp",
      v11);
    goto LABEL_17;
  }
  v19 = 0LL;
  v12 = sub_18003850C(&v20, v18, &v19);
  v10 = v12;
  if ( v12 < 0 )
  {
    sub_180003AB0(
      retaddr,
      203,
      (__int64)"onecoreuap\\base\\embedded\\sys\\lockdown\\config\\lib\\aamanagerhelper.cpp",
      v12);
    if ( !v19 )
      goto LABEL_17;
    v13 = *v19;
LABEL_22:
    (*(void (**)(void))(v13 + 16))();
LABEL_17:
    if ( v18 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v18 + 16LL))(v18);
    goto LABEL_34;
  }
  v14 = v19;
  if ( !v19 )
  {
    if ( v18 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v18 + 16LL))(v18);
    goto LABEL_26;
  }
  v15 = (*(__int64 (__fastcall **)(__int64 *, _DWORD *))(*v19 + 80))(v19, a3);
  v10 = v15;
  if ( v15 < 0 )
  {
    sub_180003AB0(
      retaddr,
      206,
      (__int64)"onecoreuap\\base\\embedded\\sys\\lockdown\\config\\lib\\aamanagerhelper.cpp",
      v15);
    v13 = *v14;
    goto LABEL_22;
  }
  (*(void (__fastcall **)(__int64 *))(*v14 + 16))(v14);
  if ( v18 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v18 + 16LL))(v18);
  v10 = 0;
LABEL_34:
  if ( v10 >= 0 )
  {
LABEL_26:
    v10 = 0;
    goto LABEL_27;
  }
  sub_180003AB0(
    retaddr,
    51,
    (__int64)"onecoreuap\\base\\embedded\\sys\\lockdown\\config\\lib\\assignedaccessconfig.cpp",
    v10);
LABEL_27:
  if ( v21[0] )
    (*(void (__fastcall **)(_QWORD))(*(_QWORD *)v21[0] + 16LL))(v21[0]);
LABEL_37:
  if ( v8 )
  {
    if ( *v8 )
    {
      CoTaskMemFree(*v8);
      *v8 = 0LL;
    }
    v8[1] = 0LL;
    v8[2] = 0LL;
    v16 = GetProcessHeap();
    HeapFree(v16, 0, v8);
  }
  return (unsigned int)v10;
}
