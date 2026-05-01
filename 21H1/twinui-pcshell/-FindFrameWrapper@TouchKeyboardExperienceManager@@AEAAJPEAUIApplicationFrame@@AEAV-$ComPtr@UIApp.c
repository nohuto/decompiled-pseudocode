/*
 * XREFs of ?FindFrameWrapper@TouchKeyboardExperienceManager@@AEAAJPEAUIApplicationFrame@@AEAV?$ComPtr@UIApplicationFrameWrapper@@@WRL@Microsoft@@@Z @ 0x180327C4C
 * Callers:
 *     _lambda_62c9f7536e76f85d48c474b5f2f194d8_::operator() @ 0x1800A1590 (_lambda_62c9f7536e76f85d48c474b5f2f194d8_--operator().c)
 *     _lambda_95a8ea034506ab1e4f4125e3936ae1b3_::operator() @ 0x1800A1BE8 (_lambda_95a8ea034506ab1e4f4125e3936ae1b3_--operator().c)
 *     _lambda_ae8220f02ed2a4c19b01bc805f2788a4_::operator() @ 0x1800A1D34 (_lambda_ae8220f02ed2a4c19b01bc805f2788a4_--operator().c)
 *     ?NotifyPositionAndSizeUpdateCompleted@TouchKeyboardExperienceManager@@AEAAJPEAUIApplicationFrame@@@Z @ 0x18032B96C (-NotifyPositionAndSizeUpdateCompleted@TouchKeyboardExperienceManager@@AEAAJPEAUIApplicationFrame.c)
 *     ?OnChromeOffsetsChanged@TouchKeyboardExperienceManager@@UEAAJPEAUIApplicationFrame@@@Z @ 0x18032BDB0 (-OnChromeOffsetsChanged@TouchKeyboardExperienceManager@@UEAAJPEAUIApplicationFrame@@@Z.c)
 *     ?OnCommand@TouchKeyboardExperienceManager@@UEAAJPEAUIApplicationFrame@@PEBU_GUID@@K@Z @ 0x18032BF60 (-OnCommand@TouchKeyboardExperienceManager@@UEAAJPEAUIApplicationFrame@@PEBU_GUID@@K@Z.c)
 *     ?OnPositionChanged@TouchKeyboardExperienceManager@@UEAAJPEAUIApplicationFrame@@@Z @ 0x18032CF80 (-OnPositionChanged@TouchKeyboardExperienceManager@@UEAAJPEAUIApplicationFrame@@@Z.c)
 * Callees:
 *     ??4?$ComPtr@UISwitchItemFilteredCollection@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z @ 0x18009BC00 (--4-$ComPtr@UISwitchItemFilteredCollection@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800CA4C0 (_guard_dispatch_icall_nop.c)
 *     ?IsValid@KBViewInfo@@QEBA_NXZ @ 0x18032AE3C (-IsValid@KBViewInfo@@QEBA_NXZ.c)
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
