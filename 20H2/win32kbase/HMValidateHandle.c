/*
 * XREFs of HMValidateHandle @ 0x1C0054DB0
 * Callers:
 *     ValidateHmenu @ 0x1C0054D60 (ValidateHmenu.c)
 *     NtMITSynthesizeKeyboardInput @ 0x1C012E540 (NtMITSynthesizeKeyboardInput.c)
 *     NtUserGetExtendedPointerDeviceProperty @ 0x1C01312A0 (NtUserGetExtendedPointerDeviceProperty.c)
 *     ?DoContactVisualization@CTouchProcessor@@AEAAHPEBUCPointerInputFrame@@PEAXH@Z @ 0x1C018AEFC (-DoContactVisualization@CTouchProcessor@@AEAAHPEBUCPointerInputFrame@@PEAXH@Z.c)
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C0043BB0 (W32GetThreadWin32Thread.c)
 *     UserSetLastError @ 0x1C004C5CC (UserSetLastError.c)
 *     ??0?$CLockDomainSharedAllowAllRecursion@VDLT_HANDLEMANAGER@@@@QEAA@XZ @ 0x1C005219C (--0-$CLockDomainSharedAllowAllRecursion@VDLT_HANDLEMANAGER@@@@QEAA@XZ.c)
 *     ValidateHandleSecure @ 0x1C00563A0 (ValidateHandleSecure.c)
 */

__int64 __fastcall HMValidateHandle(__int64 a1, unsigned __int8 a2)
{
  int v3; // ebp
  __int64 v4; // rbx
  __int64 v5; // rdx
  __int64 v6; // r8
  __int64 v7; // r9
  char *v8; // rdi
  _QWORD *v9; // r15
  __int64 v10; // r14
  __int64 v11; // rdx
  __int64 v13; // rcx
  _BYTE v14[40]; // [rsp+20h] [rbp-28h] BYREF

  v3 = a2;
  v4 = 0LL;
  W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
  if ( (unsigned __int64)(unsigned __int16)a1 < *((_QWORD *)gpsi + 1) )
  {
    v8 = (char *)qword_1C0248D48 + (unsigned int)(unsigned __int16)a1 * dword_1C0248D50;
    CLockDomainSharedAllowAllRecursion<DLT_HANDLEMANAGER>::CLockDomainSharedAllowAllRecursion<DLT_HANDLEMANAGER>(
      (__int64)v14,
      v5,
      v6,
      v7);
    v9 = gpKernelHandleTable;
    v10 = 3LL * (unsigned int)((v8 - (char *)qword_1C0248D48) >> 5);
    if ( (WORD1(a1) == *((_WORD *)v8 + 13)
       || WORD1(a1) == 0xFFFF
       || !WORD1(a1) && PsGetCurrentProcessWow64Process(0xFFFFLL))
      && (v8[25] & 1) == 0
      && v8[24] == (_BYTE)v3 )
    {
      v4 = v9[v10];
    }
  }
  if ( (*(_DWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 488) & 0x20000000) != 0 )
  {
    if ( !(unsigned int)ValidateHandleSecure(a1, 3LL) )
      v4 = 0LL;
  }
  else
  {
    v4 &= -(__int64)((unsigned int)ValidateHandleSecure(a1, 2LL) != 0);
  }
  if ( v4 )
    return v4;
  switch ( v3 )
  {
    case 1:
      v13 = 1400LL;
      break;
    case 2:
      v13 = 1401LL;
      break;
    case 3:
      v13 = 1402LL;
      break;
    case 4:
      v13 = 1405LL;
      break;
    case 5:
      v13 = 1404LL;
      break;
    case 8:
      v13 = 1403LL;
      break;
    default:
      v13 = 6LL;
      break;
  }
  UserSetLastError(v13, v11);
  return 0LL;
}
