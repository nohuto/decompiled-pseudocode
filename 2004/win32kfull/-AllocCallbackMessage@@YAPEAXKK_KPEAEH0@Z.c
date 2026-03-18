/*
 * XREFs of ?AllocCallbackMessage@@YAPEAXKK_KPEAEH0@Z @ 0x1C0047530
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
 *     SfnGETDBCSTEXTLENGTHS @ 0x1C0047690 (SfnGETDBCSTEXTLENGTHS.c)
 *     xxxClientLoadStringW @ 0x1C00480B4 (xxxClientLoadStringW.c)
 *     xxxClientExpandStringW @ 0x1C0048558 (xxxClientExpandStringW.c)
 *     SfnINSTRING @ 0x1C0118960 (SfnINSTRING.c)
 *     xxxClientExtTextOutW @ 0x1C014B850 (xxxClientExtTextOutW.c)
 *     xxxClientGetTextExtentPointW @ 0x1C014BB78 (xxxClientGetTextExtentPointW.c)
 *     ClientGetListboxString @ 0x1C014C7B4 (ClientGetListboxString.c)
 *     ClientEventCallback @ 0x1C0229288 (ClientEventCallback.c)
 *     SfnCOPYGLOBALDATA @ 0x1C0229680 (SfnCOPYGLOBALDATA.c)
 *     SfnIMECONTROL @ 0x1C0229FC0 (SfnIMECONTROL.c)
 *     SfnINCNTOUTSTRING @ 0x1C022AB60 (SfnINCNTOUTSTRING.c)
 *     SfnINCNTOUTSTRINGNULL @ 0x1C022B180 (SfnINCNTOUTSTRINGNULL.c)
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
 *     memset @ 0x1C015C000 (memset.c)
 */

unsigned __int8 *__fastcall AllocCallbackMessage(
        int a1,
        unsigned int a2,
        __int64 a3,
        unsigned __int8 *a4,
        int a5,
        size_t Size)
{
  unsigned __int8 *v6; // rbx
  unsigned int v7; // ebp
  __int64 v8; // rdi
  ULONG_PTR v9; // rdx
  bool v10; // zf
  int v11; // eax
  unsigned __int8 *result; // rax
  __int64 v13; // rax
  _QWORD *v14; // rsi
  ULONG_PTR RegionSize; // [rsp+50h] [rbp+18h] BYREF

  v6 = a4;
  if ( a2 )
  {
    v7 = (a1 + 7) & 0xFFFFFFF8;
    v8 = v7 + 8 * a2;
    v9 = (a3 + 7LL * a2) & 0xFFFFFFFFFFFFFFF8uLL;
    RegionSize = v9;
    if ( v9 > 0x800 )
    {
      v13 = Win32AllocPoolWithQuotaZInit((unsigned int)v8, 1667461973LL);
      v6 = (unsigned __int8 *)v13;
      if ( v13 )
      {
        v14 = (_QWORD *)(v13 + 32);
        *(_QWORD *)(v13 + 32) = 0LL;
        if ( ZwAllocateVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, (PVOID *)(v13 + 32), 0LL, &RegionSize, 0x1000u, 4u) >= 0 )
        {
          *((_QWORD *)v6 + 2) = *v14;
          goto LABEL_8;
        }
        Win32FreePool(v6);
      }
    }
    else
    {
      if ( v8 + v9 <= Size )
      {
        memset(a4, 0, Size);
        goto LABEL_5;
      }
      v6 = (unsigned __int8 *)Win32AllocPoolWithQuotaZInit((unsigned int)(v9 + v8), 1667461973LL);
      if ( v6 )
      {
LABEL_5:
        *((_QWORD *)v6 + 4) = 0LL;
        v10 = a5 == 0;
        *((_QWORD *)v6 + 2) = &v6[v8];
        if ( !v10 )
        {
          *(_DWORD *)v6 = v8 + RegionSize;
LABEL_7:
          v11 = RegionSize;
          *((_DWORD *)v6 + 2) = 0;
          *((_DWORD *)v6 + 1) = v11;
          result = v6;
          *((_DWORD *)v6 + 6) = v7;
          return result;
        }
LABEL_8:
        *(_DWORD *)v6 = v8;
        goto LABEL_7;
      }
    }
  }
  return 0LL;
}
