/*
 * XREFs of AVrfpEnableHandleVerifier @ 0x1800DACC0
 * Callers:
 *     AVrfpEnableVerifierOptions @ 0x1800DADA4 (AVrfpEnableVerifierOptions.c)
 * Callees:
 *     DbgPrint @ 0x1800509B0 (DbgPrint.c)
 *     NtSetInformationProcess @ 0x18009D430 (NtSetInformationProcess.c)
 */

__int64 AVrfpEnableHandleVerifier()
{
  NTSTATUS v0; // ebx
  NTSTATUS v1; // eax
  int v3; // [rsp+30h] [rbp+8h] BYREF
  int ProcessInformation; // [rsp+38h] [rbp+10h] BYREF
  ULONG ProcessInformation_4; // [rsp+3Ch] [rbp+14h]

  if ( !AVrfpHandleTraces
    || (ProcessInformation = 0,
        ProcessInformation_4 = AVrfpHandleTraces,
        v0 = NtSetInformationProcess((HANDLE)0xFFFFFFFFFFFFFFFFLL, ProcessHandleTracing, &ProcessInformation, 8u),
        v0 < 0) )
  {
    v3 = 0;
    v1 = NtSetInformationProcess((HANDLE)0xFFFFFFFFFFFFFFFFLL, ProcessHandleTracing, &v3, 4u);
    v0 = v1;
    if ( v1 < 0 )
      DbgPrint("AVRF: failed to enable handle checking (status %X) \n", v1);
  }
  return (unsigned int)v0;
}
