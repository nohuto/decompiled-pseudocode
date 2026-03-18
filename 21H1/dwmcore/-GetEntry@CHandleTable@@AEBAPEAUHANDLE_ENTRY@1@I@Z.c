/*
 * XREFs of ?GetEntry@CHandleTable@@AEBAPEAUHANDLE_ENTRY@1@I@Z @ 0x180038AE4
 * Callers:
 *     ?ReleaseOnChannel@CHandleTable@@QEAAJPEAVCChannel@@I@Z @ 0x180038870 (-ReleaseOnChannel@CHandleTable@@QEAAJPEAVCChannel@@I@Z.c)
 *     ?CreateOrAddRefOnChannel@CHandleTable@@QEAAJPEAVCChannel@@W4MIL_RESOURCE_TYPE@@PEAI@Z @ 0x1800389D8 (-CreateOrAddRefOnChannel@CHandleTable@@QEAAJPEAVCChannel@@W4MIL_RESOURCE_TYPE@@PEAI@Z.c)
 *     ?DuplicateHandleOnTarget@CHandleTable@@QEAAJIIW4MIL_RESOURCE_TYPE@@PEAVCChannel@@PEAI@Z @ 0x1800BF984 (-DuplicateHandleOnTarget@CHandleTable@@QEAAJIIW4MIL_RESOURCE_TYPE@@PEAVCChannel@@PEAI@Z.c)
 * Callees:
 *     ?ValidEntry@HANDLE_TABLE@@QEBAHI@Z @ 0x180038BCC (-ValidEntry@HANDLE_TABLE@@QEBAHI@Z.c)
 */

struct CHandleTable::HANDLE_ENTRY *__fastcall CHandleTable::GetEntry(CHandleTable *this, unsigned int a2)
{
  __int64 v2; // rcx
  int v3; // r8d

  if ( (unsigned int)HANDLE_TABLE::ValidEntry(this, a2) )
    return (struct CHandleTable::HANDLE_ENTRY *)(*(_QWORD *)(v2 + 24) + (unsigned int)(v3 * *(_DWORD *)(v2 + 8)));
  else
    return 0LL;
}
