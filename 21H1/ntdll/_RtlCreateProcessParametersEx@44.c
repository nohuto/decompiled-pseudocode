/*
 * XREFs of _RtlCreateProcessParametersEx@44 @ 0x4B335990
 * Callers:
 *     <none>
 * Callees:
 *     _RtlCreateProcessParametersInternal@48 @ 0x4B2A8307 (_RtlCreateProcessParametersInternal@48.c)
 */

int __stdcall RtlCreateProcessParametersEx(
        unsigned int **a1,
        unsigned __int16 *a2,
        int a3,
        unsigned __int16 *a4,
        unsigned __int16 *a5,
        void *Src,
        int *a7,
        int *a8,
        int *a9,
        int *a10,
        int a11)
{
  return RtlCreateProcessParametersInternal(a1, a2, a3, a4, a5, Src, a7, a8, a9, a10, 0, a11);
}
