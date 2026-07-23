/*
 * XREFs of EtwpAddUmRegEntry @ 0x1406DA4F0
 * Callers:
 *     EtwpRegisterUMGuid @ 0x1406DB250 (EtwpRegisterUMGuid.c)
 * Callees:
 *     HalPutDmaAdapter @ 0x14023FBE0 (HalPutDmaAdapter.c)
 *     ObReferenceObjectByPointer @ 0x1402A5010 (ObReferenceObjectByPointer.c)
 *     ObfReferenceObjectWithTag @ 0x1402A9FE0 (ObfReferenceObjectWithTag.c)
 *     memset @ 0x140414300 (memset.c)
 *     EtwpReferenceGuidEntry @ 0x1406DB204 (EtwpReferenceGuidEntry.c)
 *     ObCreateObjectEx @ 0x14071BBF0 (ObCreateObjectEx.c)
 *     ObInsertObjectEx @ 0x14071BE00 (ObInsertObjectEx.c)
 */

__int64 __fastcall EtwpAddUmRegEntry(
        ULONG_PTR BugCheckParameter2,
        int a2,
        __int16 a3,
        __int64 a4,
        _QWORD *a5,
        __int64 a6)
{
  int Object; // ebx
  _KPROCESS *Process; // rbx
  __int64 v12; // rcx
  __int64 v14; // [rsp+60h] [rbp-1h] BYREF
  _DWORD v15[2]; // [rsp+68h] [rbp+7h] BYREF
  __int64 v16; // [rsp+70h] [rbp+Fh]
  __int64 v17; // [rsp+78h] [rbp+17h]
  int v18; // [rsp+80h] [rbp+1Fh]
  int v19; // [rsp+84h] [rbp+23h]
  __int128 v20; // [rsp+88h] [rbp+27h]

  v14 = 0LL;
  v15[1] = 0;
  v19 = 0;
  v16 = 0LL;
  v17 = 0LL;
  v15[0] = 48;
  v18 = 64;
  v20 = 0LL;
  Object = ObCreateObjectEx(0, (_DWORD)EtwpRegistrationObjectType, (unsigned int)v15, 1);
  if ( Object >= 0 )
  {
    memset(0LL, 0, 0x70uLL);
    Process = KeGetCurrentThread()->ApcState.Process;
    ObfReferenceObjectWithTag(Process, 0x52777445u);
    MEMORY[0x50] = Process;
    _InterlockedOr16((volatile signed __int16 *)0x62, 2u);
    if ( a2 == 2 )
      _InterlockedOr16((volatile signed __int16 *)0x62, 8u);
    MEMORY[0x60] = a3;
    MEMORY[0x58] = a4;
    EtwpReferenceGuidEntry(BugCheckParameter2);
    MEMORY[0x20] = BugCheckParameter2;
    v12 = *(_QWORD *)(BugCheckParameter2 + 56);
    if ( *(_QWORD *)(v12 + 8) != BugCheckParameter2 + 56 )
      __fastfail(3u);
    MEMORY[8] = BugCheckParameter2 + 56;
    MEMORY[0] = v12;
    *(_QWORD *)(v12 + 8) = 0LL;
    *(_QWORD *)(BugCheckParameter2 + 56) = 0LL;
    MEMORY[0x18] = 16LL;
    MEMORY[0x10] = 16LL;
    _InterlockedOr16((volatile signed __int16 *)0x62, 0x80u);
    ObReferenceObjectByPointer(0LL, 0, EtwpRegistrationObjectType, 0);
    Object = ObInsertObjectEx(0LL, 0LL, 0, (__int64)&v14, a6);
    *a5 = 0LL;
    if ( Object >= 0 )
      HalPutDmaAdapter(0LL);
  }
  return (unsigned int)Object;
}
