/*
 * XREFs of ?ExecuteObjectMain@CAtlComModule@ATL@@QEAAX_N@Z @ 0x140013DC8
 * Callers:
 *     ??0?$CAtlExeModuleT@VCAudioDGModule@@@ATL@@QEAA@XZ @ 0x140013CE0 (--0-$CAtlExeModuleT@VCAudioDGModule@@@ATL@@QEAA@XZ.c)
 *     ??1CAudioDGModule@@UEAA@XZ @ 0x14001CB28 (--1CAudioDGModule@@UEAA@XZ.c)
 *     ??1?$CAtlExeModuleT@VCAudioDGModule@@@ATL@@UEAA@XZ @ 0x14003D978 (--1-$CAtlExeModuleT@VCAudioDGModule@@@ATL@@UEAA@XZ.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x140029D80 (_guard_dispatch_icall_nop.c)
 */

void __fastcall ATL::CAtlComModule::ExecuteObjectMain(ATL::CAtlComModule *this, char a2)
{
  unsigned __int64 v2; // rbx
  unsigned __int64 v4; // rax

  v2 = qword_14008FF80;
  v4 = qword_14008FF88;
  while ( v2 < v4 )
  {
    if ( *(_QWORD *)v2 )
    {
      LOBYTE(this) = a2;
      (*(void (__fastcall **)(ATL::CAtlComModule *))(*(_QWORD *)v2 + 64LL))(this);
      v4 = qword_14008FF88;
    }
    v2 += 8LL;
  }
}
