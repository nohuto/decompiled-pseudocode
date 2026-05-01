/*
 * XREFs of ??$As@UIAppLayoutBuilder@@@?$ComPtr@UIAppLayout@@@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@UIAppLayoutBuilder@@@WRL@Microsoft@@@Details@12@@Z @ 0x1800B7240
 * Callers:
 *     ?ShouldHandleOperation@PPIWin32VtcLayoutOperation@@UEAAJPEAUIApplicationView@@W4LAYOUT_OPERATION_TYPE@@PEAH@Z @ 0x1800B87C0 (-ShouldHandleOperation@PPIWin32VtcLayoutOperation@@UEAAJPEAUIApplicationView@@W4LAYOUT_OPERATION.c)
 *     ?_FindAppOnLayoutByActivationTime@PPIWin32VtcLayoutOperation@@AEAAJW4ActivationTime@1@PEAPEAUIApplicationView@@W4LayoutType@1@@Z @ 0x1800B91A0 (-_FindAppOnLayoutByActivationTime@PPIWin32VtcLayoutOperation@@AEAAJW4ActivationTime@1@PEAPEAUIAp.c)
 *     ?_FindVTCViewOnLayout@PPIWin32VtcLayoutOperation@@MEAAJPEAPEAUIApplicationView@@W4LayoutType@1@@Z @ 0x1800B9310 (-_FindVTCViewOnLayout@PPIWin32VtcLayoutOperation@@MEAAJPEAPEAUIApplicationView@@W4LayoutType@1@@.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18006B7D0 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 */

__int64 __fastcall Microsoft::WRL::ComPtr<IAppLayout>::As<IAppLayoutBuilder>(_QWORD *a1, __int64 *a2)
{
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(a2);
  return (**(__int64 (__fastcall ***)(_QWORD, GUID *, __int64 *))*a1)(
           *a1,
           &GUID_dad20bf4_9130_4ecb_bcce_cab826dcafae,
           a2);
}
