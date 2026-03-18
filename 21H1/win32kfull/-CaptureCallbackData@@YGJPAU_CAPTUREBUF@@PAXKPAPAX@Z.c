/*
 * XREFs of ?CaptureCallbackData@@YGJPAU_CAPTUREBUF@@PAXKPAPAX@Z @ 0x45940
 * Callers:
 *     _ClientLoadLibrary@8 @ 0x16A64 (_ClientLoadLibrary@8.c)
 *     _xxxClientLoadMenu@8 @ 0x16C34 (_xxxClientLoadMenu@8.c)
 *     _SfnINLPCREATESTRUCT@32 @ 0x448FE (_SfnINLPCREATESTRUCT@32.c)
 *     _SfnCOPYDATA@32 @ 0xA297A (_SfnCOPYDATA@32.c)
 *     _SfnINSTRINGNULL@32 @ 0xA436C (_SfnINSTRINGNULL@32.c)
 *     _SfnPOWERBROADCAST@32 @ 0xA4C38 (_SfnPOWERBROADCAST@32.c)
 *     _xxxClientExtTextOutW@32 @ 0xBC862 (_xxxClientExtTextOutW@32.c)
 *     _xxxClientGetTextExtentPointW@16 @ 0xBCB06 (_xxxClientGetTextExtentPointW@16.c)
 *     _SfnINDEVICECHANGE@32 @ 0xC8560 (_SfnINDEVICECHANGE@32.c)
 *     _fnHkINLPCBTCREATESTRUCT@20 @ 0xC8910 (_fnHkINLPCBTCREATESTRUCT@20.c)
 *     _xxxClientAddFontResourceW@12 @ 0xD719A (_xxxClientAddFontResourceW@12.c)
 *     _xxxClientLoadImage@28 @ 0xD94BC (_xxxClientLoadImage@28.c)
 *     _xxxClientExpandStringW@4 @ 0xD97D4 (_xxxClientExpandStringW@4.c)
 *     _ClientEventCallback@8 @ 0x189761 (_ClientEventCallback@8.c)
 *     _SfnCOPYGLOBALDATA@32 @ 0x18A2D8 (_SfnCOPYGLOBALDATA@32.c)
 *     _SfnIMECONTROL@32 @ 0x18B448 (_SfnIMECONTROL@32.c)
 *     _SfnINLPHELPINFOSTRUCT@32 @ 0x18D261 (_SfnINLPHELPINFOSTRUCT@32.c)
 *     _SfnINLPHLPSTRUCT@32 @ 0x18D5F5 (_SfnINLPHLPSTRUCT@32.c)
 *     _SfnINLPKDRAWSWITCHWND@32 @ 0x18D98D (_SfnINLPKDRAWSWITCHWND@32.c)
 *     _SfnINLPMDICREATESTRUCT@32 @ 0x18DE71 (_SfnINLPMDICREATESTRUCT@32.c)
 *     _SfnINPGESTURENOTIFYSTRUCT@32 @ 0x18FA31 (_SfnINPGESTURENOTIFYSTRUCT@32.c)
 *     _SfnINSTRING@32 @ 0x19002A (_SfnINSTRING@32.c)
 *     _SfnPOPTINLPUINT@32 @ 0x191A41 (_SfnPOPTINLPUINT@32.c)
 *     _SfnPOUTLPINT@32 @ 0x191E47 (_SfnPOUTLPINT@32.c)
 *     _SfnTOUCHHITTESTING@32 @ 0x1927E2 (_SfnTOUCHHITTESTING@32.c)
 *     _xxxClientFindMnemChar@16 @ 0x19406B (_xxxClientFindMnemChar@16.c)
 *     _xxxClientLpkDrawTextEx@40 @ 0x1945DA (_xxxClientLpkDrawTextEx@40.c)
 *     _xxxClientPSMTextOut@24 @ 0x19495D (_xxxClientPSMTextOut@24.c)
 * Callees:
 *     __SEH_prolog4 @ 0xF9120 (__SEH_prolog4.c)
 *     _memcpy @ 0xF929B (_memcpy.c)
 *     ?IsOverlappedVA@@YGHQBE0K@Z @ 0x1894AF (-IsOverlappedVA@@YGHQBE0K@Z.c)
 */

int __userpurge CaptureCallbackData@<eax>(
        const void *a1@<edx>,
        char *a2@<ecx>,
        const unsigned __int8 *MaxCount,
        char *a4,
        unsigned int a5,
        void **a6)
{
  char *v7; // edi
  const unsigned __int8 *v9; // [esp+0h] [ebp-30h]
  unsigned int v10; // [esp+4h] [ebp-2Ch]

  if ( !a1 )
  {
    *(_DWORD *)a4 = 0;
    return 0;
  }
  if ( (unsigned int)MaxCount > *((_DWORD *)a2 + 1) )
    return -2147483643;
  v7 = (char *)*((_DWORD *)a2 + 3);
  if ( !*((_DWORD *)a2 + 5) || !IsOverlappedVA(MaxCount, v9, v10) )
  {
    *((_DWORD *)a2 + 3) = &v7[(unsigned int)(MaxCount + 3) & 0xFFFFFFFC];
    memcpy(v7, a1, (size_t)MaxCount);
    if ( *((_DWORD *)a2 + 5) )
    {
      *(_DWORD *)a4 = v7;
    }
    else
    {
      *(_DWORD *)a4 = v7 - a2;
      *(_DWORD *)&a2[4 * (*((_DWORD *)a2 + 2))++ + *((_DWORD *)a2 + 4)] = a4 - a2;
    }
    return 0;
  }
  return -1073741800;
}
