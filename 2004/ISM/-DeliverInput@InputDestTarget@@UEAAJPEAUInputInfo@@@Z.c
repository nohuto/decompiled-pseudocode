/*
 * XREFs of ?DeliverInput@InputDestTarget@@UEAAJPEAUInputInfo@@@Z @ 0x18013A4C0
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180035770 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18003C6C0 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18004A6B0 (_guard_dispatch_icall_nop.c)
 *     ?DeliverInput@ISM@InputTraceLogging@@SAXPEBUInputInfo@@@Z @ 0x1800B6880 (-DeliverInput@ISM@InputTraceLogging@@SAXPEBUInputInfo@@@Z.c)
 *     ?DeliverInputReport@InputTarget@InputETW@@SAXPEAUInputInfo@@@Z @ 0x1800B6928 (-DeliverInputReport@InputTarget@InputETW@@SAXPEAUInputInfo@@@Z.c)
 *     ??0InputEventPayloadBuffer@@QEAA@UInputEventPayloadHeader@@PEAUInputInfo@@@Z @ 0x1800C4100 (--0InputEventPayloadBuffer@@QEAA@UInputEventPayloadHeader@@PEAUInputInfo@@@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall InputDestTarget::DeliverInput(
        InputDestTarget *this,
        struct InputInfo *a2,
        __int64 a3,
        const char *a4)
{
  int v6; // edi
  const struct std::nothrow_t *v7; // rdx
  const char *v8; // r9
  const struct std::nothrow_t *v9; // rdx
  __int64 result; // rax
  int v11; // [rsp+30h] [rbp-18h] BYREF
  void *v12; // [rsp+38h] [rbp-10h]
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]

  try
  {
    InputEventPayloadBuffer::InputEventPayloadBuffer((__int64)&v11, 5, (int *)a2, a4);
    v6 = (*(__int64 (__fastcall **)(struct IInputDeliveryServer *, char *, void *, _QWORD))(*(_QWORD *)NonBamoInputDeliveryServer::s_pNonBamoInputDeliveryServer
                                                                                          + 24LL))(
           NonBamoInputDeliveryServer::s_pNonBamoInputDeliveryServer,
           (char *)this + 32,
           v12,
           v11);
    InputETW::InputTarget::DeliverInputReport(a2);
    InputTraceLogging::ISM::DeliverInput(a2);
    if ( v6 >= 0 )
    {
      if ( v12 )
        operator delete(v12, v7);
      result = 0LL;
    }
    else
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x32,
        (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\dwm\\lib\\inputdesttarget.cpp",
        (const char *)(unsigned int)v6);
      if ( v12 )
        operator delete(v12, v9);
      result = (unsigned int)v6;
    }
  }
  catch ( ... )
  {
    return (unsigned int)wil::details::in1diag3::Return_CaughtException(
                           retaddr,
                           (void *)0x39,
                           (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\dwm\\lib\\inputdesttarget.cpp",
                           v8);
  }
  return result;
}
