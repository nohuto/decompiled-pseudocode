/*
 * XREFs of ??$make_shared@VSystemCursor@@V?$shared_ptr@VSystemCursorService@@@std@@AEA_K@std@@YA?AV?$shared_ptr@VSystemCursor@@@0@$$QEAV?$shared_ptr@VSystemCursorService@@@0@AEA_K@Z @ 0x18013E360
 * Callers:
 *     ?CreateCursorForDevice@SystemCursorService@@QEAAJ_K@Z @ 0x18013F04C (-CreateCursorForDevice@SystemCursorService@@QEAAJ_K@Z.c)
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x18003C7B8 (--2@YAPEAX_K@Z.c)
 *     ??0SystemCursor@@QEAA@V?$shared_ptr@VSystemCursorService@@@std@@_K@Z @ 0x18013E640 (--0SystemCursor@@QEAA@V-$shared_ptr@VSystemCursorService@@@std@@_K@Z.c)
 */

// Hidden C++ exception states: #wind=2
_QWORD *__fastcall std::make_shared<SystemCursor,std::shared_ptr<SystemCursorService>,unsigned __int64 &>(
        _QWORD *a1,
        _QWORD *a2,
        __int64 *a3)
{
  __int64 v6; // r8
  _QWORD v8[5]; // [rsp+20h] [rbp-28h] BYREF
  _DWORD *v9; // [rsp+50h] [rbp+8h]

  v9 = operator new(0x60uLL);
  v9[2] = 1;
  v9[3] = 1;
  *(_QWORD *)v9 = &std::_Ref_count_obj<SystemCursor>::`vftable';
  v6 = *a3;
  v8[0] = *a2;
  v8[1] = a2[1];
  *a2 = 0LL;
  a2[1] = 0LL;
  SystemCursor::SystemCursor(v9 + 4, v8, v6);
  *a1 = v9 + 4;
  a1[1] = v9;
  return a1;
}
