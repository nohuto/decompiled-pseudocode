/*
 * XREFs of ?erase@?$vector@USuperWetStroke@CSuperWetInkManager@@V?$allocator@USuperWetStroke@CSuperWetInkManager@@@std@@@std@@QEAA?AV?$_Vector_iterator@V?$_Vector_val@U?$_Simple_types@USuperWetStroke@CSuperWetInkManager@@@std@@@std@@@2@V?$_Vector_const_iterator@V?$_Vector_val@U?$_Simple_types@USuperWetStroke@CSuperWetInkManager@@@std@@@std@@@2@@Z @ 0x1801A9034
 * Callers:
 *     ?RemoveSourceLocal@CSuperWetInkManager@@AEAAXPEAVCSuperWetSource@@@Z @ 0x1801A8004 (-RemoveSourceLocal@CSuperWetInkManager@@AEAAXPEAVCSuperWetSource@@@Z.c)
 * Callees:
 *     ??1?$com_ptr_t@VIRenderTargetBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18001C320 (--1-$com_ptr_t@VIRenderTargetBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ??4SuperWetStroke@CSuperWetInkManager@@QEAAAEAU01@$$QEAU01@@Z @ 0x1801A6FE0 (--4SuperWetStroke@CSuperWetInkManager@@QEAAAEAU01@$$QEAU01@@Z.c)
 */

_QWORD *__fastcall std::vector<CSuperWetInkManager::SuperWetStroke>::erase(__int64 a1, _QWORD *a2, __int64 a3)
{
  __int64 v3; // rbp
  __int64 v4; // rdi
  _QWORD *result; // rax

  v3 = *(_QWORD *)(a1 + 8);
  v4 = a3 + 104;
  if ( a3 + 104 != v3 )
  {
    do
    {
      CSuperWetInkManager::SuperWetStroke::operator=(v4 - 104, v4);
      v4 += 104LL;
    }
    while ( v4 != v3 );
    v3 = *(_QWORD *)(a1 + 8);
  }
  wil::com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>::~com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>(v3 - 96);
  *(_QWORD *)(a1 + 8) -= 104LL;
  result = a2;
  *a2 = a3;
  return result;
}
