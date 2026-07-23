/*
 * XREFs of PoGetRequesterOld @ 0x1403F7F10
 * Callers:
 *     PoCaptureReasonContext @ 0x14027184C (PoCaptureReasonContext.c)
 * Callees:
 *     ObfReferenceObjectWithTag @ 0x1402A9FE0 (ObfReferenceObjectWithTag.c)
 */

LONG_PTR __fastcall PoGetRequesterOld(char a1, void *a2, __int64 a3)
{
  LONG_PTR result; // rax
  struct _KTHREAD *CurrentThread; // rdx
  _QWORD *Teb; // rdx
  unsigned __int64 v6; // rax
  __int16 v7; // ax
  LONG_PTR v8; // rax
  LONG_PTR v9; // [rsp+48h] [rbp+20h]

  result = (LONG_PTR)a2;
  if ( a1 )
  {
    v9 = 0LL;
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
      v9 = v8;
    }
    *(_DWORD *)a3 = (v9 != 0) + 1;
    *(_QWORD *)(a3 + 8) = KeGetCurrentThread()->ApcState.Process;
    result = v9;
    *(_DWORD *)(a3 + 40) = v9;
  }
  else
  {
    *(_DWORD *)a3 = 0;
    *(_QWORD *)(a3 + 8) = a2;
    if ( a2 )
      return ObfReferenceObjectWithTag(a2, 0x67446F50u);
  }
  return result;
}
