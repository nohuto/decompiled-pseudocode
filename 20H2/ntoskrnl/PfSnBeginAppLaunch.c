/*
 * XREFs of PfSnBeginAppLaunch @ 0x14064D024
 * Callers:
 *     PfProcessCreateNotification @ 0x14064CF8C (PfProcessCreateNotification.c)
 *     PfSnAppLaunchScenarioControl @ 0x1408E3100 (PfSnAppLaunchScenarioControl.c)
 * Callees:
 *     __security_check_cookie @ 0x1403CFAF0 (__security_check_cookie.c)
 *     memmove @ 0x140411040 (memmove.c)
 *     memset @ 0x140411300 (memset.c)
 *     PfSnFindImageFileName @ 0x14064C674 (PfSnFindImageFileName.c)
 *     PfSnIsHostingApplication @ 0x14064C6C0 (PfSnIsHostingApplication.c)
 *     PfSnScanCommandLine @ 0x14064C7D0 (PfSnScanCommandLine.c)
 *     PfSnBeginScenario @ 0x14064CAE8 (PfSnBeginScenario.c)
 *     PfSnLogScenarioDecision @ 0x14064CDC0 (PfSnLogScenarioDecision.c)
 *     PfSnCheckScenario @ 0x14064D230 (PfSnCheckScenario.c)
 *     PfCalculateProcessHash @ 0x14064D410 (PfCalculateProcessHash.c)
 *     PfSnCheckModernApp @ 0x14068EAB4 (PfSnCheckModernApp.c)
 *     ExFreePoolWithTag @ 0x1409B70B0 (ExFreePoolWithTag.c)
 */

__int64 __fastcall PfSnBeginAppLaunch(_DWORD *a1, unsigned __int16 *a2, int a3)
{
  void *v6; // rdi
  unsigned int v7; // r14d
  int v8; // ebx
  const void *ImageFileName; // rdx
  __int64 v10; // rax
  __int64 v11; // rbx
  int v12; // eax
  unsigned __int8 IsHostingApplication; // al
  int v14; // ecx
  int v16; // eax
  int v17; // [rsp+40h] [rbp-C0h] BYREF
  __int64 v18; // [rsp+48h] [rbp-B8h] BYREF
  unsigned int v19; // [rsp+50h] [rbp-B0h] BYREF
  int v20; // [rsp+54h] [rbp-ACh] BYREF
  int v21; // [rsp+58h] [rbp-A8h] BYREF
  __int128 v22; // [rsp+60h] [rbp-A0h] BYREF
  wchar_t SubStr[32]; // [rsp+70h] [rbp-90h] BYREF
  _BYTE v24[256]; // [rsp+B0h] [rbp-50h] BYREF

  v21 = 0;
  v19 = 0;
  v20 = 0;
  v18 = 0LL;
  v17 = 0;
  v6 = 0LL;
  memset(SubStr, 0, sizeof(SubStr));
  v7 = 0;
  v8 = PfSnCheckScenario(0LL, &v21);
  if ( v8 < 0 )
    goto LABEL_17;
  if ( !a2 )
  {
    v16 = PfCalculateProcessHash(a1, &v18);
    v6 = (void *)v18;
    v8 = v16;
    if ( v16 < 0 )
    {
LABEL_17:
      PfSnLogScenarioDecision((__int64)SubStr, 0, 0, 15, 15, v8, -1LL);
      goto LABEL_14;
    }
    a2 = (unsigned __int16 *)v18;
  }
  v22 = *(_OWORD *)a2;
  ImageFileName = (const void *)PfSnFindImageFileName(a2, &v19);
  if ( !ImageFileName )
  {
    v8 = -1073741811;
    goto LABEL_17;
  }
  v10 = v19;
  if ( v19 >= 0x1D )
    v10 = 29LL;
  v11 = v10;
  memmove(SubStr, ImageFileName, 2 * v10);
  v12 = a1[381];
  SubStr[v11] = 0;
  *(_DWORD *)&SubStr[30] = v12;
  IsHostingApplication = PfSnIsHostingApplication(SubStr);
  v8 = PfSnScanCommandLine(&v17, IsHostingApplication);
  if ( v8 < 0 )
    goto LABEL_17;
  *(_DWORD *)&SubStr[30] += v17;
  v18 = 256LL;
  v8 = PfSnCheckModernApp(&v20, &v17, v24, &v18);
  if ( v8 < 0 )
    goto LABEL_17;
  v14 = *(_DWORD *)&SubStr[30];
  if ( v20 )
  {
    v14 = v17 + *(_DWORD *)&SubStr[30];
    *((_QWORD *)&v22 + 1) = v24;
    v7 = 8;
    LOWORD(v22) = v18;
    WORD1(v22) = v18;
  }
  *(_DWORD *)&SubStr[30] = a3 + v14;
  if ( (dword_140C503D0 & 0x20) != 0 || v21 == 2 )
    v7 |= 2u;
  v8 = PfSnBeginScenario(a1, (unsigned __int8 *)SubStr, 0, v7, (__int64)&v22);
  if ( v8 >= 0 )
    v8 = 0;
LABEL_14:
  if ( v6 )
    ExFreePoolWithTag(v6, 0);
  return (unsigned int)v8;
}
