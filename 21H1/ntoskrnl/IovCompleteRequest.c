/*
 * XREFs of IovCompleteRequest @ 0x1409C1F80
 * Callers:
 *     IofCompleteRequest @ 0x140248710 (IofCompleteRequest.c)
 * Callees:
 *     IopfCompleteRequest @ 0x140248740 (IopfCompleteRequest.c)
 *     __security_check_cookie @ 0x1403CC020 (__security_check_cookie.c)
 *     IopPerfCompleteRequest @ 0x1405024FC (IopPerfCompleteRequest.c)
 *     IovpLogStackTrace @ 0x1409C2958 (IovpLogStackTrace.c)
 *     IovpCompleteRequest1 @ 0x1409CD4A0 (IovpCompleteRequest1.c)
 *     VerifierBugCheckIfAppropriate @ 0x1409CDD34 (VerifierBugCheckIfAppropriate.c)
 */

void __fastcall IovCompleteRequest(ULONG_PTR BugCheckParameter1, unsigned __int8 a2)
{
  __int64 v4; // rdx
  ULONG_PTR v5; // r8
  ULONG_PTR v6; // rax
  bool v7; // sf
  __int128 *v8; // rcx
  char v9; // al
  __int64 v10; // [rsp+30h] [rbp-59h] BYREF
  __int128 v11; // [rsp+38h] [rbp-51h]
  __int64 v12; // [rsp+48h] [rbp-41h]
  void *v13; // [rsp+50h] [rbp-39h]
  _QWORD v14[3]; // [rsp+58h] [rbp-31h] BYREF
  __int64 v15; // [rsp+70h] [rbp-19h]
  __int128 v16; // [rsp+78h] [rbp-11h]
  __int128 v17; // [rsp+88h] [rbp-1h]
  __int128 v18; // [rsp+98h] [rbp+Fh]
  __int128 v19; // [rsp+A8h] [rbp+1Fh]
  __int64 v20; // [rsp+B8h] [rbp+2Fh]
  void *retaddr; // [rsp+E8h] [rbp+5Fh]

  v10 = 0LL;
  v12 = 0LL;
  v11 = 0LL;
  IovpLogStackTrace(BugCheckParameter1);
  if ( (MmVerifierData & 0x10) != 0 && !IovpDisabledWithoutReboot )
  {
    if ( *(char *)(BugCheckParameter1 + 67) > (char)(*(_BYTE *)(BugCheckParameter1 + 66) + 1)
      || *(_WORD *)BugCheckParameter1 != 6 )
    {
      VerifierBugCheckIfAppropriate(0x44u, BugCheckParameter1, 0x486uLL, 0LL, 0LL);
    }
    v5 = *(_QWORD *)(BugCheckParameter1 + 104);
    if ( v5 )
      VerifierBugCheckIfAppropriate(0xC9u, 7uLL, v5, BugCheckParameter1, 0LL);
    v6 = *(int *)(BugCheckParameter1 + 48);
    if ( (_DWORD)v6 == 259 || (_DWORD)v6 == -1 )
      VerifierBugCheckIfAppropriate(0xC9u, 6uLL, v6, BugCheckParameter1, 0LL);
    if ( KeGetCurrentIrql() > 2u )
      VerifierBugCheckIfAppropriate(0xC9u, 0xEuLL, KeGetCurrentIrql(), BugCheckParameter1, 0LL);
  }
  LOBYTE(v4) = a2;
  v13 = retaddr;
  IovpCompleteRequest1(BugCheckParameter1, v4, &v10);
  if ( (!IovpDisabledWithoutReboot || v10) && *(_BYTE *)(BugCheckParameter1 + 67) <= *(_BYTE *)(BugCheckParameter1 + 66) )
  {
    v7 = *(int *)(BugCheckParameter1 + 48) < 0;
    v8 = *(__int128 **)(BugCheckParameter1 + 184);
    v14[2] = &v10;
    v14[1] = *((_QWORD *)v8 + 8);
    v14[0] = v8;
    v16 = *v8;
    v17 = v8[1];
    v18 = v8[2];
    v19 = v8[3];
    v20 = *((_QWORD *)v8 + 8);
    v9 = *((_BYTE *)v8 + 3);
    if ( v7 )
    {
      if ( v9 < 0 )
        goto LABEL_18;
    }
    else if ( (v9 & 0x40) != 0 )
    {
      goto LABEL_18;
    }
    if ( !*(_BYTE *)(BugCheckParameter1 + 68) || (v9 & 0x20) == 0 )
    {
      v15 = 0LL;
      *((_BYTE *)v8 + 3) |= 0xE0u;
      goto LABEL_19;
    }
LABEL_18:
    v15 = *((_QWORD *)v8 + 7);
LABEL_19:
    *((_QWORD *)v8 + 7) = IovpLocalCompletionRoutine;
    *((_QWORD *)v8 + 8) = v14;
  }
  if ( (IopFunctionPointerMask & 2) != 0 )
    IopPerfCompleteRequest(BugCheckParameter1, a2);
  else
    IopfCompleteRequest(BugCheckParameter1, a2);
}
