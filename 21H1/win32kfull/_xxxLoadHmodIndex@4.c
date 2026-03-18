/*
 * XREFs of _xxxLoadHmodIndex@4 @ 0x16802
 * Callers:
 *     ?xxxGetEventProc@@YGP6GXPAUHWINEVENTHOOK__@@KPAUHWND__@@JJKK@ZPAUtagEVENTHOOK@@@Z @ 0x147EA (-xxxGetEventProc@@YGP6GXPAUHWINEVENTHOOK__@@KPAUHWND__@@JJKK@ZPAUtagEVENTHOOK@@@Z.c)
 *     _xxxLoadUserApiHook@0 @ 0x16798 (_xxxLoadUserApiHook@0.c)
 *     ?xxxCallHook2@@YGJPAUtagHOOK@@HIJPAH_N@Z @ 0x6A7C0 (-xxxCallHook2@@YGJPAUtagHOOK@@HIJPAH_N@Z.c)
 * Callees:
 *     ??0?$CLockDomainExclusiveInUserCrit@VDLT_CLIENTLIB@@@@QAE@XZ @ 0x16A32 (--0-$CLockDomainExclusiveInUserCrit@VDLT_CLIENTLIB@@@@QAE@XZ.c)
 *     _ClientLoadLibrary@8 @ 0x16A64 (_ClientLoadLibrary@8.c)
 *     _W32GetThreadWin32Thread@4 @ 0x3FA3E (_W32GetThreadWin32Thread@4.c)
 *     _UserSetLastError@4 @ 0x81122 (_UserSetLastError@4.c)
 *     _lambda_7493114f859391c63e08f81e8f0a9f3f_::operator() @ 0xAC81E (_lambda_7493114f859391c63e08f81e8f0a9f3f_--operator().c)
 *     _ClientFreeLibrary@4 @ 0xD2F16 (_ClientFreeLibrary@4.c)
 *     ??0?$CUnLockDomainExclusiveInUserCrit@VDLT_CLIENTLIB@@@@QAE@XZ @ 0xD2FCE (--0-$CUnLockDomainExclusiveInUserCrit@VDLT_CLIENTLIB@@@@QAE@XZ.c)
 *     @__security_check_cookie@4 @ 0xED840 (@__security_check_cookie@4.c)
 *     ??1?$CLockDomainExclusiveInUserCrit@VDLT_CLIENTLIB@@@@QAE@XZ @ 0x1A1140 (--1-$CLockDomainExclusiveInUserCrit@VDLT_CLIENTLIB@@@@QAE@XZ.c)
 */

int __fastcall xxxLoadHmodIndex(int a1)
{
  PKTHREAD CurrentThread; // eax
  int ThreadWin32Thread; // esi
  int v4; // ebx
  int AtomNameFromAtomTable; // esi
  tagDomLock *v6; // ecx
  int v7; // edx
  tagDomLock *v9; // [esp+10h] [ebp-440h] BYREF
  tagDomLock *v10; // [esp+14h] [ebp-43Ch] BYREF
  _BYTE v11[4]; // [esp+18h] [ebp-438h] BYREF
  int v12; // [esp+1Ch] [ebp-434h]
  struct _UNICODE_STRING v13; // [esp+20h] [ebp-430h] BYREF
  struct _UNICODE_STRING DestinationString; // [esp+28h] [ebp-428h] BYREF
  UNICODE_STRING String1; // [esp+30h] [ebp-420h] BYREF
  WCHAR SourceString[260]; // [esp+38h] [ebp-418h] BYREF
  WCHAR v17[262]; // [esp+240h] [ebp-210h] BYREF

  *(_DWORD *)&DestinationString.Length = 0;
  DestinationString.Buffer = 0;
  *(_DWORD *)&v13.Length = 0;
  v13.Buffer = 0;
  CurrentThread = KeGetCurrentThread();
  ThreadWin32Thread = W32GetThreadWin32Thread(CurrentThread);
  v12 = 1;
  v10 = (tagDomLock *)ThreadWin32Thread;
  CLockDomainExclusiveInUserCrit<DLT_CLIENTLIB>::CLockDomainExclusiveInUserCrit<DLT_CLIENTLIB>(&v9);
  if ( a1 < 0 || a1 >= catomSysTableEntries )
  {
    UserSetLastError(87);
  }
  else if ( *(_DWORD *)(*(_DWORD *)(ThreadWin32Thread + 232) + 4 * a1 + 228) != -1 )
  {
    UserGetAtomNameFromAtomTable(
      _UserLibmgmtAtomTableHandle,
      *((unsigned __int16 *)&aatomSysLoaded + a1),
      SourceString,
      260);
    RtlInitUnicodeString(&DestinationString, SourceString);
    if ( a1 == gihmodUserApiHook )
    {
      RtlInitUnicodeString(&v13, &gszFunctionUserApiHook);
    }
    else
    {
      RtlInitUnicodeString(&v13, 0);
      v12 = 0;
    }
    CLockDomainExclusiveInUserCrit<DLT_CLIENTLIB>::~CLockDomainExclusiveInUserCrit<DLT_CLIENTLIB>(&v9);
    v4 = ClientLoadLibrary(&DestinationString, &v13);
    if ( v4 )
    {
      CLockDomainExclusiveInUserCrit<DLT_CLIENTLIB>::CLockDomainExclusiveInUserCrit<DLT_CLIENTLIB>(v11);
      *(_DWORD *)&String1.Length = 0;
      String1.Buffer = 0;
      if ( v12 )
      {
        AtomNameFromAtomTable = UserGetAtomNameFromAtomTable(
                                  _UserLibmgmtAtomTableHandle,
                                  *((unsigned __int16 *)&aatomSysLoaded + a1),
                                  v17,
                                  260);
        RtlInitUnicodeString(&String1, v17);
        if ( !AtomNameFromAtomTable || RtlCompareUnicodeString(&String1, &DestinationString, 0) )
        {
          CUnLockDomainExclusiveInUserCrit<DLT_CLIENTLIB>::CUnLockDomainExclusiveInUserCrit<DLT_CLIENTLIB>(&v9);
          ClientFreeLibrary(v4);
          v6 = v9;
          v4 = 0;
LABEL_16:
          tagDomLock::LockExclusive(v6);
          goto LABEL_19;
        }
        ThreadWin32Thread = (int)v10;
      }
      v7 = *(_DWORD *)(ThreadWin32Thread + 232);
      if ( ((1 << a1) & *(_DWORD *)(v7 + 224)) != 0 )
      {
        CUnLockDomainExclusiveInUserCrit<DLT_CLIENTLIB>::CUnLockDomainExclusiveInUserCrit<DLT_CLIENTLIB>(&v10);
        ClientFreeLibrary(*(_DWORD *)(*(_DWORD *)(ThreadWin32Thread + 232) + 4 * a1 + 228));
        v6 = v10;
        goto LABEL_16;
      }
      (&acatomSysUse)[a1] = (int *)((char *)(&acatomSysUse)[a1] + 1);
      *(_DWORD *)(v7 + 4 * a1 + 228) = v4;
      *(_DWORD *)(*(_DWORD *)(ThreadWin32Thread + 232) + 224) |= 1 << a1;
    }
    else
    {
      if ( !(unsigned __int8)lambda_7493114f859391c63e08f81e8f0a9f3f_::operator()() )
        return v4;
      CLockDomainExclusiveInUserCrit<DLT_CLIENTLIB>::CLockDomainExclusiveInUserCrit<DLT_CLIENTLIB>(v11);
      *(_DWORD *)(*(_DWORD *)(ThreadWin32Thread + 232) + 4 * a1 + 228) = -1;
    }
LABEL_19:
    CLockDomainExclusiveInUserCrit<DLT_CLIENTLIB>::~CLockDomainExclusiveInUserCrit<DLT_CLIENTLIB>(v11);
    return v4;
  }
  CLockDomainExclusiveInUserCrit<DLT_CLIENTLIB>::~CLockDomainExclusiveInUserCrit<DLT_CLIENTLIB>(&v9);
  return 0;
}
