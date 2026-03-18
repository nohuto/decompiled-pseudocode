/*
 * XREFs of HMValidateHandle @ 0x1C0070320
 * Callers:
 *     ValidateHmenu @ 0x1C00702D0 (ValidateHmenu.c)
 *     NtMITSynthesizeKeyboardInput @ 0x1C0136880 (NtMITSynthesizeKeyboardInput.c)
 *     NtUserGetExtendedPointerDeviceProperty @ 0x1C0139290 (NtUserGetExtendedPointerDeviceProperty.c)
 *     ?DoContactVisualization@CTouchProcessor@@AEAAHPEBUCPointerInputFrame@@PEAXH@Z @ 0x1C019311C (-DoContactVisualization@CTouchProcessor@@AEAAHPEBUCPointerInputFrame@@PEAXH@Z.c)
 * Callees:
 *     ValidateHandleSecure @ 0x1C0070550 (ValidateHandleSecure.c)
 *     ??0?$CLockDomainSharedAllowAllRecursion@VDLT_HANDLEMANAGER@@@@QEAA@XZ @ 0x1C0071754 (--0-$CLockDomainSharedAllowAllRecursion@VDLT_HANDLEMANAGER@@@@QEAA@XZ.c)
 *     W32GetThreadWin32Thread @ 0x1C0085450 (W32GetThreadWin32Thread.c)
 *     UserSetLastError @ 0x1C008C01C (UserSetLastError.c)
 */

__int64 __fastcall HMValidateHandle(__int64 a1, unsigned __int8 a2)
{
  int v3; // ebp
  __int64 v4; // rbx
  char *v5; // rdi
  _QWORD *v6; // r15
  __int64 v7; // r14
  __int64 v9; // rcx
  _BYTE v10[40]; // [rsp+20h] [rbp-28h] BYREF

  v3 = a2;
  v4 = 0LL;
  W32GetThreadWin32Thread(KeGetCurrentThread());
  if ( (unsigned __int64)(unsigned __int16)a1 < *((_QWORD *)gpsi + 1) )
  {
    v5 = (char *)qword_1C0250D48 + (unsigned int)(unsigned __int16)a1 * dword_1C0250D50;
    CLockDomainSharedAllowAllRecursion<DLT_HANDLEMANAGER>::CLockDomainSharedAllowAllRecursion<DLT_HANDLEMANAGER>(v10);
    v6 = gpKernelHandleTable;
    v7 = 3LL * (unsigned int)((v5 - (char *)qword_1C0250D48) >> 5);
    if ( (WORD1(a1) == *((_WORD *)v5 + 13)
       || WORD1(a1) == 0xFFFF
       || !WORD1(a1) && PsGetCurrentProcessWow64Process(0xFFFFLL))
      && (v5[25] & 1) == 0
      && v5[24] == (_BYTE)v3 )
    {
      v4 = v6[v7];
    }
  }
  if ( (*(_DWORD *)(W32GetThreadWin32Thread(KeGetCurrentThread()) + 480) & 0x20000000) != 0 )
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
      v9 = 1400LL;
      break;
    case 2:
      v9 = 1401LL;
      break;
    case 3:
      v9 = 1402LL;
      break;
    case 4:
      v9 = 1405LL;
      break;
    case 5:
      v9 = 1404LL;
      break;
    case 8:
      v9 = 1403LL;
      break;
    default:
      v9 = 6LL;
      break;
  }
  UserSetLastError(v9);
  return 0LL;
}
