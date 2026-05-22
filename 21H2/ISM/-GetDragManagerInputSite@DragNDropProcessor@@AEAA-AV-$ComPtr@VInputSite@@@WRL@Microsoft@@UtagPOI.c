/*
 * XREFs of ?GetDragManagerInputSite@DragNDropProcessor@@AEAA?AV?$ComPtr@VInputSite@@@WRL@Microsoft@@UtagPOINT@@W4InputType@@PEAVBamoDragManagerClientProxy@@@Z @ 0x1800F9708
 * Callers:
 *     ?CancelDrag@DragNDropProcessor@@QEAAJKPEAVBamoDragManagerClientProxy@@@Z @ 0x1800F8A74 (-CancelDrag@DragNDropProcessor@@QEAAJKPEAVBamoDragManagerClientProxy@@@Z.c)
 *     ?GetDragSourceInputSite@DragNDropProcessor@@AEAA?AV?$ComPtr@VInputSite@@@WRL@Microsoft@@UtagPOINT@@W4InputType@@PEAVBamoDragManagerClientProxy@@@Z @ 0x1800F981C (-GetDragSourceInputSite@DragNDropProcessor@@AEAA-AV-$ComPtr@VInputSite@@@WRL@Microsoft@@UtagPOIN.c)
 *     ?StartAnimation@DragNDropProcessor@@QEAAJKPEAVBamoDragManagerClientProxy@@@Z @ 0x1800FB098 (-StartAnimation@DragNDropProcessor@@QEAAJKPEAVBamoDragManagerClientProxy@@@Z.c)
 *     ?StartDrag@DragNDropProcessor@@QEAAJK_KPEAVBamoDragManagerClientProxy@@@Z @ 0x1800FB4CC (-StartDrag@DragNDropProcessor@@QEAAJK_KPEAVBamoDragManagerClientProxy@@@Z.c)
 * Callees:
 *     ?_Tidy@?$vector@V?$ComPtr@VInputSite@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@VInputSite@@@WRL@Microsoft@@@std@@@std@@AEAAXXZ @ 0x1800113C4 (-_Tidy@-$vector@V-$ComPtr@VInputSite@@@WRL@Microsoft@@V-$allocator@V-$ComPtr@VInputSite@@@WRL@Mi.c)
 *     ?InternalRelease@?$ComPtr@VBamoCustomCursorControllerClientProxy@@@WRL@Microsoft@@IEAAKXZ @ 0x180011AD4 (-InternalRelease@-$ComPtr@VBamoCustomCursorControllerClientProxy@@@WRL@Microsoft@@IEAAKXZ.c)
 *     __security_check_cookie @ 0x18003C220 (__security_check_cookie.c)
 *     ??4?$ComPtr@UIRawInputClient@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z @ 0x180044F88 (--4-$ComPtr@UIRawInputClient@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18004B280 (_guard_dispatch_icall_nop.c)
 *     ??$GetAttachedObject@UIDragManagerClientProxy@@VBamoDragManagerClientProxy@@@InputSite@@QEAA?AV?$ComPtr@VBamoDragManagerClientProxy@@@WRL@Microsoft@@XZ @ 0x1800F6510 (--$GetAttachedObject@UIDragManagerClientProxy@@VBamoDragManagerClientProxy@@@InputSite@@QEAA-AV-.c)
 *     ?ConvertInputTypeToPointerType@HitTestHelper@@SA?BHW4InputType@@@Z @ 0x18014939C (-ConvertInputTypeToPointerType@HitTestHelper@@SA-BHW4InputType@@@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 *__fastcall DragNDropProcessor::GetDragManagerInputSite(
        __int64 a1,
        __int64 *a2,
        __int64 a3,
        unsigned int a4,
        __int64 a5)
{
  unsigned int v6; // eax
  __int64 v7; // rdx
  __int64 v8; // r8
  __int64 v9; // r10
  __int64 v10; // r8
  __int64 *v11; // rbx
  __int64 *v12; // rsi
  __int64 v13; // rdx
  __int64 v15[3]; // [rsp+38h] [rbp-79h] BYREF
  _BYTE v16[8]; // [rsp+50h] [rbp-61h] BYREF
  _QWORD v17[3]; // [rsp+58h] [rbp-59h] BYREF
  __int64 v18; // [rsp+70h] [rbp-41h]

  v15[1] = (__int64)a2;
  *a2 = 0LL;
  v6 = HitTestHelper::ConvertInputTypeToPointerType(a4, **(_QWORD **)(a1 + 24));
  (*(void (__fastcall **)(__int64, _BYTE *, __int64, _QWORD))(v7 + 32))(v9, v16, v8, v6);
  v11 = (__int64 *)v17[0];
  v12 = (__int64 *)v17[1];
  while ( v11 != v12 )
  {
    InputSite::GetAttachedObject<IDragManagerClientProxy,BamoDragManagerClientProxy>(*v11, v15);
    if ( v15[0] && v15[0] == a5 )
    {
      Microsoft::WRL::ComPtr<IRawInputClient>::operator=(a2, v11);
      Microsoft::WRL::ComPtr<BamoCustomCursorControllerClientProxy>::InternalRelease(v15);
      break;
    }
    Microsoft::WRL::ComPtr<BamoCustomCursorControllerClientProxy>::InternalRelease(v15);
    ++v11;
  }
  v13 = v18 - 1;
  if ( (unsigned __int64)(v18 - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
    NtCloseCompositionInputSink(v18);
  std::vector<Microsoft::WRL::ComPtr<InputSite>>::_Tidy(v17, v13, v10);
  return a2;
}
