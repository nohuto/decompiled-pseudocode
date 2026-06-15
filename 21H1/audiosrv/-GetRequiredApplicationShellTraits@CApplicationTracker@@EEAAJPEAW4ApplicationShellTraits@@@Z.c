/*
 * XREFs of ?GetRequiredApplicationShellTraits@CApplicationTracker@@EEAAJPEAW4ApplicationShellTraits@@@Z @ 0x180054A00
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180074B80 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CApplicationTracker::GetRequiredApplicationShellTraits(
        CApplicationTracker *this,
        enum ApplicationShellTraits *a2)
{
  BOOL v3; // ecx
  __int64 result; // rax

  v3 = (*(unsigned __int8 (__fastcall **)(struct IAudioPolicyManager *))(*(_QWORD *)g_PolicyManager + 384LL))(g_PolicyManager) != 0;
  result = 0LL;
  *(_DWORD *)a2 = v3;
  return result;
}
