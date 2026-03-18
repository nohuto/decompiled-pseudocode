/*
 * XREFs of ?SetForeground@CActivationObjectManager@@AEAAJ_NW4ACTIVATIONOBJECTSTATECHANGE_REASON@@PEAVCActivationObject@@@Z @ 0x1C0132D6C
 * Callers:
 *     ?NotifyActivationObjectStateOnCleanup@CActivationObjectManager@@AEAAJPEAVCActivationObject@@@Z @ 0x1C0017FA8 (-NotifyActivationObjectStateOnCleanup@CActivationObjectManager@@AEAAJPEAVCActivationObject@@@Z.c)
 *     ?SetState@CActivationObjectManager@@AEAAJPEAVCActivationObject@@W4ACTIVATIONOBJECTSTATECHANGE_REASON@@W4ACTIVATION_OBJECT_STATE@@2@Z @ 0x1C0132EE8 (-SetState@CActivationObjectManager@@AEAAJPEAVCActivationObject@@W4ACTIVATIONOBJECTSTATECHANGE_RE.c)
 * Callees:
 *     ?notifyISM@CActivationObject@@QEBAXW4ACTIVATIONOBJECTNOTIFICATION_ACTION@@W4ACTIVATIONOBJECTSTATECHANGE_REASON@@AEBU_LUID@@2AEBUACTIVATION_GROUP_ID@@@Z @ 0x1C001817C (-notifyISM@CActivationObject@@QEBAXW4ACTIVATIONOBJECTNOTIFICATION_ACTION@@W4ACTIVATIONOBJECTSTAT.c)
 *     ?GetActivationObjectFromLuid@CActivationObjectManager@@AEBAPEAVCActivationObject@@AEBU_LUID@@@Z @ 0x1C00188F4 (-GetActivationObjectFromLuid@CActivationObjectManager@@AEBAPEAVCActivationObject@@AEBU_LUID@@@Z.c)
 *     MarkQueuesForKeyStateUpdate @ 0x1C01B1810 (MarkQueuesForKeyStateUpdate.c)
 *     PostEvent @ 0x1C01B18E8 (PostEvent.c)
 */

__int64 __fastcall CActivationObjectManager::SetForeground(CActivationObjectManager *a1, char a2, int a3, __int64 a4)
{
  __int64 v8; // rdi
  int v9; // ecx
  char v10; // al
  __int64 *v11; // r14
  struct CActivationObject *ActivationObjectFromLuid; // rax
  __int64 v13; // rax
  __int64 v14; // rcx
  __int64 v15[5]; // [rsp+30h] [rbp-28h] BYREF
  struct _LUID v16; // [rsp+78h] [rbp+20h] BYREF

  if ( !a4 )
    return 3221225485LL;
  v8 = *(_QWORD *)(a4 + 24);
  if ( !v8 )
    return 3221226021LL;
  if ( a2 )
  {
    v9 = *(_DWORD *)(a4 + 80);
    v10 = v9 & 1;
    if ( a3 == 1 && (v9 & 2) != 0 )
      v10 = 0;
    if ( v10 )
    {
      v11 = (__int64 *)(a4 + 64);
      v16 = *(struct _LUID *)(v8 + 20);
      *(_QWORD *)(v8 + 20) = *(_QWORD *)(a4 + 64);
      ActivationObjectFromLuid = CActivationObjectManager::GetActivationObjectFromLuid(a1, &v16);
      if ( ActivationObjectFromLuid )
      {
        *((_DWORD *)ActivationObjectFromLuid + 20) &= ~4u;
        PostEvent(*((_QWORD *)ActivationObjectFromLuid + 11), 0, 6, 0, 0LL);
      }
      *(_DWORD *)(a4 + 80) |= 4u;
      if ( !a3 )
      {
        PostEvent(*(_QWORD *)(a4 + 88), 0, 6, 3, 0LL);
        PostEvent(*(_QWORD *)(a4 + 88), 0, 6, 1, 0LL);
      }
      CActivationObject::notifyISM(a4, 7, a3, (__int64 *)&v16, v11, (int *)(v8 + 16));
    }
  }
  else
  {
    v13 = *(_QWORD *)(v8 + 20);
    *(_QWORD *)(v8 + 20) = 0LL;
    *(_DWORD *)(a4 + 80) &= ~4u;
    v14 = *(_QWORD *)(a4 + 88);
    v15[0] = v13;
    v16 = 0LL;
    PostEvent(v14, 0, 6, 0, 0LL);
    CActivationObject::notifyISM(a4, 8, a3, v15, (__int64 *)&v16, (int *)(v8 + 16));
  }
  MarkQueuesForKeyStateUpdate(0LL, 0LL, 0LL);
  return 0LL;
}
