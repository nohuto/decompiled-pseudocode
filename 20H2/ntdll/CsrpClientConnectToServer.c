/*
 * XREFs of CsrpClientConnectToServer @ 0x1800088AC
 * Callers:
 *     CsrClientConnectToServer @ 0x180008E20 (CsrClientConnectToServer.c)
 * Callees:
 *     CsrFreeCaptureBuffer @ 0x180008970 (CsrFreeCaptureBuffer.c)
 *     CsrClientCallServer @ 0x1800089A0 (CsrClientCallServer.c)
 *     CsrAllocateMessagePointer @ 0x180008D00 (CsrAllocateMessagePointer.c)
 *     CsrAllocateCaptureBuffer @ 0x180008D50 (CsrAllocateCaptureBuffer.c)
 *     memmove @ 0x1800A3EC0 (memmove.c)
 */

__int64 __fastcall CsrpClientConnectToServer(int a1, void *a2, unsigned int a3)
{
  __int64 CaptureBuffer; // rax
  void *v6; // rbx
  unsigned int v7; // ebp
  int v8; // edi
  _PORT_MESSAGE SendMessageA; // [rsp+20h] [rbp-3C8h] BYREF
  int v11; // [rsp+60h] [rbp-388h]
  void *Src; // [rsp+68h] [rbp-380h] BYREF
  unsigned int v13; // [rsp+70h] [rbp-378h]

  v11 = a1;
  v13 = a3;
  CaptureBuffer = CsrAllocateCaptureBuffer(1LL, a3);
  v6 = (void *)CaptureBuffer;
  if ( !CaptureBuffer )
    return 3221225495LL;
  CsrAllocateMessagePointer(CaptureBuffer, a3, &Src);
  v7 = a3;
  memmove(Src, a2, a3);
  v8 = CsrClientCallServer(&SendMessageA);
  if ( v8 >= 0 )
    memmove(a2, Src, v7);
  CsrFreeCaptureBuffer(v6);
  return (unsigned int)v8;
}
