/*
 * XREFs of ?Create@InputContext@@SAJPEAPEAV1@@Z @ 0x180023D94
 * Callers:
 *     ?DoConvergedHitTestCallback@Win32kInterop@@AEAAJPEAU_InputHitTestRequest@@PEAU_InputHitTestResult@@@Z @ 0x18000B550 (-DoConvergedHitTestCallback@Win32kInterop@@AEAAJPEAU_InputHitTestRequest@@PEAU_InputHitTestResul.c)
 *     ?GetTargetingInfo@KeyboardProcessor@@AEAAJPEAPEAVInputContext@@PEAPEAUIInputTarget@@@Z @ 0x180048234 (-GetTargetingInfo@KeyboardProcessor@@AEAAJPEAPEAVInputContext@@PEAPEAUIInputTarget@@@Z.c)
 *     ?DeliverToContextualProcessing@Win32kInterop@@AEAAXPEAUInputInfo@@V?$function@$$A6AXPEAVInputContext@@@Z@std@@V?$function@$$A6AXPEAUIInputTarget@@@Z@4@@Z @ 0x1800B0140 (-DeliverToContextualProcessing@Win32kInterop@@AEAAXPEAUInputInfo@@V-$function@$$A6AXPEAVInputCon.c)
 *     ?OnInputReport@NonPointerProcessor@@UEAAJPEAUInputInfo@@@Z @ 0x180136A40 (-OnInputReport@NonPointerProcessor@@UEAAJPEAUInputInfo@@@Z.c)
 *     ?OnInputReport@ButtonProcessor@@UEAAJPEAUInputInfo@@@Z @ 0x1801880C0 (-OnInputReport@ButtonProcessor@@UEAAJPEAUInputInfo@@@Z.c)
 *     ?OnInputReport@GazeProcessor@@UEAAJPEAUInputInfo@@@Z @ 0x180188EF0 (-OnInputReport@GazeProcessor@@UEAAJPEAUInputInfo@@@Z.c)
 * Callees:
 *     ??0InputContext@@QEAA@XZ @ 0x180024B94 (--0InputContext@@QEAA@XZ.c)
 *     ??2RefCountedObject@@SAPEAX_K@Z @ 0x18002836C (--2RefCountedObject@@SAPEAX_K@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180035710 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     memset_0 @ 0x18003C460 (memset_0.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall InputContext::Create(struct InputContext **a1)
{
  InputContext *v2; // rax
  InputContext *v3; // rbx
  unsigned int v5; // ebx
  __int64 v6; // rdx
  int v7; // [rsp+20h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  if ( a1 )
  {
    v2 = (InputContext *)RefCountedObject::operator new(0xB8uLL);
    v3 = v2;
    if ( v2 )
    {
      memset_0(v2, 0, 0xB8uLL);
      v2 = InputContext::InputContext(v3);
    }
    if ( v2 )
    {
      *a1 = v2;
      return 0LL;
    }
    v5 = -2147024882;
    v6 = 65LL;
  }
  else
  {
    v5 = -2147024809;
    v6 = 63LL;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v6,
    (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\ContextualProcessors\\inc\\IContextualProcessor.h",
    (const char *)v5,
    v7);
  return v5;
}
