/*
 * XREFs of KiMceLinkage @ 0x140A122A0
 * Callers:
 *     KiMceThunk @ 0x140A12190 (KiMceThunk.c)
 * Callees:
 *     KiMceDispatch @ 0x140A0CEA0 (KiMceDispatch.c)
 */

// positive sp value has been detected, the output may be wrong!
void __spoils<rdx,rcx,r8,r9,r10,r11,xmm0,xmm4,xmm5> KiMceLinkage()
{
  __int64 retaddr; // [rsp+98h] [rbp+0h]
  __int64 v1; // [rsp+A0h] [rbp+8h] BYREF

  retaddr = KiMceDispatch(&v1, retaddr);
}
