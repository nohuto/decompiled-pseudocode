/*
 * XREFs of _errno @ 0x1800858E0
 * Callers:
 *     wcstoxq @ 0x18008E674 (wcstoxq.c)
 *     mbstowcs @ 0x1800905F0 (mbstowcs.c)
 *     strtoxlX @ 0x180091B9C (strtoxlX.c)
 *     wcstoxlX @ 0x18009279C (wcstoxlX.c)
 *     wcstombs @ 0x180092A60 (wcstombs.c)
 *     strtoxq @ 0x180092C40 (strtoxq.c)
 *     write_string @ 0x1800937B8 (write_string.c)
 *     write_string_0 @ 0x1800941FC (write_string_0.c)
 *     _handle_qnan1 @ 0x180095278 (_handle_qnan1.c)
 *     _set_errno_from_matherr @ 0x180095590 (_set_errno_from_matherr.c)
 *     _wctomb_s_l @ 0x1800966D0 (_wctomb_s_l.c)
 * Callees:
 *     <none>
 */

int *__cdecl errno()
{
  return (int *)&NtCurrentTeb()->TlsSlots[16];
}
