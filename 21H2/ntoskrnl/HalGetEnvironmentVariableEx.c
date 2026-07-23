/*
 * XREFs of HalGetEnvironmentVariableEx @ 0x1403BADC0
 * Callers:
 *     WheapCheckForAndReportErrorsFromPreviousSession @ 0x1403BACF8 (WheapCheckForAndReportErrorsFromPreviousSession.c)
 *     IoInitializeBugCheckProgress @ 0x140502488 (IoInitializeBugCheckProgress.c)
 *     IopGetEnvironmentVariableHal @ 0x14089A740 (IopGetEnvironmentVariableHal.c)
 *     NtQueryDriverEntryOrder @ 0x140954890 (NtQueryDriverEntryOrder.c)
 *     PopSetMemoryOverwriteRequestAction @ 0x1409B1DDC (PopSetMemoryOverwriteRequestAction.c)
 * Callees:
 *     KeRevertToUserGroupAffinityThread @ 0x14029C6E0 (KeRevertToUserGroupAffinityThread.c)
 *     KeSetSystemGroupAffinityThread @ 0x14029C840 (KeSetSystemGroupAffinityThread.c)
 *     __security_check_cookie @ 0x1403D05D0 (__security_check_cookie.c)
 *     wcscpy_s @ 0x1403D83E0 (wcscpy_s.c)
 *     _alloca_probe @ 0x140408680 (_alloca_probe.c)
 *     HalEfiGetEnvironmentVariable @ 0x1404C3A2C (HalEfiGetEnvironmentVariable.c)
 */

__int64 __fastcall HalGetEnvironmentVariableEx(const wchar_t *a1, int a2, __int64 a3, _DWORD *a4, __int64 a5)
{
  __int64 result; // rax
  __int64 v10; // rax
  char v11; // bl
  __int64 v12; // rax
  rsize_t v13; // rdx
  unsigned __int64 v14; // rax
  __int64 v15; // rcx
  unsigned __int64 v16; // rcx
  void *v17; // rsp
  void *v18; // rsp
  unsigned int v19; // edx
  unsigned int EnvironmentVariable; // edi
  wchar_t Dst[4]; // [rsp+30h] [rbp+0h] BYREF
  _GROUP_AFFINITY Affinity; // [rsp+38h] [rbp+8h] BYREF
  _GROUP_AFFINITY PreviousAffinity; // [rsp+48h] [rbp+18h] BYREF

  Affinity = 0LL;
  PreviousAffinity = 0LL;
  if ( !HalFirmwareTypeEfi )
    return 3221225474LL;
  v10 = -1LL;
  do
    ++v10;
  while ( a1[v10] );
  v11 = 1;
  v12 = (unsigned int)(v10 + 1);
  if ( (unsigned int)v12 >= 0x100 )
    v12 = 256LL;
  v13 = (unsigned int)v12;
  v14 = 2 * v12;
  v15 = v14 + 15;
  if ( v14 + 15 < v14 )
    v15 = 0xFFFFFFFFFFFFFF0LL;
  v16 = v15 & 0xFFFFFFFFFFFFFFF0uLL;
  v17 = alloca(v16);
  v18 = alloca(v16);
  wcscpy_s(Dst, v13, a1);
  *(_QWORD *)Dst = (unsigned int)*a4;
  if ( KeGetCurrentIrql() >= 2u )
  {
    v11 = 0;
  }
  else
  {
    v19 = KiProcessorIndexToNumberMappingTable[KeGetPcr()->Prcb.Number];
    Affinity.Reserved[1] = 0;
    Affinity.Reserved[2] = 0;
    *(_DWORD *)&Affinity.Group = (unsigned __int16)(v19 >> 6);
    Affinity.Mask = 1LL << (v19 & 0x3F);
    KeSetSystemGroupAffinityThread(&Affinity, &PreviousAffinity);
  }
  EnvironmentVariable = HalEfiGetEnvironmentVariable((unsigned int)Dst, a2, a5, (unsigned int)Dst, a3);
  if ( v11 )
    KeRevertToUserGroupAffinityThread(&PreviousAffinity);
  result = EnvironmentVariable;
  *a4 = *(_DWORD *)Dst;
  return result;
}
