/*
 * XREFs of ?Create@?$CSectionEntry@$0FAAA@$0EI@@NSInstrumentation@@SGPAV12@XZ @ 0x1A2860
 * Callers:
 *     ?Allocate@?$CTypeIsolation@$0FAAA@$0EI@@NSInstrumentation@@IAEPAXXZ @ 0x1A25E7 (-Allocate@-$CTypeIsolation@$0FAAA@$0EI@@NSInstrumentation@@IAEPAXXZ.c)
 * Callees:
 *     ??1?$CSectionEntry@$0FAAA@$0FA@@NSInstrumentation@@AAE@XZ @ 0x1543A2 (--1-$CSectionEntry@$0FAAA@$0FA@@NSInstrumentation@@AAE@XZ.c)
 *     ?Initialize@?$CSectionEntry@$0FAAA@$0EI@@NSInstrumentation@@AAE_NXZ @ 0x1A2BAD (-Initialize@-$CSectionEntry@$0FAAA@$0EI@@NSInstrumentation@@AAE_NXZ.c)
 */

_DWORD *NSInstrumentation::CSectionEntry<20480,72>::Create()
{
  _DWORD *result; // eax
  _DWORD *v1; // esi

  result = ExAllocatePoolWithTag(PagedPoolSession, 0x14u, 0x6F736955u);
  v1 = result;
  if ( result )
  {
    result[2] = 0;
    result[3] = 0;
    result[4] = 0;
    if ( (unsigned __int8)NSInstrumentation::CSectionEntry<20480,72>::Initialize(result) )
    {
      return v1;
    }
    else
    {
      NSInstrumentation::CSectionEntry<20480,80>::~CSectionEntry<20480,80>(v1);
      ExFreePoolWithTag(v1, 0);
      return 0;
    }
  }
  return result;
}
