/*
 * XREFs of __errno @ 0x4B33D420
 * Callers:
 *     _wcstoxq @ 0x4B2F7C71 (_wcstoxq.c)
 *     _mbstowcs @ 0x4B2F8720 (_mbstowcs.c)
 *     strtoxlX @ 0x4B2FA1E6 (strtoxlX.c)
 *     wcstoxlX @ 0x4B2FAA19 (wcstoxlX.c)
 *     _wcstombs @ 0x4B2FACA0 (_wcstombs.c)
 *     strtoxq @ 0x4B2FB4FC (strtoxq.c)
 *     write_string @ 0x4B2FC330 (write_string.c)
 *     write_string_0 @ 0x4B2FCDAE (write_string_0.c)
 *     ___libm_error_support @ 0x4B2FD3A2 (___libm_error_support.c)
 *     __handle_qnan1 @ 0x4B2FDA94 (__handle_qnan1.c)
 *     __set_errno_from_matherr @ 0x4B2FDD8F (__set_errno_from_matherr.c)
 *     __wctomb_s_l @ 0x4B2FED67 (__wctomb_s_l.c)
 * Callees:
 *     <none>
 */

int *__cdecl _errno()
{
  return (int *)&NtCurrentTeb()->TlsSlots[16];
}
