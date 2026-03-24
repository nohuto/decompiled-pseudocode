/*
 * XREFs of CmpSecurityMethod @ 0x140665120
 * Callers:
 *     <none>
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x140206FC0 (KeLeaveCriticalRegionThread.c)
 *     EtwGetKernelTraceTimestamp @ 0x14029B060 (EtwGetKernelTraceTimestamp.c)
 *     ExIsResourceAcquiredSharedLite @ 0x14034FE80 (ExIsResourceAcquiredSharedLite.c)
 *     __security_check_cookie @ 0x1403D0460 (__security_check_cookie.c)
 *     KeBugCheckEx @ 0x1403FDEF0 (KeBugCheckEx.c)
 *     _guard_dispatch_icall @ 0x1404085B0 (_guard_dispatch_icall.c)
 *     CmpQueryKeySecurity @ 0x140665360 (CmpQueryKeySecurity.c)
 *     CmpSetKeySecurity @ 0x14066DF0C (CmpSetKeySecurity.c)
 *     CmpCallCallBacksEx @ 0x1406F3440 (CmpCallCallBacksEx.c)
 *     CmPostCallbackNotificationEx @ 0x1406F8480 (CmPostCallbackNotificationEx.c)
 *     CmpAssignKeySecurity @ 0x1407D0450 (CmpAssignKeySecurity.c)
 */

__int64 __fastcall CmpSecurityMethod(
        __int64 a1,
        int a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        int a7,
        __int64 a8)
{
  __int64 v9; // r8
  ULONG_PTR BugCheckParameter4; // rdi
  int v13; // edx
  char v14; // si
  struct _KTHREAD *CurrentThread; // rax
  int v16; // r9d
  int v17; // ecx
  int v18; // eax
  int v19; // eax
  unsigned int v20; // ebx
  int KeySecurity; // eax
  int v22; // ecx
  __int64 v23; // rcx
  _QWORD v25[2]; // [rsp+50h] [rbp-89h] BYREF
  __int64 v26; // [rsp+60h] [rbp-79h]
  __int128 v27; // [rsp+68h] [rbp-71h] BYREF
  __int128 v28; // [rsp+78h] [rbp-61h]
  __int128 v29; // [rsp+88h] [rbp-51h]
  __int64 v30; // [rsp+98h] [rbp-41h]
  _OWORD v31[2]; // [rsp+A0h] [rbp-39h] BYREF

  v9 = a8;
  BugCheckParameter4 = a2;
  v13 = a6;
  memset(v31, 0, sizeof(v31));
  v26 = 0LL;
  if ( *(BOOLEAN **)((char *)&NlsMbCodePageTag + 7) )
  {
    EtwGetKernelTraceTimestamp((LARGE_INTEGER *)v31, 0x20000u);
    v13 = a6;
    v9 = a8;
  }
  v25[1] = v25;
  v14 = 0;
  v25[0] = v25;
  v27 = 0LL;
  v30 = 0LL;
  v28 = 0LL;
  v29 = 0LL;
  if ( *(BOOLEAN **)((char *)&NlsMbCodePageTag + 7) && a1 )
    v26 = *(_QWORD *)(a1 + 8);
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  if ( CmpCallBackCount )
  {
    if ( !ExIsResourceAcquiredSharedLite((PERESOURCE)&CmpRegistryLock) )
    {
      if ( (_DWORD)BugCheckParameter4 == 1 )
      {
        v17 = 36;
        *((_QWORD *)&v28 + 1) = a5;
        v18 = 37;
LABEL_8:
        *(_QWORD *)&v28 = a4;
        LOBYTE(v16) = 1;
        *((_QWORD *)&v27 + 1) = a3;
        *(_QWORD *)&v27 = a1;
        v19 = CmpCallCallBacksEx(v17, (unsigned int)&v27, 0, v16, v18, a1, (__int64)v25);
        v20 = v19;
        if ( v19 < 0 )
        {
          if ( v19 == -1073740541 )
            v20 = 0;
          goto LABEL_19;
        }
        v14 = 1;
        goto LABEL_10;
      }
      if ( !(_DWORD)BugCheckParameter4 )
      {
        v17 = 38;
        v18 = 39;
        goto LABEL_8;
      }
    }
LABEL_10:
    v13 = a6;
    v9 = a8;
  }
  if ( (_DWORD)BugCheckParameter4 == 1 )
  {
    KeySecurity = CmpQueryKeySecurity(a1, a3, a4, a5);
  }
  else if ( (_DWORD)BugCheckParameter4 )
  {
    if ( (_DWORD)BugCheckParameter4 == 2 )
      goto LABEL_14;
    if ( (_DWORD)BugCheckParameter4 != 3 )
      KeBugCheckEx(0x51u, 5uLL, 1uLL, *(_QWORD *)(a1 + 8), BugCheckParameter4);
    KeySecurity = CmpAssignKeySecurity(a1, a4);
  }
  else
  {
    KeySecurity = CmpSetKeySecurity(a1, a3, a4, v13, a7, v9);
  }
  v20 = KeySecurity;
  if ( KeySecurity >= 0 )
LABEL_14:
    v20 = 0;
  if ( !v14 )
    goto LABEL_19;
  if ( (_DWORD)BugCheckParameter4 == 1 )
  {
    v22 = 37;
LABEL_18:
    v20 = CmPostCallbackNotificationEx(v22, a1, v20, (unsigned int)&v27, 0LL, (__int64)v25);
    goto LABEL_19;
  }
  if ( !(_DWORD)BugCheckParameter4 )
  {
    v22 = 39;
    goto LABEL_18;
  }
LABEL_19:
  KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
  if ( *(BOOLEAN **)((char *)&NlsMbCodePageTag + 7) )
  {
    LOBYTE(v23) = ((_DWORD)BugCheckParameter4 != 0) + 28;
    (*(void (__fastcall **)(__int64, _OWORD *, _QWORD, _QWORD, __int64, _QWORD))((char *)&NlsMbCodePageTag + 7))(
      v23,
      v31,
      v20,
      0LL,
      v26,
      0LL);
  }
  return v20;
}
