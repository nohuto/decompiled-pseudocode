/*
 * XREFs of ??$make_shared@VSystemCursorService@@PEAVSystemCursorController@@AEAK@std@@YA?AV?$shared_ptr@VSystemCursorService@@@0@$$QEAPEAVSystemCursorController@@AEAK@Z @ 0x18013B034
 * Callers:
 *     ?EnsureServiceAndRegisterClient@SystemCursorController@@MEAAJPEAVBamoSystemCursorControllerStub@@PEAVBamoSystemCursorControllerClientProxy@@@Z @ 0x18013C890 (-EnsureServiceAndRegisterClient@SystemCursorController@@MEAAJPEAVBamoSystemCursorControllerStub@.c)
 * Callees:
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x18003B2E8 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ?_Decwref@_Ref_count_base@std@@QEAAXXZ @ 0x18003B320 (-_Decwref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ??2@YAPEAX_K@Z @ 0x18003CA78 (--2@YAPEAX_K@Z.c)
 *     ??0SystemCursorService@@QEAA@PEAVSystemCursorController@@K@Z @ 0x18013E2A4 (--0SystemCursorService@@QEAA@PEAVSystemCursorController@@K@Z.c)
 */

// Hidden C++ exception states: #wind=2
_QWORD *__fastcall std::make_shared<SystemCursorService,SystemCursorController *,unsigned long &>(
        _QWORD *a1,
        struct SystemCursorController **a2,
        unsigned int *a3)
{
  char *v6; // r14
  __int64 v7; // rax
  volatile signed __int32 *v8; // rbx
  std::_Ref_count_base *v9; // rcx

  v6 = (char *)operator new(0xD0uLL);
  *((_DWORD *)v6 + 2) = 1;
  *((_DWORD *)v6 + 3) = 1;
  *(_QWORD *)v6 = &std::_Ref_count_obj<SystemCursorService>::`vftable';
  SystemCursorService::SystemCursorService((SystemCursorService *)(v6 + 16), *a2, *a3);
  *a1 = v6 + 16;
  a1[1] = v6;
  if ( v6 != (char *)-16LL )
  {
    v7 = *((_QWORD *)v6 + 4);
    if ( v7 )
      LODWORD(v7) = *(_DWORD *)(v7 + 8);
    if ( !(_DWORD)v7 )
    {
      _InterlockedIncrement((volatile signed __int32 *)v6 + 2);
      v8 = (volatile signed __int32 *)a1[1];
      if ( v8 )
        _InterlockedIncrement(v8 + 3);
      *((_QWORD *)v6 + 3) = v6 + 16;
      v9 = (std::_Ref_count_base *)*((_QWORD *)v6 + 4);
      *((_QWORD *)v6 + 4) = v8;
      if ( v9 )
        std::_Ref_count_base::_Decwref(v9);
      if ( v8 )
        std::_Ref_count_base::_Decref((std::_Ref_count_base *)v8);
    }
  }
  return a1;
}
