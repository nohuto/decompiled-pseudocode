/*
 * XREFs of __SEH_prolog4 @ 0x100047F0
 * Callers:
 *     dllmain_crt_process_attach @ 0x10003F85 (dllmain_crt_process_attach.c)
 *     dllmain_crt_process_detach @ 0x1000408C (dllmain_crt_process_detach.c)
 *     dllmain_dispatch @ 0x1000411C (dllmain_dispatch.c)
 *     ___scrt_is_nonwritable_in_current_image @ 0x1000457E (___scrt_is_nonwritable_in_current_image.c)
 * Callees:
 *     <none>
 */

_DWORD *__cdecl _SEH_prolog4(int a1, int a2)
{
  void *v4; // esp
  void *v6; // [esp-18h] [ebp-18h]
  _DWORD v7[2]; // [esp-8h] [ebp-8h] BYREF
  _UNKNOWN *retaddr; // [esp+0h] [ebp+0h]
  int v9; // [esp+4h] [ebp+4h]

  v7[1] = _except_handler4;
  v7[0] = NtCurrentTeb()->NtTib.ExceptionList;
  v4 = alloca(a2);
  v9 = -2;
  retaddr = v6;
  return v7;
}
