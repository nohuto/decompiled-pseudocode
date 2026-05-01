/*
 * XREFs of ??_G?$_Ref_count_del_alloc@V__ExceptionPtr@@P6AXPEAV1@@ZU?$_DebugMallocator@H@@@std@@UEAAPEAXI@Z @ 0x180009360
 * Callers:
 *     <none>
 * Callees:
 *     j_j__o_free @ 0x1800447B8 (j_j__o_free.c)
 */

_QWORD *__fastcall std::_Ref_count_del_alloc<__ExceptionPtr,void (*)(__ExceptionPtr *),_DebugMallocator<int>>::`scalar deleting destructor'(
        _QWORD *a1,
        char a2)
{
  *a1 = &off_1800480E0;
  if ( (a2 & 1) != 0 )
    j_j__o_free(a1, 32LL);
  return a1;
}
