/*
 * XREFs of _RtlpPageHeapStop@40 @ 0x4B33A097
 * Callers:
 *     _RtlApplicationVerifierStop@40 @ 0x4B33A020 (_RtlApplicationVerifierStop@40.c)
 * Callees:
 *     _DbgPrint @ 0x4B2AB8D0 (_DbgPrint.c)
 */

int __fastcall RtlpPageHeapStop(
        const void *a1,
        const char *a2,
        const void *a3,
        const char *a4,
        const void *a5,
        const char *a6,
        const void *a7,
        const char *a8,
        const void *a9,
        const char *a10)
{
  struct _TEB *v10; // eax
  int result; // eax

  qmemcpy(&AVrfpPageHeapPreviousStopData, &AVrfpPageHeapStopData, 0x14u);
  AVrfpPageHeapStopData = (int)a1;
  dword_4B3A5A70 = (int)a9;
  v10 = NtCurrentTeb();
  dword_4B3A5A64 = (int)a3;
  dword_4B3A5A68 = (int)a5;
  dword_4B3A5A6C = (int)a7;
  result = DbgPrint(
             "\n"
             "\n"
             "===========================================================\n"
             "VERIFIER STOP %p: pid 0x%X: %s \n"
             "\n"
             "\t%p : %s\n"
             "\t%p : %s\n"
             "\t%p : %s\n"
             "\t%p : %s\n"
             "===========================================================\n"
             "\n",
             a1,
             v10->ClientId.UniqueProcess,
             a2,
             a3,
             a4,
             a5,
             a6,
             a7,
             a8,
             a9,
             a10);
  __debugbreak();
  return result;
}
