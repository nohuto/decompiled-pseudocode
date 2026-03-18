/*
 * XREFs of MmCreateSectionEx @ 0x14066BFB8
 * Callers:
 *     FsRtlCreateSectionForDataScan @ 0x1402031E0 (FsRtlCreateSectionForDataScan.c)
 *     MmCreateSection @ 0x14066BF30 (MmCreateSection.c)
 * Callees:
 *     MmGetSessionIdEx @ 0x140287F30 (MmGetSessionIdEx.c)
 *     ObfDereferenceObject @ 0x1402AD3E0 (ObfDereferenceObject.c)
 *     PsReferencePrimaryTokenWithTag @ 0x140347920 (PsReferencePrimaryTokenWithTag.c)
 *     MiCreateSection @ 0x1406FD4A0 (MiCreateSection.c)
 *     MiCaptureSectionCreateExtendedParameters @ 0x1406FE1A0 (MiCaptureSectionCreateExtendedParameters.c)
 */

__int64 __fastcall MmCreateSectionEx(
        int a1,
        int a2,
        int a3,
        int a4,
        int a5,
        __int64 a6,
        __int64 a7,
        char a8,
        int a9,
        volatile void *Address)
{
  __int64 result; // rax
  int v12; // esi
  _KPROCESS *Process; // r15
  char PreviousMode; // r12
  char v15; // bp
  void *v16; // r14
  int v17; // ebx
  int SessionId; // eax
  int v19; // edx
  unsigned int Section; // ebx
  __int128 v21; // [rsp+70h] [rbp-58h] BYREF
  int v22; // [rsp+80h] [rbp-48h]
  char v23; // [rsp+84h] [rbp-44h]

  v21 = 0LL;
  v22 = 0;
  v23 = 0;
  result = MiCaptureSectionCreateExtendedParameters(Address, (__int64)&v21);
  if ( (int)result >= 0 )
  {
    v12 = 0;
    Process = KeGetCurrentThread()->ApcState.Process;
    PreviousMode = KeGetCurrentThread()->PreviousMode;
    if ( PreviousMode == 1 )
    {
      v15 = BYTE1(Process[2].Header.WaitListHead.Flink);
      v16 = (void *)PsReferencePrimaryTokenWithTag((__int64)Process, 0x746C6644u);
    }
    else
    {
      v16 = 0LL;
      v15 = (v22 & 8) != 0 ? BYTE12(v21) : 0;
      v12 = (v22 & 8) != 0 ? 0x10 : 0;
    }
    v17 = v12 | 2;
    if ( !a7 )
      v17 = v12;
    SessionId = MmGetSessionIdEx((__int64)Process);
    v19 = v17 | 4;
    if ( (a8 & 2) == 0 )
      v19 = v17;
    Section = MiCreateSection(
                a1,
                a2,
                a3,
                a4,
                a5,
                v19,
                (__int64)v16,
                v15,
                a6,
                a7,
                PreviousMode,
                SessionId,
                (__int64)&v21);
    if ( v16 )
      ObfDereferenceObject(v16);
    return Section;
  }
  return result;
}
