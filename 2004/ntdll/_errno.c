/*
 * XREFs of _errno @ 0x180085310
 * Callers:
 *     wcstoxq @ 0x18008DF74 (wcstoxq.c)
 *     mbstowcs @ 0x18008FEF0 (mbstowcs.c)
 *     strtoxlX @ 0x18009149C (strtoxlX.c)
 *     wcstoxlX @ 0x18009209C (wcstoxlX.c)
 *     wcstombs @ 0x180092360 (wcstombs.c)
 *     strtoxq @ 0x180092540 (strtoxq.c)
 *     write_string @ 0x1800930B8 (write_string.c)
 *     write_string_0 @ 0x180093AFC (write_string_0.c)
 *     _handle_qnan1 @ 0x180094B78 (_handle_qnan1.c)
 *     _set_errno_from_matherr @ 0x180094E90 (_set_errno_from_matherr.c)
 *     _wctomb_s_l @ 0x180095FD0 (_wctomb_s_l.c)
 * Callees:
 *     <none>
 */

int *__cdecl errno()
{
  return (int *)&NtCurrentTeb()->TlsSlots[16];
}
