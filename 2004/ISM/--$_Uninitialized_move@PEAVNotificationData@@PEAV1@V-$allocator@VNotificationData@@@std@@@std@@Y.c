/*
 * XREFs of ??$_Uninitialized_move@PEAVNotificationData@@PEAV1@V?$allocator@VNotificationData@@@std@@@std@@YAPEAVNotificationData@@QEAV1@0PEAV1@AEAV?$allocator@VNotificationData@@@0@@Z @ 0x180068714
 * Callers:
 *     ??$_Emplace_reallocate@VNotificationData@@@?$vector@VNotificationData@@V?$allocator@VNotificationData@@@std@@@std@@QEAAPEAVNotificationData@@QEAV2@$$QEAV2@@Z @ 0x180015190 (--$_Emplace_reallocate@VNotificationData@@@-$vector@VNotificationData@@V-$allocator@VNotificatio.c)
 * Callees:
 *     ??$_Destroy_range@V?$allocator@VNotificationData@@@std@@@std@@YAXPEAVNotificationData@@0AEAV?$allocator@VNotificationData@@@0@@Z @ 0x1800686C8 (--$_Destroy_range@V-$allocator@VNotificationData@@@std@@@std@@YAXPEAVNotificationData@@0AEAV-$al.c)
 */

char *__fastcall std::_Uninitialized_move<NotificationData *,NotificationData *,std::allocator<NotificationData>>(
        _QWORD *a1,
        _QWORD *a2,
        char *a3)
{
  _QWORD *v4; // r8
  char *v5; // r9

  if ( a1 != a2 )
  {
    v4 = a1 + 2;
    v5 = (char *)(a3 - (char *)a1);
    do
    {
      *(_DWORD *)a3 = *((_DWORD *)v4 - 4);
      a3 += 32;
      *(_QWORD *)((char *)v4 + (_QWORD)v5 - 8) = *(v4 - 1);
      *(_QWORD *)((char *)v4 + (_QWORD)v5) = *v4;
      *v4 = 0LL;
      *(_QWORD *)((char *)v4 + (_QWORD)v5 + 8) = v4[1];
      v4 += 4;
    }
    while ( v4 - 2 != a2 );
  }
  std::_Destroy_range<std::allocator<NotificationData>>((__int64)a3, (__int64)a3);
  return a3;
}
