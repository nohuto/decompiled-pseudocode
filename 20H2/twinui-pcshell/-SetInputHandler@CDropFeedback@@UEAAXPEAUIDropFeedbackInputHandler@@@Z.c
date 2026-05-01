/*
 * XREFs of ?SetInputHandler@CDropFeedback@@UEAAXPEAUIDropFeedbackInputHandler@@@Z @ 0x180423130
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800F0410 (_guard_dispatch_icall_nop.c)
 */

void __fastcall CDropFeedback::SetInputHandler(CDropFeedback *this, struct IDropFeedbackInputHandler *a2)
{
  struct IDropFeedbackInputHandler *v4; // rcx

  v4 = (struct IDropFeedbackInputHandler *)*((_QWORD *)this + 16);
  if ( v4 != a2 )
  {
    if ( a2 )
    {
      (*(void (__fastcall **)(struct IDropFeedbackInputHandler *))(*(_QWORD *)a2 + 8LL))(a2);
      v4 = (struct IDropFeedbackInputHandler *)*((_QWORD *)this + 16);
    }
    *((_QWORD *)this + 16) = a2;
    if ( v4 )
      (*(void (__fastcall **)(struct IDropFeedbackInputHandler *))(*(_QWORD *)v4 + 16LL))(v4);
  }
}
