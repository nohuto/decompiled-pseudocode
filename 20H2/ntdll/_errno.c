/*
 * XREFs of _errno @ 0x180085410
 * Callers:
 *     wcstoxq @ 0x18008E074 (wcstoxq.c)
 *     mbstowcs @ 0x18008FFF0 (mbstowcs.c)
 *     strtoxlX @ 0x18009159C (strtoxlX.c)
 *     wcstoxlX @ 0x18009219C (wcstoxlX.c)
 *     wcstombs @ 0x180092460 (wcstombs.c)
 *     strtoxq @ 0x180092640 (strtoxq.c)
 *     write_string @ 0x1800931B8 (write_string.c)
 *     write_string_0 @ 0x180093BFC (write_string_0.c)
 *     _handle_qnan1 @ 0x180094C78 (_handle_qnan1.c)
 *     _set_errno_from_matherr @ 0x180094F90 (_set_errno_from_matherr.c)
 *     _wctomb_s_l @ 0x1800960D0 (_wctomb_s_l.c)
 * Callees:
 *     <none>
 */

int *__cdecl errno()
{
  return (int *)&NtCurrentTeb()->TlsSlots[16];
}
