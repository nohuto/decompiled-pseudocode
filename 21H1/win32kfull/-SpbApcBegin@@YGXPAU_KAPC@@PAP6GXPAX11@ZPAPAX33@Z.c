/*
 * XREFs of ?SpbApcBegin@@YGXPAU_KAPC@@PAP6GXPAX11@ZPAPAX33@Z @ 0x17E1F3
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __stdcall SpbApcBegin(
        struct _KAPC *a1,
        void (__stdcall **a2)(void *, void *, void *),
        void **a3,
        void **a4,
        void **a5)
{
  Win32FreePool(a1);
}
