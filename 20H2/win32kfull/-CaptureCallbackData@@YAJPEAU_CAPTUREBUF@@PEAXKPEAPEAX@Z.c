/*
 * XREFs of ?CaptureCallbackData@@YAJPEAU_CAPTUREBUF@@PEAXKPEAPEAX@Z @ 0x1C007634C
 * Callers:
 *     fnHkINLPCBTCREATESTRUCT @ 0x1C0071090 (fnHkINLPCBTCREATESTRUCT.c)
 *     SfnPOWERBROADCAST @ 0x1C00733C0 (SfnPOWERBROADCAST.c)
 *     xxxClientAddFontResourceW @ 0x1C0073C68 (xxxClientAddFontResourceW.c)
 *     SfnINDEVICECHANGE @ 0x1C0075540 (SfnINDEVICECHANGE.c)
 *     ClientLoadLibrary @ 0x1C0075918 (ClientLoadLibrary.c)
 *     SfnINLPCREATESTRUCT @ 0x1C0075B70 (SfnINLPCREATESTRUCT.c)
 *     SfnINSTRINGNULL @ 0x1C0076660 (SfnINSTRINGNULL.c)
 *     xxxClientLoadImage @ 0x1C0077158 (xxxClientLoadImage.c)
 *     xxxClientLoadMenu @ 0x1C0077E08 (xxxClientLoadMenu.c)
 *     SfnCOPYDATA @ 0x1C0078330 (SfnCOPYDATA.c)
 *     xxxClientExpandStringW @ 0x1C007A6A4 (xxxClientExpandStringW.c)
 *     SfnINSTRING @ 0x1C007B6F0 (SfnINSTRING.c)
 *     xxxClientExtTextOutW @ 0x1C014E060 (xxxClientExtTextOutW.c)
 *     xxxClientGetTextExtentPointW @ 0x1C014E388 (xxxClientGetTextExtentPointW.c)
 *     ClientEventCallback @ 0x1C02283F8 (ClientEventCallback.c)
 *     SfnCOPYGLOBALDATA @ 0x1C02287F0 (SfnCOPYGLOBALDATA.c)
 *     SfnIMECONTROL @ 0x1C0229130 (SfnIMECONTROL.c)
 *     SfnINLPHELPINFOSTRUCT @ 0x1C022AF60 (SfnINLPHELPINFOSTRUCT.c)
 *     SfnINLPHLPSTRUCT @ 0x1C022B3D0 (SfnINLPHLPSTRUCT.c)
 *     SfnINLPKDRAWSWITCHWND @ 0x1C022B830 (SfnINLPKDRAWSWITCHWND.c)
 *     SfnINLPMDICREATESTRUCT @ 0x1C022BD70 (SfnINLPMDICREATESTRUCT.c)
 *     SfnINPGESTURENOTIFYSTRUCT @ 0x1C022DBA0 (SfnINPGESTURENOTIFYSTRUCT.c)
 *     SfnPOPTINLPUINT @ 0x1C022F310 (SfnPOPTINLPUINT.c)
 *     SfnPOUTLPINT @ 0x1C022F7D0 (SfnPOUTLPINT.c)
 *     SfnTOUCHHITTESTING @ 0x1C02304C0 (SfnTOUCHHITTESTING.c)
 *     xxxClientFindMnemChar @ 0x1C0232400 (xxxClientFindMnemChar.c)
 *     xxxClientLpkDrawTextEx @ 0x1C0232AEC (xxxClientLpkDrawTextEx.c)
 *     xxxClientPSMTextOut @ 0x1C0232F54 (xxxClientPSMTextOut.c)
 * Callees:
 *     memmove @ 0x1C015F5C0 (memmove.c)
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
