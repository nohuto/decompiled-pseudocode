/*
 * XREFs of UserDetachQueueFromInputWindow @ 0x1C010BA78
 * Callers:
 *     UserDetachQueueFromInputWindowApiExt @ 0x1C010BA60 (UserDetachQueueFromInputWindowApiExt.c)
 * Callees:
 *     ??$GetProp@VCInputQueueProp@@@CWindowProp@@SAHPEBUtagWND@@PEAPEAVCInputQueueProp@@@Z @ 0x1C0022594 (--$GetProp@VCInputQueueProp@@@CWindowProp@@SAHPEBUtagWND@@PEAPEAVCInputQueueProp@@@Z.c)
 *     ??0ReEnterLeaveCrit@@QEAA@XZ @ 0x1C0026584 (--0ReEnterLeaveCrit@@QEAA@XZ.c)
 *     IsWindowBeingDestroyed @ 0x1C0029300 (IsWindowBeingDestroyed.c)
 *     ?RemoveAndDeleteProp@CWindowProp@@QEAAXXZ @ 0x1C004EFEC (-RemoveAndDeleteProp@CWindowProp@@QEAAXXZ.c)
 *     HMValidateHandleNoSecure @ 0x1C007059C (HMValidateHandleNoSecure.c)
 *     ?DetachInputQueue@CInputQueueProp@@QEAAXPEAVIInputQueue@@@Z @ 0x1C010BB08 (-DetachInputQueue@CInputQueueProp@@QEAAXPEAVIInputQueue@@@Z.c)
 */

void __fastcall UserDetachQueueFromInputWindow(unsigned __int64 a1, struct IInputQueue *a2)
{
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // r8
  CWindowProp *v7; // rbx
  int v8; // [rsp+40h] [rbp+18h] BYREF
  CWindowProp *v9; // [rsp+48h] [rbp+20h] BYREF

  ReEnterLeaveCrit::ReEnterLeaveCrit((ReEnterLeaveCrit *)&v8);
  v5 = HMValidateHandleNoSecure(a1, 1);
  if ( v5 )
  {
    if ( !(unsigned int)IsWindowBeingDestroyed(v5) )
    {
      v9 = 0LL;
      if ( CWindowProp::GetProp<CInputQueueProp>(v5, (__int64 *)&v9) )
      {
        v7 = v9;
        CInputQueueProp::DetachInputQueue(v9, a2);
        if ( !*((_DWORD *)v7 + 6) )
          CWindowProp::RemoveAndDeleteProp(v7);
      }
    }
  }
  if ( !v8 )
    UserSessionSwitchLeaveCrit(v5, v4, v6);
}
