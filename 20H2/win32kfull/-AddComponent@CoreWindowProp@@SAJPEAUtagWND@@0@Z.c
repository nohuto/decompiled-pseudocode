/*
 * XREFs of ?AddComponent@CoreWindowProp@@SAJPEAUtagWND@@0@Z @ 0x1C00050B0
 * Callers:
 *     ?xxxSetHost@CoreWindowProp@@SAJPEAUtagWND@@0@Z @ 0x1C0004FCC (-xxxSetHost@CoreWindowProp@@SAJPEAUtagWND@@0@Z.c)
 * Callees:
 *     ?UpdateProcessPriorityWhenComponentAdded@PriorityBoostCUI@@YAXPEAUtagWND@@0@Z @ 0x1C0005178 (-UpdateProcessPriorityWhenComponentAdded@PriorityBoostCUI@@YAXPEAUtagWND@@0@Z.c)
 *     ?FindComponent@CoreWindowProp@@KAPEAUComponent@1@PEAUtagWND@@0PEAPEAU21@@Z @ 0x1C00051EC (-FindComponent@CoreWindowProp@@KAPEAUComponent@1@PEAUtagWND@@0PEAPEAU21@@Z.c)
 *     ?xxxSetWindowBand@@YAHPEAUtagWND@@0W4ZBID@@W4WindowBandOptions@@@Z @ 0x1C002E46C (-xxxSetWindowBand@@YAHPEAUtagWND@@0W4ZBID@@W4WindowBandOptions@@@Z.c)
 *     ??$GetProp@VCoreWindowProp@@@CWindowProp@@SAHPEBUtagWND@@PEAPEAVCoreWindowProp@@@Z @ 0x1C004C7A4 (--$GetProp@VCoreWindowProp@@@CWindowProp@@SAHPEBUtagWND@@PEAPEAVCoreWindowProp@@@Z.c)
 *     ??0UserAtomicCheck@@QEAA@XZ @ 0x1C00AFB20 (--0UserAtomicCheck@@QEAA@XZ.c)
 *     ??1UserAtomicCheck@@QEAA@XZ @ 0x1C00AFB7C (--1UserAtomicCheck@@QEAA@XZ.c)
 *     UserSetLastError @ 0x1C00D60E0 (UserSetLastError.c)
 */

__int64 __fastcall CoreWindowProp::AddComponent(struct tagWND *this, struct tagWND *a2)
{
  unsigned int v3; // ebx
  __int64 v5; // rdi
  struct tagWND *v6; // r8
  _QWORD *v7; // rax
  _QWORD v9[5]; // [rsp+20h] [rbp-28h] BYREF
  __int64 v10; // [rsp+60h] [rbp+18h] BYREF

  v3 = 0;
  v10 = 0LL;
  if ( (unsigned int)CWindowProp::GetProp<CoreWindowProp>(this, &v10) )
  {
    v5 = v10;
    if ( *(_DWORD *)(v10 + 16) )
    {
      if ( !CoreWindowProp::FindComponent(this, a2, 0LL) )
      {
        v7 = (_QWORD *)Win32AllocPool(16LL, 1920430933LL);
        if ( !v7 )
          return (unsigned int)-1073741801;
        *v7 = *(_QWORD *)(v5 + 32);
        v7[1] = a2;
        *(_QWORD *)(v5 + 32) = v7;
        ++*(_DWORD *)(v5 + 40);
      }
      PriorityBoostCUI::UpdateProcessPriorityWhenComponentAdded(this, a2, v6);
      if ( *(_DWORD *)(*((_QWORD *)a2 + 5) + 236LL) != *(_DWORD *)(*((_QWORD *)this + 5) + 236LL) )
      {
        UserAtomicCheck::UserAtomicCheck((UserAtomicCheck *)&v10);
        v9[2] = 0LL;
        v9[0] = *(_QWORD *)(gptiCurrent + 416LL);
        *(_QWORD *)(gptiCurrent + 416LL) = v9;
        v9[1] = a2;
        HMLockObject(a2);
        xxxSetWindowBand(a2, 0LL, *(unsigned int *)(*((_QWORD *)this + 5) + 236LL), 7LL);
        ThreadUnlock1();
        UserAtomicCheck::~UserAtomicCheck((UserAtomicCheck *)&v10);
      }
      return v3;
    }
  }
  UserSetLastError(5LL);
  return 3221225506LL;
}
