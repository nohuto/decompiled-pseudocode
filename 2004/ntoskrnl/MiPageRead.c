/*
 * XREFs of MiPageRead @ 0x140263414
 * Callers:
 *     MiPfExecuteReadList @ 0x140609ED4 (MiPfExecuteReadList.c)
 *     MiReadImageHeaders @ 0x1406FE9CC (MiReadImageHeaders.c)
 * Callees:
 *     IoPageReadEx @ 0x140227B50 (IoPageReadEx.c)
 */

NTSTATUS __fastcall MiPageRead(
        struct _FILE_OBJECT *a1,
        struct _MDL *a2,
        _QWORD *a3,
        struct _KEVENT *a4,
        struct _IO_STATUS_BLOCK *a5,
        char a6,
        __int64 a7)
{
  return IoPageReadEx(a1, a2, a3, a4, a5, a6, a7);
}
