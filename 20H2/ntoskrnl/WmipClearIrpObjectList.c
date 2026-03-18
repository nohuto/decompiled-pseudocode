/*
 * XREFs of WmipClearIrpObjectList @ 0x14032FD7C
 * Callers:
 *     WmipCompleteGuidIrpWithError @ 0x14023FE94 (WmipCompleteGuidIrpWithError.c)
 *     WmipReceiveNotifications @ 0x14032A3E8 (WmipReceiveNotifications.c)
 *     WmipNotificationIrpCancel @ 0x14032FD10 (WmipNotificationIrpCancel.c)
 *     WmipWriteWnodeToObject @ 0x140370CD4 (WmipWriteWnodeToObject.c)
 * Callees:
 *     <none>
 */

void __fastcall WmipClearIrpObjectList(__int64 a1)
{
  _QWORD *v1; // rdx
  _QWORD *v2; // rcx
  _QWORD *v3; // rax
  _QWORD *v4; // r8
  __int64 v5; // r9
  _QWORD *v6; // rax

  v1 = (_QWORD *)(a1 + 120);
  v2 = *(_QWORD **)(a1 + 120);
  while ( v2 != v1 )
  {
    v3 = v2;
    v4 = v2;
    v2 = (_QWORD *)*v2;
    *(v3 - 1) = 0LL;
    v5 = *v3;
    if ( *(_QWORD **)(*v3 + 8LL) != v3 || (v6 = (_QWORD *)v3[1], (_QWORD *)*v6 != v4) )
      __fastfail(3u);
    *v6 = v5;
    *(_QWORD *)(v5 + 8) = v6;
  }
}
