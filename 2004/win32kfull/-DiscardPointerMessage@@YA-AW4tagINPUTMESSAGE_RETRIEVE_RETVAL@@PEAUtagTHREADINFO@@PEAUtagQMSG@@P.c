/*
 * XREFs of ?DiscardPointerMessage@@YA?AW4tagINPUTMESSAGE_RETRIEVE_RETVAL@@PEAUtagTHREADINFO@@PEAUtagQMSG@@PEAUtagWND@@PEAUtagMSG@@@Z @ 0x1C01F14F4
 * Callers:
 *     ?xxxDiscardPointerWindowFrameMessages@@YAHPEAUtagTHREADINFO@@_K@Z @ 0x1C01F1D44 (-xxxDiscardPointerWindowFrameMessages@@YAHPEAUtagTHREADINFO@@_K@Z.c)
 * Callees:
 *     DelQEntry @ 0x1C00B0784 (DelQEntry.c)
 *     ?RetrieveMessage@Pointer@InputTraceLogging@@SAXPEBUtagQMSG@@_NW4tagINPUTMESSAGE_RETRIEVE_RETVAL@@@Z @ 0x1C01E16B4 (-RetrieveMessage@Pointer@InputTraceLogging@@SAXPEBUtagQMSG@@_NW4tagINPUTMESSAGE_RETRIEVE_RETVAL@.c)
 *     xxxRetrievePointerInputMessage @ 0x1C01F0D78 (xxxRetrievePointerInputMessage.c)
 */

__int64 __fastcall DiscardPointerMessage(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v5; // rdi
  unsigned int v7; // r8d
  unsigned int v10; // esi
  __int64 *v11; // rax
  int v13; // [rsp+78h] [rbp-9h]
  int v14; // [rsp+88h] [rbp+7h] BYREF
  __int64 v15; // [rsp+90h] [rbp+Fh] BYREF
  __int64 v16; // [rsp+98h] [rbp+17h] BYREF
  unsigned __int64 v17; // [rsp+A0h] [rbp+1Fh] BYREF
  struct tagQMSG *v18; // [rsp+A8h] [rbp+27h] BYREF
  __int64 v19; // [rsp+F0h] [rbp+6Fh] BYREF
  int v20; // [rsp+100h] [rbp+7Fh] BYREF

  v14 = 1;
  v5 = 0LL;
  v7 = *(_DWORD *)(a2 + 24);
  v15 = 0LL;
  LODWORD(v19) = 0;
  v16 = 0LL;
  v17 = 0LL;
  v20 = 0;
  v10 = xxxRetrievePointerInputMessage(
          a1,
          a3,
          v7,
          v7,
          0,
          1,
          &v14,
          (struct tagQMSG *)a2,
          &v15,
          (unsigned int *)&v19,
          (unsigned __int64 *)&v16,
          &v17,
          &v20,
          &v18,
          v13);
  InputTraceLogging::Pointer::RetrieveMessage(a2, 1u, v10);
  if ( a4 && v10 == 1 )
  {
    v11 = (__int64 *)v15;
    *(_OWORD *)a4 = 0LL;
    *(_OWORD *)(a4 + 16) = 0LL;
    *(_OWORD *)(a4 + 32) = 0LL;
    if ( v11 )
      v5 = *v11;
    *(_DWORD *)(a4 + 8) = v19;
    *(_QWORD *)(a4 + 16) = v16;
    *(_QWORD *)(a4 + 24) = v17;
    *(_QWORD *)a4 = v5;
    *(_DWORD *)(a4 + 32) = *(_DWORD *)(a2 + 48);
    *(_QWORD *)(a4 + 36) = *(_QWORD *)(a2 + 52);
  }
  if ( v10 != 2 )
    DelQEntry((unsigned int **)(*(_QWORD *)(a1 + 424) + 24LL), (unsigned int *)a2, 1);
  return v10;
}
