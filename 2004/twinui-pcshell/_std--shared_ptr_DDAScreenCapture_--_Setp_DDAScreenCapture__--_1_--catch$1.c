/*
 * XREFs of _std::shared_ptr_DDAScreenCapture_::_Setp_DDAScreenCapture__::_1_::catch$1 @ 0x18021C85F
 * Callers:
 *     <none>
 * Callees:
 *     _CxxThrowException_0 @ 0x18008DF14 (_CxxThrowException_0.c)
 *     ??_GDDAScreenCapture@@QEAAPEAXI@Z @ 0x18021C948 (--_GDDAScreenCapture@@QEAAPEAXI@Z.c)
 */

void __fastcall __noreturn std::shared_ptr_DDAScreenCapture_::_Setp_DDAScreenCapture__::_1_::catch_1(
        __int64 a1,
        __int64 a2)
{
  DDAScreenCapture *v2; // rcx

  v2 = *(DDAScreenCapture **)(a2 + 56);
  if ( v2 )
    DDAScreenCapture::`scalar deleting destructor'(v2, a2);
  throw;
}
