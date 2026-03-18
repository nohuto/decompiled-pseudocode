/*
 * XREFs of UserGetGlobalAtomTableOfWindow @ 0x1C00F79E8
 * Callers:
 *     InternalSetProp @ 0x1C002481C (InternalSetProp.c)
 *     ?SetRedrawProp@@YAXPEAUtagWND@@H@Z @ 0x1C00F77AC (-SetRedrawProp@@YAXPEAUtagWND@@H@Z.c)
 *     NtUserSetProp @ 0x1C00F7800 (NtUserSetProp.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall UserGetGlobalAtomTableOfWindow(__int64 a1)
{
  __int64 result; // rax

  result = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 16) + 416LL) + 664LL);
  if ( result )
    return *(_QWORD *)(result + 168);
  return result;
}
