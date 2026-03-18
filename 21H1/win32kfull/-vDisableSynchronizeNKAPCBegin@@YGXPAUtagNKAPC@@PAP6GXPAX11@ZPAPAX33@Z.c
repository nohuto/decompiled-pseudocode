/*
 * XREFs of ?vDisableSynchronizeNKAPCBegin@@YGXPAUtagNKAPC@@PAP6GXPAX11@ZPAPAX33@Z @ 0x1FD2B9
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __stdcall vDisableSynchronizeNKAPCBegin(
        struct tagNKAPC *a1,
        void (__stdcall **a2)(void *, void *, void *),
        void **a3,
        void **a4,
        void **a5)
{
  UserFreeNKAPC(a1);
}
