/*
 * XREFs of NtUserDestroyAcceleratorTable @ 0x1C011CA20
 * Callers:
 *     <none>
 * Callees:
 *     HMValidateHandle @ 0x1C0067BB8 (HMValidateHandle.c)
 */

__int64 __fastcall NtUserDestroyAcceleratorTable(unsigned __int64 a1)
{
  __int64 v2; // rax
  __int64 v3; // rdx
  __int64 v4; // rcx
  __int64 v5; // r8
  __int64 v6; // rbx
  __int64 v7; // rdi

  EnterCrit(0LL, 1LL);
  v2 = HMValidateHandle(a1, 8u);
  v6 = 0LL;
  v7 = v2;
  if ( v2 )
  {
    if ( (unsigned int)HMMarkObjectDestroy(v2) )
      HMFreeObject(v7);
    v6 = 1LL;
  }
  UserSessionSwitchLeaveCrit(v4, v3, v5);
  return v6;
}
