/*
 * XREFs of _lambda_8f4b63029e330354df5e58e7f72e89f8_::operator() @ 0xF5008
 * Callers:
 *     _anonymous_namespace_::TryExecuteIfPolicyAllows__lambda_8f4b63029e330354df5e58e7f72e89f8___ @ 0xF4F98 (_anonymous_namespace_--TryExecuteIfPolicyAllows__lambda_8f4b63029e330354df5e58e7f72e89f8___.c)
 * Callees:
 *     _PostIAMShellHookMessageEx@12 @ 0x9ABEE (_PostIAMShellHookMessageEx@12.c)
 */

char __stdcall lambda_8f4b63029e330354df5e58e7f72e89f8_::operator()(int *a1)
{
  int v1; // eax
  struct tagTHREADINFO *v2; // eax

  PostIAMShellHookMessageEx(*(_DWORD *)(_gptiCurrent + 248), 32, *a1);
  v1 = *(_DWORD *)(*(_DWORD *)(_gptiCurrent + 248) + 200);
  if ( v1 )
    v2 = *(struct tagTHREADINFO **)(v1 + 8);
  else
    v2 = 0;
  CInputGlobals::SetPtiLastWoken(_gpInputGlobals, v2, 0);
  return 1;
}
