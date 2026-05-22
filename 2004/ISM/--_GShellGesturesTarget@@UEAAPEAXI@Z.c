/*
 * XREFs of ??_GShellGesturesTarget@@UEAAPEAXI@Z @ 0x18017E730
 * Callers:
 *     <none>
 * Callees:
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x18003B2E8 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18003C6C0 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 */

ShellGesturesTarget *__fastcall ShellGesturesTarget::`scalar deleting destructor'(ShellGesturesTarget *this, char a2)
{
  std::_Ref_count_base *v4; // rcx

  v4 = (std::_Ref_count_base *)*((_QWORD *)this + 4);
  if ( v4 )
    std::_Ref_count_base::_Decref(v4);
  *((_DWORD *)this + 5) = -1073741823;
  if ( (a2 & 1) != 0 )
    operator delete(this, (const struct std::nothrow_t *)0x28);
  return this;
}
