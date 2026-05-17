/*
 * XREFs of _RtlCreateUserThread@40 @ 0x4B2F04F0
 * Callers:
 *     <none>
 * Callees:
 *     _RtlpCreateUserThreadEx@44 @ 0x4B2F0524 (_RtlpCreateUserThreadEx@44.c)
 */

int __thiscall RtlCreateUserThread(
        void *this,
        int a2,
        int a3,
        char a4,
        int a5,
        int a6,
        int a7,
        int a8,
        int a9,
        int a10,
        int a11)
{
  return RtlpCreateUserThreadEx(a4 == 1, a5, a6, a7, this, a8, a9, a10, a11);
}
