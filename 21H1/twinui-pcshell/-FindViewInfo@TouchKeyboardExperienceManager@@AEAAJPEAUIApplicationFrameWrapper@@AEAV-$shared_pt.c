/*
 * XREFs of ?FindViewInfo@TouchKeyboardExperienceManager@@AEAAJPEAUIApplicationFrameWrapper@@AEAV?$shared_ptr@UKBViewInfo@@@std@@@Z @ 0x180327DDC
 * Callers:
 *     _lambda_ae8220f02ed2a4c19b01bc805f2788a4_::operator() @ 0x1800A1D34 (_lambda_ae8220f02ed2a4c19b01bc805f2788a4_--operator().c)
 *     ?NotifyPositionAndSizeUpdateCompleted@TouchKeyboardExperienceManager@@AEAAJPEAUIApplicationFrame@@@Z @ 0x18032B96C (-NotifyPositionAndSizeUpdateCompleted@TouchKeyboardExperienceManager@@AEAAJPEAUIApplicationFrame.c)
 * Callees:
 *     ?SHIsSameObject@@YAHPEAUIUnknown@@0@Z @ 0x18003EF48 (-SHIsSameObject@@YAHPEAUIUnknown@@0@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180068524 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??4?$shared_ptr@UPeoplePaneViewInfo@@@std@@QEAAAEAV01@AEBV01@@Z @ 0x1801FC2E0 (--4-$shared_ptr@UPeoplePaneViewInfo@@@std@@QEAAAEAV01@AEBV01@@Z.c)
 *     ?IsValid@KBViewInfo@@QEBA_NXZ @ 0x18032AE3C (-IsValid@KBViewInfo@@QEBA_NXZ.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall TouchKeyboardExperienceManager::FindViewInfo(RTL_SRWLOCK *a1, struct IUnknown *a2, _QWORD *a3)
{
  RTL_SRWLOCK *v6; // rdi
  KBViewInfo **Ptr; // rbx
  KBViewInfo **v8; // rbp
  unsigned int v9; // ebx
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  v6 = a1 + 52;
  AcquireSRWLockShared(a1 + 52);
  Ptr = (KBViewInfo **)a1[53].Ptr;
  v8 = (KBViewInfo **)a1[54].Ptr;
  while ( Ptr != v8
       && (!KBViewInfo::IsValid(*Ptr) || !(unsigned int)SHIsSameObject(*((struct IUnknown **)*Ptr + 1), a2)) )
    Ptr += 2;
  if ( Ptr == a1[54].Ptr )
  {
    v9 = -2147023728;
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xC62,
      (__int64)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\touchkeyboardexperiencemanager.cpp",
      (const char *)0x80070490LL);
  }
  else
  {
    std::shared_ptr<PeoplePaneViewInfo>::operator=(a3, Ptr);
    v9 = 0;
  }
  if ( v6 )
    ReleaseSRWLockShared(v6);
  return v9;
}
