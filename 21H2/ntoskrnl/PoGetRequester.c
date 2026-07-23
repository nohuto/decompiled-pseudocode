/*
 * XREFs of PoGetRequester @ 0x1402719A4
 * Callers:
 *     PoCaptureReasonContext @ 0x14027184C (PoCaptureReasonContext.c)
 * Callees:
 *     ObfReferenceObjectWithTag @ 0x1402A9FE0 (ObfReferenceObjectWithTag.c)
 *     MmGetSessionIdEx @ 0x140355BB0 (MmGetSessionIdEx.c)
 *     PopUnicodeStringDeepCopy @ 0x140671F50 (PopUnicodeStringDeepCopy.c)
 */

__int64 __fastcall PoGetRequester(char a1, void *a2, __int64 a3)
{
  struct _KTHREAD *CurrentThread; // rdx
  _QWORD *Teb; // rdx
  unsigned __int64 v6; // rax
  __int16 v7; // ax
  __int64 v8; // rax
  _KPROCESS *Process; // rbx
  __int64 result; // rax
  __int64 v11; // [rsp+48h] [rbp+20h]

  if ( !a1 )
  {
    *(_DWORD *)a3 = 0;
    *(_QWORD *)(a3 + 8) = a2;
    if ( a2 )
      ObfReferenceObjectWithTag(a2, 0x67446F50u);
    return 0LL;
  }
  v11 = 0LL;
  CurrentThread = KeGetCurrentThread();
  if ( (CurrentThread->MiscFlags & 0x400) != 0 || CurrentThread->ApcStateIndex == 1 )
    Teb = 0LL;
  else
    Teb = CurrentThread->Teb;
  if ( Teb )
  {
    if ( KeGetCurrentThread()->ApcState.Process[1].AffinityPadding[10]
      && (v6 = KeGetCurrentThread()->ApcState.Process[1].AffinityPadding[10]) != 0
      && ((v7 = *(_WORD *)(v6 + 8), v7 == 332) || v7 == 452) )
    {
      v8 = *((unsigned int *)Teb + 3032);
    }
    else
    {
      v8 = Teb[740];
    }
    v11 = v8;
  }
  *(_DWORD *)a3 = (v11 != 0) + 1;
  Process = KeGetCurrentThread()->ApcState.Process;
  *(_DWORD *)(a3 + 32) = Process[1].Header.WaitListHead.Flink;
  *(_DWORD *)(a3 + 36) = MmGetSessionIdEx(Process);
  result = PopUnicodeStringDeepCopy(
             (PUNICODE_STRING)(a3 + 16),
             (PCUNICODE_STRING)Process[1].ActiveProcessors.Bitmap[2],
             (POOL_TYPE)256,
             0x78435250u);
  if ( (int)result >= 0 )
  {
    *(_DWORD *)(a3 + 40) = v11;
    return 0LL;
  }
  return result;
}
