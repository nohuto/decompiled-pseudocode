/*
 * XREFs of ?OnMessage@BamoMPCConstantManagerClientCallbacksPrincipalImpl@BamoImpl@@UEAAJPEBXI@Z @ 0x18011C170
 * Callers:
 *     <none>
 * Callees:
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18003DE3C (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

__int64 __fastcall BamoImpl::BamoMPCConstantManagerClientCallbacksPrincipalImpl::OnMessage(
        BamoImpl::BamoMPCConstantManagerClientCallbacksPrincipalImpl *this,
        const void *a2)
{
  __int64 result; // rax
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]

  result = CoreUICallReceive(
             *(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 32LL) + 72LL),
             &IMPCConstantManagerClientCallbacksPrincipal_Receive<BamoImpl::BamoMPCConstantManagerClientCallbacksPrincipalImpl>::Type,
             &Microsoft::CoreUI::MessageCall::MPCManagerBamo_g_parameters_kXhcky2WoeLwbX2Kisr$71l33VI_BamoGroup$b0a80b91,
             78LL);
  if ( (int)(result + 0x80000000) >= 0 && (_DWORD)result != -2018375668 )
  {
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      9007LL,
      (__int64)"onecoreuap\\windows\\moderncore\\Inputv2\\InputHost\\Components\\MPCManager\\bamo\\objfre\\amd64\\MPCMana"
               "gerBamo.MPCManagerBamo.bamo.h",
      (const char *)(unsigned int)result);
    JUMPOUT(0x18011C1E4LL);
  }
  return result;
}
