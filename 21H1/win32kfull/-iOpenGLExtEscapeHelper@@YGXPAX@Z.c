/*
 * XREFs of ?iOpenGLExtEscapeHelper@@YGXPAX@Z @ 0x1D848B
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __stdcall iOpenGLExtEscapeHelper(_DWORD *Parameter)
{
  Parameter[7] = (*(int (__stdcall **)(_DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD))(*(_DWORD *)*Parameter + 1996))(
                   Parameter[1],
                   Parameter[2],
                   Parameter[3],
                   Parameter[4],
                   Parameter[6],
                   Parameter[5]);
}
