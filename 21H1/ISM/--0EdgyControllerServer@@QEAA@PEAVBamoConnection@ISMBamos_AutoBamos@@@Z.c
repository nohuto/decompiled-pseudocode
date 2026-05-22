/*
 * XREFs of ??0EdgyControllerServer@@QEAA@PEAVBamoConnection@ISMBamos_AutoBamos@@@Z @ 0x180030244
 * Callers:
 *     ??0InputSystem@@QEAA@PEAVBamoConnection@ISMBamos_AutoBamos@@@Z @ 0x18003056C (--0InputSystem@@QEAA@PEAVBamoConnection@ISMBamos_AutoBamos@@@Z.c)
 * Callees:
 *     ??0BamoPrincipalImpl@BamoImpl@Microsoft@@QEAA@PEAVBaseBamoConnection@Bamo@2@@Z @ 0x1800301BC (--0BamoPrincipalImpl@BamoImpl@Microsoft@@QEAA@PEAVBaseBamoConnection@Bamo@2@@Z.c)
 *     ?Get@EdgyConnection@@SAPEAV1@XZ @ 0x1800302BC (-Get@EdgyConnection@@SAPEAV1@XZ.c)
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x18003E424 (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 */

// Hidden C++ exception states: #wind=1
EdgyControllerServer *__fastcall EdgyControllerServer::EdgyControllerServer(
        EdgyControllerServer *this,
        struct ISMBamos_AutoBamos::BamoConnection *a2)
{
  struct EdgyConnection *v3; // rax
  const char *v4; // r9
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  *(_QWORD *)this = &BamoEdgyControllerServerPrincipal::`vftable'{for `Microsoft::Bamo::BamoPrincipal'};
  *((_QWORD *)this + 1) = &EdgyControllerServer::`vftable'{for `IEdgyControllerServerPrincipal'};
  Microsoft::BamoImpl::BamoPrincipalImpl::BamoPrincipalImpl((EdgyControllerServer *)((char *)this + 16), a2);
  *((_QWORD *)this + 2) = &BamoImpl::BamoEdgyControllerServerPrincipalImpl::`vftable';
  *(_QWORD *)this = &EdgyControllerServer::`vftable'{for `Microsoft::Bamo::BamoPrincipal'};
  *((_QWORD *)this + 1) = &EdgyControllerServer::`vftable'{for `IEdgyControllerServerPrincipal'};
  v3 = EdgyConnection::Get();
  *((_QWORD *)this + 7) = v3;
  if ( !v3 )
  {
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      (void *)0x15,
      (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\contextualprocessors\\processors\\edgy\\server\\edgycontrollerserver.cpp",
      v4);
    JUMPOUT(0x18005FB1ALL);
  }
  return this;
}
