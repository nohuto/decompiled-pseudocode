/*
 * XREFs of _NtUserDestroyAcceleratorTable@4 @ 0xCC97E
 * Callers:
 *     <none>
 * Callees:
 *     @HMValidateHandle@8 @ 0x7531C (@HMValidateHandle@8.c)
 */

int __stdcall NtUserDestroyAcceleratorTable(int a1)
{
  int v1; // esi
  int v2; // eax
  int v3; // edi

  v1 = 0;
  EnterCrit(0, 1);
  v2 = HMValidateHandle(a1, 8);
  v3 = v2;
  if ( v2 )
  {
    if ( HMMarkObjectDestroy(v2) )
      HMFreeObject(v3);
    v1 = 1;
  }
  UserSessionSwitchLeaveCrit();
  return v1;
}
