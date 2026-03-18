/*
 * XREFs of ?DxgkEngDetectGDIPathApiExt@@YAHPEBXPEAUHDEV__@@PEAUHWND__@@PEAUHRGN__@@@Z @ 0x1C0153C00
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00D2DC0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall DxgkEngDetectGDIPathApiExt(const void *a1, HDEV a2, HWND a3, HRGN a4)
{
  unsigned int v4; // ebx
  int v9; // eax

  v4 = 0;
  if ( qword_1C0256FB0 )
    v9 = qword_1C0256FB0();
  else
    v9 = -1073741637;
  if ( v9 >= 0 && qword_1C0256FB8 )
    return (unsigned int)qword_1C0256FB8(a1, a2, a3, a4);
  return v4;
}
