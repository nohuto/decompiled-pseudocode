/*
 * XREFs of ?OnKernelInputEvent@NonBamoInputDeliveryServer@@AEAAXPEBUtagQMSGINPUTREPORT@@@Z @ 0x1801039B4
 * Callers:
 *     std::_Func_impl_no_alloc__lambda_21198bd2221c6ebb41a3014c5bd670c5__void_tagQMSGINPUTREPORT_const___::_Do_call @ 0x180103B10 (std--_Func_impl_no_alloc__lambda_21198bd2221c6ebb41a3014c5bd670c5__void_tagQMSGINPU_ea_180103B10.c)
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18003C660 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18004ACA0 (_guard_dispatch_icall_nop.c)
 *     ??0InputEventPayloadBuffer@@QEAA@UInputEventPayloadHeader@@PEAUInputInfo@@@Z @ 0x1800C45C0 (--0InputEventPayloadBuffer@@QEAA@UInputEventPayloadHeader@@PEAUInputInfo@@@Z.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall NonBamoInputDeliveryServer::OnKernelInputEvent(
        NonBamoInputDeliveryServer *this,
        const struct tagQMSGINPUTREPORT *a2,
        __int64 a3,
        const char *a4)
{
  const struct std::nothrow_t *v5; // rdx
  int v6; // [rsp+30h] [rbp-59h] BYREF
  void *v7; // [rsp+38h] [rbp-51h]
  int v8[4]; // [rsp+40h] [rbp-49h] BYREF
  __int64 v9; // [rsp+50h] [rbp-39h]
  int v10; // [rsp+58h] [rbp-31h]
  __int128 v11; // [rsp+60h] [rbp-29h]
  __int128 v12; // [rsp+70h] [rbp-19h]
  __int128 v13; // [rsp+80h] [rbp-9h]
  __int128 v14; // [rsp+90h] [rbp+7h]
  __int128 v15; // [rsp+A0h] [rbp+17h]
  __int128 v16; // [rsp+B0h] [rbp+27h]
  __int128 v17; // [rsp+C0h] [rbp+37h]
  __int64 v18; // [rsp+D0h] [rbp+47h]

  v11 = *(_OWORD *)a2;
  v12 = *((_OWORD *)a2 + 1);
  v13 = *((_OWORD *)a2 + 2);
  v14 = *((_OWORD *)a2 + 3);
  v15 = *((_OWORD *)a2 + 4);
  v16 = *((_OWORD *)a2 + 5);
  v17 = *((_OWORD *)a2 + 6);
  v18 = *((_QWORD *)a2 + 14);
  v8[0] = 0x800000;
  v8[1] = 0;
  v8[2] = 0;
  v9 = 0LL;
  v10 = 152;
  InputEventPayloadBuffer::InputEventPayloadBuffer((__int64)&v6, 5, v8, a4);
  (*(void (__fastcall **)(struct IInputDeliveryServer *, char *, void *, _QWORD))(*(_QWORD *)NonBamoInputDeliveryServer::s_pNonBamoInputDeliveryServer
                                                                                + 24LL))(
    NonBamoInputDeliveryServer::s_pNonBamoInputDeliveryServer,
    (char *)a2 + 80,
    v7,
    v6);
  if ( v7 )
    operator delete(v7, v5);
}
