/*
 * XREFs of LdrpHandleInvalidUserCallTarget @ 0x18008C5D0
 * Callers:
 *     LdrpValidateUserCallTarget @ 0x18008C690 (LdrpValidateUserCallTarget.c)
 *     LdrpValidateUserCallTargetES @ 0x18008C6E0 (LdrpValidateUserCallTargetES.c)
 *     LdrpDispatchUserCallTarget @ 0x18008C730 (LdrpDispatchUserCallTarget.c)
 *     LdrpDispatchUserCallTargetES @ 0x18008C780 (LdrpDispatchUserCallTargetES.c)
 * Callees:
 *     RtlpHandleInvalidUserCallTarget @ 0x1800FDAB0 (RtlpHandleInvalidUserCallTarget.c)
 */

void __fastcall LdrpHandleInvalidUserCallTarget()
{
  __int64 v0; // rax
  void (__fastcall *v1)(__int64, __int64, __int64, __int64); // rax
  __int64 v2; // rdx
  __int64 v3; // rcx
  __int64 v4; // r8
  __int64 v5; // r9
  __int64 v6; // [rsp+A8h] [rbp-10h]

  v1 = (void (__fastcall *)(__int64, __int64, __int64, __int64))RtlpHandleInvalidUserCallTarget(v0);
  if ( v6 )
    v1(v3, v2, v4, v5);
}
