/*
 * XREFs of NtUserGetHDevName @ 0x1C0031A40
 * Callers:
 *     <none>
 * Callees:
 *     HMValidateSharedHandle @ 0x1C0032848 (HMValidateSharedHandle.c)
 *     DrvGetHdevName @ 0x1C0032900 (DrvGetHdevName.c)
 *     ?RtlStringCchCopyW@@YAJPEAG_KPEBG@Z @ 0x1C0032934 (-RtlStringCchCopyW@@YAJPEAG_KPEBG@Z.c)
 *     EnterSharedCrit @ 0x1C004B1D0 (EnterSharedCrit.c)
 *     UserSessionSwitchLeaveCrit @ 0x1C004B4E0 (UserSessionSwitchLeaveCrit.c)
 *     UserSetLastError @ 0x1C004C5CC (UserSetLastError.c)
 *     __security_check_cookie @ 0x1C00CBC40 (__security_check_cookie.c)
 *     memset @ 0x1C00D3740 (memset.c)
 */

__int64 __fastcall NtUserGetHDevName(__int64 a1, ULONG64 a2)
{
  int v4; // edi
  __int64 v5; // rax
  __int64 v6; // rcx
  _BYTE *v7; // r8
  unsigned __int16 v9[32]; // [rsp+40h] [rbp-58h] BYREF

  memset(v9, 0, sizeof(v9));
  v4 = 0;
  EnterSharedCrit(0LL, 1LL);
  v5 = HMValidateSharedHandle(a1);
  if ( v5 )
  {
    v6 = *(_QWORD *)(v5 + 240);
    if ( v6 )
    {
      if ( (unsigned int)DrvGetHdevName(v6, v9) )
      {
        v9[31] = 0;
        if ( (a2 & 3) != 0 )
          ExRaiseDatatypeMisalignment();
        v7 = (_BYTE *)a2;
        if ( a2 >= MmUserProbeAddress )
          v7 = (_BYTE *)MmUserProbeAddress;
        *v7 = *v7;
        v7[63] = v7[63];
        v6 = RtlStringCchCopyW((unsigned __int16 *)a2, 0x20uLL, v9) >= 0;
        v4 = v6;
      }
    }
  }
  UserSessionSwitchLeaveCrit(v6);
  return v4;
}
