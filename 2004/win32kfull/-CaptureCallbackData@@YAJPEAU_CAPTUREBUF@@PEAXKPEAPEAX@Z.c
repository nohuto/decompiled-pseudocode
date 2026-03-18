/*
 * XREFs of ?CaptureCallbackData@@YAJPEAU_CAPTUREBUF@@PEAXKPEAPEAX@Z @ 0x1C004748C
 * Callers:
 *     xxxClientLoadMenu @ 0x1C0030C0C (xxxClientLoadMenu.c)
 *     SfnCOPYDATA @ 0x1C00436E0 (SfnCOPYDATA.c)
 *     xxxClientLoadImage @ 0x1C0043B54 (xxxClientLoadImage.c)
 *     SfnINSTRINGNULL @ 0x1C0044240 (SfnINSTRINGNULL.c)
 *     SfnPOWERBROADCAST @ 0x1C0044700 (SfnPOWERBROADCAST.c)
 *     xxxClientAddFontResourceW @ 0x1C0044DA4 (xxxClientAddFontResourceW.c)
 *     fnHkINLPCBTCREATESTRUCT @ 0x1C0044FDC (fnHkINLPCBTCREATESTRUCT.c)
 *     SfnINDEVICECHANGE @ 0x1C0046680 (SfnINDEVICECHANGE.c)
 *     ClientLoadLibrary @ 0x1C0046A58 (ClientLoadLibrary.c)
 *     SfnINLPCREATESTRUCT @ 0x1C0046CB0 (SfnINLPCREATESTRUCT.c)
 *     xxxClientExpandStringW @ 0x1C0048558 (xxxClientExpandStringW.c)
 *     SfnINSTRING @ 0x1C0118960 (SfnINSTRING.c)
 *     xxxClientExtTextOutW @ 0x1C014B850 (xxxClientExtTextOutW.c)
 *     xxxClientGetTextExtentPointW @ 0x1C014BB78 (xxxClientGetTextExtentPointW.c)
 *     ClientEventCallback @ 0x1C0229288 (ClientEventCallback.c)
 *     SfnCOPYGLOBALDATA @ 0x1C0229680 (SfnCOPYGLOBALDATA.c)
 *     SfnIMECONTROL @ 0x1C0229FC0 (SfnIMECONTROL.c)
 *     SfnINLPHELPINFOSTRUCT @ 0x1C022BDF0 (SfnINLPHELPINFOSTRUCT.c)
 *     SfnINLPHLPSTRUCT @ 0x1C022C260 (SfnINLPHLPSTRUCT.c)
 *     SfnINLPKDRAWSWITCHWND @ 0x1C022C6C0 (SfnINLPKDRAWSWITCHWND.c)
 *     SfnINLPMDICREATESTRUCT @ 0x1C022CC00 (SfnINLPMDICREATESTRUCT.c)
 *     SfnINPGESTURENOTIFYSTRUCT @ 0x1C022EA30 (SfnINPGESTURENOTIFYSTRUCT.c)
 *     SfnPOPTINLPUINT @ 0x1C02301A0 (SfnPOPTINLPUINT.c)
 *     SfnPOUTLPINT @ 0x1C0230660 (SfnPOUTLPINT.c)
 *     SfnTOUCHHITTESTING @ 0x1C0231350 (SfnTOUCHHITTESTING.c)
 *     xxxClientFindMnemChar @ 0x1C0233290 (xxxClientFindMnemChar.c)
 *     xxxClientLpkDrawTextEx @ 0x1C023397C (xxxClientLpkDrawTextEx.c)
 *     xxxClientPSMTextOut @ 0x1C0233DE4 (xxxClientPSMTextOut.c)
 * Callees:
 *     memmove @ 0x1C015BD40 (memmove.c)
 */

__int64 __fastcall CaptureCallbackData(struct _CAPTUREBUF *a1, unsigned __int64 a2, unsigned int a3, void **a4)
{
  __int64 v5; // rax
  const void *v6; // r10
  char *v8; // rdi
  unsigned __int64 v10; // r8

  v5 = a3;
  v6 = (const void *)a2;
  if ( !a2 )
  {
    *a4 = 0LL;
    return 0LL;
  }
  if ( a3 > *((_DWORD *)a1 + 1) )
    return 2147483653LL;
  v8 = (char *)*((_QWORD *)a1 + 2);
  if ( !*((_QWORD *)a1 + 4) )
    goto LABEL_4;
  v10 = *((_QWORD *)a1 + 2);
  if ( a2 > (unsigned __int64)v8 )
    v10 = a2;
  if ( a2 + v5 >= (unsigned __int64)&v8[v5] )
    a2 = *((_QWORD *)a1 + 2);
  if ( v10 >= (unsigned int)v5 + a2 )
  {
LABEL_4:
    *((_QWORD *)a1 + 2) = &v8[((unsigned int)v5 + 7LL) & 0xFFFFFFFFFFFFFFF8uLL];
    memmove(v8, v6, (unsigned int)v5);
    if ( *((_QWORD *)a1 + 4) )
    {
      *a4 = v8;
    }
    else
    {
      *a4 = (void *)(v8 - (char *)a1);
      *(_DWORD *)((char *)a1 + 4 * (*((_DWORD *)a1 + 2))++ + *((unsigned int *)a1 + 6)) = (_DWORD)a4 - (_DWORD)a1;
    }
    return 0LL;
  }
  return 3221225496LL;
}
