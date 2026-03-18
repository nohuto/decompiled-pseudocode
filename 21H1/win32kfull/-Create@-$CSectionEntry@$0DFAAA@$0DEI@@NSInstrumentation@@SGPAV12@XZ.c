/*
 * XREFs of ?Create@?$CSectionEntry@$0DFAAA@$0DEI@@NSInstrumentation@@SGPAV12@XZ @ 0x208CCB
 * Callers:
 *     ?Allocate@?$CTypeIsolation@$0DFAAA@$0DEI@@NSInstrumentation@@IAEPAXXZ @ 0xA8E6E (-Allocate@-$CTypeIsolation@$0DFAAA@$0DEI@@NSInstrumentation@@IAEPAXXZ.c)
 * Callees:
 *     ??1?$CSectionEntry@$0FAAA@$0FA@@NSInstrumentation@@AAE@XZ @ 0x1543A2 (--1-$CSectionEntry@$0FAAA@$0FA@@NSInstrumentation@@AAE@XZ.c)
 *     ?Initialize@?$CSectionEntry@$0DFAAA@$0DEI@@NSInstrumentation@@AAE_NXZ @ 0x208D7F (-Initialize@-$CSectionEntry@$0DFAAA@$0DEI@@NSInstrumentation@@AAE_NXZ.c)
 */

_DWORD *NSInstrumentation::CSectionEntry<217088,840>::Create()
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
    if ( (unsigned __int8)NSInstrumentation::CSectionEntry<217088,840>::Initialize(result) )
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
