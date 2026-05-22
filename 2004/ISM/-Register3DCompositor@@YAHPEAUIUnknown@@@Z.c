/*
 * XREFs of ?Register3DCompositor@@YAHPEAUIUnknown@@@Z @ 0x180068990
 * Callers:
 *     <none>
 * Callees:
 *     ?GetInstanceOffInputThread@MPC3DStateHelper@@SAPEAV1@XZ @ 0x18006940C (-GetInstanceOffInputThread@MPC3DStateHelper@@SAPEAV1@XZ.c)
 *     ?Register3DCompositor@MPC3DStateHelper@@QEAAXPEAUIUnknown@@@Z @ 0x180069530 (-Register3DCompositor@MPC3DStateHelper@@QEAAXPEAUIUnknown@@@Z.c)
 */

__int64 __fastcall Register3DCompositor(struct IUnknown *a1)
{
  RTL_SRWLOCK *InstanceOffInputThread; // rax

  InstanceOffInputThread = (RTL_SRWLOCK *)MPC3DStateHelper::GetInstanceOffInputThread();
  MPC3DStateHelper::Register3DCompositor(InstanceOffInputThread, a1);
  return 1LL;
}
