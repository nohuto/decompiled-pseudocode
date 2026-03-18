/*
 * XREFs of NtUserBuildHimcList @ 0x1C011C0A0
 * Callers:
 *     <none>
 * Callees:
 *     ??1UserAtomicCheck@@QEAA@XZ @ 0x1C0069000 (--1UserAtomicCheck@@QEAA@XZ.c)
 *     ??0UserAtomicCheck@@QEAA@XZ @ 0x1C0069054 (--0UserAtomicCheck@@QEAA@XZ.c)
 *     UserSetLastError @ 0x1C0090F00 (UserSetLastError.c)
 *     _BuildHimcList @ 0x1C011C198 (_BuildHimcList.c)
 */

__int64 __fastcall NtUserBuildHimcList(unsigned int a1, unsigned int a2, volatile void *a3, unsigned int *a4)
{
  __int64 v6; // rsi
  __int64 v8; // rdx
  __int64 v9; // r8
  __int64 v10; // rbx
  _DWORD *v11; // rdx
  unsigned int v12; // eax
  unsigned int v13; // ebx
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // r8
  __int64 v18; // rax
  __int64 v19; // rdx
  _BYTE v20[32]; // [rsp+28h] [rbp-20h] BYREF

  v6 = a2;
  EnterCrit(0LL, 1LL);
  UserAtomicCheck::UserAtomicCheck((UserAtomicCheck *)v20);
  if ( (*gpsi & 4) != 0 )
  {
    if ( a1 )
    {
      if ( a1 == -1 )
      {
        v10 = 0LL;
      }
      else
      {
        v18 = PtiFromThreadId(a1);
        v10 = v18;
        if ( !v18 || (v19 = *(_QWORD *)(v18 + 448)) == 0 )
        {
          v13 = -1073741811;
          goto LABEL_7;
        }
        if ( v19 != *(_QWORD *)(gptiCurrent + 448LL) )
        {
          v13 = -1073741790;
          goto LABEL_7;
        }
      }
    }
    else
    {
      v10 = gptiCurrent;
    }
    ProbeForWrite(a3, 8 * v6, 4u);
    v11 = a4;
    if ( (unsigned __int64)a4 >= MmUserProbeAddress )
      v11 = (_DWORD *)MmUserProbeAddress;
    *v11 = *v11;
    v12 = BuildHimcList(v10, (unsigned int)v6, a3);
    v13 = (unsigned int)v6 < v12 ? 0xC0000023 : 0;
    *a4 = v12;
  }
  else
  {
    UserSetLastError(120LL, v8, v9);
    v13 = -1073741823;
  }
LABEL_7:
  UserAtomicCheck::~UserAtomicCheck((UserAtomicCheck *)v20);
  UserSessionSwitchLeaveCrit(v15, v14, v16);
  return v13;
}
