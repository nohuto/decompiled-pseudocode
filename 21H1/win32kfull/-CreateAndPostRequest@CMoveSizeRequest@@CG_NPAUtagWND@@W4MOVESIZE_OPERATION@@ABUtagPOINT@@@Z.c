/*
 * XREFs of ?CreateAndPostRequest@CMoveSizeRequest@@CG_NPAUtagWND@@W4MOVESIZE_OPERATION@@ABUtagPOINT@@@Z @ 0x19FB8D
 * Callers:
 *     ?xxxRequestMoveSizeOperation@CMoveSizeRequest@@SG_NPAUtagWND@@W4MOVESIZE_OPERATION@@K@Z @ 0x19FC05 (-xxxRequestMoveSizeOperation@CMoveSizeRequest@@SG_NPAUtagWND@@W4MOVESIZE_OPERATION@@K@Z.c)
 * Callees:
 *     ?PostEventMessageEx@@YGHPAUtagTHREADINFO@@PAUtagQ@@KPAUtagWND@@IIJPAUtagINPUT_MESSAGE_SOURCE@@@Z @ 0xF0F76 (-PostEventMessageEx@@YGHPAUtagTHREADINFO@@PAUtagQ@@KPAUtagWND@@IIJPAUtagINPUT_MESSAGE_SOURCE@@@Z.c)
 *     ??0CMoveSizeRequest@@AAE@W4MOVESIZE_OPERATION@@UtagPOINT@@@Z @ 0x19FB53 (--0CMoveSizeRequest@@AAE@W4MOVESIZE_OPERATION@@UtagPOINT@@@Z.c)
 */

char __fastcall CMoveSizeRequest::CreateAndPostRequest(int a1, int a2, int *a3)
{
  _DWORD *v5; // eax
  _DWORD *v6; // esi
  int v8; // [esp+0h] [ebp-8h]
  struct tagINPUT_MESSAGE_SOURCE *v9; // [esp+4h] [ebp-4h]

  v5 = (_DWORD *)Win32AllocPool(20, 1920167253);
  if ( v5 )
    v6 = CMoveSizeRequest::CMoveSizeRequest(v5, a2, *a3, a3[1]);
  else
    v6 = 0;
  if ( !v6 )
    return 0;
  if ( !PostEventMessageEx(
          *(tagDomLock **)(*(_DWORD *)(a1 + 8) + 236),
          *(_DWORD *)(a1 + 8),
          (struct tagTHREADINFO *)0x1A,
          (HWND *)a1,
          0,
          0,
          (unsigned int)v6,
          0,
          v8,
          v9) )
  {
    Win32FreePool(v6);
    return 0;
  }
  *(_DWORD *)(_gptiCurrent + 688) |= 0x40000000u;
  return 1;
}
