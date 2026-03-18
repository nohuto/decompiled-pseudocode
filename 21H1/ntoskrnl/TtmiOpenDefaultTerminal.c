/*
 * XREFs of TtmiOpenDefaultTerminal @ 0x1408F9154
 * Callers:
 *     TtmpDispatchOpenTerminal @ 0x1408FC7E4 (TtmpDispatchOpenTerminal.c)
 * Callees:
 *     HalPutDmaAdapter @ 0x140261190 (HalPutDmaAdapter.c)
 *     ObOpenObjectByPointer @ 0x1405E0F20 (ObOpenObjectByPointer.c)
 *     ObReferenceObjectByHandle @ 0x14062B200 (ObReferenceObjectByHandle.c)
 *     TtmiLogError @ 0x1408FE3D0 (TtmiLogError.c)
 */

__int64 __fastcall TtmiOpenDefaultTerminal(__int64 a1, ACCESS_MASK a2, KPROCESSOR_MODE a3, HANDLE *a4)
{
  void *v4; // rcx
  NTSTATUS v8; // eax
  unsigned int v9; // ebx
  __int64 v10; // r9
  __int64 v11; // r8
  __int64 v12; // rdx
  PVOID Object; // [rsp+50h] [rbp+8h] BYREF

  v4 = *(void **)(a1 + 24);
  Object = 0LL;
  v8 = ObReferenceObjectByHandle(v4, a2, TtmpTerminalObjectType, 0, &Object, 0LL);
  v9 = v8;
  if ( v8 < 0 )
  {
    v10 = (unsigned int)v8;
    v11 = (unsigned int)v8;
    v12 = 757LL;
LABEL_5:
    TtmiLogError("TtmiOpenDefaultTerminal", v12, v11, v10);
    return v9;
  }
  v9 = ObOpenObjectByPointer(Object, a3 == 0 ? 0x200 : 0, 0LL, a2, TtmpTerminalObjectType, a3, a4);
  HalPutDmaAdapter((PADAPTER_OBJECT)Object);
  if ( (v9 & 0x80000000) != 0 )
  {
    v10 = v9;
    v11 = v9;
    v12 = 782LL;
    goto LABEL_5;
  }
  return v9;
}
