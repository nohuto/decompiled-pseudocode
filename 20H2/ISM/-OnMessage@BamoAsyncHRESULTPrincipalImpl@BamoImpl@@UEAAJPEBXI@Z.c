/*
 * XREFs of ?OnMessage@BamoAsyncHRESULTPrincipalImpl@BamoImpl@@UEAAJPEBXI@Z @ 0x18011B4D0
 * Callers:
 *     <none>
 * Callees:
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18003E15C (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

__int64 __fastcall BamoImpl::BamoAsyncHRESULTPrincipalImpl::OnMessage(
        BamoImpl::BamoAsyncHRESULTPrincipalImpl *this,
        const void *a2)
{
  __int64 result; // rax
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]

  result = CoreUICallReceive(
             *(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 32LL) + 72LL),
             &IAsyncHRESULTPrincipal_Receive<BamoImpl::BamoAsyncHRESULTPrincipalImpl>::Type,
             &Microsoft::CoreUI::MessageCall::MPCManagerBamo_g_parameters_JDDlkUxZTIoeRRRsFd6I6MjXKbU_BamoGroup$21dcf589,
             3LL);
  if ( (int)(result + 0x80000000) >= 0 && (_DWORD)result != -2018375668 )
  {
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      1242LL,
      (__int64)"onecoreuap\\windows\\moderncore\\Inputv2\\InputHost\\Components\\MPCManager\\bamo\\objfre\\amd64\\MPCMana"
               "gerBamo.MPCAsyncHelpers.bamo.h",
      (const char *)(unsigned int)result);
    __debugbreak();
  }
  return result;
}
