/*
 * XREFs of ?CloseCallback@CTTMDEVICE@@CAX_K@Z @ 0x1C029D390
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x1C00027E4 (--3@YAXPEAX@Z.c)
 */

void __fastcall CTTMDEVICE::CloseCallback(void *a1, __int64 a2)
{
  __int64 v3; // rax
  __int64 v4; // rax
  struct _KEVENT *v5; // rcx

  if ( !a1 )
  {
    v3 = WdLogNewEntry5_WdAssertion(0LL, a2);
    *(_QWORD *)(v3 + 24) = 6016LL;
    WdLogEvent5_WdAssertion(v3);
  }
  v4 = _InterlockedExchangeAdd((volatile signed __int32 *)a1 + 156, 1u) & 0x1F;
  *((_DWORD *)a1 + 2 * v4 + 157) = 1073741826;
  *((_DWORD *)a1 + 2 * (unsigned int)v4 + 158) = MEMORY[0xFFFFF78000000008] / 0x2710uLL;
  if ( *((_BYTE *)a1 + 913) )
  {
    operator delete(a1);
  }
  else
  {
    ExReInitializeRundownProtection((PEX_RUNDOWN_REF)a1 + 6);
    v5 = (struct _KEVENT *)*((_QWORD *)a1 + 7);
    if ( v5 )
    {
      KeSetEvent(v5, 0, 0);
      *((_QWORD *)a1 + 7) = 0LL;
    }
  }
}
