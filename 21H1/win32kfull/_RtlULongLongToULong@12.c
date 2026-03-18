/*
 * XREFs of _RtlULongLongToULong@12 @ 0xAB66C
 * Callers:
 *     ?Grow@?$CDynamicArray@PAVIInputQueue@@$0HHHAHDFF@@@IAEJI@Z @ 0xB392E (-Grow@-$CDynamicArray@PAVIInputQueue@@$0HHHAHDFF@@@IAEJI@Z.c)
 *     ?AddWindow@CWindowGroup@@QAEJPAUtagWND@@W4SET_WINDOW_GROUP_OPTIONS@@W4GROUP_WINDOW_ROLE@@@Z @ 0x19EB05 (-AddWindow@CWindowGroup@@QAEJPAUtagWND@@W4SET_WINDOW_GROUP_OPTIONS@@W4GROUP_WINDOW_ROLE@@@Z.c)
 *     ?CreateGroup@CWindowGroupManager@@QAEJPAUWINDOW_GROUP_ID@@@Z @ 0x19EE4C (-CreateGroup@CWindowGroupManager@@QAEJPAUWINDOW_GROUP_ID@@@Z.c)
 *     ?Grow@?$CDynamicArray@PAUtagWND@@$0HHHAHDFF@@@IAEJI@Z @ 0x1A58D9 (-Grow@-$CDynamicArray@PAUtagWND@@$0HHHAHDFF@@@IAEJI@Z.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall RtlULongLongToULong(ULONGLONG ullOperand, ULONG *pulResult)
{
  int *v2; // ecx
  NTSTATUS v3; // edx
  int v4; // eax

  v3 = 0;
  if ( HIDWORD(ullOperand) )
  {
    v3 = -1073741675;
    v4 = -1;
  }
  else
  {
    v4 = ullOperand;
  }
  *v2 = v4;
  return v3;
}
