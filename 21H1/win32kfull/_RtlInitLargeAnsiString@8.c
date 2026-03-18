/*
 * XREFs of _RtlInitLargeAnsiString@8 @ 0x1D5FC
 * Callers:
 *     _NtUserfnINSTRINGNULL@28 @ 0x1D04A (_NtUserfnINSTRINGNULL@28.c)
 *     _NtUserfnINLPCREATESTRUCT@28 @ 0x1DB7A (_NtUserfnINLPCREATESTRUCT@28.c)
 *     _xxxCreateWindowEx@68 @ 0x2D67C (_xxxCreateWindowEx@68.c)
 *     ?NtUserfnHkINLPCBTCREATESTRUCT@@YGJIIPAUtagCBT_CREATEWNDW@@H@Z @ 0x15F104 (-NtUserfnHkINLPCBTCREATESTRUCT@@YGJIIPAUtagCBT_CREATEWNDW@@H@Z.c)
 *     _NtUserfnINLPMDICREATESTRUCT@28 @ 0x16BEB9 (_NtUserfnINLPMDICREATESTRUCT@28.c)
 *     _NtUserfnINSTRING@28 @ 0x16CB33 (_NtUserfnINSTRING@28.c)
 * Callees:
 *     <none>
 */

int __fastcall RtlInitLargeAnsiString(unsigned int *a1, const char *a2)
{
  int result; // eax
  unsigned int v3; // edx
  unsigned int v4; // edx

  a1[2] = (unsigned int)a2;
  a1[1] |= 0x80000000;
  if ( a2 )
  {
    v3 = strlen(a2);
    *a1 = v3;
    v4 = (v3 + 1) | 0x80000000;
  }
  else
  {
    *a1 = 0;
    v4 = 0x80000000;
  }
  a1[1] = v4;
  return result;
}
