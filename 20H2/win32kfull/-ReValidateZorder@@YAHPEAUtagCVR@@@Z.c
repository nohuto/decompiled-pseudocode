/*
 * XREFs of ?ReValidateZorder@@YAHPEAUtagCVR@@@Z @ 0x1C00CA020
 * Callers:
 *     ?zzzChangeStates@@YAJPEAUtagWND@@PEAUtagSMWP@@@Z @ 0x1C00CA04C (-zzzChangeStates@@YAJPEAUtagWND@@PEAUtagSMWP@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ReValidateZorder(struct tagCVR *a1)
{
  unsigned __int64 v1; // rax
  unsigned int v2; // edx

  v1 = *((_QWORD *)a1 + 1);
  v2 = 0;
  if ( v1 < 2 || v1 != 0xFFFF && v1 < 0xFFFFFFFFFFFFFFFDuLL )
    return 1;
  return v2;
}
