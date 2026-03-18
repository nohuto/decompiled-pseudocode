/*
 * XREFs of ??0CMoveSizeRequest@@AAE@W4MOVESIZE_OPERATION@@UtagPOINT@@@Z @ 0x19FB53
 * Callers:
 *     ?CreateAndPostRequest@CMoveSizeRequest@@CG_NPAUtagWND@@W4MOVESIZE_OPERATION@@ABUtagPOINT@@@Z @ 0x19FB8D (-CreateAndPostRequest@CMoveSizeRequest@@CG_NPAUtagWND@@W4MOVESIZE_OPERATION@@ABUtagPOINT@@@Z.c)
 * Callees:
 *     <none>
 */

_DWORD *__thiscall CMoveSizeRequest::CMoveSizeRequest(_DWORD *this, int a2, int a3, int a4)
{
  HANDLE CurrentThreadId; // eax
  unsigned int v6; // ecx
  _DWORD *result; // eax

  *this = a2;
  CurrentThreadId = PsGetCurrentThreadId();
  v6 = CMoveSizeRequest::cNextMoveSizeOpRequestId;
  this[1] = CurrentThreadId;
  this[2] = a3;
  this[3] = a4;
  CMoveSizeRequest::cNextMoveSizeOpRequestId = v6 + 1;
  result = this;
  this[4] = v6;
  return result;
}
