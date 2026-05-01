/*
 * XREFs of ?FindFrameWrapper@TouchKeyboardExperienceManager@@AEAAJPEAUIApplicationFrame@@AEAV?$ComPtr@UIApplicationFrameWrapper@@@WRL@Microsoft@@@Z @ 0x18034979C
 * Callers:
 *     _lambda_306f798c08cb193c312491547c38aafa_::operator() @ 0x1800AF328 (_lambda_306f798c08cb193c312491547c38aafa_--operator().c)
 *     _lambda_3c2570cc1d800aee28388d46c0371330_::operator() @ 0x1800AF474 (_lambda_3c2570cc1d800aee28388d46c0371330_--operator().c)
 *     _lambda_e1213522565a54bdf40b4b22e649b293_::operator() @ 0x1800AF9F0 (_lambda_e1213522565a54bdf40b4b22e649b293_--operator().c)
 *     ?NotifyPositionAndSizeUpdateCompleted@TouchKeyboardExperienceManager@@AEAAJPEAUIApplicationFrame@@@Z @ 0x18034D46C (-NotifyPositionAndSizeUpdateCompleted@TouchKeyboardExperienceManager@@AEAAJPEAUIApplicationFrame.c)
 *     ?OnChromeOffsetsChanged@TouchKeyboardExperienceManager@@UEAAJPEAUIApplicationFrame@@@Z @ 0x18034D8B0 (-OnChromeOffsetsChanged@TouchKeyboardExperienceManager@@UEAAJPEAUIApplicationFrame@@@Z.c)
 *     ?OnCommand@TouchKeyboardExperienceManager@@UEAAJPEAUIApplicationFrame@@PEBU_GUID@@K@Z @ 0x18034DA60 (-OnCommand@TouchKeyboardExperienceManager@@UEAAJPEAUIApplicationFrame@@PEBU_GUID@@K@Z.c)
 *     ?OnPositionChanged@TouchKeyboardExperienceManager@@UEAAJPEAUIApplicationFrame@@@Z @ 0x18034EA00 (-OnPositionChanged@TouchKeyboardExperienceManager@@UEAAJPEAUIApplicationFrame@@@Z.c)
 * Callees:
 *     ??4?$ComPtr@UISwitchItemFilteredCollection@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z @ 0x1800A89D0 (--4-$ComPtr@UISwitchItemFilteredCollection@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800EEEF0 (_guard_dispatch_icall_nop.c)
 *     ?IsValid@KBViewInfo@@QEBA_NXZ @ 0x18034C938 (-IsValid@KBViewInfo@@QEBA_NXZ.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall TouchKeyboardExperienceManager::FindFrameWrapper(RTL_SRWLOCK *a1, __int64 a2, __int64 *a3)
{
  RTL_SRWLOCK *v6; // rdi
  KBViewInfo **Ptr; // rbx
  KBViewInfo **v8; // rbp
  unsigned int v9; // ebx

  v6 = a1 + 52;
  AcquireSRWLockShared(a1 + 52);
  Ptr = (KBViewInfo **)a1[53].Ptr;
  v8 = (KBViewInfo **)a1[54].Ptr;
  while ( Ptr != v8
       && (!KBViewInfo::IsValid(*Ptr)
        || (*(unsigned int (__fastcall **)(_QWORD, __int64))(**((_QWORD **)*Ptr + 1) + 24LL))(*((_QWORD *)*Ptr + 1), a2) != 1) )
    Ptr += 2;
  if ( Ptr == a1[54].Ptr )
  {
    v9 = -2147023728;
  }
  else
  {
    Microsoft::WRL::ComPtr<ISwitchItemFilteredCollection>::operator=(a3, (__int64 *)*Ptr + 1);
    v9 = 0;
  }
  if ( v6 )
    ReleaseSRWLockShared(v6);
  return v9;
}
