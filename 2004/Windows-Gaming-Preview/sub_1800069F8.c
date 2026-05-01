/*
 * XREFs of sub_1800069F8 @ 0x1800069F8
 * Callers:
 *     sub_1800066D4 @ 0x1800066D4 (sub_1800066D4.c)
 *     sub_180006954 @ 0x180006954 (sub_180006954.c)
 *     sub_180008538 @ 0x180008538 (sub_180008538.c)
 *     ?dtor$0@?0???$__acrt_get_current_directory@U__crt_win32_buffer_internal_dynamic_resizing@@@@YAHAEAV?$__crt_win32_buffer@DU__crt_win32_buffer_internal_dynamic_resizing@@@@@Z@4HA @ 0x180045F71 (-dtor$0@-0---$__acrt_get_current_directory@U__crt_win32_buffer_internal_dynamic_resizing@@@@YAHA.c)
 * Callees:
 *     <none>
 */

void __fastcall sub_1800069F8(_QWORD *a1)
{
  void *v1; // rdi
  HANDLE ProcessHeap; // rax
  void *v4; // rdi
  HANDLE v5; // rax
  void *v6; // rdi
  HANDLE v7; // rax

  v1 = (void *)a1[22];
  a1[22] = 0LL;
  if ( v1 )
  {
    ProcessHeap = GetProcessHeap();
    HeapFree(ProcessHeap, 0, v1);
  }
  v4 = (void *)a1[14];
  a1[14] = 0LL;
  if ( v4 )
  {
    v5 = GetProcessHeap();
    HeapFree(v5, 0, v4);
  }
  v6 = (void *)a1[6];
  a1[6] = 0LL;
  if ( v6 )
  {
    v7 = GetProcessHeap();
    HeapFree(v7, 0, v6);
  }
}
