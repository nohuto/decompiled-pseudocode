/*
 * XREFs of ?DeliverInput@MagnifierToggleTarget@@UEAAJPEAUInputInfo@@@Z @ 0x18017E7E0
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$com_ptr_t@VAsyncHRESULTPrincipal@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x18001054C (--1-$com_ptr_t@VAsyncHRESULTPrincipal@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?ToggleDetected@BamoMagnifierControllerProxy@@UEAAJAEBUPoint@Foundation@Windows@@@Z @ 0x180100E10 (-ToggleDetected@BamoMagnifierControllerProxy@@UEAAJAEBUPoint@Foundation@Windows@@@Z.c)
 *     ?AveragePoint@@YA?AUPoint@Foundation@Windows@@PEBUInputInfo@@V?$ComPtr@VInputSite@@@WRL@Microsoft@@@Z @ 0x18017E530 (-AveragePoint@@YA-AUPoint@Foundation@Windows@@PEBUInputInfo@@V-$ComPtr@VInputSite@@@WRL@Microsof.c)
 */

__int64 __fastcall MagnifierToggleTarget::DeliverInput(MagnifierToggleTarget *this, struct InputInfo *a2)
{
  __int64 v4; // rax
  __int64 v5; // rax
  BamoMagnifierControllerProxy *v6; // rcx
  __int64 v8; // [rsp+30h] [rbp+8h] BYREF
  __int64 v9; // [rsp+38h] [rbp+10h] BYREF

  if ( !*((_BYTE *)this + 32) && *((_DWORD *)a2 + 53) == 2 )
  {
    v4 = *((_QWORD *)this + 3);
    *((_BYTE *)this + 32) = 1;
    v8 = v4;
    wil::com_ptr_t<AsyncHRESULTPrincipal,wil::err_exception_policy>::~com_ptr_t<AsyncHRESULTPrincipal,wil::err_exception_policy>(&v8);
    v5 = AveragePoint((__int64)a2, &v8);
    v6 = (BamoMagnifierControllerProxy *)(*((_QWORD *)this + 2) + 8LL);
    v9 = v5;
    BamoMagnifierControllerProxy::ToggleDetected(v6, (const struct Windows::Foundation::Point *)&v9);
  }
  return 0LL;
}
