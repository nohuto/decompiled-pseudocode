/*
 * XREFs of sub_180037780 @ 0x180037780
 * Callers:
 *     _XMMI2_FP_Emulation @ 0x180037AE0 (_XMMI2_FP_Emulation.c)
 *     sub_180037CF8 @ 0x180037CF8 (sub_180037CF8.c)
 *     sub_180037F08 @ 0x180037F08 (sub_180037F08.c)
 * Callees:
 *     sub_1800387CC @ 0x1800387CC (sub_1800387CC.c)
 */

_QWORD *__fastcall sub_180037780(_QWORD *a1)
{
  HANDLE ProcessHeap; // rax
  _QWORD *v3; // rax
  _QWORD *v4; // rbx
  _QWORD *v5; // rdi
  void *v6; // rcx
  HANDLE v7; // rax
  _QWORD *result; // rax

  ProcessHeap = GetProcessHeap();
  v3 = HeapAlloc(ProcessHeap, 0, 0x20uLL);
  v4 = v3;
  if ( v3 )
  {
    v3[2] = 0LL;
    v3[3] = 0LL;
    v3[1] = 0LL;
    v3[2] = 0LL;
    v3[3] = 0LL;
    *v3 = &off_18003F888;
  }
  else
  {
    v4 = 0LL;
  }
  if ( !v4 || (v5 = v4, !(unsigned __int8)sub_1800387CC(v4)) )
  {
    v5 = 0LL;
    if ( v4 )
    {
      v6 = (void *)v4[1];
      if ( v6 )
      {
        CoTaskMemFree(v6);
        v4[1] = 0LL;
      }
      v4[2] = 0LL;
      v4[3] = 0LL;
      v7 = GetProcessHeap();
      HeapFree(v7, 0, v4);
    }
  }
  result = a1;
  *a1 = v5;
  return result;
}
