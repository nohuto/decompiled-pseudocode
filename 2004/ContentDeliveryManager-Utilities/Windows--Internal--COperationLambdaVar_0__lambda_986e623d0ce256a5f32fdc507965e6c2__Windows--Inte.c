/*
 * XREFs of Windows::Internal::COperationLambdaVar_0__lambda_986e623d0ce256a5f32fdc507965e6c2__Windows::Internal::CNoResult_::Run @ 0x18003D080
 * Callers:
 *     <none>
 * Callees:
 *     ?ResolveLayoutBindings@TargetedContentLayoutHelpers@CreativeFramework@@YAJPEAUHSTRING__@@@Z @ 0x1800A3C30 (-ResolveLayoutBindings@TargetedContentLayoutHelpers@CreativeFramework@@YAJPEAUHSTRING__@@@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall Windows::Internal::COperationLambdaVar_0__lambda_986e623d0ce256a5f32fdc507965e6c2__Windows::Internal::CNoResult_::Run(
        __int64 a1,
        HSTRING a2,
        int a3)
{
  if ( a3 >= 0 )
    a3 = *(_DWORD *)(a1 + 32);
  if ( (_DWORD)a2 == 1 && a3 >= 0 )
    return (unsigned int)CreativeFramework::TargetedContentLayoutHelpers::ResolveLayoutBindings(
                           *(CreativeFramework::TargetedContentLayoutHelpers **)(a1 + 16),
                           a2);
  return (unsigned int)a3;
}
