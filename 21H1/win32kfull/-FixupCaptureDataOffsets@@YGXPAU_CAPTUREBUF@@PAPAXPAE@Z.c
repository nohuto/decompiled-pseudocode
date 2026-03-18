/*
 * XREFs of ?FixupCaptureDataOffsets@@YGXPAU_CAPTUREBUF@@PAPAXPAE@Z @ 0x9E38A
 * Callers:
 *     ?AllocateCallbackData@@YGJPAU_CAPTUREBUF@@KPAPAX@Z @ 0x9E356 (-AllocateCallbackData@@YGJPAU_CAPTUREBUF@@KPAPAX@Z.c)
 *     ?CaptureUnicodeCallbackData@@YGJPAU_CAPTUREBUF@@PAXKPAPAX@Z @ 0xC466E (-CaptureUnicodeCallbackData@@YGJPAU_CAPTUREBUF@@PAXKPAPAX@Z.c)
 *     ?CaptureAnsiCallbackData@@YGJPAU_CAPTUREBUF@@PAXKPAPAX@Z @ 0xC8EC4 (-CaptureAnsiCallbackData@@YGJPAU_CAPTUREBUF@@PAXKPAPAX@Z.c)
 * Callees:
 *     <none>
 */

void __userpurge FixupCaptureDataOffsets(
        char *a1@<edx>,
        struct _CAPTUREBUF *a2@<ecx>,
        struct _CAPTUREBUF *a3,
        void **a4,
        unsigned __int8 *a5)
{
  if ( *((_DWORD *)a2 + 5) )
  {
    *(_DWORD *)a1 = a3;
  }
  else
  {
    *(_DWORD *)a1 = a3 - a2;
    *(_DWORD *)((char *)a2 + 4 * (*((_DWORD *)a2 + 2))++ + *((_DWORD *)a2 + 4)) = a1 - (char *)a2;
  }
}
