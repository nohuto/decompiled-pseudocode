/*
 * XREFs of ?AllocCallbackMessage@@YGPAXKKKPAEHK@Z @ 0x459D8
 * Callers:
 *     _ClientLoadLibrary@8 @ 0x16A64 (_ClientLoadLibrary@8.c)
 *     _xxxClientLoadMenu@8 @ 0x16C34 (_xxxClientLoadMenu@8.c)
 *     _SfnINLPCREATESTRUCT@32 @ 0x448FE (_SfnINLPCREATESTRUCT@32.c)
 *     _SfnOUTSTRING@32 @ 0x9DE4E (_SfnOUTSTRING@32.c)
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
 *     _xxxClientLoadStringW@12 @ 0xD9AD4 (_xxxClientLoadStringW@12.c)
 *     _ClientEventCallback@8 @ 0x189761 (_ClientEventCallback@8.c)
 *     _ClientGetListboxString@36 @ 0x189964 (_ClientGetListboxString@36.c)
 *     _SfnCOPYGLOBALDATA@32 @ 0x18A2D8 (_SfnCOPYGLOBALDATA@32.c)
 *     _SfnGETDBCSTEXTLENGTHS@32 @ 0x18AAE2 (_SfnGETDBCSTEXTLENGTHS@32.c)
 *     _SfnIMECONTROL@32 @ 0x18B448 (_SfnIMECONTROL@32.c)
 *     _SfnINCNTOUTSTRING@32 @ 0x18BE0A (_SfnINCNTOUTSTRING@32.c)
 *     _SfnINCNTOUTSTRINGNULL@32 @ 0x18C3A4 (_SfnINCNTOUTSTRINGNULL@32.c)
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
 *     _memset @ 0xF92A7 (_memset.c)
 */

char *__userpurge AllocCallbackMessage@<eax>(
        int a1@<edx>,
        int a2@<ecx>,
        ULONG_PTR RegionSize,
        char *a4,
        unsigned int a5,
        size_t Size,
        int a7,
        unsigned int a8)
{
  unsigned int v8; // edi
  ULONG_PTR v9; // eax
  size_t v10; // eax
  char *v11; // esi
  bool v12; // zf
  ULONG_PTR v13; // eax
  unsigned int v15; // [esp+8h] [ebp-4h]

  if ( a1 )
  {
    v15 = (a2 + 3) & 0xFFFFFFFC;
    v8 = v15 + 4 * a1;
    v9 = (RegionSize + 3 * a1) & 0xFFFFFFFC;
    RegionSize = v9;
    if ( v9 > 0x800 )
    {
      v11 = (char *)Win32AllocPoolWithQuotaZInit(v15 + 4 * a1, 1667461973);
      if ( v11 )
      {
        *((_DWORD *)v11 + 5) = 0;
        if ( ZwAllocateVirtualMemory((HANDLE)0xFFFFFFFF, (PVOID *)v11 + 5, 0, &RegionSize, 0x1000u, 4u) >= 0 )
        {
          *((_DWORD *)v11 + 3) = *((_DWORD *)v11 + 5);
          goto LABEL_10;
        }
        Win32FreePool(v11);
      }
    }
    else
    {
      v10 = v8 + v9;
      if ( v10 <= Size )
      {
        v11 = a4;
        memset(a4, 0, Size);
        goto LABEL_5;
      }
      v11 = (char *)Win32AllocPoolWithQuotaZInit(v10, 1667461973);
      if ( v11 )
      {
LABEL_5:
        *((_DWORD *)v11 + 5) = 0;
        v12 = a5 == 0;
        *((_DWORD *)v11 + 3) = &v11[v8];
        if ( !v12 )
        {
          *(_DWORD *)v11 = v8 + RegionSize;
LABEL_7:
          v13 = RegionSize;
          *((_DWORD *)v11 + 2) = 0;
          *((_DWORD *)v11 + 1) = v13;
          *((_DWORD *)v11 + 4) = v15;
          return v11;
        }
LABEL_10:
        *(_DWORD *)v11 = v8;
        goto LABEL_7;
      }
    }
  }
  return 0;
}
