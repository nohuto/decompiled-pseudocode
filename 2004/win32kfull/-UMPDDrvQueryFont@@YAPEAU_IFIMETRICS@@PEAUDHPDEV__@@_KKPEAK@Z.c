/*
 * XREFs of ?UMPDDrvQueryFont@@YAPEAU_IFIMETRICS@@PEAUDHPDEV__@@_KKPEAK@Z @ 0x1C02AC080
 * Callers:
 *     <none>
 * Callees:
 *     ?_AllocUserMem@UMPDOBJ@@AEAAPEAXKH@Z @ 0x1C00D8188 (-_AllocUserMem@UMPDOBJ@@AEAAPEAXKH@Z.c)
 *     ?Thunk@UMPDOBJ@@QEAAKPEAXK0K@Z @ 0x1C00EE8FC (-Thunk@UMPDOBJ@@QEAAKPEAXK0K@Z.c)
 *     ??1XUMPDOBJ@@QEAA@XZ @ 0x1C00EEB38 (--1XUMPDOBJ@@QEAA@XZ.c)
 *     ?GetKernelPtr@UMPDOBJ@@QEAAPEAXPEAX@Z @ 0x1C00EEBB0 (-GetKernelPtr@UMPDOBJ@@QEAAPEAXPEAX@Z.c)
 *     ??0XUMPDOBJ@@QEAA@XZ @ 0x1C00EF148 (--0XUMPDOBJ@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x1C0157760 (__security_check_cookie.c)
 *     memset @ 0x1C015C000 (memset.c)
 *     ?ProbeAndReadIFIMETRICS@@YAPEAU_IFIMETRICS@@PEAU1@H_K@Z @ 0x1C02A9B6C (-ProbeAndReadIFIMETRICS@@YAPEAU_IFIMETRICS@@PEAU1@H_K@Z.c)
 *     ?UMPDMyDrvFree@@YAXPEAVUMPDOBJ@@PEAUDHPDEV__@@PEAXK@Z @ 0x1C02AD3D4 (-UMPDMyDrvFree@@YAXPEAVUMPDOBJ@@PEAUDHPDEV__@@PEAXK@Z.c)
 *     ?bIsFreeHooked@@YAHPEAUDHPDEV__@@PEAVUMPDOBJ@@@Z @ 0x1C02AD534 (-bIsFreeHooked@@YAHPEAUDHPDEV__@@PEAVUMPDOBJ@@@Z.c)
 */

struct _IFIMETRICS *__fastcall UMPDDrvQueryFont(struct DHPDEV__ *a1, __int64 a2, int a3, unsigned int *a4)
{
  struct _IFIMETRICS *IFIMETRICS; // rdi
  UMPDOBJ *v9; // rbx
  void *v10; // rax
  char *KernelPtr; // rax
  char *v12; // rsi
  int v13; // edi
  char *v14; // rax
  unsigned __int64 v15; // r8
  size_t Size; // [rsp+20h] [rbp-79h]
  void *v18; // [rsp+30h] [rbp-69h] BYREF
  UMPDOBJ *v19; // [rsp+38h] [rbp-61h] BYREF
  _OWORD v20[2]; // [rsp+40h] [rbp-59h] BYREF
  _QWORD v21[10]; // [rsp+60h] [rbp-39h] BYREF

  v18 = 0LL;
  IFIMETRICS = 0LL;
  XUMPDOBJ::XUMPDOBJ((XUMPDOBJ *)&v19);
  memset(v21, 0, 0x48uLL);
  v9 = v19;
  if ( v19 )
  {
    v21[0] = 0x1A00000048LL;
    v21[2] = *(_QWORD *)v19;
    v21[3] = a1;
    v21[4] = a2;
    LODWORD(v21[5]) = a3;
    v10 = UMPDOBJ::_AllocUserMem(v19, 4u, 1);
    LODWORD(v21[7]) = 0;
    v21[8] = 0LL;
    v21[6] = v10;
    if ( !v10 || (LODWORD(Size) = 8, (unsigned int)UMPDOBJ::Thunk(v9, v21, 0x48u, &v18, Size) == -1) )
    {
      v12 = 0LL;
    }
    else
    {
      KernelPtr = UMPDOBJ::GetKernelPtr(v9, (char *)v21[6]);
      v12 = (char *)v18;
      *a4 = *(_DWORD *)KernelPtr;
      if ( !v12 )
      {
LABEL_14:
        *a4 = (unsigned int)IFIMETRICS;
        goto LABEL_17;
      }
      if ( a3 )
      {
        v13 = *((_DWORD *)v9 + 106);
        v14 = v12;
        if ( v13 )
        {
          v14 = UMPDOBJ::GetKernelPtr(v9, (char *)v21[8]);
          v15 = LODWORD(v21[7]);
        }
        else
        {
          v15 = -1LL;
        }
        IFIMETRICS = ProbeAndReadIFIMETRICS((struct _IFIMETRICS *)v14, v13 == 0, v15);
        if ( (unsigned int)bIsFreeHooked(a1, v9) )
        {
          memset(v20, 0, sizeof(v20));
          if ( IFIMETRICS )
            PushThreadGuardedObject(v20, IFIMETRICS, Win32FreePool);
          UMPDMyDrvFree(v9, a1, v12, *a4);
          if ( IFIMETRICS )
            PopThreadGuardedObject(v20);
        }
        goto LABEL_14;
      }
    }
    IFIMETRICS = (struct _IFIMETRICS *)v12;
  }
LABEL_17:
  XUMPDOBJ::~XUMPDOBJ(&v19);
  return IFIMETRICS;
}
