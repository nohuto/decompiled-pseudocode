/*
 * XREFs of PoGetRequester @ 0x14033E074
 * Callers:
 *     PoCaptureReasonContext @ 0x14033DF4C (PoCaptureReasonContext.c)
 * Callees:
 *     ObfReferenceObjectWithTag @ 0x14025A2D0 (ObfReferenceObjectWithTag.c)
 */

LONG_PTR __fastcall PoGetRequester(char a1, void *a2, __int64 a3)
{
  LONG_PTR result; // rax
  struct _KTHREAD *CurrentThread; // rdx
  _QWORD *Teb; // rdx
  LONG_PTR v6; // rax
  unsigned __int64 v7; // rcx
  __int16 v8; // ax
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
        && (v7 = KeGetCurrentThread()->ApcState.Process[1].AffinityPadding[10]) != 0
        && ((v8 = *(_WORD *)(v7 + 8), v8 == 332) || v8 == 452) )
      {
        v6 = *((unsigned int *)Teb + 3032);
      }
      else
      {
        v6 = Teb[740];
      }
      v9 = v6;
    }
    *(_DWORD *)a3 = (v9 != 0) + 1;
    *(_QWORD *)(a3 + 8) = KeGetCurrentThread()->ApcState.Process;
    result = v9;
    *(_DWORD *)(a3 + 16) = v9;
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
