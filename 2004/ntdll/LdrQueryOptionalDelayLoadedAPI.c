/*
 * XREFs of LdrQueryOptionalDelayLoadedAPI @ 0x1800CE830
 * Callers:
 *     <none>
 * Callees:
 *     LdrResolveDelayLoadedAPI @ 0x180010380 (LdrResolveDelayLoadedAPI.c)
 *     LdrpFindDelayloadedMethod @ 0x1800CE938 (LdrpFindDelayloadedMethod.c)
 *     LdrpFindDelayloadedMethodInDescriptor @ 0x1800CE9E4 (LdrpFindDelayloadedMethodInDescriptor.c)
 *     LdrpGetDelayloadDescriptor @ 0x1800CEA7C (LdrpGetDelayloadDescriptor.c)
 */

__int64 __fastcall LdrQueryOptionalDelayLoadedAPI(const void *a1, unsigned __int8 *a2, __int64 a3, int a4)
{
  int v7; // ecx
  __int64 *DelayloadedMethodInDescriptor; // rax
  _BYTE *v9; // rbx
  __int64 DelayloadDescriptor; // rax
  _BYTE *v11; // [rsp+30h] [rbp-18h] BYREF

  if ( a4 )
    return 3221225485LL;
  v7 = *a2 - 42;
  if ( *a2 == 42 )
    v7 = a2[1];
  if ( v7 )
  {
    DelayloadDescriptor = LdrpGetDelayloadDescriptor(a1);
    v9 = (_BYTE *)DelayloadDescriptor;
    if ( !DelayloadDescriptor )
      return 3221225781LL;
    DelayloadedMethodInDescriptor = (__int64 *)LdrpFindDelayloadedMethodInDescriptor(a1, DelayloadDescriptor, a3);
  }
  else
  {
    DelayloadedMethodInDescriptor = (__int64 *)LdrpFindDelayloadedMethod(a1, a3, &v11);
    v9 = v11;
  }
  if ( DelayloadedMethodInDescriptor )
    return LdrResolveDelayLoadedAPI(a1, v9, 0, 0, DelayloadedMethodInDescriptor, 0) == 0 ? 0xC0000139 : 0;
  return 3221225781LL;
}
