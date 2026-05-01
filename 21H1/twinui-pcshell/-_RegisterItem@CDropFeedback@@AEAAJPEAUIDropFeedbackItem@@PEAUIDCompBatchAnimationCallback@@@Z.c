/*
 * XREFs of ?_RegisterItem@CDropFeedback@@AEAAJPEAUIDropFeedbackItem@@PEAUIDCompBatchAnimationCallback@@@Z @ 0x1804006A0
 * Callers:
 *     ?UpdateDropFeedback@CDropFeedback@@UEAAJPEAUIDropFeedbackArray@@PEAUIDCompBatchAnimationCallback@@@Z @ 0x1804003C0 (-UpdateDropFeedback@CDropFeedback@@UEAAJPEAUIDropFeedbackArray@@PEAUIDCompBatchAnimationCallback.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800CA4C0 (_guard_dispatch_icall_nop.c)
 *     ?_FindItem@CDropFeedback@@AEAAJKPEAPEAUIDropFeedbackItem@@@Z @ 0x1804005C4 (-_FindItem@CDropFeedback@@AEAAJKPEAPEAUIDropFeedbackItem@@@Z.c)
 */

__int64 __fastcall CDropFeedback::_RegisterItem(
        CDropFeedback *this,
        struct IDropFeedbackItem *a2,
        struct IDCompBatchAnimationCallback *a3)
{
  int v6; // edi
  int v7; // eax

  v6 = -2147024809;
  v7 = (*(__int64 (__fastcall **)(struct IDropFeedbackItem *))(*(_QWORD *)a2 + 80LL))(a2);
  if ( (int)CDropFeedback::_FindItem(this, v7, 0LL) < 0 )
  {
    if ( *((_QWORD *)this + 18) )
    {
      if ( (*(unsigned int (__fastcall **)(struct IDropFeedbackItem *))(*(_QWORD *)a2 + 96LL))(a2) <= 3 )
      {
        v6 = (*(__int64 (__fastcall **)(struct IDropFeedbackItem *, _QWORD, _QWORD, _QWORD, char *))(*(_QWORD *)a2 + 152LL))(
               a2,
               *((_QWORD *)this + 18),
               *((_QWORD *)this + 20),
               *((_QWORD *)this + 8),
               (char *)this + 72);
        if ( v6 >= 0 )
        {
          v6 = (*(__int64 (__fastcall **)(struct IDropFeedbackItem *, struct IDCompBatchAnimationCallback *))(*(_QWORD *)a2 + 160LL))(
                 a2,
                 a3);
          if ( v6 >= 0 )
            return (unsigned int)(*(__int64 (__fastcall **)(_QWORD, struct IDropFeedbackItem *))(**((_QWORD **)this + 16)
                                                                                               + 40LL))(
                                   *((_QWORD *)this + 16),
                                   a2);
        }
      }
    }
  }
  return (unsigned int)v6;
}
