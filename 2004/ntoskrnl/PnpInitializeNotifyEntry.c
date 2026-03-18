/*
 * XREFs of PnpInitializeNotifyEntry @ 0x1406C5A54
 * Callers:
 *     IoRegisterPlugPlayNotification @ 0x1406C5580 (IoRegisterPlugPlayNotification.c)
 *     PiRegisterKernelSoftRestartNotification @ 0x1408AFCD4 (PiRegisterKernelSoftRestartNotification.c)
 * Callees:
 *     MmGetSessionIdEx @ 0x140207F90 (MmGetSessionIdEx.c)
 *     ExInitializeResourceLite @ 0x140213470 (ExInitializeResourceLite.c)
 *     MmIsSessionAddress @ 0x140275140 (MmIsSessionAddress.c)
 *     RtlInitUnicodeString @ 0x140298F60 (RtlInitUnicodeString.c)
 *     __security_check_cookie @ 0x1403CCE60 (__security_check_cookie.c)
 *     swprintf_s @ 0x1403D32F0 (swprintf_s.c)
 *     ZwOpenSession @ 0x1403F5B40 (ZwOpenSession.c)
 *     ExAllocatePoolWithTag @ 0x1409B1160 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall PnpInitializeNotifyEntry(
        __int64 a1,
        int a2,
        unsigned __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6)
{
  __int64 v7; // rsi
  unsigned int v11; // r14d
  int v12; // ebx
  int v13; // eax
  struct _ERESOURCE *PoolWithTag; // rax
  unsigned int SessionId; // eax
  __int64 v17; // [rsp+20h] [rbp-E0h] BYREF
  UNICODE_STRING DestinationString; // [rsp+28h] [rbp-D8h] BYREF
  __int128 v19; // [rsp+38h] [rbp-C8h]
  __int128 v20; // [rsp+48h] [rbp-B8h]
  __int128 v21; // [rsp+58h] [rbp-A8h]
  wchar_t Dst[256]; // [rsp+70h] [rbp-90h] BYREF

  v7 = 0LL;
  v19 = 0LL;
  v17 = 0LL;
  v20 = 0LL;
  v21 = 0LL;
  v11 = 0;
  v12 = 0;
  DestinationString = 0LL;
  LOBYTE(v13) = MmIsSessionAddress(a3);
  if ( !v13 )
    goto LABEL_2;
  SessionId = MmGetSessionIdEx((__int64)KeGetCurrentThread()->ApcState.Process);
  v11 = SessionId;
  if ( SessionId == -1 )
    return (unsigned int)-1073741811;
  swprintf_s(Dst, 0x100uLL, L"\\KernelObjects\\Session%d", SessionId);
  RtlInitUnicodeString(&DestinationString, Dst);
  *((_QWORD *)&v19 + 1) = 0LL;
  *(_QWORD *)&v20 = &DestinationString;
  LODWORD(v19) = 48;
  DWORD2(v20) = 512;
  v21 = 0LL;
  v12 = ZwOpenSession((__int64)&v17, 0LL);
  if ( v12 < 0 || (v7 = v17) == 0 )
  {
    return (unsigned int)-1073741811;
  }
  else
  {
LABEL_2:
    *(_QWORD *)(a1 + 48) = a5;
    *(_QWORD *)(a1 + 8) = a1;
    *(_WORD *)(a1 + 56) = 1;
    *(_QWORD *)(a1 + 64) = a6;
    *(_QWORD *)a1 = a1;
    *(_DWORD *)(a1 + 16) = a2;
    *(_DWORD *)(a1 + 20) = v11;
    *(_QWORD *)(a1 + 24) = v7;
    *(_QWORD *)(a1 + 32) = a3;
    *(_QWORD *)(a1 + 40) = a4;
    *(_BYTE *)(a1 + 58) = 0;
    PoolWithTag = (struct _ERESOURCE *)ExAllocatePoolWithTag(NonPagedPoolNx, 0x68uLL, 0x56706E50u);
    *(_QWORD *)(a1 + 72) = PoolWithTag;
    if ( PoolWithTag )
      ExInitializeResourceLite(PoolWithTag);
    else
      return (unsigned int)-1073741670;
  }
  return (unsigned int)v12;
}
