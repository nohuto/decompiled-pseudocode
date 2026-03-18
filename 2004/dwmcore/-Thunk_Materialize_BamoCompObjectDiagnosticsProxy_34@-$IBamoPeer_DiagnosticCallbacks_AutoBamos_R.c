/*
 * XREFs of ?Thunk_Materialize_BamoCompObjectDiagnosticsProxy_34@?$IBamoPeer_DiagnosticCallbacks_AutoBamos_Receive@VBamoPeerImpl@DiagnosticCallbacks_AutoBamos@BamoImpl@@@@SAJPEAXPEAPEAX@Z @ 0x180168F60
 * Callers:
 *     <none>
 * Callees:
 *     ??0DropAndReacquireLock@BamoImpl@Microsoft@@QEAA@PEAVBaseBamoConnectionImpl@12@@Z @ 0x1800D30BC (--0DropAndReacquireLock@BamoImpl@Microsoft@@QEAA@PEAVBaseBamoConnectionImpl@12@@Z.c)
 *     ModuleFailFastForHRESULT @ 0x18020EDB4 (ModuleFailFastForHRESULT.c)
 */

void __fastcall __noreturn IBamoPeer_DiagnosticCallbacks_AutoBamos_Receive<BamoImpl::DiagnosticCallbacks_AutoBamos::BamoPeerImpl>::Thunk_Materialize_BamoCompObjectDiagnosticsProxy_34(
        __int64 a1,
        __int64 a2)
{
  void *retaddr; // [rsp+28h] [rbp+0h]
  __int64 v3; // [rsp+38h] [rbp+10h] BYREF

  v3 = a2;
  Microsoft::BamoImpl::DropAndReacquireLock::DropAndReacquireLock(
    (Microsoft::BamoImpl::DropAndReacquireLock *)&v3,
    *(struct Microsoft::BamoImpl::BaseBamoConnectionImpl **)(*(_QWORD *)(a1 + 24) + 32LL));
  ModuleFailFastForHRESULT(2147549183LL, retaddr);
}
