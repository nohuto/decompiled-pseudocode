/*
 * XREFs of PfSnOperationProcess @ 0x1406193A4
 * Callers:
 *     PfSnSetPrefetcherInformation @ 0x1406B364C (PfSnSetPrefetcherInformation.c)
 * Callees:
 *     RtlStringCbPrintfW @ 0x14026CAF0 (RtlStringCbPrintfW.c)
 *     __security_check_cookie @ 0x1403D05D0 (__security_check_cookie.c)
 *     memset @ 0x140414300 (memset.c)
 *     PfSnEndProcessTrace @ 0x14061954C (PfSnEndProcessTrace.c)
 *     PfSnFindImageFileName @ 0x140679E14 (PfSnFindImageFileName.c)
 *     PfSnBeginScenario @ 0x14067A4B4 (PfSnBeginScenario.c)
 *     PfSnCheckScenario @ 0x14067ABA8 (PfSnCheckScenario.c)
 *     PfCalculateProcessHash @ 0x14067AD80 (PfCalculateProcessHash.c)
 *     ExFreePoolWithTag @ 0x1409B5010 (ExFreePoolWithTag.c)
 */

__int64 __fastcall PfSnOperationProcess(__int64 a1)
{
  bool v2; // zf
  PVOID v3; // rdi
  unsigned __int8 v4; // cl
  unsigned int v5; // eax
  bool v6; // cf
  _KPROCESS *Process; // r14
  int v8; // eax
  unsigned int v9; // ebx
  __int64 ImageFileName; // r9
  int v11; // ecx
  int v12; // edx
  int v14; // [rsp+38h] [rbp-29h] BYREF
  PVOID P; // [rsp+40h] [rbp-21h] BYREF
  _BYTE v16[16]; // [rsp+48h] [rbp-19h] BYREF
  wchar_t pszDest[32]; // [rsp+58h] [rbp-9h] BYREF

  memset(pszDest, 0, sizeof(pszDest));
  v2 = *(_BYTE *)a1 == 1;
  v3 = 0LL;
  v14 = 0;
  P = 0LL;
  if ( !v2 || (v4 = *(_BYTE *)(a1 + 1), v4 >= 2u) || *(_WORD *)(a1 + 2) )
  {
    v9 = -1073741811;
    goto LABEL_13;
  }
  v5 = *(_DWORD *)(a1 + 4);
  if ( (v4 & 1) != 0 )
  {
    v6 = v5 < 2;
  }
  else
  {
    if ( (v5 & 4) != 0 && (v5 & 3) != 0 )
      return (unsigned int)-1073741811;
    v6 = v5 < 8;
  }
  if ( !v6 )
    return (unsigned int)-1073741811;
  if ( (int)PfSnCheckScenario(1LL, &v14) < 0 )
    return 0;
  Process = KeGetCurrentThread()->ApcState.Process;
  v8 = PfCalculateProcessHash(Process, &P);
  v3 = P;
  v9 = v8;
  if ( v8 >= 0 )
  {
    ImageFileName = PfSnFindImageFileName(P, v16);
    if ( ImageFileName )
    {
      RtlStringCbPrintfW(
        pszDest,
        0x3CuLL,
        L"Op-%.17s-%08X",
        ImageFileName,
        HIDWORD(Process[1].ActiveProcessors.Bitmap[8]));
      v11 = *(_DWORD *)(a1 + 4);
      v12 = v11 & 1;
      v2 = (*(_BYTE *)(a1 + 1) & 1) == 0;
      *(_DWORD *)&pszDest[30] = *(_DWORD *)(a1 + 8);
      if ( v2 )
      {
        if ( (v11 & 2) != 0 || v14 == 2 )
        {
          v12 |= 2u;
        }
        else if ( (v11 & 4) != 0 )
        {
          v12 |= 4u;
        }
        PfSnBeginScenario((_DWORD)Process, (unsigned int)pszDest, 1, v12, 0LL);
      }
      else
      {
        PfSnEndProcessTrace(Process, (unsigned int)(v12 + 8), pszDest);
      }
      v9 = 0;
    }
    else
    {
      v9 = -1073741595;
    }
  }
LABEL_13:
  if ( v3 )
    ExFreePoolWithTag(v3, 0);
  return v9;
}
