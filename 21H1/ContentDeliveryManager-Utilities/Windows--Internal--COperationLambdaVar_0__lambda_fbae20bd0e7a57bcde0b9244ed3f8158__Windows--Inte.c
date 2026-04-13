/*
 * XREFs of Windows::Internal::COperationLambdaVar_0__lambda_fbae20bd0e7a57bcde0b9244ed3f8158__Windows::Internal::CNoResult_::Run @ 0x18003AA60
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180005D48 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?SendAppServiceMessage@ContentManagementService@ContentManagement@@AEAAJW4TriggerId@Triggers@CreativeFramework@@V?$function@$$A6AJAEAVValueSetHelper@Triggers@CreativeFramework@@@Z@wistd@@@Z @ 0x18002E384 (-SendAppServiceMessage@ContentManagementService@ContentManagement@@AEAAJW4TriggerId@Triggers@Cre.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall Windows::Internal::COperationLambdaVar_0__lambda_fbae20bd0e7a57bcde0b9244ed3f8158__Windows::Internal::CNoResult_::Run(
        __int64 a1,
        int a2,
        int a3)
{
  int v3; // ebx
  int v4; // eax
  _BYTE v6[112]; // [rsp+28h] [rbp-80h] BYREF
  __int64 v7; // [rsp+98h] [rbp-10h]
  wil::details::in1diag3 *retaddr; // [rsp+A8h] [rbp+0h]

  v3 = a3;
  if ( a3 >= 0 )
    v3 = *(_DWORD *)(a1 + 24);
  if ( a2 == 1 && v3 >= 0 )
  {
    v7 = 0LL;
    v4 = ContentManagement::ContentManagementService::SendAppServiceMessage(
           *(ContentManagement::ContentManagementService **)(a1 + 8),
           10 - (unsigned int)(*(_BYTE *)(a1 + 16) != 0),
           (__int64)v6);
    v3 = v4;
    if ( v4 >= 0 )
      return 0;
    else
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x24C,
        (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\dll\\contentmanagementservice.cpp",
        (const char *)(unsigned int)v4);
  }
  return (unsigned int)v3;
}
