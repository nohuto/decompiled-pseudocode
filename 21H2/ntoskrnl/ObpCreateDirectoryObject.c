/*
 * XREFs of ObpCreateDirectoryObject @ 0x140601A90
 * Callers:
 *     NtCreateDirectoryObjectEx @ 0x140601A50 (NtCreateDirectoryObjectEx.c)
 *     NtCreateDirectoryObject @ 0x140601A70 (NtCreateDirectoryObject.c)
 * Callees:
 *     HalPutDmaAdapter @ 0x14023FBE0 (HalPutDmaAdapter.c)
 *     memset @ 0x140414300 (memset.c)
 *     ObReferenceObjectByHandle @ 0x140707FA0 (ObReferenceObjectByHandle.c)
 *     ObCreateObjectEx @ 0x14071BBF0 (ObCreateObjectEx.c)
 *     ObInsertObjectEx @ 0x14071BE00 (ObInsertObjectEx.c)
 *     RtlIsSandboxedToken @ 0x14071C8A0 (RtlIsSandboxedToken.c)
 */

__int64 __fastcall ObpCreateDirectoryObject(__int64 a1, __int64 a2, int a3, void *a4, int a5)
{
  _QWORD *v6; // r12
  KPROCESSOR_MODE PreviousMode; // si
  int inserted; // edi
  int v10; // r14d
  int v11; // edx
  int v12; // eax
  struct _DMA_ADAPTER *DmaAdapter; // [rsp+50h] [rbp-38h]
  PVOID Object; // [rsp+60h] [rbp-28h] BYREF
  __int64 v15; // [rsp+68h] [rbp-20h] BYREF

  v6 = (_QWORD *)a1;
  v15 = 0LL;
  DmaAdapter = 0LL;
  if ( (a5 & 0xFFFFFFFC) != 0 )
    goto LABEL_23;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  if ( PreviousMode )
  {
    if ( (a5 & 2) == 0 )
    {
      a1 = 0x7FFFFFFF0000LL;
      if ( (unsigned __int64)v6 < 0x7FFFFFFF0000LL )
        a1 = (__int64)v6;
      *(_QWORD *)a1 = *(_QWORD *)a1;
      goto LABEL_7;
    }
LABEL_23:
    inserted = -1073741581;
    goto LABEL_9;
  }
LABEL_7:
  if ( !a4
    || (Object = 0LL,
        inserted = ObReferenceObjectByHandle(a4, 3u, ObpDirectoryObjectType, PreviousMode, &Object, 0LL),
        DmaAdapter = (struct _DMA_ADAPTER *)Object,
        inserted >= 0) )
  {
    LOBYTE(a1) = PreviousMode;
    inserted = ObCreateObjectEx(a1, (_DWORD)ObpDirectoryObjectType, a3, PreviousMode);
    if ( inserted >= 0 )
    {
      memset(0LL, 0, 0x158uLL);
      MEMORY[0x128] = 0LL;
      MEMORY[0x154] = -1;
      v10 = 0;
      if ( DmaAdapter )
      {
        v10 = 4;
        MEMORY[0x138] = DmaAdapter;
        DmaAdapter = 0LL;
        if ( (unsigned __int8)RtlIsSandboxedToken(0LL) )
          v10 = 20;
      }
      v11 = v10 | 8;
      if ( (a5 & 1) == 0 )
        v11 = v10;
      v12 = v11 | 0x20;
      if ( (a5 & 2) == 0 )
        v12 = v11;
      MEMORY[0x150] |= v12;
      inserted = ObInsertObjectEx(0LL, 0LL, 0, 0LL, (__int64)&v15);
      *v6 = v15;
    }
  }
LABEL_9:
  if ( DmaAdapter )
    HalPutDmaAdapter(DmaAdapter);
  return (unsigned int)inserted;
}
