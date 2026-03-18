/*
 * XREFs of NtQueryIoCompletion @ 0x1408901A0
 * Callers:
 *     <none>
 * Callees:
 *     HalPutDmaAdapter @ 0x140261190 (HalPutDmaAdapter.c)
 *     ObReferenceObjectByHandle @ 0x14062B200 (ObReferenceObjectByHandle.c)
 *     ExRaiseDatatypeMisalignment @ 0x140767450 (ExRaiseDatatypeMisalignment.c)
 */

__int64 __fastcall NtQueryIoCompletion(HANDLE Handle, int a2, unsigned __int64 a3, int a4, unsigned __int64 a5)
{
  KPROCESSOR_MODE PreviousMode; // r15
  __int64 v9; // rdx
  __int64 v10; // rcx
  _DWORD *v11; // rbx
  NTSTATUS v12; // esi
  int v13; // r14d
  PVOID Object; // [rsp+38h] [rbp-30h] BYREF

  if ( a2 )
    return 3221225475LL;
  if ( a4 != 4 )
    return 3221225476LL;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  if ( PreviousMode )
  {
    if ( (a3 & 3) != 0 )
      ExRaiseDatatypeMisalignment();
    v9 = 0x7FFFFFFF0000LL;
    v10 = 0x7FFFFFFF0000LL;
    if ( a3 < 0x7FFFFFFF0000LL )
      v10 = a3;
    *(_BYTE *)v10 = *(_BYTE *)v10;
    *(_BYTE *)(v10 + 3) = *(_BYTE *)(v10 + 3);
    v11 = (_DWORD *)a5;
    if ( a5 )
    {
      if ( a5 < 0x7FFFFFFF0000LL )
        v9 = a5;
      *(_DWORD *)v9 = *(_DWORD *)v9;
    }
  }
  else
  {
    v11 = (_DWORD *)a5;
  }
  Object = 0LL;
  v12 = ObReferenceObjectByHandle(Handle, 1u, IoCompletionObjectType, PreviousMode, &Object, 0LL);
  if ( v12 >= 0 )
  {
    v13 = *((_DWORD *)Object + 1);
    HalPutDmaAdapter((PADAPTER_OBJECT)Object);
    if ( PreviousMode )
    {
      *(_DWORD *)a3 = v13;
      if ( v11 )
        *v11 = 4;
    }
    else
    {
      *(_DWORD *)a3 = v13;
      if ( v11 )
        *v11 = 4;
    }
  }
  return (unsigned int)v12;
}
