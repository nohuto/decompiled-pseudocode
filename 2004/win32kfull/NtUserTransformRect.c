/*
 * XREFs of NtUserTransformRect @ 0x1C00F55F0
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x1C0090F00 (UserSetLastError.c)
 *     __security_check_cookie @ 0x1C0157760 (__security_check_cookie.c)
 */

__int64 __fastcall NtUserTransformRect(_OWORD *a1, unsigned int a2, unsigned int a3, __int64 a4)
{
  int v8; // ebx
  __int64 v9; // rdx
  __int64 v10; // r8
  int v11; // eax
  int v12; // eax
  _OWORD *v13; // rax
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // r8
  _QWORD v18[3]; // [rsp+20h] [rbp-88h] BYREF
  __int64 v19; // [rsp+38h] [rbp-70h]
  __int128 v20; // [rsp+58h] [rbp-50h] BYREF

  v8 = 1;
  EnterCrit(0LL, 1LL);
  v20 = 0LL;
  v18[0] = 0LL;
  v11 = a2 & 0x5FFFFFFF;
  if ( ((a2 & 0x5FFFFFFF) == 0x6010
     || v11 == 34
     || v11 == 18
     || v11 == 1073766416
     || (a2 & 0x5FFE00FF) == 0x11
     || (a2 & 0x5FFE00FF) == 0x13 && (unsigned int)DrvIsUniformSpaceMapping(*(_QWORD *)(gpDispInfo + 16LL)))
    && ((v12 = a3 & 0x5FFFFFFF, (a3 & 0x5FFFFFFF) == 0x22)
     || v12 == 24592
     || v12 == 18
     || v12 == 1073766416
     || (a3 & 0x5FFE00FF) == 0x11
     || (a3 & 0x5FFE00FF) == 0x13 && (unsigned int)DrvIsUniformSpaceMapping(*(_QWORD *)(gpDispInfo + 16LL))) )
  {
    v13 = a1;
    if ( (unsigned __int64)a1 >= MmUserProbeAddress )
      v13 = (_OWORD *)MmUserProbeAddress;
    *v13 = *v13;
    v20 = *a1;
    if ( a4 && (a2 & 0xF) == 2 )
      v18[0] = ValidateHmonitor(a4);
    if ( !v18[0] )
    {
      LODWORD(v19) = (DWORD2(v20) + (int)v20) / 2;
      HIDWORD(v19) = (HIDWORD(v20) + DWORD1(v20)) / 2;
      v18[0] = GuessMonitorOverrideForCoordinateConversions(v19, a3, 0LL);
    }
    LogicalToPhysicalDPIRect(&v20, &v20, a3, v18);
    PhysicalToLogicalDPIRect(&v20, &v20, a2, v18);
    *a1 = v20;
  }
  else
  {
    v8 = 0;
    UserSetLastError(87LL, v9, v10);
  }
  UserSessionSwitchLeaveCrit(v15, v14, v16);
  return v8;
}
