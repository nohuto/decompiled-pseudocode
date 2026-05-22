/*
 * XREFs of ?GetCurrentCaller@BamoPrincipalImpl@BamoImpl@Microsoft@@IEAAPEAVBamoStubImpl@23@XZ @ 0x18006F41C
 * Callers:
 *     ?TriggerHomeGesture@BamoMPCManagerPrincipalImpl@BamoImpl@@QEAAJW4InputType@@I@Z @ 0x18003F8E8 (-TriggerHomeGesture@BamoMPCManagerPrincipalImpl@BamoImpl@@QEAAJW4InputType@@I@Z.c)
 * Callees:
 *     <none>
 */

struct Microsoft::BamoImpl::BamoStubImpl *__fastcall Microsoft::BamoImpl::BamoPrincipalImpl::GetCurrentCaller(
        Microsoft::BamoImpl::BamoPrincipalImpl *this)
{
  struct Microsoft::BamoImpl::BamoStubImpl *result; // rax

  for ( result = (struct Microsoft::BamoImpl::BamoStubImpl *)*((_QWORD *)this + 4);
        result
     && *(_DWORD *)(*((_QWORD *)result + 5) + 36LL) != *(_DWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 32LL) + 32LL);
        result = (struct Microsoft::BamoImpl::BamoStubImpl *)*((_QWORD *)result + 6) )
  {
    ;
  }
  return result;
}
