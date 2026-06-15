/*
 * XREFs of sub_180126A64 @ 0x180126A64
 * Callers:
 *     sub_180060F54 @ 0x180060F54 (sub_180060F54.c)
 *     sub_1801257AC @ 0x1801257AC (sub_1801257AC.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180074470 (_guard_dispatch_icall_nop.c)
 */

void sub_180126A64()
{
  unsigned int v0; // ecx
  __int64 i; // rbx
  void (__fastcall ***v2)(_QWORD, __int64); // r8

  EnterCriticalSection(&stru_18019F7B8);
  if ( !--dword_18019F7E0 )
  {
    v0 = dword_18019F770[0];
    for ( i = 0LL; (unsigned int)i < v0; i = (unsigned int)(i + 1) )
    {
      v2 = (void (__fastcall ***)(_QWORD, __int64))qword_18019F778[i];
      if ( v2 )
      {
        (**v2)(qword_18019F778[i], 1LL);
        v0 = dword_18019F770[0];
      }
    }
    dword_18019F770[0] = 0;
  }
  LeaveCriticalSection(&stru_18019F7B8);
}
