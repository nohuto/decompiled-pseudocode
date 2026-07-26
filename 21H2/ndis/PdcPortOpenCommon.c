/*
 * XREFs of PdcPortOpenCommon @ 0x1C0129520
 * Callers:
 *     PdcTaskClientRegister @ 0x1C0129220 (PdcTaskClientRegister.c)
 * Callees:
 *     memset @ 0x1C00403C0 (memset.c)
 *     PdcAllocate @ 0x1C0129494 (PdcAllocate.c)
 *     PdcFree @ 0x1C01294B8 (PdcFree.c)
 *     PdcpPortReleaseResources @ 0x1C012968C (PdcpPortReleaseResources.c)
 */

__int64 __fastcall PdcPortOpenCommon(
        __int64 a1,
        __int64 a2,
        unsigned __int64 a3,
        unsigned __int64 *a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        __int64 a8,
        struct _EX_RUNDOWN_REF **a9)
{
  void *v11; // rsi
  __int64 v12; // rcx
  struct _EX_RUNDOWN_REF *v13; // rax
  struct _EX_RUNDOWN_REF *v14; // rdi
  NTSTATUS v15; // ebx
  __int64 v16; // rcx
  _DWORD *v17; // rax
  _QWORD v19[100]; // [rsp+30h] [rbp-338h] BYREF

  memset(v19, 0, sizeof(v19));
  v11 = 0LL;
  *a9 = 0LL;
  v13 = (struct _EX_RUNDOWN_REF *)PdcAllocate(v12, 0x6E8uLL, 0x50636450u);
  v14 = v13;
  if ( !v13 )
    goto LABEL_2;
  memset(v13, 0, 0x6E8uLL);
  v14[218].Count = a3;
  LODWORD(v14->Count) = 1348691024;
  LODWORD(v14[2].Count) = 95;
  HIDWORD(v14[2].Ptr) = 4;
  ExInitializeRundownProtection(v14 + 1);
  v14[219].Count = *a4;
  v19[1] = 0LL;
  v19[2] = 0LL;
  HIDWORD(v19[5]) = 5;
  v19[7] = 0x40000005FLL;
  v19[0] = 52429560LL;
  v17 = PdcAllocate(v16, 0xB8uLL, 0x50636450u);
  v11 = v17;
  if ( !v17 )
  {
LABEL_2:
    v15 = -1073741801;
LABEL_7:
    if ( v14 )
      PdcpPortReleaseResources(v14);
    goto LABEL_9;
  }
  *v17 = 1;
  *((_QWORD *)v17 + 2) = v14;
  *((_QWORD *)v17 + 1) = v19;
  v15 = ZwPowerInformation(PdcInvocation, v17, 0xB8u, 0LL, 0);
  if ( v15 >= 0 )
  {
    *a9 = v14;
    v15 = 0;
  }
  if ( v15 < 0 )
    goto LABEL_7;
LABEL_9:
  if ( v11 )
    PdcFree(v11);
  return (unsigned int)v15;
}
